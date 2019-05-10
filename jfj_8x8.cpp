//jfj 8x8
#include <iostream>
#include <stdio.h>
int jfj(); //define int cwc(); function

int main()
{
  jfj();//call jfj function
  return 0;
}
// start of jfj() function
int jfj(){
    int r,c;//row and column
    int red, green, blue;
    int val = 0;
    int m[8][8] = {
      {3,0,0,0,0,0,0,3} ,
      {0,1,1,0,0,1,1,0} ,
      {1,2,2,1,1,2,2,1} ,
      {1,2,2,2,2,2,2,1} ,
      {0,1,2,2,2,2,1,0} ,
      {3,0,1,2,2,1,0,3} ,
      {0,3,0,1,1,0,3,0} ,
      {0,0,3,0,0,3,0,0}
    };

      for (r = 0; r < 8; r++){
        for (c = 0; c < 8; c++){
          val = m[r][c];
          switch ( val ) {
              case 0:
                red = 255; green = 255; blue =255;
              break;
              case 1:
                red = 255; green = 0; blue =0;
              break;
               case 2:
              red = 230; green = 15; blue =15;
              break;
                case 3:
              red = 30; green = 30; blue =0;
              break;
                case 4:
              red = 0; green = 33; blue =30;
              break;
              default:
              red = 33; green = 0; blue =30;
              break;
            }//end select
            std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
          }//end c
          std::cout<<"\n";
      }//end r
    return 0;
}//end jfj() function
