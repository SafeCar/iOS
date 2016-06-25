//
//  UIViewController+Extensions.swift
//  App
//
//  Created by Remi Robert on 22/03/16.
//  Copyright © 2016 Remi Robert. All rights reserved.
//

import UIKit

enum StoryBoards: String {
    case Main = "Main"
    
    func storyboard() -> UIStoryboard {
        return UIStoryboard(name: self.rawValue, bundle: nil)
    }
}

extension NSObject {
    static var nameOfClass: String {
        return NSStringFromClass(self).componentsSeparatedByString(".").last!
    }
}

extension UIViewController {
    class func instanceController(storyboard: StoryBoards) -> UIViewController {
        return storyboard.storyboard().instantiateViewControllerWithIdentifier(self.nameOfClass)
    }
}
