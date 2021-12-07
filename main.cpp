#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int n;
    cin >> n;
    float v[n];
    for(int i=0; i<n;i++)
    {
        cin >> v[i];
    }
    cout << maggiore(n,v)<< endl;
}
