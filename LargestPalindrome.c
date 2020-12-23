//
//  main.c
//  LargestPalindrome
//
//  Created by Vicky_Jha on 29/12/19.
//  Copyright © 2019 test. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int n, r, t,i,j,arr[10000],k=0,greater = 0;
    for(i=999 ; i>=100 ; i--){
        for(j=999 ; j>=100 ; j--){
            n = i*j;
            t = n;
            r = 0;
            while (t != 0)
            {
                r = r * 10;
                r = r + t%10;
                t = t/10;
            }
            if (n == r){
                arr[k] = n;
                k++;
            }
        }
    }
   
    for(i=0 ; i<k ; i++){
        if(greater < arr[i]){
            greater = arr[i];
        }
    }
    printf("%d is a palindrome number.",greater);

    
    return 0;
}
