long int f(double a, long double b) {
    int val1 = 10;
    short int val2 = 5;
    if (a < val1 || b < val1) {
        return (a > b ? val1 : val2);
    }
}
int main(void) {
    int a = 4.5;
    int b = 2LL;
    b = f(b, a);
}