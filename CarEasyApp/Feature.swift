//
//  Feature.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import RealmSwift

class Feature: Object {
    dynamic var name: String = ""
    dynamic var selected: Bool = false
    dynamic var permission: Permission?
    
    static func instance(name: String, permission: Permission) -> Feature {
        let feature = Feature()
        feature.name = name
        feature.permission = permission
        return feature
    }
}
