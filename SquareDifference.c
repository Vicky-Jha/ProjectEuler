//
//  main.c
//  SquareDifference
//
//  Created by Vicky_Jha on 31/12/19.
//  Copyright © 2019 test. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {

    int limit = 100;
    int sum = limit*(limit + 1)/2;
    int sum_sq = (2*limit + 1)*(limit + 1)*limit/6;
    printf("%f\n",(pow(sum, 2) - sum_sq));
    
return 0;
}
