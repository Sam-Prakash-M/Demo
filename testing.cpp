#include <iostream>

class Sam{

Sam() {

  std :: cout << "Constructor Called" << std :: endl;
}
};
int main() {

  Sam* sam = new Sam;
return 0;

}
