//
//  MoviesDataHelper.swift
//  TDD
//
//  Created by Bao Nguyen on 9/14/17.
//  Copyright © 2017 Bao Nguyen. All rights reserved.
//

import Foundation

class MoviesDataHelper {
    static func getMovies() -> [Movie] {
        return [
            Movie(title: "The Emoji Movie", genre: .Animation),
            Movie(title: "Logan", genre: .Action),
            Movie(title: "Wonder Woman", genre: .Action),
            Movie(title: "Zootopia", genre: .Animation),
            Movie(title: "The Baby Boss", genre: .Animation),
            Movie(title: "Despicable Me 3", genre: .Animation),
            Movie(title: "Spiderman: Homecoming", genre: .Action),
            Movie(title: "Dunkirk", genre: .Animation)
        ]
    }
}
