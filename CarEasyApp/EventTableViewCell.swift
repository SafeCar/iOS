//
//  EventTableViewCell.swift
//  CarEasyApp
//
//  Created by Remi Robert on 26/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import Hakuba

class EventCellViewModel: CellModel {
    
    var event: Event
    
    init(event: Event) {
        self.event = event
        super.init(cell: EventTableViewCell.self, height: 44, selectionHandler: nil)
    }
}

class EventTableViewCell: Cell, CellType {

    typealias CellModel = EventCellViewModel
    
    override func awakeFromNib() {
        super.awakeFromNib()
    }
    
    override func configure() {
        guard let cellmodel = self.cellmodel else {
            return
        }
        let event = cellmodel.event
        self.textLabel?.text = event.message
    }
}
