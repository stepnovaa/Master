#pragma once

class ArrayProccesor {
private:
    int* data;
    int size;
public:
    ArrayProccesor(int arr[], int arrSize);
    ~ArrayProccesor();

    int getMin() const;
    int getMax() const;
    double getArithmetic_mean() const;
};
