//
//  ViewController.swift
//  CarEasyApp
//
//  Created by 王笛 on 16/6/24.
//  Copyright © 2016年 王笛iOS.Inc. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    var car: CEACoreCar = CEACoreCar()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //*************************构建CEACoreCar*****************************
        car.setTokenBasePath("1-2")
        car.getValue(CARSIGNALS_SPEED_CRUISE_CONTROL_MEM_1, success: { (dict: [NSObject : AnyObject]!) in
            NSLog("%@", dict)
        }) { (error: NSError!) in
            NSLog("error")
        }
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    //*************************构建CEACoreCar*****************************
    
    
}
