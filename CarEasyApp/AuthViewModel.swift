//
//  AuthViewModel.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit

protocol AuthViewModelDelegate {
    func didSuccessAuthentificate()
}

class AuthViewModel: ViewModel, AuthViewModelProtocol {
    var delegate: AuthViewModelDelegate?
    
    func auth() {
        self.delegate?.didSuccessAuthentificate()
    }
}
