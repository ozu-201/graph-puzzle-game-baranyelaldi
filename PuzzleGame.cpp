//
// Created by by028711 on 12/21/2023.
//

#include "PuzzleGame.h"
#include <iostream>
#include <fstream>
#include <string>
#include "../Array/Graph/Graph.h"

using namespace std;

PuzzleGame::PuzzleGame(int size, std::string fromStr, std::string toStr) {
    int count = 0;

    string myLine;
    ifstream myFile("C:\\Users\\TEMP.OZUN.000\\CLionProjects\\graph-puzzle-game-baranyelaldi\\dictionary.txt", ifstream::in);

    while(getline(myFile, myLine)){
        if(myLine.length() == size){
            count++;
        }
    }

    myFile.close();

    array::Graph graph(count);

    int i1 = 0;

    ifstream myFile2("C:\\Users\\TEMP.OZUN.000\\CLionProjects\\graph-puzzle-game-baranyelaldi\\dictionary.txt", ifstream::in);

    while(getline(myFile2, myLine)){
        if(myLine.length() == 3){
            graph.addName(i1, myLine);
            i1++;
        }
    }

    myFile2.close();

    int diff = 0;
    for(int i = 0; i < count; i++){
        for(int j = i; j < count ; j++){
            diff = 0;
            for(int k = 0; k < 3; k++){
                if(graph.viewNames()[i][k] != graph.viewNames()[j][k]){
                    diff++;
                }
            }
            if(diff == 1){
                graph.addEdge(i, j);
                graph.addEdge(j, i);
            }
        }
    }

    cout << graph.viewEdges()[1][2];
}

PuzzleGame::~PuzzleGame() {

}
