//
//  AddFeatureProtocol.swift
//  CarEasyApp
//
//  Created by Remi Robert on 26/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import RxSwift

protocol AddFeatureViewModelProtocol: class {
    var features: Variable<[FeatureCellViewModel]> {get set}
    var delegate: AddFeatureViewModelDelegate? {get set}
    func dismiss()
    func getFeatures()
    func addFeature(feature: Feature)
}
