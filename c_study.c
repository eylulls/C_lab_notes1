#include <stdio.h>
/* 

int main(){
    int x; // tanımla
    x = 123; // değer verme
    int y = 321; // tanımla + değer

    int age = 19; // tam sayı %d
    float class = 1.0; // ondalıklı %f 4 bytes 6-7 bas. değerler 
    char name1 = 'e'; // tek karakter %c
    char name2[] = "elifsu"; // karakter dzisi %s
    double d = 3.45678997748; // 8 bytes 15-16 bas. değerler %lf
    
    printf("merhaba %d yaşındayım\n", age);
    printf("şuan %.1f sınıfındayım\n", class);
    printf("baş harfim %c\n",name1);
    printf("adım %s\n", name2);
    printf(" sayı %lf", d);

   

    return 0;
    
}



#include <stdbool.h>

int main(){
    bool e = true; // 1 byte true-false %d

    printf("%d",e);




    return 0;
}



//int main(){
   // int x = 6;
   // int y = 5;
   // int z = x - y;
   
    //printf("%d",z);


toplama "+"
çıkarma "-"
çarpma "*"
bölme "/"
mod alma "%"
arttırma "++"
azaltma"--"

    int x = 8;
    x += 2; 
    x /= 4;
   // x--;
    printf("%d",x);

  
    return 0;
}


int main(){
    
    char name[20];

    int age;
    
    printf("adın ne?");
    scanf("%s", name);
    printf("kaç yaşındasın?");
    scanf("%d", &age);

    printf("merhaba %s\n ,", name);
    printf("%d yaşındasın", age);
    
    return 0;
}



// if-else

    int age;
    printf("\nYasınızı giriniz: ");
    scanf("%d" , &age);

    if(age >= 18){
        printf("kursa kayıt oldunuz.");

    }
    else if(age < 0){
        printf("henüz doğmadığınız için kursa kayıt olamazsınız");
    }
    else if(age == 0){
        printf("yeni doğdunuz için kursa kayıt olamazsınız");
    }
    else{
        printf("kursa kayıt olamadınız");
    }

// and &&
    float temp = 35;

    if (temp <= 0 && temp < 30) // if( temp <= 0 ||(or) temp >= 30)
    {
        printf("\n hava kötü durumda");
    }
    else if(temp >= 30){
        printf("\n hava kötü durumda");
    }
    else{
        printf("\n hava gayet iyi");
    }

    return 0;
}


#include <stdbool.h>

int main(){
    //not
    bool sunny = true;
    if(!sunny)
    {
       printf("\n hava bulutlu");

    }
    else{
        printf("\n hava güneşli");
    }
    return 0;
}

int main(){

    char grade;
    printf("\n noyunuzu giriniz:");
    scanf("%c" , &grade);

    switch (grade)
    {
    case 'A':
        printf("notun başarılı.");
        break;
    case 'B':
        printf("notun iyi.");
        break;
    case 'C':
        printf("nnotun iyi");
        break;
    case 'D':
        printf("en azından f değil.");
        break;
    case 'F':
        printf("başarısız.");
        break;
    
    default:
    printf("geçerli not giriniz!");
        break;

    }

    return 0;

}

//while
int main(){
    //for
    for(int i = 1; i <= 10; i++){ // for(int i = 10; i> 0; i-=2)
        printf("%d\n",i);
    }
    return 0;
} // output= 1 2 3 4 5 6 7 8 9 10

//while
int main(){
    int i = 0;
    while (i < 5){
        printf("i = %d\n", i);
        i ++;

    }
    return 0;
//output= i = 0
        //i = 1
        // i = 2
        // i = 3
        // i = 4

}
// do while
int main(){

   int number = 0;
   int sum = 0;

   do{
      printf("0\'dan buyuk bir sayı girin:");
      scanf("%d", &number);

      if(number > 0){
        sum += number;
      }
   }while (number > 0);
    
    
    printf("toplam: %d", sum);
}

int main(){
    //continue 0 kodun geri kalanını atlar ve döngünün bir sonraki tekrarına gider
    // break = döngüden veya switch yapısından çıkar
    for(int i = 1; i<=20; i++){
        if(i==10){
            break;
        }
        printf("%d\n",i);

    }

    return 0;
}


//while
int main(){
    int i = 0;
    while (i < 5){
        i++;
        printf("i = %d\n", i);
        continue;
    return 0;
}
}

void name()
{
    printf("eylül\n");

}
int main(){
    name();
    name();
    return 0;
    
}



int main() {
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}



int main() {
    int i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
*/
/*
//sayı karşılaştır
int main(){
    int number1,number2;
    number1 =0;
    number2=0;
    printf("enter two number:");
    scanf("%d %d",&number1,&number2);
    if ( number1>number2){
    printf("number1 is greater than number2\n");
    }
    else if(number2>number1){
        printf("number2 is greater than number1");
    }
    else{
        printf("numbe1 is equal number2\n");
    }
    
    return 0;
}
*/
/*
// kitap siparişi ve indirim programı

int main(){
    int bookprice,orderQuantity;
    float discountRate,nodiscountRate,discountPrice,sum;
    bookprice = 50;
    orderQuantity = 0;

    printf("kitap sayısını giriniz:");
    scanf("%d",&orderQuantity);
    if (orderQuantity >= 60){
        discountRate= 0.30;
        
    }else{
        if(orderQuantity>=30 && orderQuantity <60){
            discountRate= 0.20;

        }else if(orderQuantity>=10 && orderQuantity<30){
            discountRate=0.12;

        }else{
            discountRate=0.01;

        }
        return 0;

    }

    nodiscountRate = orderQuantity * bookprice;
    printf("kitabın indirimsiz fiyatı:%f tl\n",nodiscountRate);
    discountPrice = orderQuantity * bookprice * discountRate;
    printf("kitabınızın indirim tutarı: %f\n",discountPrice);
    sum = nodiscountRate - discountPrice;
    printf("siparişlerinizin toplam tutarı:%f\n",sum);
    return 0;
}

int main(){
    int mynumber;
    printf("bir sayı giriniz:");
    scanf("%d",&mynumber);
    if (mynumber % 2 == 0){
        printf("%d bu sayı cifttir\n",mynumber);
    }else{
        printf("%d bu sayı tektir\n",mynumber);
    }
    
    return 0;
}
*/
/*
// girilen sayının min ve max durumu
int main(){
    int x,y,z,max,min;
    printf("enter three numbers:");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z){
        max = x;        
    }
    else if(y>x && y>z){
        max = y;
    }else{
        max = z;
    }
    if(x<y && x<z){
        min=x;
    }else if(y<x && y<z){
        min=y;

    }else{
        min=z;
    }
    printf("the largest number:%d\n",max);
    printf("the least number:%d\n",min);


    return 0;
}
*/

//switch-case
int main(){
    int day = 5;
    switch(day){//ifade neye eşitse onu çalıştırır
        case 1:printf("monday\n");//code block
               
        case 2:printf("tuesday\n");
               break;
        case 3:printf("wednesday\n");
               break;
        case 4:printf("thursday\n");
               break;
        case 5:printf("friday\n");
               break;
        case 6:printf("saturday\n");
               break;
        case 7:printf("sunday\n");
               break;

        default:printf("there is no such a day\n");

    }
    return 0;
}







//break: eğer durum 1'e eşitse kod bloğunu sonlandırır aksi halde gelip ikinci durumu çalıştırır.
//break silindiği zaman switchden çıkmam gerekiyor mu hayır,ikinciyi de çalıştırmamı istiyor 
//mesela 1.günün koşuluna gidiyor koşula uygun hareket ediyor switchi kırıyor ve switchden çıkıyor
// ifadenin değeri, her birinin değeriyle karşılaştırılır ilgili eşleşme varsa,ilgili kod bloğunu yürütür

//tek veya çift sayı mantığı
/*
int main(){
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    switch(number % 2)
    {
    case 0: printf("%d is an even number.\n",number);
    break;    
    case 1: printf("%d is an odd number.\n",number);
    break;
       
    return 0;

    }
}
*/
/*
//while
int main(){
    int number=1;
    while(number<=5){
        printf("%d\n",number);
        number++;
    }    
    return 0;
}

int main(){
    int i=1;
    while(i<=5){
        printf("%d - c is language\n",i);
        i++;
    }    
    return 0;
}

int main(){
    
    int i = 5;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=5);
    return 0;
}
//for
int main(){
    int i;
    for(i=2;i<=5;i++){
    printf("%d\n",i);
    }

    return 0;
}
int main(){
    int i;
    for(i=0;i<=10;i++){
        if(i == 7){
            break;
        }
        printf("%d\n",i);
    }

    return 0;
}
int main(){
    int i=0;
    while(i<=10){
        if(i==6){

            continue;
        
        }
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
/*çarpım tablosu
int main(){
    int i,number;
    number = 0;
    i=1;
    printf("enter a number from 1 to 10:");
    scanf("%d",&number);
    if(number<1 || number > 10){
        printf("please dont do that\n");
        return 0;
    }
    while(i<=10){
        printf("%d x %d = %d \n",number,i,number*i);
        i++;

    }

    return 0;
}

//asal sayı
int main(){
    int number,i;
    number= 0;
    i=2;
    printf("enter a psoitive number:");
    scanf("%d",&number);
    if(number<0){
        printf("please enter a positive number\n");
        return 0;
    }
    while(i < number/2){
        if(number%i==0){
            printf("\n%d divided by %d so it cant be a prime number\n",number,i);
            return 0;
        }
        i++;
        
        }
        printf("\n%d is a prime number\n",number);
        return 0;
}

int main(){
    int i,factorial,number;
    factorial = 1;
    printf("enter a number:");
    scanf("%d",&number);
    for(i = 1;i<=number;i++){
        factorial*=i;
    }
    printf("%d!=%d\n",number,factorial);
    return 0;
}
*/

