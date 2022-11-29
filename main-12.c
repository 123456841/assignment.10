
#include <stdio.h>

float p,r,t;
float si(float p,float r,float t)
{
    
  return (p*r*t)/100;  
}
int main()
{

 printf("enter the value of p\n,r\n,t\n");
 scanf("%f%f%f",&p,&r,&t);
 
 
 printf("the value of si is %f ",si( p,r,t));   
    
    
    return 0;
}

