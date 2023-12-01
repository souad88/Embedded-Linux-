This script is for generating a C++ template program :
Template :
1-main.cpp file :
#include <iostream>
#include "f.hpp"
using namespace std;
int main()
{
  //body
  return 0;
}
2-header.hpp :
#pragma once
class class_name
{
    private:
      //Atributes
    public:
      //default constructor
      constructor_name();
      //Functions
      //
      //deconstructor
      ~deconstructor_name();
};

3-class.cpp :
#include "math.hpp"
//default constructor
class_name::constructor_name()
  {
   //body
  }
//functions
//
//de-constructor
class_name::~constructor_name()
  {
   //body
  }
