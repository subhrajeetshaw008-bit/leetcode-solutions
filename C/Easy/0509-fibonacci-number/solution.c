void fibHelper(int n, long long *fn, long long *fn1) {
    if (n == 0) {
        *fn = 0;
        *fn1 = 1;
        return;
    }

    long long a, b;
    fibHelper(n / 2, &a, &b);

    long long c = a * (2 * b - a);   // F(2k)
    long long d = a * a + b * b;     // F(2k+1)

    if (n % 2 == 0) {
        *fn = c;
        *fn1 = d;
    } else {
        *fn = d;
        *fn1 = c + d;
    }
}

int fib(int n) {
    long long fn, fn1;
    fibHelper(n, &fn, &fn1);
    return (int)fn;
}