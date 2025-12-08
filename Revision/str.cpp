#include <bits/stdc++.h>
using namespace std;
int lenght(string &s){
    int n=s.size();
    int last=n-1;
    int c=0;
   while(last>=0 && s[last]==' '){
       last--;
   }
   while(last>=0 && s[last]!=' '){
        c++;
        last--;
   }
   return c;
}

int main()
{
    string s= "Hello World  ";
     cout<<lenght(s);

    return 0;
}