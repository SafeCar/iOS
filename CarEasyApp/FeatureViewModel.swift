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

class FeatureViewModel: FeatureViewModelProtocol {

    var models = Variable([FeatureCellViewModel]())
    private let disposeBag = DisposeBag()
    
    func addFeature() {
        let newFeature = Feature()
        newFeature.name = "feature"

        let realm = try! Realm()
        
        try! realm.write {
            realm.add(newFeature)
            self.fetchFeatures()
        }
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
}
