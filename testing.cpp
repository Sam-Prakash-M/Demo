#include <iostream>

class Sam{
public :

void print() {
  std :: cout << "Print Method Called...\n" << std :: endl;
}
Sam() {

  std :: cout << "Constructor Called" << std :: endl;
  print();
}

};
int main() {

  Sam* sam = new Sam;
return 0;

}
