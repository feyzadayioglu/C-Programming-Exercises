#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mutlusayi(int x);
int main(){
int sayi;
printf("bir sayi girin:");
scanf("%d",&sayi)
if(sayi==mutlusayi(x))
    return 1;
else
    return 0;

}
int mutlusayi(int x){

    int y=;
    int s=0;
    while(x>0){
        y=x%10;
        s=s+y*y;
        x/=10;
mutlusayi()=s;
    }



    return s;

}





}


