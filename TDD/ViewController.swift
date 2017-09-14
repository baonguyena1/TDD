//
//  ViewController.swift
//  TDD
//
//  Created by Bao Nguyen on 9/14/17.
//  Copyright © 2017 Bao Nguyen. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    func calculateAreaOfSquare(w: Int, h: Int) -> Double {
        if w > 0 && h > 0 {
            return (Double)(w * h)
        }

        return 0
    }

}

