//
//  FeatureViewModel.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import RxSwift
import RealmSwift
import Starscream

protocol FeatureViewModelDelegate {
    func showAddFeature()
}

class FeatureViewModel: FeatureViewModelProtocol {

    var models = Variable([FeatureCellViewModel]())
    var events = Variable([FeatureCellViewModel]())
    var delegate: FeatureViewModelDelegate?
    private let disposeBag = DisposeBag()
    private let socket = WebSocket(url: NSURL(string: "ws://192.168.128.245:4567/event")!)
    
    func addFeature() {
        self.delegate?.showAddFeature()
    }
    
    func fetchFeatures() {
        let realm = try! Realm()
        let filter = "selected = true"
        let results = Array(realm.objects(Feature).filter(filter))
        
        self.models.value = results.map({ feature -> FeatureCellViewModel in
            return FeatureCellViewModel(feature: feature)
        })
    }
    
    func permission() {
        CarEasyAPI.permission().subscribeNext { (response: [String : AnyObject]?) in
            guard let response = response else { return }
            print("response \(response)")
            }.addDisposableTo(self.disposeBag)
    }
    
    func removeFeature(atIndex: Int) {
        let feature = self.models.value[atIndex].feature
        let realm = try! Realm()
        try! realm.write({ 
            feature.selected = true
            self.fetchFeatures()
        })
    }
    
    func startScoket() {
        self.socket.delegate = self
        self.socket.connect()
    }
    
    func stopSocket() {
        self.socket.disconnect()
    }
}

extension FeatureViewModel: WebSocketDelegate {
    func websocketDidConnect(socket: WebSocket) {
        let parameters = [
            "driver_id": "remi",
            "secret_id": "yo",
            "filters": [
                ["name": "seatbelt", "range": [0, 1, 2, 3]],
                ["name": "inhibited", "range": ["airbag", "ESC"]],
                ["name": "location", "range": [41.8383355, -88.2616092]],
                ["name": "speed", "limit": 120],
                ["name": "crash"]
            ]
        ]
        
        let data = try! NSJSONSerialization.dataWithJSONObject(parameters, options: NSJSONWritingOptions.PrettyPrinted)
        let jsonString = NSString(data: data, encoding: NSUTF8StringEncoding)! as String
        socket.writeString(jsonString)
    }
    
    func websocketDidDisconnect(socket: WebSocket, error: NSError?) {
        print("web socket disconnected: \(error)")
    }
    
    func websocketDidReceiveMessage(socket: WebSocket, text: String) {
        print("web socket get message : \(text)")
    }
    
    func websocketDidReceiveData(socket: WebSocket, data: NSData) {
        print("web socket get data : \(data)")
    }
}
