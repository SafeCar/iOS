//
//  Permission.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import RealmSwift

class Permission: Object {
    dynamic var name: String = ""
    dynamic var id: Int = 0
    
    static func instance(name: String, id: Int) -> Permission {
        let permission = Permission()
        permission.name = name
        permission.id = id
        return permission
    }
}
