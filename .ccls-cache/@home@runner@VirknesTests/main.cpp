#include <iostream>
#include <vector>
using namespace std;
static vector<string>jautajumi;
static vector<string>parAtbildes = {"b", "d", "c"};
static string atbilde;

void Noteikumi(){
    cout<<"               TESTS PAR SIMBOLU VIRKNĒM UN AR TĀM LIETOJAMĀM FUNKCIJĀM\nIr 10 jautājumi un 4 atbilžu varianti(a, b, c, vai d), tikai 1 pareizais. \n!Atbildi raksti ar vienu mazo burtu! \n__________________________________________________________________________________________\n\n";
}
void Jautajumi(){
  jautajumi.push_back("Cikos veidos var izveidot simbolu virkni? \na) 1\nb) 2\nc) 3\nd) 4\n");
  jautajumi.push_back("Kura datu tipa vērtību secība ir simbolu virkne? \na) int\nb) bool\nc) float\nd) char\n");
  jautajumi.push_back("Kuru funkciju var izmantot, lai noteiktu simbolu virknes(string) garumu? \na) tikai length()\nb) tikai size()\nc) length() un size()\nd) nav pareizās atbildes\n");
}
void Tests(){
  for(int i=0; i<jautajumi.size(); i++){
    bool pareizi = false;
    cout<<jautajumi[i];
    cin>>atbilde;
    if(atbilde==parAtbildes[i]){
      cout<<"Pareizi!\n";
      pareizi = true;
    }else{
      cout<<"Nepareizi, mēģini vēl!\n";
      i--;
    }
  }
}
void Rezultats(){
  
}

int main() {
Noteikumi();
Jautajumi();
Tests();
  
}