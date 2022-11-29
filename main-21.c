
#include <stdio.h>
int i,n;
int fact(int n)
{
    int f=1;
  for(i=1;i<=n;i++)  
  {
  f=f*i;  
  
  }
  return f;

}
 int main()
 {
 int r;
 printf("enter the number\n");
 scanf("%d%d",&n,&r);
 int x=fact(n);
 int y=fact(r);
 int z=fact(n-r);
 
 printf("ans is %d",(x*y)/z);
 
   
   
   
   
   
   
   
    return 0;
}
