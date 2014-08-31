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
        Vector2D unit();

        double dot(const Vector2D &v) const;

        Vector2D operator + (const Vector2D &v) const;
        Vector2D operator - () const;
        Vector2D operator - (const Vector2D &v) const;
        Vector2D operator * (double scale) const;
        Vector2D operator * (const Vector2D &v) const;
        Vector2D operator / (double scale) const;
        Vector2D operator / (const Vector2D &v) const;

    private:

        double x, y;

};

class Vector3D {

    public:

        Vector3D();
        Vector3D(double x, double y, double z);
        ~Vector3D();

        double& operator[](int index);
        void print();
        void println();
        double length();
        Vector3D unit();

        double dot(const Vector3D &v) const;
        Vector3D cross(const Vector3D &v) const;

        Vector3D operator + (const Vector3D &v) const;
        Vector3D operator - () const;
        Vector3D operator - (const Vector3D &v) const;
        Vector3D operator * (double scale) const;
        Vector3D operator * (const Vector3D &v) const;
        Vector3D operator / (double scale) const;
        Vector3D operator / (const Vector3D &v) const;

    private:

        double x, y, z;
};

class Matrix4 {

    public:

        Matrix4();
        ~Matrix4();

        Matrix4 operator * (const Matrix4 &right) const;

    private:

        double matrix4[4][4];
};

class Ray {
};


#endif // _geometry_h
