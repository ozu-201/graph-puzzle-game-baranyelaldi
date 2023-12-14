//
// Created by by028711 on 12/14/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include "../Array/Graph/Graph.h"

using namespace std;

int main(){

    string myLine;
    ifstream myFile("C:\\Users\\TEMP.OZUN.000\\CLionProjects\\graph-puzzle-game-baranyelaldi\\dictionary.txt", ifstream::in);

    while(getline(myFile, myLine)){
        if(myLine.length() == 3){

        }else if(myLine.length() == 4){

        }else if(myLine.length() == 5){

        }
    }

    myFile.close();


    return 0;
}
