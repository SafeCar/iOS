//
//  AppCoordinator.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit

class AppCoordinator: Coordinator {

    private let window: UIWindow
    
    func start() {
        self.showAuthentificate()
    }
    
    init(window: UIWindow) {
        self.window = window
    }
}

extension AppCoordinator: AuthCoordinatorDelegate {
    
    func showAuthentificate() {
        let authCoordinator = AuthCoordinator(window: self.window)
        authCoordinator.delegate = self
        authCoordinator.start()
    }
    
    func didSuccessAuth() {
        self.showFeatures()
    }
}

extension AppCoordinator {
    
    func showFeatures() {
        let featureCoordinator = FeatureCoordinator(window: self.window)
        featureCoordinator.start()
    }
}