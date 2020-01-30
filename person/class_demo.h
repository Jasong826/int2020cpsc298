#include <iostream>
#include <string>

using namespace std;

class Person
{
  public:
    Person(); //constructor
    Person(string anme, int age, string eye_color); //overloaded constructor

    //accessors AKA getters
    string getName();
    int getAge();
    string getEyeColor();

    //mutators AKA setters
    void setName(string name);
    void setAge (int age);
    void setEyeColor(string eye_color);

  private:
    string m_name;
    unsigned int m_age;//unsigned cuz noone has neg age
    string m_eye_color;
};
