II.3
   #include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct meteo 
{ int an, temperatura; 
}x;
/*
<10 RACOROS
>=10 && <=11 NORMAL
>11 CALDUROS
  */
int main() {
if(x.temperatura > 11) cout << "CALDUROS";
else if(x.temperatura < 10) cout << "RACOROS";
else cout << "NORMAL";
 
  return 0;
}

III.1
   void schimb_cata(int &n, int x, int p){
  int e=1,st,dr;
  for(int i=1; i<=p; i++){
    e=e*10;
  }
  dr=n%e;
  st=n/e;
  n=(st/10*10+x)*e+dr;
}


III.2
   #include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[51],voc[6]="aeiou",vp;
    cin.getline(s,50);
    for(int i=0;i<strlen(s);i++){
       if(strchr("aeiou",s[i])==NULL){ ///test s[i] consoana
         for(int j=4;j>=0;j--){
           if(voc[j]<s[i]){
             s[i]=voc[j];
             break;
           }
         }
       }
    }
  cout<<s;
    return 0;
}

III.3
   
   #include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream cin("bac.in");
    int x, y, k = 1, lmax = 0, nr_secv = 0;
    /// k=lung secv curente
    cin >> x;
    while(cin >> y)
    {
        if(x % 2 == y % 2)
        {
            k++;
        }
        else
        {
            if(k > lmax)
            {
                lmax =  k;
                nr_secv = 1;
            }
            else if(k == lmax)
            {
                nr_secv ++;
            }
            k = 1; /// am o secv ce contine doar y
        }

    x=y;
    }

if(k > lmax)
{
    lmax =  k;
    nr_secv = 1;
}
else if(k == lmax)
{
    nr_secv ++;
}
cout << nr_secv  << " " << lmax;
return 0;
}
