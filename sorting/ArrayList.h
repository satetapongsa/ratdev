#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList {
private:
    int *data;
    int size;

public:
    ArrayList(int n);
    ~ArrayList();

    void set(int index, int value);
    int get(int index) const;
    int getSize() const;
    void swap(int i, int j);
};

#endif
