//
//  CarEasyAPI.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import Alamofire
import RxAlamofire
import RxSwift

class CarEasyAPI {
    
    static var baseUrl: String {
        return "http://192.168.128.245:4567/"
    }
    
    private static func makeRequest(url: String) -> Observable<[String: AnyObject]?> {
        return Manager.sharedInstance.rx_JSON(.GET, url).flatMapFirst { (response: AnyObject) -> Observable<[String: AnyObject]?> in
            return Observable.just(response as? [String: AnyObject])
        }
    }
    
    static func auth(username: String, password: String) -> Observable<[String: AnyObject]?> {
        let url = "http://\(username):\(password)@192.168.128.245:4567/auth_test"
        return makeRequest(url)
    }
    
    static func permission() -> Observable<[String: AnyObject]?> {
        let url = "\(baseUrl)permission"
        return makeRequest(url)
    }
}
