//
// Created by by028711 on 12/21/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include "../Array/Graph/Graph.h"

#ifndef GRAPH_PUZZLE_GAME_BARANYELALDI_PUZZLEGAME_H
#define GRAPH_PUZZLE_GAME_BARANYELALDI_PUZZLEGAME_H

class PuzzleGame {
private:
public:
    explicit PuzzleGame(int size, std::string fromStr, std::string toStr);
    ~PuzzleGame();
};

#endif //GRAPH_PUZZLE_GAME_BARANYELALDI_PUZZLEGAME_H
