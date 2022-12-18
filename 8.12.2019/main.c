#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int deltabul(int a,int b,int c){
    int delta;
    delta=(b*b)-(4*a*c);
    if(delta>0)
        return delta;
    else if(delta<0)
        return 0;
    else if(delta==0)
        return -1;
}
int main(){
    int a,b,c;
    float kok1=0,kok2=0;
printf("a giriniz: ");
scanf("%d",&a);
printf("b giriniz: ");
scanf("%d",&b);
printf("c giriniz: ");
scanf("%d",&c);
if(deltabul(a,b,c)>0){
    printf("iki farkli reel kok vardir\n");
kok1=(-b+sqrt(deltabul(a,b,c)))/(2*a);
kok2=(-b-sqrt(deltabul(a,b,c)))/(2*a);
printf("kok 1: %.3f\n",kok1);
printf("kok 2: %.3f\n",kok2);
}else if(deltabul(a,b,c)<00){
printf("kok yoktur");
}else if(deltabul(a,b,c)<0){
printf("bir tane reel koku vardir");
kok1=-b/(2*a);
printf("kok: %f\n",kok1);
}


return 0;
}
