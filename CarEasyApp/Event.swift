//
//  Event.swift
//  CarEasyApp
//
//  Created by Remi Robert on 26/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit

class Event {
    var message: String?
    var date: NSDate?
    
    init(message: String) {
        self.message = message
        self.date = NSDate()
    }
}
