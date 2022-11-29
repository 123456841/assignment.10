
#include <stdio.h>
int x;
 int check(int x)
 {
    if(x%2==0)
    return 1;
    else 
    return 0;
     
 }
    
 int main()
 {
 printf("enter the number x");
 scanf("%d",&x);
//  if(check(x)==0)
//  printf("even ");
//  else
//  printf("odd");
 printf("%d",check(x));
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}

