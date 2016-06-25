//
//  FeatureViewModelProtocol.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import RxSwift

protocol FeatureViewModelProtocol: class {
    var events: Variable<[EventCellViewModel]> {get set}
    var models: Variable<[FeatureCellViewModel]> {get}
    var delegate: FeatureViewModelDelegate? {get set}
    func fetchFeatures()
    func addFeature()
    func startScoket()
    func stopSocket()
    func removeFeature(atIndex: Int)
}
