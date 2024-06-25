//point2d.h
#pragma once
#include <iostream>

template<typename T>
class Point2D {
    public:
        Point2D(T x, T y);
        void print();
    private:
        T x;
        T y;
};

template<typename T>
Point2D<T>::Point2D(T x, T y) : x{x}, y{y}
{}

template<typename T>
void Point2D<T>::print() {
    std::cout << "(" << x << "/" << y << ")";
}