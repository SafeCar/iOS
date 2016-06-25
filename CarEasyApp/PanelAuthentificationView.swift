//
//  PanelAuthentificationView.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import SnapKit

class PanelAuthentificationView: UIView {

    @IBOutlet weak var label: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.backgroundColor = UIColor.blackColor()
        
        self.label.adjustsFontSizeToFitWidth = true
        self.label.textColor = UIColor.whiteColor()
    }
}
