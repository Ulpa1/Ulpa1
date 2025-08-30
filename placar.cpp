#include <iostream>
using namespace std;

int main(){
    int p, c,mp=0, mc=0;
    cin>>p;
    int a[p], b[100], i=0, o;
        for (i =0; i<100;i++){
          b[i] = 0;
    }

    for (i =0; i<p;i++){
        cin>>o;
        b[o-1]= 1;
    }
    cin>>c;
    for (i =0; i<c;i++){
        cin>>o;
        b[o-1]= 2;
    }
    cout<<"0 0\n";
    for (i =0; i<100;i++){
           if (b[i]==1){
                mp++;
                cout<<mp<<" "<<mc<<"\n";
           }
            if (b[i]==2){
                mc++;
                cout<<mp<<" "<<mc<<"\n";
           }

    }

}
