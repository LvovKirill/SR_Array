#include <iostream>
#include <stdlib.h> 

using namespace std;
int irand ( int a, int b )
{
  return a + rand() % (b - a + 1);
}

int main()
{
    int i, j, k1, k2, N = 15;
    int mas[N];
    for (int i = 0; i < N; i ++){
        mas[i] = 10 + rand()% (99 - 10 + 1);;
    }
    for(i = 0; i<N;i++){
        cout << mas[i] << " ";
    }
    cout << endl;
    k1 = mas[0];
    k2 = mas[1];

    for (i = 0; i < N-2; i++ ){
        mas[i] = mas[i+2];
    }
    mas[N-2] = k1;
    mas[N-1] = k2;

    for(i = 0; i<N;i++){
        cout << mas[i] << " ";
    }
    cout << endl;
    for(i = 0; i<2 ;i++){
        for(j = 0; j<3 ;j++){
            k1 = mas[i+ 5*j];
            mas[i+5*j] = mas[(4-i) + 5*j];
            mas[(4-i) + 5*j] = k1;
        }
    }
    for(i = 0; i<N;i++)
    {
        cout << mas[i] << " ";
    }
}