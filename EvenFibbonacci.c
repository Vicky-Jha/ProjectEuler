//
//  main.c
//  EvenFibbonaci
//
//  Created by Vicky_Jha on 29/12/19.
//  Copyright © 2019 test. All rights reserved.
#include <stdio.h>
int main()
{
    
    
    int limit=4000000;
    int sum=0;
    int a=1,b=1,c=a+b;
    while (c<limit){
        sum=sum+c;
        a=b+c;
        b=c+a;
        c=a+b;
        
    }
    printf("%d\n",sum);
    return 0;
}
//    int fibbo(int n){
//    if (n <= 1)
//        return n;
//    else
//        return fibbo(n-1) + fibbo(n-2);
//}
//int main()
//{
//    long long int sum = 0;
//    for (int i = 2 ; i < 4000000 ; i++)
//    {
//        if(fibbo(i) < 4000000){
//            if(fibbo(i) % 2 == 0)
//        sum = sum + fibbo(i);
//        }
//        if(fibbo(i) > 4000000)
//            goto a;
//    }
//a:
//    printf("%lld\n",sum);
//

