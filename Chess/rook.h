//
//  rook.h
//  Chess
//
//  Created by Miroslav Mironov on 7/2/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __Chess__rook__
#define __Chess__rook__

#include "chess_piece.h"

class Rook : public ChessPiece {
public:
    Rook(ChessPosition position) : ChessPiece(position)
    {
        
    }
    
    vector<ChessPosition> allowedMoves()
    {
        char x = getPosition().x;
        int y = getPosition().y;
        
        vector<ChessPosition> moves;
        
        for(char i='A'; i <= 'H'; ++i)
        {
            ChessPosition pos;
            pos.x = i;
            pos.y = y;
            
            moves.push_back(pos);
        }
        
        for(int i=1; i <= 8; ++i)
        {
            ChessPosition pos;
            pos.x = x;
            pos.y = i;
            
            moves.push_back(pos);
        }
        
        return moves;
    }
};

#endif /* defined(__Chess__rook__) */
