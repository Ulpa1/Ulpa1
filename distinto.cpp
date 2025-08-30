#include <iostream>
using namespace std;

int main(){

    long long l,a, b;
    int cont = 0, v=0, f=0;
    int p, i;
    cin>>p;
    for(i=0;i<p;i++){
    cin>>l>>a>>b;
    cont = a;
    v = 0;
    f = 0;

    while(cont<=b && v<l){
            v+=cont;
            f++;
            cont++;

    }
   cout<<f<<"\n";
    }

}
