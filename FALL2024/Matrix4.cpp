#include "Matrix4.h"

Matrix4::Matrix4()
{
	// Write implementation here
}

void Matrix4::updateElement(int row, int col, float value)
{
	// Write implementation here
}

float Matrix4::getElement(int row, int col) const
{
    // Write implementation here
}

Matrix4 Matrix4::operator*(const Matrix4& other)
{
    Matrix4 result;
    // Write implementation here
	

    return result;
}

Vector3 Matrix4::operator*(const Vector3& vec) const
{
	float x,y,z;
    // Write implementation here

    return Vector3(x, y, z);
}

Matrix4 Matrix4::translation(float tx, float ty, float tz)
{
    Matrix4 result;
    // Write implementation here
	
    return result;
}

Matrix4 Matrix4::scale(float sx, float sy, float sz)
{
    Matrix4 result;
    // Write implementation here
	
    return result;
}

Matrix4 Matrix4::rotationX(float angle)
{
    Matrix4 result;
    // Write implementation here
	
    return result;
}

Matrix4 Matrix4::rotationY(float angle)
{
    Matrix4 result;
    // Write implementation here
	
    return result;
}

Matrix4 Matrix4::rotationZ(float angle)
{
    Matrix4 result;
    // Write implementation here
	
    return result;
}