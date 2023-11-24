#include <iostream>
#include <ctime>

int power(int m, int n)
{
    if (n == 0)
        return 1;
    return power(m,n-1)*m;
}

int powerFaster(int m, int n)
{
    if (n == 0)
        return 1;
    if (n%2 == 0)

        return powerFaster(m*m,n/2);
    else
        return m*powerFaster(m*m, (n-1)/2);

}

int main() {
    int r;
    clock_t start, end;

    start = clock();
    r = power(1,100000);
    printf("%d ", r);
    end = clock();
    printf("Took: %f\n", (float)((end - start) / (float)CLOCKS_PER_SEC));

    printf("-------------------\n");

    start = clock();
    r = powerFaster(1,100000);
    printf("%d ", r);
    end = clock();
    printf("Took: %f\n", (float)((end - start) / (float)CLOCKS_PER_SEC));

    return 0;
}
