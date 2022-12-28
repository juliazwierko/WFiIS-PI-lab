#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(NULL));
    const int k=10;
    int a[k];
    for(size_t i=0; i<k; i++) {
        a[i]=rand()%20;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(size_t i=0; i<k; i++) {
        int n=0;
        for(size_t j=0; j<k; j++) {
            if(a[i]!=a[j]) {
                n++;
            }
        }
        if(n==k-1) {
            cout<<a[i]<<" ";
        }
    }
 
    return 0;
}
