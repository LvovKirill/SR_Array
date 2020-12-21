#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int mas[n];
    for (int i=0; i<n; i++){
        cin>>mas[i];
    }
    
    
    int r;
    bool znach = false;
    int p;
    
    for (int k=0; k<n; k++){
        if (mas[k]%10==4){
            p = mas[k];
            r = k;
            znach=true;
            break;
        }
    }
    
// переиспользуем p
    p = r;
    
    
    for (int j=0; j<n; j++){
        if (p<mas[j] && mas[j]%10==4){
            p = mas[j];
		// переиспользуем r
            r = j;
        }
    }
    
    if (znach==false){
        cout<<0;
    }else
    cout << r;

}