
#include "vector.h"

//Constructor (Done)
UTEC::MyVector::MyVector():data{nullptr},nelem{0} {
}
UTEC::MyVector::MyVector(int n):nelem{n} {
    data=new int[nelem];
}

//Destructor (Done)
UTEC::MyVector::~MyVector(){
    delete [] data;
}

//Función para devolver el tamaño del vector (Done)
int UTEC::MyVector::size() {
    return nelem;
}
//Insertar un item en el vector (Done)
void UTEC::MyVector::push_back(int n) {
    //Crear temporal
    int* temp;
    //insertar vector anterior al nuevo temp
    temp=new int [nelem+1];

    for (int i=0; i<nelem; ++i){
        temp[i]=data[i];
    }
    //borrar el vec. anterior
    delete [] data;
    //Ponerlo en la memoria actual
    data=temp;

    data[nelem]=n;

    nelem++;

}
//Inserta un elemento en una posición (Done)
void UTEC::MyVector::insert(int &pos, int item) {
//Crear temporal
    int* temp;
    //insertar vector anterior al nuevo temp
    temp=new int [nelem+1];
    for(int i = 0; i<nelem;i++) {
        if(i <pos) {
        temp[i]=data[i];
        }else if (i==pos){
            temp[i]=item;
        }else if(i>pos){
            temp[i+1]=data[i];
        };
    };
    //borrar el vec. anterior
    delete [] data;
    //Ponerlo en la memoria actual
    data=temp;
    nelem++;
}

//Borrar un item del vector (Done)
void UTEC::MyVector::pop_back() {
    //Crear temporal
    int* temp;
    //insertar vector anterior al nuevo temp
    temp=new int [nelem-1];
    for (int i=0; i<nelem-1; ++i){
        temp[i]=data[i];
    }
    //borrar el vec. anterior
    delete [] data;
    //Ponerlo en la memoria actual
    data=temp;
    nelem--;

}
//operator [] (Done)
int UTEC::MyVector::operator[](int &pos) {
    return data[pos];
};
//Elimina un elemento de una posición determinada (Done)
void UTEC::MyVector::erase(int &pos) {
    //Crear temporal
    int* temp;
    //insertar vector anterior al nuevo temp
    temp=new int [nelem-1];
    //Todos los datos antes de la posicion especificada se copian iguales
    for(int i = 0; i < pos; ++i)
        temp[i]=data[i];
    //Todos los datos después de la posición especificada se copian una posición antes de la suya inicial
    for(int j = pos+1; j < nelem; ++j)
        temp[j-1]=data[j];
    }
    //borrar el vec. anterior
    delete [] data;
    //Ponerlo en la memoria actual
    data=temp;
    nelem--;
}
//Operator + (Done)
UTEC::MyVector UTEC::MyVector::operator+(const UTEC::MyVector &vec) {
    
}

