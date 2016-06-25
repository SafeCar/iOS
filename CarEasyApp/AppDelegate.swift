//
//  AppDelegate.swift
//  CarEasyApp
//
//  Created by 王笛 on 16/6/24.
//  Copyright © 2016年 王笛iOS.Inc. All rights reserved.
//

import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
        CarManager.setTokenBasePath("1-2")
        return true
    }
}
