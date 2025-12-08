#include <iostream>
using namespace std;
int main() {
    int n =2;
    if (n<=2) return n;
    int fst = 1, snd = 2, trd=0;
    for (int i = 3; i <= n; i++) {
        trd = fst + snd;
        fst = snd;
        snd = trd;
    }
    cout<<trd;
}