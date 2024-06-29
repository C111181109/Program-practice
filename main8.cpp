#include <iostream>

using namespace std;

int main() {
   int m,n;

    cin>>m>>n;
    for (m; m<= n; m++) {
       
        for (int a = 1; a <= m; a++) {
           if (m%a!=0) 
             cout<<m;
        }
      
        cout << endl;
    }

    return 0;
}



