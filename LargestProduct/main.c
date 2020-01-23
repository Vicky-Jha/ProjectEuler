//
//#include <stdio.h>
//#include <math.h>
//
//int main(){
//    float a , b , c;
//        for(a=1 ; a<1000 ; a++){
//            for(b=1 ; b<1000 ; b++){
//                int d = pow(a,a) + pow(b,b);
//                c = sqrt(d);
//                if(c == (int)c){
//                    if(a+b+c == 1000){
//                        printf("%f\n",a*b*c);
//                        exit(1);
//                    }
//                }
//            }
//        }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    long long int i=0,sum=1,j=3,greater=0,k=0;
//    char number[1001];
//    scanf("%s",number);
//a:
//    while(i <= j){
//            
//        if(number[i] == '0')
//            sum *= 0;
//        else if(number[i] == '1')
//            sum *= 1;
//        else if(number[i] == '3')
//            sum *= 3;
//        else if(number[i] == '4')
//            sum *= 4;
//        else if(number[i] == '5')
//            sum *= 5;
//        else if(number[i] == '6')
//            sum *= 6;
//        else if(number[i] == '2')
//            sum *= 2;
//        else if(number[i] == '7')
//            sum *= 7;
//        else if(number[i] == '8')
//            sum *= 8;
//        else if(number[i] == '9')
//            sum *= 9;
//            i++;
//        
//    }
//    if(sum > greater)
//    greater = sum;
//    j++;
//    k++;
//    i=k;
//    sum = 1;
//    if(j <= 999)
//        goto a;
//    
//    printf("%lld",greater);
//    return 0;
//}
#include <stdio.h>
int main()
{
    unsigned long long int product=1,greater=0;
    int i=0 , j=12 , k=0;
    char number[1001];
    scanf("%s",number);
a:
    for(i=k ;  i<=j ; i++){
        if(number[i] == '0')
            break;
        product *= (int)(number[i] - '0');
    }
    if(product > greater)
        greater = product;
    j++;
    k++;
    product = 1;
    if(j <= 999)
        goto a;
    
    printf("%llu\n",greater);
    return 0;
}
