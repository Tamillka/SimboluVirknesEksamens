#include <iostream>
#include <vector>
using namespace std;
void Noteikumi();
void Jautajumi();
void Tests();
void Rezultats();
static vector<string>jautajumi;
static vector<string>parAtbildes = {"b", "d", "c", "a", "d", "d", "c", "a", "b", "c"};
static string atbilde;
static int noPirmasReizes = 0;

int main() {
Noteikumi();
Tests();
Rezultats();
}

void Noteikumi(){
    cout<<"                 TESTS PAR SIMBOLU VIRKNĒM UN AR TĀM LIETOJAMĀM FUNKCIJĀM\nParbaudi savas zināšanas! Ir 10 jautājumi un 4 atbilžu varianti(a, b, c, vai d), tikai 1 pareizais. \n!Atbildi raksti ar vienu mazo burtu! \n__________________________________________________________________________________________________\n\n";
}
void Jautajumi(){
  jautajumi.push_back("Cikos veidos var izveidot simbolu virkni? \na) 1\nb) 2\nc) 3\nd) 4\n");
  jautajumi.push_back("Kura datu tipa vērtību secība ir simbolu virkne? \na) int\nb) bool\nc) float\nd) char\n");
  jautajumi.push_back("Kuru funkciju var izmantot, lai noteiktu simbolu virknes(string) garumu? \na) tikai length()\nb) tikai size()\nc) length() un size()\nd) nav pareizās atbildes\n");
  jautajumi.push_back("Kas ir jāizmanto kopā ar funkciju tolower(), lai pārrakstītu simbolu virkni(string) ar maziem burtiem? \na) for cikls un funkcija length()\nb) do...while cikls\nc) sazarojuma konstrukcija\nd) Ir pietiekams tikai ar funkciju tolower()\n");
  jautajumi.push_back("Salīdzinot divas simbolu virknes(string), kura vērtība tiek atgriezta, ja vārdi ir alfabēta secībā? \na) ==0\nb) >0\nc) >=0\nd) <0\n");
  jautajumi.push_back("Kurš simbols noslēdz ar char tipa masīvu izveidoto simbolu virkni? \na) *\nb) /0\nc) $\nd) nav pareizās atbldes\n");
  jautajumi.push_back("Kurā bibliotēkā tiek definētas specializētas funkcijas darbam ar simbolu masīviem? \na) <algorithm>\nb) <iostream>\nc) <cstring>\nd) <string>\n");
  jautajumi.push_back("Kura funkcija jāizmanto, lai pievienot vienu simbolu masīvu otram galā? \na) strcat()\nb) strcpy()\nc) strcmp()\nd) strcmpi()\n");
  jautajumi.push_back("Kuru funkciju var izmantot, lai uzzinātu simbolu masīva garumu? \na) size()\nb) strlen()\nc) length()\nd) visas iepriekš minētas\n");
  jautajumi.push_back("Kas tiks izvadīts ekrānā, ja simbolu masīvam A kā vertību pievieno vārdu 'LabDien' un izmanto rindiņu cout<<strupr(A)? \na) labdien\nb) lABdIEN\nc) LABDIEN\nd) LABdien\n");
}
void Tests(){
  Jautajumi();
  for(int i=0; i<jautajumi.size(); i++){ 
     bool pareizi = false;
      int meginajumi = 0;
    while(pareizi == false){      
      cout<<i+1<<". "<<jautajumi[i];
      cin>>atbilde;
      if(atbilde == parAtbildes[i]){      
        if(meginajumi == 0)
        noPirmasReizes++;
        cout<<"Pareizi!\n\n";
        pareizi = true;      
      }else{
        cout<<"Nepareizi, mēģini vēl!\n";
        meginajumi++;
      }
    }
  }
}
void Rezultats(){
  cout<<"----------------------------------------------------------------\n\n";
  if(noPirmasReizes == 1)
  cout<<"Tests pabeigts. Tu atbildēji uz "<<noPirmasReizes<<" jautājumu no pirmās reizes!";
  else   cout<<"Tests pabeigts. Tu atbildēji uz "<<noPirmasReizes<<" jautājumiem no pirmās reizes!";
}