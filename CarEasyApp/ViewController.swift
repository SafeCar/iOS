//
//  ViewController.swift
//  CarEasyApp
//
//  Created by 王笛 on 16/6/24.
//  Copyright © 2016年 王笛iOS.Inc. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()

        CarManager.getValue(CARSIGNALS_SPEED_CRUISE_CONTROL_MEM_1, success: { (value) in
            print("value : \(value)")
            }) { (error) in
                print("error : \(error)")
        }
    }
}
