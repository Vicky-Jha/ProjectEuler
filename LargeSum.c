//Not Completed 

#include <stdio.h>
int main()
{
    int i=0 ,a,b,c=0,rem;
    char num1[100],num2[100];
    int sum[100];
    scanf("%s %s",num1,num2);

    for(i=49 ;  i>=0 ; i--){
        a = (int)(num1[i] - '0');
        b = (int)(num2[i] - '0');
        c = a+b+c;
        rem = c%10;
        c = c/10;
        sum[i+1] = rem;
        if(i == 0)
            sum[0] = c;
    }
    printf("%d\n",sum[0]);
    for(i=0 ; i<=50 ; i++)
    printf("%d",sum[i]);
   

    printf("\n");
    return 0;
}
