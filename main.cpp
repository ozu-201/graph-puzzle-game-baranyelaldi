//
// Created by by028711 on 12/14/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include "../List/Graph/Graph.h"

using namespace std;

int main(){
    list::Graph graph3(4);
    graph3.addWord("cat");
    graph3.addWord("cot");
    graph3.addWord("cog");
    graph3.addWord("dog");
    graph3.addEdge("cat", "cot");
    graph3.addEdge("cot", "cog");
    graph3.addEdge("cog", "dog");

    std::cout << "Test Case: Adding Edges with One-Letter Difference (3 letter words)\n";
    std::cout << "Shortest Path from 'cat' to 'dog' (BFS):\n";
    graph3.BFS("cat", "dog");
    std::cout << "Shortest Path from 'cat' to 'dog' (Dijkstra):\n";
    graph3.Dijkstra("cat", "dog");
    std::cout << "------------------------------------------\n";

    // Test Case: Adding Edges with One-Letter Difference (4 letter words)
    list::Graph graph4(3);
    graph4.addWord("dark");
    graph4.addWord("bark");
    graph4.addWord("barn");
    graph4.addEdge("dark", "bark");
    graph4.addEdge("bark", "barn");

    std::cout << "Test Case: Adding Edges with One-Letter Difference (4 letter words)\n";
    std::cout << "Shortest Path from 'dark' to 'barn' (BFS):\n";
    graph4.BFS("dark", "barn");
    std::cout << "Shortest Path from 'dark' to 'barn' (Dijkstra):\n";
    graph4.Dijkstra("dark", "barn");
    std::cout << "------------------------------------------\n";

    // Test Case: Adding Edges with One-Letter Difference (5 letter words)
    list::Graph graph5(3);
    graph5.addWord("stone");
    graph5.addWord("store");
    graph5.addWord("score");
    graph5.addEdge("stone", "store");
    graph5.addEdge("store", "score");

    std::cout << "Test Case: Adding Edges with One-Letter Difference (5 letter words)\n";
    std::cout << "Shortest Path from 'stone' to 'score' (BFS):\n";
    graph5.BFS("stone", "score");
    std::cout << "Shortest Path from 'stone' to 'score' (Dijkstra):\n";
    graph5.Dijkstra("stone", "score");
    std::cout << "------------------------------------------\n";

    list::Graph g3 = list::Graph::initializePuzzleGame(3);
    g3.BFS("aah", "aba");
    std::cout << std::endl;

    list::Graph g4 = list::Graph::initializePuzzleGame(4);
    g4.BFS("zinc", "zill");
    std::cout << std::endl;

    list::Graph g5 = list::Graph::initializePuzzleGame(5);
    g5.BFS("adage", "abate");
    std::cout << std::endl;
    return 0;
}
