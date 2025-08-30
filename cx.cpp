#include <iostream>
using namespace std;

int main(){
    int a, b, i, maior= -1,nex, pos;
    cin>>a;
    int n[a];
    for(i=0; i<a; i++){
        cin>>n[i];
        if(maior< n[i]){
            maior=n[i];
            pos = i;
        }
    }

        for(i=1; i<a; i++){
                if(pos>1){
                if(pos != i - 1){
                nex= n[i];
                n[i] = maior;
                maior= nex;
                }else{break;}
        }
        else{
            nex= n[0];
            n[0]=n[1];
            n[1]=nex;
            break;
        }


        }
        for(i=0; i<a; i++){
            cout<<n[i]<<" ";
        }




}
