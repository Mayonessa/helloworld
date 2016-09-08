#ifndef UTILITY_H
#define UTILITY_H

class Element{};
class Heap{};

Heap initialize(int n);
void buildHeap(Heap H, Element x);
void insert (Heap H, int k);
int deleteMax (Heap H);
void increaseKey (Heap H, Element x, int value);
void printHeap (Heap H);
void heapify(Element *arr, int i);



#endif