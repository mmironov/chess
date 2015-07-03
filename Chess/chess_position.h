//
//  chess_position.h
//  Chess
//
//  Created by Miroslav Mironov on 7/2/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __Chess__chess_position__
#define __Chess__chess_position__

#include <stdio.h>

struct ChessPosition {
    char x;
    int y;
    
    bool isValid()
    {
        return ('A' <= x && x <= 'H') && (1 <= y && y <= 8);
    }
};

#endif /* defined(__Chess__chess_position__) */
