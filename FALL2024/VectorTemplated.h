#include <array>
#include <cmath>
#include <stdexcept>

template <typename T, size_t N>
class VectorTemplated {
private:
    std::array<T, N> data;

public:
    VectorTemplated() : data{} {}
    explicit VectorTemplated(const std::array<T, N>& values) : data(values) {}

    T& operator[](size_t index) { return data[index]; }
    const T& operator[](size_t index) const { return data[index]; }

    // Formula: [v1 + u1, v2 + u2, ..., vn + un]
    VectorTemplated operator+(const VectorTemplated& other) const {
        VectorTemplated result;
        // Write implementation here
		
        return result;
    }

    // Formula: [v1 - u1, v2 - u2, ..., vn - un]
    VectorTemplated operator-(const VectorTemplated& other) const {
        VectorTemplated result;
        // Write implementation here
		
        return result;
    }

    // Formula: [v1 * s, v2 * s, ..., vn * s]
    VectorTemplated operator*(T scalar) const {
        VectorTemplated result;
        // Write implementation here
		
        return result;
    }

    // Formula: v1*u1 + v2*u2 + ... + vn*un
    T dot(const VectorTemplated& other) const {
        T result = 0;
        // Write implementation here
		
        return result;
    }

    T magnitudeSquared() const {
        // Write implementation here
    }

    // Formula: sqrt(v1^2 + v2^2 + ... + vn^2)
    T magnitude() const {
        // Write implementation here
    }

    // Formula: v / |v|, where |v| is the magnitude
    VectorTemplated normalized() const {
       // Write implementation here
    }

    // Specific to 3D vectors
    // Formula: [v2*u3 - v3*u2, v3*u1 - v1*u3, v1*u2 - v2*u1]
    VectorTemplated cross(const VectorTemplated& other) const {
        // Write implementation here
    }
};