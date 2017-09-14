//
//  MyMoviesTests.swift
//  TDDTests
//
//  Created by Bao Nguyen on 9/14/17.
//  Copyright © 2017 Bao Nguyen. All rights reserved.
//

import UIKit
import Quick
import Nimble

@testable import TDD

class MyMoviesTests: QuickSpec {
    override func spec() {
        var subject: MoviesTableViewController!

        describe("MoviesTableViewControllerSpec") {
            beforeEach {
                subject = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "MoviesTableViewController") as! MoviesTableViewController

                //_ = subject.view puts the view controller into the memory, it’s like calling viewDidLoad
                _ = subject.view
            }
            context("When view is loaded", closure: {
                it("Should have 8 movies loaded", closure: {
                    expect(subject.tableView.numberOfRows(inSection: 0)).to(equal(8))
                })
            })

            context("Table View", closure: {
                var cell: UITableViewCell!

                beforeEach {
                    cell = subject.tableView(subject.tableView, cellForRowAt: IndexPath(row: 0, section: 0))
                }
                it("should show title and genre", closure: {
                    expect(cell.textLabel?.text).to(equal("The Emoji Movie"))
                    expect(cell.detailTextLabel?.text).to(equal("Animation"))
                })
            })
        }

    }

}
