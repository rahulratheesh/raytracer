#ifndef _group_h
#define _group_h

class Group: class Shape  {

    public:

        Group(FILE *fp);
        Group(Matrix localTransform);
        ~Group();

        void addShape(Shape* shape);
        string name();
        void write(int indent, FILE* fp = stdout);
        double intersect(Ray ray, IntersectionInfo &info);
        BoundingBox getBoundingBox();

    private:
        Matrix localTransform;
        ShapeListElement* shapeList;
        BoundingBox bBox;

};

class ShapeListElement {

    public:

        ShapeListElement(Shape* shape);
        ~ShapeListElement();

        void addShape(Shape* shape);

    private:
        ShapeListElement* next;
        Shape* shape;
};

#endif // _group_h
