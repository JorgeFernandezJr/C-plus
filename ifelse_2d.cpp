//ifelse_2d.cpp
//compile g++ nameoffile

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
    int r,c;//row and column
    char thechar;
    char w = '<';
    char x = '*';
    char y = '?';
    char z = '~';
    int val = 0;
    int m[8][8] = {
      {0,1,2,3,4,5,0,0} ,
      {1,2,3,4,5,6,0,0} ,
      {2,3,4,5,6,7,0,0} ,
      {3,4,5,6,7,8,0,0} ,
      {4,5,6,7,8,9,0,0} ,
      {5,6,7,8,9,10,0,0} ,
      {0,0,0,0,0,0,0,0} ,
      {0,0,0,0,0,0,0,0} ,
    };

      for (r = 0; r < 8; r++){
          for (c = 0; c < 8; c++){
          val = m[r][c];
          if (val == 5){
            thechar = w;}
          else{
            thechar = x;
          }
            cout<<thechar;
        }//end c
        printf("\n");
    }//end r
  return 0;
}
