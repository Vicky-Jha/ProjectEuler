#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,count=2,n,k,flag=0;
    
    for(k=1 ; count < 10001 ; k++){
        n = 6*k - 1;
        if(count < 10001){
        for(i=2 ; i<=sqrt(n) ; i++){
            if(n%i == 0){
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
            count++;
        flag = 0;
        }
        if(count < 10001){
            n = 6*k + 1;
        for(i=2 ; i<=sqrt(n) ; i++){
            if(n%i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            count++;
        flag = 0;
        }
    }
    printf("%d\n",n);
}
