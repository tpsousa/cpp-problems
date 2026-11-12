#include <bits/stdc++.h>
using namespace std;

#define f 0;
#define true 1; 

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    if (n == 2 || n == 3){
        cout << "NO SOLUTION\n";
        return 0;
    }

    //se nao cair em nenhum dos casos anteriores entao imprimi
    //todos os pares primeiros e depois os impares
    
    for (int i = 2; i <= n ; i +=2 ) cout << i << " ";

    for (int i = 1; i <= n ; i += 2) cout << i << " ";

    cout << "\n";   


}
