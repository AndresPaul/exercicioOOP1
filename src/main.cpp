#include <iostream>
using namespace std;
#include "rectangulo.h"

int main() {
  Rectangulo r1 = Rectangulo(30,20);
  Rectangulo r2(30,20);
  
  r1.area();
  r2.perimetro();
  
  system("pause");
  return 0;
}