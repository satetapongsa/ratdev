#include "Sorting.h"
#include <cstdlib>
#include <ctime>

Sorting::Sorting(int n) {
    size = n;
    data = new ArrayList(size);
    clone = new ArrayList(size);
}

Sorting::~Sorting() {
    delete data;
    delete clone;
}

// 1. Generate Data
void Sorting::generateData() {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        data->set(i, rand() % 100);
    }
    cout << "Generate data completed.\n";
}

// 2. Clone Data
void Sorting::cloneData() {
    for (int i = 0; i < size; i++) {
        clone->set(i, data->get(i));
    }
    cout << "Clone data completed.\n";
}

// 9. Display
void Sorting::display() {
    for (int i = 0; i < size; i++) {
        cout << clone->get(i) << " ";
    }
    cout << endl;
}

// 3. Bubble Sort
void Sorting::bubbleSort() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (clone->get(j) > clone->get(j + 1)) {
                clone->swap(j, j + 1);
            }
        }
    }
}

// 4. Selection Sort
void Sorting::selectionSort() {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (clone->get(j) < clone->get(min)) {
                min = j;
            }
        }
        clone->swap(i, min);
    }
}

// 5. Insertion Sort
void Sorting::insertionSort() {
    for (int i = 1; i < size; i++) {
        int key = clone->get(i);
        int j = i - 1;
        while (j >= 0 && clone->get(j) > key) {
            clone->set(j + 1, clone->get(j));
            j--;
        }
        clone->set(j + 1, key);
    }
}

// 6. Shell Sort
void Sorting::shellSort() {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            int temp = clone->get(i);
            int j;
            for (j = i; j >= gap && clone->get(j - gap) > temp; j -= gap) {
                clone->set(j, clone->get(j - gap));
            }
            clone->set(j, temp);
        }
    }
}

// 7. Merge Sort
void Sorting::mergeSort() {
    mergeSortRec(0, size - 1);
}

void Sorting::mergeSortRec(int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSortRec(l, m);
        mergeSortRec(m + 1, r);
        merge(l, m, r);
    }
}

void Sorting::merge(int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = clone->get(l + i);
    for (int j = 0; j < n2; j++)
        R[j] = clone->get(m + 1 + j);

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            clone->set(k++, L[i++]);
        else
            clone->set(k++, R[j++]);
    }

    while (i < n1)
        clone->set(k++, L[i++]);

    while (j < n2)
        clone->set(k++, R[j++]);
}

// 8. Quick Sort
void Sorting::quickSort() {
    quickSortRec(0, size - 1);
}

void Sorting::quickSortRec(int low, int high) {
    if (low < high) {
        int pi = partition(low, high);
        quickSortRec(low, pi - 1);
        quickSortRec(pi + 1, high);
    }
}

int Sorting::partition(int low, int high) {
    int pivot = clone->get(high);
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (clone->get(j) < pivot) {
            i++;
            clone->swap(i, j);
        }
    }
    clone->swap(i + 1, high);
    return i + 1;
}
