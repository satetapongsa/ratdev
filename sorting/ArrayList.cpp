#include "ArrayList.h"

ArrayList::ArrayList(int n) {
    size = n;
    data = new int[size];
}

ArrayList::~ArrayList() {
    delete[] data;
}

void ArrayList::set(int index, int value) {
    data[index] = value;
}

int ArrayList::get(int index) const {
    return data[index];
}

int ArrayList::getSize() const {
    return size;
}

void ArrayList::swap(int i, int j) {
    int temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}
