//
//  AddFeatureViewModel.swift
//  CarEasyApp
//
//  Created by Remi Robert on 26/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import RealmSwift
import RxSwift

protocol AddFeatureViewModelDelegate {
    func dismissAddFeature()
}

class AddFeatureViewModel: AddFeatureViewModelProtocol {
    var features = Variable([FeatureCellViewModel]())
    var delegate: AddFeatureViewModelDelegate?
    
    func dismiss() {
        self.delegate?.dismissAddFeature()
    }
    
    func getFeatures() {
        let realm = try! Realm()
        
        let filter = "selected = false"
        let results = Array(realm.objects(Feature).filter(filter))
        
        self.features.value = results.map({ feature -> FeatureCellViewModel in
            return FeatureCellViewModel(feature: feature)
        })
    }
    
    func addFeature(feature: Feature) {
        let realm = try! Realm()
        try! realm.write {
            feature.selected = true
            self.getFeatures()
        }
    }
}
