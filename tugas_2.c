#include<stdio.h>
void main()
{
     int x, i, j, c;
    x =20;
    i = 2;
    while (i <= x){
       c = 0;
       for (j =2;j<i; j++){
        if (i%j == 0)
            c = 2;
    }
        if(c == 0)
            printf("[%i]",j,i);
      i++;
   }
}

