//
//  AuthViewController.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import SnapKit

class AuthViewController: UIViewController, UITextFieldDelegate {

    var viewmodel: AuthViewModelProtocol?
    lazy var headerView: PanelAuthentificationView! = {
        let nib = UINib(nibName: "PanelAuthentificationView", bundle: nil)
        return nib.instantiateWithOwner(self, options: nil).first as! PanelAuthentificationView
    }()
    
    @IBOutlet weak var usernameTF: UITextField!
    @IBOutlet weak var passwordTF: UITextField!
    @IBOutlet weak var authBtn: UIButton!
    
    @IBAction func auth(sender: AnyObject) {
        self.headerView.snp_remakeConstraints { (make) in
            make.height.equalTo(100)
            make.width.equalToSuperview()
            make.centerX.equalToSuperview()
            make.top.equalToSuperview()
        }

        self.view.setNeedsLayout()
        
        UIView.animateWithDuration(1, delay: 0, usingSpringWithDamping: 0.6, initialSpringVelocity: 6, options: UIViewAnimationOptions.CurveEaseInOut, animations: {
            self.view.layoutIfNeeded()
            }, completion: nil)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        usernameTF.delegate = self
        passwordTF.delegate = self
        
        self.view.backgroundColor = UIColor.orangeColor()
        authBtn.layer.cornerRadius = 6
        authBtn.backgroundColor = UIColor.blackColor()
        
        self.view.addSubview(self.headerView)
        self.headerView.snp_makeConstraints { (make) in
            make.height.equalTo(CGRectGetHeight(UIScreen.mainScreen().bounds) - 100)
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