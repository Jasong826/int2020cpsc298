#include "class_demo.h"

int main()  {
  Person *p = new Person();
  Person *p2 = new Person("rene", 37, "blue");

  p->setName("foobar");
  cout << "my name is: " << p->getName() << endl;
  cout << "my name is: " << p2->getName() << endl;

  cout << "address of P: " << p << endl;
  cout << "address of P2: " << p2 << endl;

  delete p;
  delete p2;

  return 0;
}
