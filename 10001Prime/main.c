#include <stdio.h>
#include <math.h>


int isPrime(int n)
{
    int r=floor( n ),f=5;
if (n == 1)
    return 0;
else if (n < 4)
    return 1;  //2 and 3 are prime
else if (n % 2 == 0)
    return 0;
else if (n < 9)
    return 1;    //we have already excluded 4,6 and 8.
else if (n % 3 == 0)
    return 0;
else
    r=floor(sqrt(n));
    f=5;
    while (f<=r){
        if (n % f == 0){
            return 0; //(and step out of the function)
            break;
        }
        if (n % (f+2) == 0){
                return 0;// (and step out of the function)
            break;
    }
        f=f+6;
    }
    return 1;// (in all other cases)

}

int main()
{
    int limit=10001 , count = 1 , candidate = 1;
while(count != limit)
{
    candidate=candidate+2;
if (isPrime(candidate))
    count=count+1;

}
    printf("%d\n",candidate);
    return 0;
}
