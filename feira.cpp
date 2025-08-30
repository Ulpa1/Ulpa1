#include <iostream>
using namespace std;

int main(){
int n, t, cont;
cin>>n>>t;
int i, a[n][t+1], d[n],c, total= 0,s,l, low, lowp,lowi;

    for(i=0; i<n; i++){
            for(c=0; c<t+1; c++){
                a[i][c] = 0;
            }
    }


    for(i=0; i<n; i++){
            cin>>d[i];
    }

        for(i=0; i<n; i++){
            cin>>a[i][d[i]];
    }
cin>>s;
    for(i=0; i<s; i++){

            cin>>l;

            low = 0;
            lowp= 0;
            lowi=0;

            if (l !=0){
                for(cont=0; cont<n; cont++){
                //a[cont][L]
                    if (low > a[cont][l] && a[cont][l] != 0){
                        low=a[cont][l];
                        lowp=cont;
                    }
                    if(low == 0){
                        low=a[cont][l];
                        lowp=cont;
                    }



                }

                total+=low;
                a[lowp][l]= 0;
            }
            else{
                for(c=1; c<t+1; c++){
                    for(cont=0; cont<n; cont++){
                        if (low > a[cont][c] && a[cont][c] != 0){
                            low=a[cont][c];
                            lowp=cont;
                    }
                    if(low == 0){
                        low=a[cont][c];
                        lowp=cont;
                        lowi= c;
                    }
                    if(low == a[cont][c]){
                        if(c<lowi){
                            lowi=c;
                        }
                    }






            }
    }
    a[lowp][lowi]=0;


    total= low+ total;

            }
cout<<low<<"\n";
    }
cout<<total;


}
