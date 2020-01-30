#include "class_demo.h"

  Person::Person(){
    m_name = "";
    m_age = 0;
    m_eye_color = "";

  }

  Person::Person(string name, int age, string eye_color){
    m_name = name;
    m_age = age;
    m_eye_color = eye_color;

  }

  string Person::getName()  {
    return m_name;
  }

  int Person::getAge()  {
    return m_age;
  }

  string Person::getEyeColor()  {
    return m_eye_color;
  }

  void Person::setName(string name)  {
    m_name = name;
  }
  void Person::setAge(int age) {
    m_age = age;
  }
  void Person::setEyeColor(string eye_color)  {
    m_eye_color = eye_color;
  }
