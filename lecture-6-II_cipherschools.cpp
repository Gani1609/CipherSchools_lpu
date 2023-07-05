#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number up to which you want to print: " << endl;
    cin >> n;
    
    for (int i = 0; i <= n; i++){
        cout << i << " ";
    }
    
    return 0;
}
