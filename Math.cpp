﻿#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pii;
const int INF = 2000000000;
const ll LLINF = 20000000000000;
const ll MAX = 50; // depending on the problem

void PrimeGenerator() {
    vector<ll> prime;
    bool isprime[MAX + 1];
    memset(isprime, true, sizeof(isprime));
    for (ll j = 2; j <= MAX; j++) {
        if (isprime[j]) { 
            prime.push_back(j); 
            for (ll i = j * j; i <= MAX; i += j) {
                isprime[i] = false;
            }
        }
    }
}


int main()
{

    return 0;
}


