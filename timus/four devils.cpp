#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    for(int i=1; i<=n; i++)
         sum+=i;
    if(sum%2==0)
        cout << "black";
    else cout << "grimy";
return 0;
}
