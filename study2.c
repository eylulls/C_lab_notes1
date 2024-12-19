#include <stdio.h>
//fonksiyonlar
/*
int showme(int x){
    return 5+x;

}
int main(){
    printf("result is %d\n",showme(2));
      return 0;
}


int sumnumbers(int x, int y){
    //return x+y;
    int sum = 0;
    sum = x+y;
    return sum;
}


int main(){
    int mynumber = sumnumbers(1,6)*5;
    printf("mynumber is %d\n",mynumber);

    return 0;
}
*/
//recursive

int factorial(int);
int main(){
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    
    printf("%d!=%d\n",number,factorial(number));

    return 0;
}
 
 int factorial(int x){
    if (x==0)
        return 1;
    else
        return x*factorial(x-1);

}


