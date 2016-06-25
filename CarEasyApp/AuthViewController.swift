//
//  AuthViewController.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit

class AuthViewController: UIViewController {

    var viewmodel: AuthViewModelProtocol?
    
    @IBAction func auth(sender: AnyObject) {
        self.viewmodel?.auth()
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.view.backgroundColor = UIColor.orangeColor()
    }
}
