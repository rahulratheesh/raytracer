#include "geometry.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;

Vector2D::Vector2D() {
    x = 0;
    y = 0;
}

Vector2D::Vector2D(double a, double b) {
    x = a;
    x = b;
}

Vector2D::~Vector2D() {
}

double& Vector2D::operator[](int index) {
    if (index == 0) return x;
    else if (index == 1) return y;
    else {
        cerr << "Index out of bounds" << endl;
        exit(1);
    }
}

void Vector2D::print() {
    cout << "(" << x << ", " << y << ")";
}

void Vector2D::println() {
    cout << "(" << x << ", " << y << ")" << endl;
}

double Vector2D::length() {
}

double Vector2D::dot(Vector2D p) {
}

Vector2D Vector2D::unit() {
}

Vector2D Vector2D::negate() {
}

Vector2D Vector2D::operator-() {
}

Vector2D Vector2D::scale(double value) {
}

Vector2D Vector2D::operator*(double scale) {
}

Vector2D Vector2D::operator/(double scale) {
}

Vector2D Vector2D::add(Vector2D p) {
}

Vector2D Vector2D::operator+(Vector2D p) {
}

Vector2D Vector2D::subtract(Vector2D p) {
}

Vector2D Vector2D::operator-(Vector2D p) {
}

Vector2D Vector2D::mult(Vector2D p) {
}
