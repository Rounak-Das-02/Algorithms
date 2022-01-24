#include <bits/stdc++.h>

using namespace std;

const int million = 10000000;

vector<long long int> prime;


void linearSieve(int N)  // this has a better complexity than Sieve of Eratosthenes .... O(n) as compared to O( n log log n)
{
    vector<int> lp(N+1);
    for (int i=2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            prime.push_back(i);
        }
        for (int j=0; j < (int)prime.size() && prime[j] <= lp[i] && i*prime[j] <= N; j++) {
            lp[i * prime[j]] = prime[j];
        }
    }
}



int main()
{
    linearSieve(million);
    //vector prime has only prime numbers till a million

    return 0;
}