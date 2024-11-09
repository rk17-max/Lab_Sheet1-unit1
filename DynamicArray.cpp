#include <iostream>
#include <vector>

class DynamicArray {
private:
    int* array;
    int size;
    int capacity;

public:
    DynamicArray(int initial_size = 1) : size(initial_size), capacity(initial_size), index(0) {
        array = new int[capacity];
    }

    ~DynamicArray() {
        delete[] array;
    }

    void insert(int value) {
        if (index == capacity) {
            resize();
        }
        array[index] = value;
        index++;
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

private:
    void resize() {
        capacity *= 2;
        int* new_array = new int[capacity];
        for (int i = 0; i < index; i++) {
            new_array[i] = array[i];
        }
        delete[] array;
        array = new_array;
    }

    int index;
};
