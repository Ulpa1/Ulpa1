#include <iostream>

using namespace std;

int main(){
    int a[3], i, maior=-1;
    cin>>a[0]>>a[1]>>a[2];
    int menor=a[0], pe=0, pa=0;
    for(i=0;i<3;i++){
        if(a[i]>maior){
            maior=a[i];
            pa=i;

        }

        if(a[i]<=menor){
            menor=a[i];
            pe=i;

        }

    }
        int j = 3 - (pa + pe);
        cout<<a[j];

    return 0;
}
