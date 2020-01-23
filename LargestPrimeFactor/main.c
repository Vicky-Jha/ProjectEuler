#include<stdio.h>

int main()
{
    long int i,n;
    n =125;
    for(i=2 ; i<n ; i++){
        if(n%i == 0){
            n = n/i;
        }
    }
    printf("Largest prime factor n = %ld\n",n);
}
