
namespace UTEC {

#ifndef INC_08_VECTOR_H
#define INC_08_VECTOR_H

#endif //INC_08_VECTOR_H

    class MyVector {
        int *data;
        int nelem;
    public:
        MyVector();

        MyVector(int);

        virtual ~MyVector();

        int size();

        void push_back(int);

        void insert(int, int);

        void pop_back();

        void erase(int);

        int operator[](int);
    };
}
