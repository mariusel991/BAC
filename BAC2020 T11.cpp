S1:
1.d 
2.d
3.a
4.b
5.c

S2:
1. 

a)10
b)1111, 1110, 1100
c)
#include <iostream>

using namespace std;

int main() {
    int n,m=0,c;
    cin>>n;
    if(n==0) m=10;
    else{
        do{
            c=n%10;
            n/=10;
            if(c>=m){
                m=c;
            }
            else{
                m=10;
            }
        }
        while(n!=0);
    }
    cout<<m;
    return 0;
}

d) citeste n (numar natural)
   m<-0
   daca n=0 atunci
	m<-10
   sfarsit daca
   altfel
      cat timp n≠0 executa
	  c<-n%10
	  n<-[n/10]
	  daca c>=m atunci
		m<-c
	  sfarsit daca
	  altfel
  	      m<-10
	  sfarsit altfel
      sfarsit cat timp
   sfarsit altfel
   scrie m
2.

struct sera{
	int numar;
    struct{
		char denumireStiintifica[20],denumirePopulara[20]
	}specie[100];
}s;

///SII ex 3
#include <iostream>

using namespace std;

int main() ///antetul functiei main
{      
  int a[7][7],p=1,i,j;
  for(i=0;i<7;i++){
      for(j=0;j<7;j++){
          cin >> a[i][j];
      }
  }
  ///scrie pe foaie de examen de aici
  for(i=0;i<7;i++){
      p=p*a[i][i];
  }
  
  for(i=6;i>=0;i--){
      cout<<p<<" ";
      p=p/a[i][i];
  }
  
  //pana aici
}

///SIII ex1
#include <iostream>
#include <fstream>


using namespace std;

void patrate(int x, int y){
  long long k=1,s=0;
  while(k*k<x){ ///construim patrate perfecte
    k++;         ///pana cand ajungem in [x,y]
  }
  if(k*k>y){
    cout<<"nu exista";
    return;   //iesire fortata din fct void
  }
  cout<<k*k;
  s+=k*k;
  k++;
  while(k*k<=y){
    s+=k*k;
    cout<<"+"<<k*k;
    k++;
  }
  cout<<"="<<s;
}

int main() {
  //ifstream cin("bac.txt");
  //ofstream cout("bac.out");
  int x,y;
  cin>>x>>y;
  patrate(x,y);
  return 0;
}


SIII ex2
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
  //ifstream cin("bac.txt");
  //ofstream cout("bac.out");
  char s[101],aux[101],cuv[101],*p;
  cin.getline(s,100);
  p=strtok(s," ");
 // for(p=strtok(s," "); p!=NULL; p=strtok(NULL," "))
  while(p!=NULL){
      strcpy(cuv,p);
     if(cuv[0]>='a' && cuv[0]<='z'){
       cuv[0]=cuv[0]-32;
     }
     for(int i=1;i<strlen(p);i++){
       if(cuv[i]>='A' && cuv[i]<='Z'){
         cuv[i]=cuv[i]+32;
       }
     }
     strcat(aux,cuv);
     strcat(aux," ");
     p=strtok(NULL," ");
  }
  strcpy(s,aux);
  cout<<s;
  return 0;
}

ex 3:
#include <iostream>

using namespace std;

int main() {
    int x,k=1,n;
    cin>>n;//citim primnul numar
    while(cin>>x){ //incepem sa citim de la al doilea numar
        if(n==x) k++;//daca gasim doua numere egale crestem aparitia acestora
        else{
            cout<<n<<" "<<k<< " ";//afisam numarul si de cate ori apare
            k=1;//resetam aparitia pentru a putea compara iar
        }
        n=x;//n devine urmatorul numar
    }
    cout<<n<<" "<<k;
    return 0;
}
/* Programul este eficient din punct de vedere al timpului de executie 
   avand o complexitate O(x), unde x repr. nr. de elem din fisier.
   Programul este eficient din punct de vedere al memoriei deoarece am
   utilizat doar 3 variabile simple de tip intreg.
   Algoritmul executa urmatorii pasi:
   -verifica daca primul numar citit este egal cu al doilea, in caz afirmativ
   ii crestem aparitia, iar in caz contrar afisam numarul si frecventa k.
   -la final actualizam valoarea lui n cu ultima valoare citita.
   */

- Simedre Patricia - test 11 - 2020
SI
1. d. !(x>2019) && !(y<2019 || y>2020) -> x<=2019 && y>=2018 && y<=2020
2.
	-cu flori
azalea=1
begonia=2
vriesea=3
	-fara flori
busuioc=4
ferigă=5

142 143 152 153 241 243 251 253 (341) 342 351 352

341= vriesea,busuioc,azalea (d)

3. 
f(2020,2) -> r 1+f(1010,2) -> 2022 (a)
f(1010,2) -> r 1+f(505,2) -> 2021
f(505,2) -> r 2020

4. n-1=16 -> n=17 (b)

5. 
9 muchii pt 5 noduri - o componenta conexa
20-5=15 (noduri izolate)
15+1=16 (componente conexe) (c)


SII
1.
a)
n=45530 m=0 c=0 n=4553 m=0
	    c=3 n=455 m=3
	    c=5 n=45 m=5
	    c=5 n=4 m=5
	    c=4 n=0 m=10
            tip 10
b) 1111 1110 1000
citeşte n (număr natural)
m<-0
┌dacă n=0 atunci
│ m<-10
│altfel
│┌cat timp n<>0 executa
││ c<-n%10; n<-[n/10]
││┌dacă c≥m atunci
│││ m<-c
│││altfel
│││ m<-10
││└■
│└■
└■
scrie m

2. 
struct sera{
int numar;
	struct{
	char denumireStiintifica[20],denumirePopulara[20]
	} specie[100];
}s;

SIII
2.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin.getline(s,101);
    for(int i=0; i<=strlen(s)-1; i++){
     if(isupper(s[i])){
            s[i]=s[i]+32;
        }
    }
    s[0]=s[0]-32;
    for(int i=0; i<=strlen(s)-1; i++){
        if(s[i]==' ')
        s[i+1]=s[i+1]-32;
    }
    cout<<s;
    return 0;
}
