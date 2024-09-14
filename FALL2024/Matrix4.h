#pragma once

#include <cmath>
#include <array>
#include <stdexcept>

#include "Vector3.h"

class Matrix4 {
private:
    float data[4][4];

public:
    Matrix4();

    // Multiplication: * Operator Overloads
    Matrix4 operator*(const Matrix4& other);
    Vector3 operator*(const Vector3& vec) const;

    // Matrix-specific functions
    void updateElement(int row, int col, float value);
    float getElement(int row, int col) const;

    // Transformation utilities based on matrix
    // For practicity, I added these in the Matrix API,
    // however, these might be better candidates for a Transform class (think about it)
    // ... That's your homework!
    static Matrix4 translation(float tx, float ty, float tz);
    static Matrix4 scale(float sx, float sy, float sz);
    static Matrix4 rotationX(float angle);
    static Matrix4 rotationY(float angle);
    static Matrix4 rotationZ(float angle);
    // I encourage to implement the Euler Angles formula: Removes the gimball lock problem
};