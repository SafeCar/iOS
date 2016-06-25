//
//  FeatureTableViewCell.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import Hakuba

class FeatureCellViewModel: CellModel {
    
    var feature: Feature
    
    init(feature: Feature) {
        self.feature = feature
        super.init(cell: FeatureTableViewCell.self, height: 44, selectionHandler: nil)
    }
}

class FeatureTableViewCell: Cell, CellType {

    typealias CellModel = FeatureCellViewModel
    
    override func awakeFromNib() {
        super.awakeFromNib()
    }
    
    override func configure() {
        guard let cellmodel = self.cellmodel else {
            return
        }
        let feature = cellmodel.feature
        self.textLabel?.text = feature.name
    }
}
