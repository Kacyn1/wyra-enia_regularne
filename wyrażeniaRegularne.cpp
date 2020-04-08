#include <iostream>
#include <fstream>
#include <regex>
#include <string>

using namespace std;

class regularne_w{
       ifstream plik1;
       ofstream plik2;

  public:
        regularne_w();
        ~regularne_w();
       
    void sprawdz_regularne();        
};

regularne_w::regularne_w(){
    plik1.open("c:\\p1.txt");
    plik2.open("c:\\p2.txt");
}
void regularne_w::sprawdz_regularne(){
		string kod;
		regex regularne("[0-9]{2}-[0-9]{3}");
	while(!plik1.eof()){
			plik1>>kod;
		if(regex_match(kod,regularne)){
			plik2<<kod<<endl;
		}
	}	              
}

	regularne_w::~regularne_w(){
    	plik1.close();
    	plik2.close();
}

int main() {
    regularne_w s1;
    s1.sprawdz_regularne();
    return 0;
}
