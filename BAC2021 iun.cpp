///SIII ex 1

#include <iostream>
#include <fstream>
using namespace std;

int suma(int a,int b)
{
  int d,s=0,r,a1,b1;
  a1=a;
  b1=b;
  while(b!=0)
  {
    r=a%b;
    a=b;
    b=r;
  }
  for(d=1;d<=a;d++)
  {
    if(a%d==0)
    {
      s+=d;
    }
  }
}

}
int main() {
  ifstream cin("test.in");
  int a,b;
  cin>>a>>b;
  cout<<suma(a,b);
 
}

///SIII ex 3

#include <iostream>
#include <fstream>
using namespace std;

int main(){=
    ifstream cin("bac.in");
    ofstream cout("bac.out");
    int x, a,b,r, ok = 0,max1=-1,max2=-1;
    cin>>x;
    cin>>a;
    if(a%1000==x){
      max1=a;
      max2=a;
      ok=1;
    }
    while (cin >> b){  
      if(b%1000==x){ ///daca elem crt este valid
        if(ok==1){ ///daca elem ant este valid atunci retin perechea max1,max2
          max1=a;
          max2=b;
        }
        ok=1;
      }
      else{
        ok=0;
      }
      a=b;
    }
  if(max1==-1 && max2==-1 && ok==0){
    cout<<"NU EXISTA";
  }
  else{
    cout<<max1<<" "<<max2;
  }
    return 0;
}

///trateaza probl cu sufix in loc de prefix
/**
#include <iostream>

using namespace std;

int main() {
    int x, a = -1, b = -1, nr, aux;
    bool ok = false, last = false;
    cin >> x;
    while(cin >> nr) {
        aux = nr;
        while(aux > 999) {
          aux = aux / 10;
        }
        if(aux == x && last == false) {
            last = true;
            a = nr;
        }
        if(aux == x && last == true) {
            b = nr;
            ok = true;
        }
        if(aux != x) last = false;
    }
    if(ok == true) cout << a << ' ' << b;
    else cout << "nu exista";
    return 0;
}
**/

