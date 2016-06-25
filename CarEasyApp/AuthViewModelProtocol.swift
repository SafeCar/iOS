//
//  AuthViewModelProtocol.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit

protocol AuthViewModelProtocol: class {
    var delegate: AuthViewModelDelegate? {get set}
    func auth()
}