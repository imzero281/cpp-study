#include <iostream>
using namespace std;

struct A {
   string name;
   int c_sc;
   int math_sc;

   void prt() {
      cout << name << "   " << c_sc << "   " << math_sc << endl;
   }
};

int main() {

   // --------------------- 구조체 -------------------

   A st1;
   st1.name = "이찬미";
   st1.c_sc = 100;
   st1.math_sc = 100;

   st1.prt();

   return 0;
}