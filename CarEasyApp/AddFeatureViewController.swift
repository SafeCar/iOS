//
//  AddFeatureViewController.swift
//  CarEasyApp
//
//  Created by Remi Robert on 26/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import Hakuba
import RxSwift

class AddFeatureViewController: UIViewController {

    var viewmodel: AddFeatureViewModelProtocol?
    private var hakuba: Hakuba!
    private let disposeBag = DisposeBag()
    private var selectionHandler: SelectionHandler!
    
    @IBOutlet weak var tableview: UITableView!
    
    @IBAction func dismiis(sender: AnyObject) {
        self.viewmodel?.dismiss()
    }
    
    override func viewWillAppear(animated: Bool) {
        self.viewmodel?.getFeatures()
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.tableview.tableFooterView = UIView()
        self.hakuba = Hakuba(tableView: self.tableview)

        self.hakuba.registerCellByNib(FeatureTableViewCell)
        self.hakuba.append(Section())
        
        self.selectionHandler = { cell in
            guard let cellmodel = (cell as? FeatureTableViewCell)?.cellmodel else {
                return
            }
            let feature = cellmodel.feature
            self.viewmodel?.addFeature(feature)
        }
        
        self.viewmodel?.features.asObservable().subscribeNext({ models in
            for model in models {
                model.selectionHandler = self.selectionHandler
            }
            self.hakuba[0].reset()
            self.hakuba[0].append(models)
            self.tableview.reloadData()
        }).addDisposableTo(self.disposeBag)
    }
}
