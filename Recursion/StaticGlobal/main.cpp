#include <iostream>

//also possible instead of static int x
//we can declare it as a global variable like this
//int x = 0;

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main() {
    int r;
    r = fun(5);
    printf("%d\n", r);
    return 0;
}
