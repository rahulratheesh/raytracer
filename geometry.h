#ifndef _geometry_h
#define _geometry_h

class Vector2D {

    public:

        Vector2D();
        Vector2D(double x, double y);
        ~Vector2D();

        double& operator[](int index);
        void print();
        void println();
        double length();

        double dot(Vector2D p);
        Vector2D unit();
        Vector2D negate();
        Vector2D operator-();
        Vector2D scale(double value);
        Vector2D operator*(double scale);
        Vector2D operator/(double scale);
        Vector2D add(Vector2D p);
        Vector2D operator+(Vector2D p);
        Vector2D subtract(Vector2D p);
        Vector2D operator-(Vector2D p);
        Vector2D mult(Vector2D p);

    private:

        double x, y;

};

class Point3D {
};

class Matrix {
};

class Ray {
};


#endif // _geometry_h
