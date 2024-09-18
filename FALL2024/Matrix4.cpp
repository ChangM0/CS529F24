#include "Matrix4.h"

Matrix4::Matrix4()
{
	// Write implementation here
    {
        Matrix4 result;
        
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                result.data[i][j] = 0;
            }
        }
    }
}

void Matrix4::updateElement(int row, int col, float value)
{
	// Write implementation here
    Matrix4 result;
    result.data[row][col] = value;
}

float Matrix4::getElement(int row, int col) const
{
    // Write implementation here
    Matrix4 result;
    return result.data[row][col];
}

Matrix4 Matrix4::operator*(const Matrix4& other)
{
    Matrix4 result;
    // Write implementation here
    float sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                sum += result.data[i][k] * other.data[k][j];
            }
            result.data[i][j] = sum;
            sum = 0;
        }
    }
        
    return result;
}

Vector3 Matrix4::operator*(const Vector3& vec) const
{
	float x=0,y=0,z=0;
    // Write implementation here
    Matrix4 result;
    x = result.data[0][0] * vec.x + result.data[0][1] * vec.y + result.data[0][2] * vec.z;
    y = result.data[1][0] * vec.x + result.data[1][1] * vec.y + result.data[1][2] * vec.z;
    z = result.data[2][0] * vec.x + result.data[2][1] * vec.y + result.data[2][2] * vec.z;
    return Vector3(x, y, z);
}

Matrix4 Matrix4::translation(float tx, float ty, float tz)
{
    Matrix4 result;
    // Write implementation here
    result.data[0][3] = tx;
    result.data[1][3] = ty;
    result.data[2][3] = tz;
    return result;
}

Matrix4 Matrix4::scale(float sx, float sy, float sz)
{
    Matrix4 result;
    // Write implementation here
    result.data[0][0] = sx;
    result.data[1][1] = sy;
    result.data[2][2] = sz;
    return result;
}

Matrix4 Matrix4::rotationX(float angle)
{
    Matrix4 result;
    // Write implementation here
    result.data[1][1] = cosf(angle);
    result.data[1][2] = -sinf(angle);
    result.data[2][1] = sinf(angle);
    result.data[2][2] = cosf(angle);
    return result;
}

Matrix4 Matrix4::rotationY(float angle)
{
    Matrix4 result;
    // Write implementation here
    result.data[0][0] = cosf(angle);
    result.data[0][2] = sinf(angle);
    result.data[2][0] = -sinf(angle);
    result.data[2][2] = cosf(angle);
    return result;
}

Matrix4 Matrix4::rotationZ(float angle)
{
    Matrix4 result;
    // Write implementation here
    result.data[0][0] = cosf(angle);
    result.data[0][1] = -sinf(angle);
    result.data[1][0] = sinf(angle);
    result.data[1][1] = cosf(angle);
    return result;
}