#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include "ArrayList.h"

using namespace std;

class Sorting {
private:
    ArrayList *data;
    ArrayList *clone;
    int size;

    // Merge sort helper
    void merge(int l, int m, int r);
    void mergeSortRec(int l, int r);

    // Quick sort helper
    int partition(int low, int high);
    void quickSortRec(int low, int high);

public:
    Sorting(int n);
    ~Sorting();

    void generateData();
    void cloneData();
    void display();

    void bubbleSort();
    void selectionSort();
    void insertionSort();
    void shellSort();
    void mergeSort();
    void quickSort();
};

#endif
