#ifndef _shape_h
#define _shape_h

class Shape {

    public:

        Shape();
        ~Shape();

        virtual string name() = 0;
        virtual void write(int indent, FILE* fp = stdout);
        virtual double intersect(Ray ray, IntersectionInfo &info);
        virtual BoundingBox getBoundingBox();

    private:

        Material* material;
        struct IntersectionInfo {

        };

};

#endif // _shape_h
