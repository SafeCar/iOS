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
    private var appCoordinator: AppCoordinator!

    func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
        CarManager.setTokenBasePath("1-2")
        
        self.window = UIWindow()
        self.appCoordinator = AppCoordinator(window: self.window!)
        self.appCoordinator.start()
        self.window?.makeKeyAndVisible()
        return true
    }
}
