//
//  chess_piece.h
//  Chess
//
//  Created by Miroslav Mironov on 7/2/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __Chess__chess_piece__
#define __Chess__chess_piece__

#include <vector>
#include "chess_position.h"
using namespace std;

class ChessPiece {
    ChessPosition position;
    
    bool contains(vector<ChessPosition> positions, ChessPosition position)
    {
        for(int i=0; i<positions.size(); ++i)
        {
            ChessPosition pos = positions[i];
            if (pos.x == position.x && pos.y == position.y)
            {
                return true;
            }
        }
        
        return false;
    }
public:
    ChessPiece(ChessPosition pos)
    {
        if (pos.isValid())
        {
            position = pos;
        }
        else
        {
            position.x = 'A';
            position.y = 1;
        }
    }
    
    ChessPosition getPosition() const
    {
        return position;
    }
    
    virtual vector<ChessPosition> allowedMoves() = 0;
    
    virtual bool captures(ChessPosition pos)
    {
        vector<ChessPosition> moves = allowedMoves();
        
        return contains(moves, pos);
    }
};

#endif /* defined(__Chess__chess_piece__) */
