#include "Vector3.h"

#include <iostream>
#include <iomanip>

Vector3 Vector3::operator+(const Vector3& other) const
{
    // Write implementation here
    Vector3 result(x, y, z);
    result.x += other.x;
    result.y += other.y;
    result.z += other.z;

    return result;
}

Vector3 Vector3::operator-(const Vector3& other) const
{
    // Write implementation here
    Vector3 result(x, y, z);
    result.x -= other.x;
    result.y -= other.y;
    result.z -= other.z;

    return result;
}

Vector3 Vector3::operator*(float scalar) const
{
    // Write implementation here
    Vector3 result(x, y, z);
    result.x *= scalar;
    result.y *= scalar;
    result.z *= scalar;

    return result;
}

float Vector3::dot(const Vector3& other) const
{
    // Write implementation here
    Vector3 result(x, y, z);
    return result.x * other.x + result.y * other.y + result.z * other.z;
}

// Formula: sqrt(v1^2 + v2^2 + ... + vn^2)
float Vector3::magnitude() const
{
    // Write implementation here
    Vector3 result(x, y, z);
    return sqrt(result.x * result.x + result.y * result.y + result.z * result.z);
}

float Vector3::magnitudSquared() const
{
    // Write implementation here
    Vector3 result(x, y, z);
    return result.x * result.x + result.y * result.y + result.z * result.z;
}

// Formula: v / |v|, where |v| is the magnitude
Vector3 Vector3::normalized() const
{
    // Write implementation here
    Vector3 result(x, y, z);
    result.x  = result.x / magnitude();
    result.y  = result.y / magnitude();
    result.z  = result.z / magnitude();
    return result;
}

// Specific to 3D vectors
// Formula: [v2*u3 - v3*u2, v3*u1 - v1*u3, v1*u2 - v2*u1]
Vector3 Vector3::cross(const Vector3& other) const
{
    // Write implementation here
    Vector3 result(x, y, z);
    result.x = result.y * other.z - result.z * other.y;
    result.y = result.z * other.x - result.x * other.z;
    result.z = result.x * other.y - result.y * other.x;
    return result;
}

std::ostream& operator<<(std::ostream& os, const Vector3& v) {
    os << std::fixed << std::setprecision(2) << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}