#include <stdio.h>
/*
int main(){
    printf("hello world!\n");
    printf("comments are fun!\n");
    char lecture[]= "intro to programming 1";
    printf("%s\n", lecture);
    char lecturer[]= "Ali";
    printf("%s\n",lecturer);
    int number = 10;
    printf("%d\n" ,number);
    float pi = 3.14;
    printf("%.2f\n", pi);
    int number_of_students = 40;
    printf("%d\n",number_of_students);
    float average_age = 19.5;
    printf("%.1f\n", average_age);
    float average_quiz_notes = 0.2;
    printf("%.1f\n",average_quiz_notes);
    retun 0;
}

#include <stdbool.h>

int main(){
    bool is_active = true;
    printf("%d\n", is_active);
    //bool can_they_pass = false;
    //printf("%d\n", can_they_pass);
    char can_they_pass[]= "geçebilirler!";
    printf("%s\n", can_they_pass);
    bool total_of_two_bool;
    total_of_two_bool = true + true;
    printf("%d\n", total_of_two_bool);

    bool x = true;
    bool y = true;
    bool z = false;
    if(x && y){
        printf("true\n");
    }

    if(z && y);{
        printf
    }



    return 0;
}
*/
int main(){
    int a = 10;
    int b = 2;
    double c = 5.7;
    int mul;
    mul = a * b;
    printf("%d\n", mul);
    float float_div = a / c;
    printf("float_div: %f\n", float_div);
    int int_div = a / b;
    printf("integer div: %d\n", int_div);


    return 0;
}




/*
int main(){
    int number1;
    printf("give me the first number\n");
    scanf("%d",&number1);
    int number2;
    printf("give me the second number\n");
    scanf("%d",&number2);
    
    int total;
    total = number1 + number2;
    printf("total is: %d\n", total);
    return 0;
}


int main(){
    int x = 10;
    int y = 20;
    int z = x + y;
    int carpma = x * y;
    printf("%d\n",z);
    printf("%d\n", carpma);

    return 0;
}

int main(){
    int a = 5;
    int b = 3;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int division = a / b;
    printf("sum: %d\n", sum);
    printf("difference: %d\n", difference);
    printf("product: %d\n", product);
    printf("division: %d\n", division);

    return 0;
}

int main(){
    int a = 10;
    int b = 5;
    if ( a > 15 || b > 3 ){
        printf("at least one condition is true\n");
    }
    else{
        printf("both conditions are false\n");
    }
    return 0;
}

int main(){
    int a = 10;
    if(!a){
        printf("condition is not true\n");
    }
    else{
        printf("condition is true\n");
    }
    return 0;
}

int main(){
    int a = 10;
    int b = 20;
    int c = 30;
    if (a < b && b < c);
    printf("both conditions are true\n");
    return 0;
}

#include <stdbool.h>
int main(){
    int age = 25;
    bool is_student = false;
    if (age > 18 && is_student){
        printf("eligible for adult ticket\n");
    }
    else{
        printf("not eligible for adult ticket\n");
    }
    return 0;
}

int main(){
    char username[] = "user";
    char password[]= "pass";
    if (username == "user" && password = 'pass'){
        printf("login successful\n %c");
    }
    else{
        printf("invalid username or password\n %c ");
    }

    return 0;
}

int main(){
    int age = 18;
    if ( age >= 18){
        printf("you are an adult.");
    }

    return 0;
}


int main(){
    int temperature = 30;
    if(temperature > 25){
        printf("it is hot outside\n");
    }
    return 0;
}

int main(){
    int x = 10;
    if(x > 5){
        printf("x is greater than 5");

    }
    return 0;
}


int main() {
    for (int j = 0; j <= 100; j += 2) {
        printf("%d\n", j);
    }
    return 0;
}


int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}


int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 != 0) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}


int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}


int main() {
    int number = 0;

    while (number <= 100) {
        printf("%d\n", number);
        number = number + 2;
    }

    return 0;
}
int main(){
    int number = 0;
    while (1){
        if(number % 2== 0){
            printf("%d\n",number);
            
        }
        number = number + 1;
        if(number == 101){
            break;
        }
    }
    return 0;
}

int main(){
    for (int i = 1; i < 10; i++){
        if(i >= 5){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;

}
*/