#include <iostream>

using namespace std;

int main()
{
   int giorno;
   int mese;
   int anno;

   /* primavera da 20/03 a 20/06
      estate    da 21/06 a 22/09
      autunno   da 23/09 a 21/12
      inverno   da 22/12 a 19/03
   */

   cout << "Inserisci una data nel formato gg/mm/anno." << endl;
   cout << " Es. 5/9/2018." << endl;
   cout << "Giorno: "; cin >> giorno;
   cout << "Mese: "; cin >> mese;
   cout << "Anno: "; cin >> anno;



    if (mese >= 3 && mese <= 6){
        if( giorno < 20 && mese == 3){
            cout << "e' inverno" << endl;
            }
        
        else if (giorno > 20 && mese == 6 ){
            cout << "e' estate" << endl;
        }
        else{
            cout << "e' primavera"<< endl;}
    }
    else if(mese >= 7 && mese <= 9) {
        if (giorno > 22 && mese == 9){
            cout << "e' autunno" << endl;
        }
        else{
            cout << "e' estate" << endl;}

    }
    else if (mese >= 10 && mese <= 12){
        if (giorno > 20 && mese == 12){
            cout << "e' inverno" << endl;
        }
        else{
            cout << "e' autunno" << endl;}
    }
    else if (mese >= 1 && mese < 3){
        cout << "e' inverno" << endl; 
    }

}