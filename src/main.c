#include <stdio.h>
int main ()
         {
         int r,n,s,l,count;
          printf("Enter your number: \n");
          scanf("%d", &n);
          count=0;
          r=0;
          while(n!=0){
             l=n%10;
                r=r*10;
             r=r+l;
             n=n/10;
          }
           if(n-r==0)printf("it's a palindrome number \n");
           else printf("It's not a palindrome number\n");
          
           return 0;
         }