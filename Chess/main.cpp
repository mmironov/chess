//
//  main.cpp
//  Chess
//
//  Created by Miroslav Mironov on 7/2/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#include <iostream>
#include "rook.h"
#include "chess_piece.h"
#include "chess_position.h"
#include <vector>

bool isStable(vector<ChessPiece> board)
{
    return false;
}

void allMoves(vector<ChessPiece> board)
{
    for(vector<ChessPiece>::iterator it=board.begin();
        it != board.end(); ++it)
    {
        vector<ChessPosition> moves = it->allowedMoves();
        //Check with isStable and print
    }
}

int main(int argc, const char * argv[]) {
    
    ChessPosition pos;
    pos.x = 'A';
    pos.y = 1;
    Rook rook(pos);
    
    std::cout << "Hello, World!\n";
    return 0;
}
