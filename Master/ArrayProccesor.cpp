#include "ArrayProccesor.h"
#include <stdexcept> // ��� ��������� ����������

ArrayProccesor::ArrayProccesor(int arr[], int arrSize) {
    if (arrSize <= 0) {
        throw std::runtime_error("������ ������� ������ ���� ������ 0.");
    }
    size = arrSize;
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = arr[i];
    }
}

ArrayProccesor::~ArrayProccesor() {
    delete[] data;
}

int ArrayProccesor::getMin() const {
    if (size == 0) {
        throw std::runtime_error("������ ����.");
    }
    int min = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

int ArrayProccesor::getMax() const {
    if (size == 0) {
        throw std::runtime_error("������ ����.");
    }
    int max = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

double ArrayProccesor::getArithmetic_mean() const {
    if (size == 0) {
        throw std::runtime_error("������ ����.");
    }
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}
