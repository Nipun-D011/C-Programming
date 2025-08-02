#include <stdio.h>
int main(){
/*int x ;
   printf("Enter a number :");
   scanf("%d",&x);
   printf("You entered : %d",x);*/

/*float y ;
printf("Enter a float :"); 
scanf("%f",&y);
printf("You entered : %.2f",y);*/

/*char z;
printf("Enter a charachter :");
scanf("%c",&z);
printf("You entered : %c",z);*/

/*int x,y,sum ;
  printf("Enter an integer :");
  scanf("%d",&x);

  printf("Enter an another integer :");
  scanf("%d",&y);

  sum = x / y ;
  printf("Sum = %d\n",sum);*/


/*float x,y,sum;
   printf("Enter a float :");
   scanf("%f",&x);

   printf("Enter a another float :");
   scanf("%f",&y);

   sum = x + y ;

   printf("Sum : %.2f",sum);*/


 
 /*float width, height, area ;
 
  printf("Enter the width of rectangle :");
  scanf("%f",&width);

  printf("Enter the height of rectangle :");
  scanf("%f",&height);

  area = width * height ;
  printf("Area of the rectangle is : %.2f\n",area);*/


/*float x,y,z,average;
  printf("Enter a number:",x);
  scanf("%f",&x);
  
  printf("Enter the 2nd number :",y);
  scanf("%f",&y);

  printf("Enter the 3rd number :",z);
  scanf("%f",&z);
  
  average = (x + y + z) /3;

  printf("Average :%.2f",average);*/



int number,digit1,digit2,sum;
   printf("Enter a two digit number :");
   scanf("%d",&number);

   digit1 = number /10;
   digit2 = number %10;

   sum = digit1 + digit2 ;

   printf("Sum of the two digits :%d\n",sum);
  
return 0;


}