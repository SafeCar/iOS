//
//  AuthViewModel.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import RxSwift

protocol AuthViewModelDelegate {
    func didSuccessAuthentificate()
}

class AuthViewModel: ViewModel, AuthViewModelProtocol {
    var delegate: AuthViewModelDelegate?
    private let disposeBag = DisposeBag()
    
    func auth(username: String, password: String) {
        CarEasyAPI.auth(username, password: password).subscribeNext { (response: [String : AnyObject]?) in
            guard let response = response else {
                return
            }
            print("response : \(response)")
            self.delegate?.didSuccessAuthentificate()
        }.addDisposableTo(self.disposeBag)
    }
}
