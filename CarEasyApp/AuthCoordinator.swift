//
//  AuthCoordinator.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit

protocol AuthCoordinatorDelegate {
    func didSuccessAuth()
}

class AuthCoordinator: Coordinator {
    
    var delegate: AuthCoordinatorDelegate?
    private let window: UIWindow
    
    func start() {
        let controller = AuthViewController.instanceController(.Main) as! AuthViewController
        controller.viewmodel = AuthViewModel()
        controller.viewmodel?.delegate = self
        self.window.rootViewController = controller
    }
    
    init(window: UIWindow) {
        self.window = window
    }
}

extension AuthCoordinator: AuthViewModelDelegate {

    func didSuccessAuthentificate() {
        self.delegate?.didSuccessAuth()
    }
}
