#include <stdio.h>
/*
int main(){
    int myArray[10];
    myArray[5] = 5;
    for(int i = 0; i< 10;i++){
        printf("%d\n",myArray[i]);
    }
    int multiarray[3][4];
    for(int i = 0;i<3;i++){
        printf("%d\n",multiarray[i][0]);
    }

    return 0;
}

void append(int array[],int size,int element);
int main(){
    
    void append(int array[],int size,int element){
        for(int i = 0;i<size;i++){
            if(array[i]== 0)
        }
        return 0;
    }
    }*/
    /*int Matrix[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    for(int i = 0;i <3;i++){
        for(int j = 0; j<3;j++){
            printf("%d,",Matrix[i][j]);
        }
        printf("\n");
    }
 //  int example[10] ={};
 //  for (int
  //  return 0;

void perfectsquare(int start,int end){
    for(int i = start;i< end;i++){
        if(i*i > start && i*i<end){
            printf("%d\n",i*i);
        }

    }
}
int main(){
    perfectsquare(2,18);

    return 0;
}

int main(){

    //int x = 7,y = 19, z = 24,a = 3;

    //int notes[] = {7,19,24,3};// kaç tane verinin olduğunu bilirsek kümenin içi boş olacak
    int notes[3];
    notes[0]=7;
    notes[1]=19;
    notes[2]=24;
    int i;
    for (i = 0;i<3;i++){
        printf("%d\n",notes[i]);
    }   
    //notes[0]= 23;//arraylerin değerini değiştirmek
    //printf("%d\n",notes[2]);
    return 0;
}

int main(){
    double avarage=0,numbers[3];
    printf("enter three numbers:");
    scanf("%lf%lf%lf",&numbers[0],&numbers[1],&numbers[2]);
    avarage=(numbers[0]+numbers[1]+numbers[2])/3;
    printf("avarage:%.3f\n",avarage);
   return 0;
}

//sayıların karesini almak
int main(){
    int i,mySquare[5];
    for(i=0;i<5;i++){
        mySquare[i]=i*i;
        printf("mySquare[%d\n]:%d\n",i,mySquare[i]);

    }

    return 0;
}
int main(){
    double myValue,myArray[10];
    int choice,index;
    do{
        printf("make a choice (-1 to exit)\n");
        printf("\t1. Write to array\n");
        printf("\t2. read from array\n");
        scanf("%d",&choice);
        if(choice ==-1) break;
        if(choice !=1 && choice != 2){
            printf("are you kidding me?\n");
            continue;
        }
        printf("enter array ,index:");
        scanf("%d",&index);
        if(index<0 || index>9){
            printf("index should be in the range of 0-9\n");
            continue;
        }
        switch(choice){
            case 1: printf("\nenter the value:");
            scanf("%lf",&myValue);
            myArray[index]=myValue;
            printf("the write operation is successful\n\n");
            break;
            case 2: printf("myArray[%d]:%.2f\n\n",index,myArray[index]);
            break;
        }
    }while (choice !=-1); 
    
    return 0;
}
*/
int main(){

    /*char name[]="eylül";
    printf("%s\n",name);
    printf("%c\n",name[0]);
    printf("%c\n",name[4]);*/
    char name[30];
    printf("enter your name:");
    scanf("%s",&name);
    printf("\n your name is %s\n",name);


    return 0;
}




