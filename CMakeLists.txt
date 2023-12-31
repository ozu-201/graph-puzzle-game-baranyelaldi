cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_baranyelaldi)

set(CMAKE_CXX_STANDARD 14)

include_directories(Array)
include_directories(Array/Graph)
include_directories(Array/Heap)
include_directories(Array/Sort)
include_directories(General)
include_directories(List)
include_directories(List/Graph)

add_executable(graph_puzzle_game_baranyelaldi
        Array/Graph/Graph.cpp
        Array/Graph/Graph.h
        Array/Heap/DHeap.cpp
        Array/Heap/DHeap.h
        Array/Heap/Heap.cpp
        Array/Heap/Heap.h
        Array/Heap/HeapNode.cpp
        Array/Heap/HeapNode.h
        Array/Heap/MaxDHeap.cpp
        Array/Heap/MaxDHeap.h
        Array/Heap/MaxHeap.cpp
        Array/Heap/MaxHeap.h
        Array/Heap/MinDHeap.cpp
        Array/Heap/MinDHeap.h
        Array/Heap/MinHeap.cpp
        Array/Heap/MinHeap.h
        Array/Sort/BubbleSort.cpp
        Array/Sort/BubbleSort.h
        Array/Sort/BucketSort.cpp
        Array/Sort/BucketSort.h
        Array/Sort/HeapSort.cpp
        Array/Sort/HeapSort.h
        Array/Sort/InsertionSort.cpp
        Array/Sort/InsertionSort.h
        Array/Sort/MergeSort.cpp
        Array/Sort/MergeSort.h
        Array/Sort/QuickSort.cpp
        Array/Sort/QuickSort.h
        Array/Sort/SelectionSort.cpp
        Array/Sort/SelectionSort.h
        Array/Sort/ShellSort.cpp
        Array/Sort/ShellSort.h
        Array/Sort/Sort.h
        Array/DisjointSet.cpp
        Array/DisjointSet.h
        Array/Element.cpp
        Array/Element.h
        Array/Hash.cpp
        Array/Hash.h
        Array/Queue.cpp
        Array/Queue.h
        Array/Set.cpp
        Array/Set.h
        Array/Stack.cpp
        Array/Stack.h
        General/AbstractGraph.cpp
        General/AbstractGraph.h
        General/Path.cpp
        General/Path.h
        List/Graph/Edge.cpp
        List/Graph/Edge.h
        List/Graph/EdgeList.cpp
        List/Graph/EdgeList.h
        List/Graph/Graph.cpp
        List/Graph/Graph.h
        List/DoublyLinkedList.cpp
        List/DoublyLinkedList.h
        List/DoublyNode.cpp
        List/DoublyNode.h
        List/Hash.cpp
        List/Hash.h
        List/LinkedList.cpp
        List/LinkedList.h
        List/Node.cpp
        List/Node.h
        List/Queue.cpp
        List/Queue.h
        List/Stack.cpp
        List/Stack.h
        main.cpp)
