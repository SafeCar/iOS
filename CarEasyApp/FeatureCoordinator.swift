//
//  FeatureCoordinator.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit

class FeatureCoordinator: Coordinator {
    
    private let window: UIWindow

    func start() {
        let controller = FeaturesViewController.instanceController(.Main) as! FeaturesViewController
        self.window.rootViewController = controller
    }
    
    init(window: UIWindow) {
        self.window = window
    }
}
