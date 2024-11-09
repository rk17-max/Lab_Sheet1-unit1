
#include <iostream>
#include <vector>

class StaticArray {
private:
    int* array;
    int size;
    int index;

public:
    StaticArray(int _size) : size(_size), index(0) {
        array = new int[size];
    }

    ~StaticArray() {
        delete[] array;
    }

    void insert(int value) {
        if (index < size) {
            array[index] = value;
            index++;
        } else {
            std::cout << "Array is full." << std::endl;
        }
    }

    void deleteValue(int pos) {
        if (pos >= 0 && pos < index) {
            for (int i = pos; i < index - 1; i++) {
                array[i] = array[i + 1];
            }
            index--;
        } else {
            std::cout << "Index out of range." << std::endl;
        }
    }

    void traverse() {
        for (int i = 0; i < index; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};
