#include<iostream>
using namespace std;

class Rectangulo{
 private :
  int largo;
  int ancho;
  
 public:
  Rectangulo(int,int);
  void area();
  void perimetro(); 
};

Rectangulo::Rectangulo(int _largo,int _ancho){
 largo = _largo;
 ancho = _ancho;
}

void Rectangulo::area(){
 cout<<"el area es :"<<largo*ancho<<endl;
}

void Rectangulo::perimetro(){
 cout<<"el perimetro es "<<(largo+ancho)*2<<endl;
}