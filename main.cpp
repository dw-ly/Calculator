#include <iostream>
#include "m_calculator.h"
// #include "lua.hpp"
using namespace std;

int main(int argc, char** argv)
{
  cout<<"Hello World!"<<endl;
  Calculator::InitCalculator();
  Calculator::Add(1);
  Calculator::Mutiply(20);
  // lua_State *L = luaL_newstate();
  cout<< Calculator::_calculator()->getNumber()<<endl;
  return 0;
}

// int binarySearch(int* nums, int target){
//   int left = 0;
//   int right = sizeof(nums) - 1;
// }