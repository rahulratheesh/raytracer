#include "geometry.h"
#include <cmath>
#include <iostream>
#include <cassert>
using namespace std;

Vector2D::Vector2D() {
    x = y = 0;
}

Vector2D::Vector2D(double a, double b) {
    x = a;
    x = b;
}

Vector2D::~Vector2D() {
}

double& Vector2D::operator[](int index) {
    assert(index == 0 || index == 1);
    if (index == 0) return x;
    else return y;
}

void Vector2D::print() {
    cout << "(" << x << ", " << y << ")";
}

void Vector2D::println() {
    cout << "(" << x << ", " << y << ")" << endl;
}

double Vector2D::length() {
    return sqrt(x * x + y * y);
}

Vector2D Vector2D::unit() {
    Vector2D u;
    double len = length();
    assert(len != 0);
    u[0] = x * 1 / len;
    u[1] = y * 1 / len;
    return u;
}

double Vector2D::dot(const Vector2D &v) const{
    return (x * v.x + y * v.y);
}

Vector2D Vector2D::operator + (const Vector2D &v) const{
    return Vector2D(x + v.x, y + v.y);
}

Vector2D Vector2D::operator - () const {
    return Vector2D(-x, -y);
}

Vector2D Vector2D::operator - (const Vector2D &v) const {
    return Vector2D(x - v.x, y - v.y);
}

Vector2D Vector2D::operator * (double scale) const {
    return Vector2D(scale * x, scale * y);
}

Vector2D Vector2D::operator * (const Vector2D &v) const {
    return Vector2D(x * v.x, y * v.y);
}

Vector2D Vector2D::operator / (double scale) const {
    return Vector2D(x / scale, y / scale);
}

Vector2D Vector2D::operator / (const Vector2D &v) const {
    return Vector2D(x / v.x, y / v.y);
}


Vector3D::Vector3D() {
    x = y = z = 0;
}

Vector3D::Vector3D(double a, double b, double c) {
    x = a;
    y = b;
    z = c;
}

Vector3D::~Vector3D() {
}

double& Vector3D::operator [] (int index) {
    assert(index == 0 || index == 1 || index == 2);
    if (index == 0) return x;
    else if (index == 1) return y;
    else return z;
}

void Vector3D::print() {
    cout << "(" << x << ", " << y << ", " << z << ")";
}

void Vector3D::println() {
     cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

double Vector3D::length() {
    return sqrt(x * x + y * y + z * z);
}

Vector3D Vector3D::unit() {
    Vector3D u;
    double len = length();
    assert(len != 0);
    u[0] = x * 1 / len;
    u[1] = y * 1 / len;
    u[2] = z * 1 / len;
    return u;
}

double Vector3D::dot(const Vector3D &v) const {
    return (x * v.x + y * v.y + z * v.z);
}

Vector3D Vector3D::cross(const Vector3D &v) const {
    return Vector3D(y * v.z - z * v.y,
                     z * v.x - x * v.z,
                     x * v.y - y * v.x);
}

Vector3D Vector3D::operator + (const Vector3D &v) const {
    return Vector3D(x + v.x, y + v.y, z + v.z);
}

Vector3D Vector3D::operator - () const {
    return Vector3D(-x, -y, -z);
}

Vector3D Vector3D::operator - (const Vector3D &v) const {
    return Vector3D(x - v.x, y - v.y, z - v.z);
}

Vector3D Vector3D::operator * (double scale) const {
    return Vector3D(scale * x, scale * y, scale * z);
}

Vector3D Vector3D::operator * (const Vector3D &v) const {
    return Vector3D(x * v.x, y * v.y, z * v.z);
}

Vector3D Vector3D::operator / (double scale) const{
    return Vector3D(x / scale, y / scale, z / scale);
}

Vector3D Vector3D::operator / (const Vector3D &v) const {
    return Vector3D(x / v.x, y / v.y, z / v.z);
}

Matrix4::Matrix4() {
    for (unsigned int i = 0; i < 4; i++) {
        for (unsigned int j = 0; j < 4; j++) {
            matrix4[i][j] = 0;
        }
    }
}

Matrix4::~Matrix4() {
}

Matrix4 Matrix4::operator * (const Matrix4 &right4) const {
    Matrix4 result4;
    for (unsigned int i = 0; i < 4; i++) {
        for (unsigned int j = 0; j < 4; j++) {
            result4.matrix4[i][j] = matrix4[i][0] * right4.matrix4[0][j] +
                                    matrix4[i][1] * right4.matrix4[1][j] +
                                    matrix4[i][2] * right4.matrix4[2][j] +
                                    matrix4[i][3] * right4.matrix4[3][j];
        }
    }
    return result4;
}


