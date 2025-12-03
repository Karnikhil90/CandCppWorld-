#include <stdio.h>
#include <math.h>

int isprime(int);

int isprime(int num){
    if(num <= 0) return 0;
    if(num == 1 || num == 2) return 1; 
    
    for(int i = 3; i < (int)sqrt(num); i++){
        if(num % i == 0) return 0;
    }
    return 1;
}

void main(){
    int num = 0;
    printf("Enter an number : ");
    scanf("%d",&num);
    
    if(isprime(num)){
        printf("its a prime \n ");
    }else{
        printf("its not a prime \n");
    }
    printf("EXIT\n");
}