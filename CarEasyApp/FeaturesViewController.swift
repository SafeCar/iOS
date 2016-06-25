//
//  FeaturesViewController.swift
//  CarEasyApp
//
//  Created by Remi Robert on 25/06/16.
//  Copyright © 2016 王笛iOS.Inc. All rights reserved.
//

import UIKit
import Hakuba
import RxSwift

class FeaturesViewController: UIViewController {
    
    private var hakuba: Hakuba!
    private let disposeBag = DisposeBag()
    var viewmodel: FeatureViewModelProtocol?
    
    @IBOutlet weak var tableview: UITableView!
    
    @IBAction func addFeature(sender: AnyObject) {
        self.viewmodel?.addFeature()
    }
    
    override func viewWillAppear(animated: Bool) {
        self.viewmodel?.fetchFeatures()
        self.viewmodel?.startScoket()
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.view.backgroundColor = UIColor.greenColor()
        
        self.title = "Umbra rota"
        self.tableview.tableFooterView = UIView()
        
        self.hakuba = Hakuba(tableView: self.tableview)
        self.hakuba.registerCellByNib(FeatureTableViewCell)
        self.hakuba.append(Section())
        
        self.viewmodel?.models.asObservable().subscribeNext({ models in
            self.hakuba[0].reset()
            self.hakuba[0].append(models)
            self.tableview.reloadData()
        }).addDisposableTo(self.disposeBag)        
    }
}
