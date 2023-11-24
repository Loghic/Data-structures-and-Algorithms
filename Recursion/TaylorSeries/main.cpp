#include <iostream>

double e(int x, int n) //for exponential
{
    static double p=1, f=1; //p - power, f - factorial
    double r;
    if (n==0)
        return(1);
    else{
        r = e(x,n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
    }
}

int main() {
    printf("%lf \n", e(4,20));
    return 0;
}
