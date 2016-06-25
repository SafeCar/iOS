//
//  AuthViewController.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import SnapKit
import TextFieldEffects

class AuthViewController: UIViewController, UITextFieldDelegate {

    private var isPresented = false
    var viewmodel: AuthViewModelProtocol?
    lazy var headerView: PanelAuthentificationView! = {
        let nib = UINib(nibName: "PanelAuthentificationView", bundle: nil)
        return nib.instantiateWithOwner(self, options: nil).first as! PanelAuthentificationView
    }()
    
    @IBOutlet weak var usernameTF: HoshiTextField!
    @IBOutlet weak var passwordTF: HoshiTextField!
    @IBOutlet weak var authBtn: UIButton!
    
    @IBAction func auth(sender: AnyObject) {
        if self.isPresented {
            guard let username = self.usernameTF.text,
                let password = self.passwordTF.text else {
                return
            }
            self.viewmodel?.auth(username, password: password)
            return
        }
        
        self.headerView.snp_remakeConstraints { (make) in
            make.height.equalTo(100)
            make.width.equalToSuperview()
            make.centerX.equalToSuperview()
            make.top.equalToSuperview()
        }

        self.view.setNeedsLayout()
        
        UIView.animateWithDuration(1, delay: 0, usingSpringWithDamping: 0.6, initialSpringVelocity: 6, options: .CurveEaseInOut, animations: { 
            
            }) { (_) in
                self.authBtn.setTitle("Authentificate", forState: .Normal)
                self.isPresented = true
        }
        
        UIView.animateWithDuration(1, delay: 0, usingSpringWithDamping: 0.6, initialSpringVelocity: 6, options: UIViewAnimationOptions.CurveEaseInOut, animations: {
            self.view.layoutIfNeeded()
            }, completion: nil)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        usernameTF.delegate = self
        passwordTF.delegate = self
        
        self.authBtn.setTitle("Start", forState: .Normal)
        
        self.view.backgroundColor = UIColor(red:0.96, green:0.96, blue:0.96, alpha:1.00)
        authBtn.layer.cornerRadius = 10
        
        self.view.addSubview(self.headerView)
        self.headerView.snp_makeConstraints { (make) in
            make.height.equalTo(CGRectGetHeight(UIScreen.mainScreen().bounds) - 80)
            make.width.equalToSuperview()
            make.centerX.equalToSuperview()
            make.top.equalToSuperview()
        }
    }
    
    func textFieldShouldReturn(textField: UITextField) -> Bool {
        textField.resignFirstResponder()
        return true
    }
}