// jfj pointers4.cpp

#include <iostream>
using namespace std;

int main(){
  int integers[10];
  int * pointer;
  pointer = integers;
  //print array
  cout<<"print integers[] array"<<"\n\n";
  for (int n = 0; n < 5; n++){
    //integers[n] = 0;
    cout << integers[n]<<"\n";
  }
//Increment *pointer then assign a value
  *pointer = 11;
  pointer++; *pointer = 22;
  pointer++; *pointer = 33;
  pointer++; *pointer = 44;
  pointer++; *pointer = 55;

  //print array
  cout<<"/nprint &integers[] memory address "<<"\n\n";
  for (int n = 0; n < 5; n++){
    cout << &integers[n]<<"\n";
    cout<<endl;
  }

  return 0;
}
