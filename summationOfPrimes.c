//
//  main.c
//  summationOfPrimes
//
//  Created by Vicky_Jha on 08/01/20.
//  Copyright © 2020 test. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    unsigned long long int sum=5;
    int n=0,k=1,flag=0,i;
    while(n < 2000000){
        n = 6*k - 1;
        if(n < 2000000){
        for(i=2 ; i<=sqrt(n) ; i++){
            if(n%i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            sum += n;
        }
        flag = 0;
        n = 6*k + 1;
        if(n < 2000000){
        for(i=2 ; i<=sqrt(n) ; i++){
            if(n%i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            sum += n;
        }
        flag = 0;
        k++;
    }
    printf("%llu\n",sum);
    return 0;
}
