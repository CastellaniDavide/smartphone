#include <assert.h>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000000

// input data
int N;
int P[MAXN];

int main() {
    //  uncomment the following lines if you want to read/write from files
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));
    for (int i = 0; i < N; i++) assert(1 == scanf("%d", &P[i]));

    // insert your code here
    int res = 0;
    int prev = 0;
    sort(P, P+(N/2));

    for(int i = 0; i < N; i++){
        if(P[i] > prev){
            res += P[i];
            prev = P[i];
        }
    }

    printf("%lld\n", res);  // print the result
    return 0;
}
