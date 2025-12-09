#include <bits/stdc++.h>
using namespace std;

    int timee(vector<int>& tickets, int k) {
        queue<int> q;
        
        for(int i = 0; i < tickets.size(); i++) {
            q.push(i);
        }
        int t = 0;
        while(!q.empty()) {
            int p = q.front();
            q.pop();
            
            tickets[p]--;   
            t++;              
            
            if(tickets[p] == 0 && p == k) {
                break;  
            }
            
            if(tickets[p] > 0) {
                q.push(p);  
            }
        }
        
        return t;
    }


int main() {
    vector<int> tickets = {2,3,2};
    int k = 2;
    cout << timee(tickets, k);
}
