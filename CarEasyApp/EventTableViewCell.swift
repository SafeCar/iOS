//
//  EventTableViewCell.swift
//  CarEasyApp
//
//  Created by Remi Robert on 26/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import Hakuba
import SwiftMoment

class EventCellViewModel: CellModel {
    
    var event: Event
    
    init(event: Event) {
        self.event = event
        super.init(cell: EventTableViewCell.self, height: 100, selectionHandler: nil)

        self.dynamicHeightEnabled = true
    }
}

class EventTableViewCell: Cell, CellType {

    typealias CellModel = EventCellViewModel
    
    @IBOutlet weak var labelDate: UILabel!
    @IBOutlet weak var labelMessage: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
    }
    
    override func configure() {
        guard let cellmodel = self.cellmodel else {
            return
        }
        let event = cellmodel.event
        self.labelMessage.text = event.message
        let m = moment(event.date)
        self.labelDate.text = m.format("yyyy'-'MM'-'dd'T'HH':'mm'")
    }
}
