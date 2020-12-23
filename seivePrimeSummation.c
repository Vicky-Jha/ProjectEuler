#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void SieveOfEratosthenes(int n)
{
    unsigned long long int sum = 0;
    
    bool prime[n];
    memset(prime, true, 2000000);//memset(prime , true , sizeof(prime);
    
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    
    for (int p=2; p<=n; p++)
        if (prime[p])
            sum += p;
    printf("%llu\n",sum);
}

int main()
{
    int n = 2000000;
    printf("Sum of all the prime numbers below %d\n",n);
    SieveOfEratosthenes(n);
    return 0;
}
