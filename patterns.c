#include <stdio.h>
#include<cs50.h>
void pattern1(void);
void pattern2(void);
int main(void){
    int pat = get_int("Enter type of pattern (1 or 2) ");
    int h = get_int("Number of rows ");
    switch (pat)
    {
    case 1:
        pattern1();
        break;
    case 2:
        pattern2();
            break;
    
    default:
        break;
    }
}
void pattern1(void){
     int h = get_int("Number of rows ");
    int i,j;
     for ( i=0;i<=h;i++) 
     {
         for (j = h;j>=0; j--)
         {
             printf("#");
         }
        printf("\n");   }
}

void pattern2(void){
     int h = get_int("Number of rows ");
    int i,j,k;
     for (i=0;i<=h;i++) 
     {
         for (j = h-(i+1),k=0; j<0;k++, j--)
         {
             printf(" ");
         }
        for (j=k;j<h ; j++){
            printf("#");
        }
    }




