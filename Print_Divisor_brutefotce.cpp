
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
  
vector<int> getDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

void print_divisors(int n) {
   vector<int> divisors = getDivisors(n);

    
   for (int i = 0; i < divisors.size(); i++) {

        cout << divisors[i]<< " ";
    }

}


};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
