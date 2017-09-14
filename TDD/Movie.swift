//
//  MyMovies.swift
//  TDD
//
//  Created by Bao Nguyen on 9/14/17.
//  Copyright © 2017 Bao Nguyen. All rights reserved.
//

import Foundation

enum Genre: Int, CustomStringConvertible {
    case Animation
    case Action
    case None

    var description: String {
        switch self {
        case .Animation:
            return "Animation"
        case .Action:
            return "Action"
        case .None:
            return "None"
        }
    }

}

struct Movie {
    var title: String
    var genre: Genre
}
