//jfj pointers2.cpp

#include  <iostream>
using namespace std;

int main(){
  int one = 111 , two = 22;
  int * p1, * p2;
  p1 = &one;
  p2 = &two;
  *p1 = 1010;
  *p2 = *p1;
  p1 = p2;
  *p2 = 2020;

  cout<<"one is "<<one <<" "<<one<<" \n";
  cout<<"two is "<<two <<" "<<two<<" \n";
  cout<<"one two location is "<<one <<" "<<two<<" \n";
  cout<<"pointer values "<<*p1<<" "<<*p2<<" \n";
  cout<<"pointer locations "<<&p1<<" "<<&p2<<" \n";
  return 0;
}
