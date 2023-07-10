#include <iostream>
using namespace std;
void fibo(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextnumber;
    for (int i = 1; i <= n; i++)
    {
        cout << t1;
        nextnumber = t1 + t2;
        t1 = t2;
        t2 = nextnumber;
    }

    return;
}
int main()
{
    int n;
    cin >> n;
    fibo(n);
    return 0;
}