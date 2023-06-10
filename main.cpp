#include <iostream>
#include <vector>
using namespace std;
static vector<string>jautajumi;
static vector<string>parAtbildes = {"b", "d", "c", "a", "d", "d", "c", "a"};
static string atbilde;
static int noPirmasReizes = 0;

void Noteikumi(){
    cout<<"               TESTS PAR SIMBOLU VIRKNĒM UN AR TĀM LIETOJAMĀM FUNKCIJĀM\nIr 10 jautājumi un 4 atbilžu varianti(a, b, c, vai d), tikai 1 pareizais. \n!Atbildi raksti ar vienu mazo burtu! \n__________________________________________________________________________________________\n\n";
}
void Jautajumi(){
  jautajumi.push_back("Cikos veidos var izveidot simbolu virkni? \na) 1\nb) 2\nc) 3\nd) 4\n");
  jautajumi.push_back("Kura datu tipa vērtību secība ir simbolu virkne? \na) int\nb) bool\nc) float\nd) char\n");
  jautajumi.push_back("Kuru funkciju var izmantot, lai noteiktu simbolu virknes(string) garumu? \na) tikai length()\nb) tikai size()\nc) length() un size()\nd) nav pareizās atbildes\n");
  jautajumi.push_back("Kas ir jāizmanto kopā ar funkciju tolower(), lai pārrakstitu simbolu virkni(string) ar maziem burtiem? \na) for cikls un funkciju length()\nb) do...while cikls\nc) sazarojuma konstrukcija\nd) Ir pietiekams tikai ar funkciju tolower()\n");
  jautajumi.push_back("Salīdzinot divas simbolu virknes(string), kura vērtība tiek atgriezta, ja vārdi ir alfabēta secībā? \na) ==0\nb) >0\nc) >=0\nd) <0\n");
  jautajumi.push_back("Kurš simbols noslēdz ar char tipa masīvu izveidoto simbolu virkni? \na) *\nb) /0\nc) $\nd) nav pareizās atbldes\n");
  jautajumi.push_back("Kurā bibliotēkā tiek definētas specializētas funkcijas darbam ar simbolu masīviem? \na) <algorithm>\nb) <iostream>\nc) <cstring>\nd) <string>\n");
  jautajumi.push_back("Kura funkcija jāizmanto, lai pievienot vienu simbolu masīvu otram galā? \na) strcat()\nb) strcpy()\nc) strcmp()\nd) strcmpi()\n");
}
void Tests(){
  for(int i=0; i<jautajumi.size(); i++){
    bool pareizi = false;
    int meginajumi = 0;
    cout<<i+1<<". "<<jautajumi[i];
    cin>>atbilde;
    if(atbilde==parAtbildes[i]){
      if(meginajumi==0)
      noPirmasReizes++;
      cout<<"Pareizi!\n\n";
      pareizi = true;
      
    }else{
      cout<<"Nepareizi, mēģini vēl!\n";
      i--;
      meginajumi++;
    }
  }
}
void Rezultats(){
  cout<<"Tu atbildēji uz "<<noPirmasReizes<<" jautājumiem!";
}

int main() {
Noteikumi();
Jautajumi();
Tests();
Rezultats();
  
}