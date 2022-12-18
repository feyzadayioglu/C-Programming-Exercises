#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
for (i=1;i<=100;i++) {


      char a[100];
   if(i%2!=0){
   sprintf(a,"| %3d(tek)|",i);
   printf("%s",a);
   } else if(i%2==0){
    sprintf(a,"|%3d(cift)|",i);
    printf("%s",a);
   }
    char b=i;
    if(b%2!=0)
        printf("...//...|");
    else if(b%2==0)
      printf("...><...|");
char c[100];
if(i%2!=0){
        sprintf(c,"%5d|",(i/2));
        printf("%s",c);
    }else if(i%2==0){
      sprintf(c,"%5d|",i*2);
      printf("%s",c);
      }
char d=i;
  printf("...>>...|");
  char e=i;
  if(e%2!=0)
        printf("%10f|\n",i/2.0);
    else if(e%2==0)
      printf("%10f|\n",i*2.0);

}
    return 0;
}
