//Carica, visualizzare e stampare l'elemento maggiore.


#include <iostream>


using namespace std;

const int dimensioneMax = 10;

//prototipi
void InserimentoeCarica(int v[], int &n);
void visualizza(int v[], int n);
void maggiore(int v[], int n);
int Menu();




int main() {

  int N=0;
  int vettore[dimensioneMax];
  int scelta;

  
  do{
      scelta=Menu();
      switch(scelta){
        case 1:
          InserimentoeCarica(vettore,N);
          break;
        case 2:
          visualizza(vettore,N);
          break;
        case 3:
          maggiore(vettore,N);
          break;
        case 0:
          cout<<"Esci"<<endl;
          break;	
        default:
          cout<<"Attenzione, scelta sbagliata!"<<endl;
          break;
      } 
  }while (scelta!=0);
  


}

int Menu(){
  int scegli;
  cout<<"-------MENU'-------"<<endl;
  cout<<"1-Inserisci un numero (n) e carica il vettore"<<endl;	
  cout<<"2-Visualizza il vettore"<<endl;	
  cout<<"3-Trova il numero maggiore all'interno del vettore"<<endl;
  cout<<"0-Fine"<<endl;	

    cout<<"Scegli un operazione: "<<endl;
    cin>>scegli;

    return scegli;	
}

void InserimentoeCarica(int v[], int &n){

  do {
    cout<<"Inserisci la dimensione del vettore: ";
    cin>>n;
    if (n>dimensioneMax) {
      cout<<"Hai sforato la dimensione massima definita per il tuo vettore!"<<endl;
    }
  }while(n<0 || n>dimensioneMax);

  int i=0;

  while(i<n) {
    cout<<"Inserisci il "<<i+1<<"° numero: ";
    cin>>v[i];
    i++;
  }
  cout<<endl;

  
}


void visualizza(int v[], int n){

  int i=0;


  cout<<endl;
  cout<<"Elementi del tuo vettore sono: "<<endl;
  while(i<n) {
    cout<<v[i]<<endl;
    i++;
  }
  cout<<endl;

}
void maggiore(int v[], int n){

  int i=0;
  int valoreMassimo=0;

  while(i<n) {
    if(v[i]>valoreMassimo){
      valoreMassimo=v[i];
    }
    i++;
  }


  cout<<"L'elemento maggiore del tuo vettore e' "<<valoreMassimo<<endl;
  cout<<endl;
  
}
