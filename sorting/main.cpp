#include <iostream>
#include "Sorting/Sorting.h"
#include "Sorting/ArrayList.h"

using namespace std;

int main() {
    int choice;
    Sorting sort(20);

    do {
        cout << "***** Menu *****\n";
        cout << "1. Generate Data\n";
        cout << "2. Clone Data\n";
        cout << "3. Bubble sort\n";
        cout << "4. Selection sort\n";
        cout << "5. Insertion sort\n";
        cout << "6. Shell sort\n";
        cout << "7. Merge sort\n";
        cout << "8. Quick sort\n";
        cout << "9. Display\n";
        cout << "0. Exit\n";
        cout << "Select choice [0-9] : ";
        cin >> choice;

        switch (choice) {
        case 1: sort.generateData(); break;
        case 2: sort.cloneData(); break;
        case 3: sort.bubbleSort(); break;
        case 4: sort.selectionSort(); break;
        case 5: sort.insertionSort(); break;
        case 6: sort.shellSort(); break;
        case 7: sort.mergeSort(); break;
        case 8: sort.quickSort(); break;
        case 9: sort.display(); break;
        }
    } while (choice != 0);

    return 0;
}
