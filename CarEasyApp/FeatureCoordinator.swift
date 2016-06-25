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
        controller.viewmodel = FeatureViewModel()
        controller.viewmodel?.delegate = self
        
        let navigationController = UIStoryboard(name: "Main", bundle: nil).instantiateViewControllerWithIdentifier("navigationController") as! UINavigationController
        
        navigationController.viewControllers = [controller]
        
        self.window.rootViewController = navigationController
    }
    
    init(window: UIWindow) {
        self.window = window
    }
}

extension FeatureCoordinator: FeatureViewModelDelegate {
    
    func showAddFeature() {
        let controller = UIStoryboard(name: "Main", bundle: nil).instantiateViewControllerWithIdentifier("addNavigationController") as! UINavigationController
        
        let addFeatureController = controller.viewControllers.first as! AddFeatureViewController
        addFeatureController.viewmodel = AddFeatureViewModel()
        addFeatureController.viewmodel?.delegate = self
        
        self.window.rootViewController?.presentViewController(controller, animated: true, completion: nil)
    }
}

extension FeatureCoordinator: AddFeatureViewModelDelegate {

    func dismissAddFeature() {
        self.window.rootViewController?.dismissViewControllerAnimated(true, completion: nil)
    }
}