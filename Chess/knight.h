//
//  knight.h
//  Chess
//
//  Created by Miroslav Mironov on 7/2/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __Chess__knight__
#define __Chess__knight__

#include <stdio.h>
#include "chess_position.h"
#include "chess_piece.h"
#include <vector>

class Knight : public ChessPiece {
public:
    Knight(ChessPosition pos) : ChessPiece(pos)
    {
        
    }
    
    vector<ChessPosition> allowedMoves()
    {
        char x = getPosition().x;
        int y = getPosition().y;
        
        vector<ChessPosition> moves;
        
        for(char i=-2; i <=2; ++i)
        {
            for(int j=-2; j <=2; ++j)
            {
                if (i==j || i == 0 || j == 0)
                {
                    continue;
                }
                
                ChessPosition pos;
                pos.x = x + i;
                pos.y = y + j;
                
                if (pos.isValid())
                {
                    moves.push_back(pos);
                }
            }
        }
        
        return moves;
    }
};

#endif /* defined(__Chess__knight__) */
