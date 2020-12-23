//
//  main.c
//  HighlyDivisibleTriangularNumber
//
//  Created by Vicky_Jha on 12/01/20.
//  Copyright © 2020 test. All rights reserved.
//
//problem 12
#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int count;
    unsigned long long int i, j,k;
    
    for(i = 100 ; ; i++){
        count = 0;
        j = i;
        j = (j*(j+1))/2;
        for(k=1 ; k<=sqrt(j) ; k++){
            if(j%k == 0)
            {
                if (j/k == k)
                    count++;
                else
                    count += 2;
            }
        
        }
        if(count > 500)
            goto a;
    }
a:
    printf("%llu\n",j);
    
    return 0;
}
