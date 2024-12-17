#include <stdio.h>

long long convertIntoBinary(int n);

int main (){
    int n;
    printf("give me a number\n");
    scanf("%d",&n);
    convertIntoBinary(n);
    long long binary = convertIntoBinary(n);
    printf ("%d = %lld converted to binary\n",n,binary);
    return 0 ;
}

long long convertIntoBinary(int n){
   int r = 0 ; //reminder//
   long long binary = 0; 
  int place = 1;
do {
    r = n % 2 ;
    binary += r * place ;
    n /= 2;
    place *= 10;
}  
 while ( n > 0 );
 return binary;
 }