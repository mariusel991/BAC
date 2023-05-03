https://profesorjitaruionel.com/wp-content/uploads/2022/02/E-d-Simulare-Constanta-BAC2022-INFO-MI-subiect.pdf?fbclid=IwAR24vCTEKqDPZ-4rZwebwQAMTniM35h-qx7jrdCeW5SKtDpDAU39bHNucxE

/**
 
S1
 
1.b
2.d
3.b
4.c
5.a
 
1 3
2 3
2 5
3 5
4 6
 
S2
 
1.
Citește n (numar natural)
m<-0; p<-1;
 cât timp n>0 execută
 u<-n%10
 dacă u<=3 atunci m<-u*p+m
 p<-p*10
 
 n<-[n/10]
 
Scrie m;
 
a.1203
b.111
c.
d.
 
 ///SIII 3
 #include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

int main() 
{      
  int m, n, s[101], x,k=0,i,j,ant=-1;
  cin>>n;
  for(i=1; i<=n; i++){
    cin>>x;
    if(x%3==0){
      k++;
      s[k]=x;      
    }  
  }
   n=k;
   k=0;
  cin>>m>>x;
  i=1;
  j=1;
  while(i<=n && j<m){
    if(s[i]<x){
      if(s[i]!=ant){
        cout<<s[i]<<" ";
        ant=s[i];
        i++;
      }
    }
    else if(s[i]==x){
      if(s[i]!=ant){
        cout<<s[i]<<" ";
        ant=s[i];
        i++;
        j++;
        cin>>x;
      }
    }
    else if(s[i]>x){
      if(x%3==0){
        if(x!=ant){
          cout<<x<<" ";
        }
      }
      j++;
      cin>>x;
    }
  }
  if(i<=n){
    for(int cnt=i; cnt<=n; cnt++){
      if(s[cnt]!=ant){
        cout<<s[cnt]<<" ";
        ant=s[cnt];
      }
    }
  }
  if(j<=m){
    for(int cnt=j; cnt<=m; cnt++){
      if(x%3==0){
        if(ant!=x){
          cout<<x<<" ";
          ant=x;
        }
      }
      cin>>x;
    }
  }
  if(ant==-1) cout<<"nu exista";
  return 0;
}


/**
  Dpdv a timpului de exec -> Algoritmul are o complexitate O(n+m)
  Dpdv al mem alg foloseste 7 var simple si un sir de 100 elem int
  Folosim alg de interclasare pt rezolv probl adaptat pt afisarea
  val multiple de 3 si distincte doua cate doua.
  
*/
Citește n (numar natural)
m<-0; p<-1;
 daca n>0 atunci
     repeta
         u<-n%10
         dacă u<=3 atunci m<-u*p+m
            p<-p*10
         n<-[n/10]
     pana cand n<=0
 sfarsit daca
 
Scrie m;
 
2.
 
{F, O, R, M, A}
A F M O R
 
AMOR AMORF AMR AMRF
 
R: AMORF AMR AMRF
 
3.
 
k<-0.
for (i=0; i<=9; i++)
 if (a[x][i]<0 && i%3==0) k++;
cout<<k;
 
S3.
 
1.
int dublu(int n)
{
    int k=0,np=n;
    int p=1,st,dr,c;
    while(np>0)
    {
        k++;
        np/=10;
    }
    if(k%2==0)
        return -1;
    k=k/2;
    for(int i=1;i<=k;i++)
        p*=10;
    st=n/p;
    dr=n%p;
    c=st%10;
    return (st*10+c)*p+dr;
}
 
2.
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    char *p,s[255],cuv[255];
    int c=0,k=0;
    cin.getline(s,255);
    p=strtok(s," ");
    while(p!=NULL){
        strcpy(cuv,p);
        for(int i=0;i<=strlen(cuv)-1;i++)
        {
            if(cuv[i]>='0' && cuv[i]<='9')
                k++;
        }
        if(cuv[strlen(cuv)-1]>='0' && cuv[strlen(cuv)-1]<='9')
            c++;
        p=strtok(NULL," ");
    }
    cout << c << ' ' << k;
    return 0;
}
 */

SIII ex 3
  #include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
 
int main()
{
    int n,m,v[101],x,k=0,val=-1;
    int i,j;
    fin >> n;
    for(i=1;i<=n;i++){
        fin >> x;
        if(x%3==0)
        {
            k++;
            v[k]=x;
        }
    }
    fin >> m >> x;
    i=1;
    j=1;
    while(i<=k && j<=m)
    {
        while(j<=m && x%3!=0){
            fin >> x;
            j++;
        }
        if(j>m)
            break;

        if(x<v[i]){

            if(x!=val)
            {
                val=x;
                cout << x << ' ';
                fin >> x;
                j++;
            }
        }
        else
            if(x==v[i]){

                if(x!=val)
                {
                    val=x;
                    cout << x << ' ';
                    fin >> x;
                    j++;
                    i++;
                }
                else{
                    val=x;
                    fin >> x;
                    j++;
                    i++;
                }
            }
            else{
                if(x>v[i])
                {
                    if(v[i]!=val)
                    {
                        val=v[i];
                        cout << v[i] << ' ';
                        i++;
                    }
                }
            }
    }
 
    if(i<=k)
        for(int poz=i;poz<=k;poz++)
            cout << v[poz] << ' ';
    if(j<=m)
        for(int poz=j;poz<=m;poz++){
            fin >> x;
            if(x%3==0)
                cout << x << ' ';
        }
    return 0;
}
