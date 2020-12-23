//
//  main.c
//  powerDigitSum
//
//  Created by Vicky_Jha on 08/01/20.
//  Copyright © 2020 test. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    long long int n,sum=0;
    int i=0,*ptr = NULL;
    
    *ptr=(unsigned int)malloc(1000);
    *ptr=1;
    char str[100];
    sprintf(str, "%lld", n);
    printf("%s\n",str);
    while (str[i] != '\0') {
        sum += (int)(str[i] - '0');
        i++;
    }
    printf("%lld\n",sum);
    return 0;
}
