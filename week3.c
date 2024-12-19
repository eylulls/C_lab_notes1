#include <stdio.h>

int factorialFor(int number);
int factorialWhile(int number);
int factorialRecursive(int number);
int fibonacciFor(int number);
int fibonacciWhile(int number);
int fibonacciRecursive(int number);

int main(){
    int factorial_5 = fibonacciRecursive(7);
    printf("fibonacci2 %d\n", factorial_5);
   
    int fibonacci = fibonacciFor(7);
    printf("fibonacci %d\n",fibonacci);

    return 0;    
}

int factorialFor(int number){

    if(number < 0){
        return 0;
    }
    if(number == 0){
        return 1;
    }
    int result = 1;
    for (int i = 1; i<= number;i++){
        result = result * i;
    }
    return result;

}

int factorialWhile(int number){
    if(number<0){
        return 0;
    }
    if(number == 0){
        return 1;
    }
    int result = 1;
    while(number > 0){
        result *= number;
        number--;
        
    }
    return result;
}

int factorialRecursive(int number){
    //base case
    if (number == 1 || number == 0){
        return 1;
    }
    return number * factorialRecursive(number -1);
    
}//1,1,2,3,5,8

int fibonacciFor(int number){
    int first = 1;
    int second = 2;
    int result = 0;
    if(number == 1 || number ==2){
        return 1;
    }
  
   for(int i = 2; i<= number;i++){
    result = first + second;
    first = second;
    second = result;
   }
   return result;
}
int fibonacciWhile(int number){
    int first = 1 , second = 1, result = 0;
    if(number == 1 || number ==2){
        return 1;
    }
    while (number>=3){
        result = first + second;
        first = second;
        second = result;
        number--;
    }
    return result;
}

int fibonacciRecursive(int number){
    //base case

   if(number == 1 || number == 2){
    return 1;
   }
   return fibonacciRecursive(number -1) + fibonacciRecursive(number -2);
}

/*
int main() {
    int i = 0;

    while(i < 5){
        printf("%d\n",i);
        i++;
    }

    do{ // if ile de yapılır
        i++;
        printf("%d\n", i);
        i++;

    }while(i < 5);
    return 0;

}

//primitive = char,int,float,double
// switch case break kaldırılması araştır
*/