//
//  AppDelegate.swift
//  CarEasyApp
//
//  Created by 王笛 on 16/6/24.
//  Copyright © 2016年 王笛iOS.Inc. All rights reserved.
//

import UIKit
import RealmSwift

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?
    private var appCoordinator: AppCoordinator!

    func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
        CarManager.setTokenBasePath("1-2")
        
        self.initFeatureGallery()
        
        self.window = UIWindow()
        self.appCoordinator = AppCoordinator(window: self.window!)
        self.appCoordinator.start()
        self.window?.makeKeyAndVisible()
        return true
    }
}

extension AppDelegate {
    private func initFeatureGallery() {
        if NSUserDefaults.standardUserDefaults().boolForKey("firstLaunch") {
            return
        }
        
        let realm = try! Realm()
        
        let permissionLocalisation = Permission.instance("Location", id: 0)
        let permissionSecurity = Permission.instance("Security", id: 1)
        
        try! realm.write({
            realm.add(Feature.instance("Speed", permission: permissionSecurity))
            realm.add(Feature.instance("Inhibited Airbags", permission: permissionSecurity))
            realm.add(Feature.instance("Location", permission: permissionLocalisation))
            realm.add(Feature.instance("SeatBelt", permission: permissionSecurity))
        })
        NSUserDefaults.standardUserDefaults().setBool(true, forKey: "firstLaunch")
    }
}
