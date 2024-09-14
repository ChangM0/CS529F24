#include "Vector3.h"

#include <iostream>
#include <iomanip>

Vector3 Vector3::operator+(const Vector3& other) const
{
    // Write implementation here
}

Vector3 Vector3::operator-(const Vector3& other) const
{
    // Write implementation here
}

Vector3 Vector3::operator*(float scalar) const
{
    // Write implementation here
}

float Vector3::dot(const Vector3& other) const
{
    // Write implementation here
}

float Vector3::magnitude() const
{
    // Write implementation here
}

float Vector3::magnitudSquared() const
{
    // Write implementation here
}

Vector3 Vector3::normalized() const
{
    // Write implementation here
}

Vector3 Vector3::cross(const Vector3& other) const
{
    // Write implementation here
}

std::ostream& operator<<(std::ostream& os, const Vector3& v) {
    os << std::fixed << std::setprecision(2) << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}