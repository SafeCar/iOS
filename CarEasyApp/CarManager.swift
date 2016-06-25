//
//  CarManager.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit

typealias SuccessBlock = ((value: [NSObject : AnyObject]?) -> Void)
typealias ErrorBlock = ((error: NSError?) -> Void)

class CarManager {
    private var car: CEACoreCar
    static var shareInstance = CarManager()
    
    static func getValue(key: String, success: SuccessBlock, error: ErrorBlock?) {
        self.shareInstance.car.getValue(key, success: success, failure: error)
    }
    
    static func getValues(keys: [String], success: SuccessBlock, error: ErrorBlock?) {
        self.shareInstance.car.getValues(keys, success: success, failure: error)
    }
    
    static func setValue(value: [NSObject : AnyObject], success: SuccessBlock, error: ErrorBlock?) {
        self.shareInstance.car.setValue(value, success: success, failure: error)
    }
    
    static func setValues(value: [NSObject : AnyObject], success: SuccessBlock, error: ErrorBlock?) {
        self.shareInstance.car.setValues(value, success: success, failure: error)
    }
    
    static func setTokenBasePath(tokenBaseUrlPath: String) {
        self.shareInstance.car.setTokenBasePath(tokenBaseUrlPath)
    }
    
    init() {
        self.car = CEACoreCar()
    }
}
