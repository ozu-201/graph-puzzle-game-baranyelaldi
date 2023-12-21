//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_GRAPH_H
#define DATASTRUCTURES_CPP_GRAPH_H

#include <string>
#include "../../General/AbstractGraph.h"
#include "../../List/Graph/Edge.h"

namespace array{
    class Graph : public AbstractGraph{
    private:
        int** edges;
        std::string* names;
    public:
        explicit Graph(int vertexCount);

        Graph();

        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);
        void addName(int index, std::string name);
        void connectedComponentDisjointSet();
        Path* bellmanFord(int source);
        Path* dijkstra(int source);
        int** floydWarshall();
        void prim();
        std::string* viewNames();
        int** viewEdges();
    protected:
        void depthFirstSearch(bool* visited, int fromNode) override;
        void breadthFirstSearch(bool* visited, int startNode) override;
        Edge* edgeList(int& edgeCount) override;
    };

}


#endif //DATASTRUCTURES_CPP_GRAPH_H
