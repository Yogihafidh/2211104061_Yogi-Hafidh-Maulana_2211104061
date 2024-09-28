#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Input dari user
    cout << "Input: ";
    cin >> n;
    
    // Loop untuk setiap baris
    for (int i = n; i >= 1; i--) {
        // Mencetak bagian kiri (menurun)
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        
        // Mencetak tanda '*'
        cout << "* ";
        
        // Mencetak bagian kanan (meningkat)
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        cout << endl;
    }
    
    // Mencetak '*' terakhir
    cout << "*" << endl;
    
    return 0;
}
