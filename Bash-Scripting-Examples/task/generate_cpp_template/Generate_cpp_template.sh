#!/bin/bash
echo "what is your file.hpp name?" && read -r hppname
echo "class name :" && read -r cls_nm
echo $touch "main.cpp" 
#echo $(touch $hppname.hpp)
echo $touch "$hppname.cpp"
########.hpp file
echo "#pragma once" >"$hppname.hpp"
echo "class $cls_nm">>"$hppname.hpp"   
echo "{">>"$hppname.hpp"
echo "    private:">>"$hppname.hpp"
echo "      //Atributes">>"$hppname.hpp"
echo "    public:">>"$hppname.hpp"
echo "      //default constructor">>"$hppname.hpp"
echo "      $cls_nm();">>"$hppname.hpp"
echo "      //Functions">>"$hppname.hpp"
echo "      //">>"$hppname.hpp"
echo "      //deconstructor">>"$hppname.hpp"
echo "      ~$cls_nm();">>"$hppname.hpp"  
echo "};">>"$hppname.hpp"
################
#.cpp class file
echo "#include \"$hppname.hpp\"">>"$hppname.cpp"
echo "//default constructor">>"$hppname.cpp"
echo "$cls_nm::$cls_nm()">>"$hppname.cpp"
echo "  {">>"$hppname.cpp"     
echo "   //body">>"$hppname.cpp"
echo "  }">>"$hppname.cpp"
echo "//functions">>"$hppname.cpp"
echo "//">>"$hppname.cpp"
echo "//de-constructor">>"$hppname.cpp"
echo "$cls_nm::~$cls_nm()">>"$hppname.cpp"
echo "  {">>"$hppname.cpp"
echo "   //body">>"$hppname.cpp"
echo "  }">>"$hppname.cpp"
################
#main.cpp file
echo "#include <iostream>">>main.cpp
echo "#include \"$hppname.hpp\"">>main.cpp
echo "using namespace std;">>main.cpp
echo "int main()">>main.cpp
echo "{">>main.cpp
echo "  //body">>main.cpp
echo "  return 0;">>main.cpp
echo "}">>main.cpp
###########