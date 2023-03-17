#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int DecimalToBinary(int n)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (n!=0)
    {
        rem = n%2;
        n = n / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    printf("%d, ",binarynum);
    return binarynum;
}

int xor( int a, int b , int len){
    int c; 
    for (int i = 0; i <=len; i++)
    {
       c=a^b;
    }
    printf("%d" ,c);
    return c;
}

int GetPosition(int n)
{
    char  c;
    c= n % 26 + 97; 

    if(n>=0 || n<=26){
       printf("%c\t ",c);
    }
   return c;
}

void main(){
   char * str ="hello";
   char * key ="keyab";

   // for letters of cipherText. index starting from 0
   int positionH = 'h' - 'a'; 
   printf("%d\n",positionH);
   int positionE = 'e' - 'a'; 
   printf("%d\n",positionE);
   int positionL = 'l' - 'a'; 
   printf("%d\n",positionL);
   int positionO = 'o' - 'a'; 
   printf("%d\n",positionO);

   // for letters of key
   int positionK = 'k' - 'a'; 
   printf("%d\n",positionK);
   int positionY = 'y' - 'a'; 
   printf("%d\n",positionY);
   int positionA = 'a' - 'a'; 
   printf("%d\n",positionA);
   int positionB = 'b' - 'B'; 
   printf("%d\n",positionY);
   printf("\n");

   int temp []= {positionH,positionE,positionL,positionL,positionO};
   int tempKey []= {positionK,positionE,positionY,positionA,positionB};
 
   int length = sizeof(temp) / sizeof(temp[0]);
    printf("ikilik sayilari xor islemine tabi tuttum:");
    printf("\n\n");
    for (int j=0; j<length;j++){
        //printf("%d,",temp[j]);
         //int op = DecimalToBinary(temp[j]); // 111,100,1011,1011,1110,
         //int opK = DecimalToBinary(tempKey[j]); // 1010,100,11000,0,100000,
        
        int x = xor(temp[j],tempKey[j],length); // 13,0,19,11,46
        printf(": ");
        GetPosition(x);
    }
    printf("\n\n");
    printf("decryption :");
    printf("\n");
      GetPosition(13); 
      GetPosition(0);
       GetPosition(19);
        GetPosition(11);
         GetPosition(46);
}