#include <iostream>

int factorial(int n)
{
    if (n==0)
        return 1;
    return factorial(n-1)*n;
}

int Ifactorial(int n)
{
    int f = 1;
    int i;
    for(i =1; i <= n; i++)
        f = f*i;
    return f;
}

int main() {
    int r;
    r = Ifactorial(5);
    printf("%d ", r);
    return 0;
}
