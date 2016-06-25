//
//  AuthViewController.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit

class AuthViewController: UIViewController, UITextFieldDelegate {

    var viewmodel: AuthViewModelProtocol?
    
    @IBOutlet weak var usernameTF: UITextField!
    @IBOutlet weak var passwordTF: UITextField!
    @IBOutlet weak var authBtn: UIButton!
    
    @IBAction func auth(sender: AnyObject) {
        self.viewmodel?.auth()
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        usernameTF.delegate = self
        passwordTF.delegate = self
        
        self.view.backgroundColor = UIColor.orangeColor()
        authBtn.layer.cornerRadius = 6
        authBtn.backgroundColor = UIColor.blackColor()
    }
    
    @IBAction func authticate(sender: UIButton) {
        
    }
    
    func textFieldShouldReturn(textField: UITextField) -> Bool {
        textField.resignFirstResponder()
        return true
    }
}