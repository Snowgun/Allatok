#include <iostream>
#include <array>
#include <utility>
#include <random>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <allat.h>
#include <eger.h>
#include <cica.h>
#include <string>
#include <sajt.h>
#include<vector>

using namespace std;


random_device rd;
mt19937 mt(rd());
uniform_int_distribution<> dis(0,3);


random_device sajtdevice;
mt19937 sajtmt(sajtdevice());
uniform_int_distribution<> sajtdis(0,19);

    array<array<string,20>,20> sorszam;
    pair<int,int> alszok(pair<int,int> coord){
        int ujirany = dis(mt);
        if(ujirany==0){
            coord.first--;
        }
        else if(ujirany==1){
            coord.second++;
        }
        else if(ujirany==2){
            coord.first++;
        }
        else{
            coord.second--;
        }

        if(coord.first<0){
            coord.first=19;
        }
        else if(coord.first>19){
            coord.first=0;
        }
        if(coord.second<0){
            coord.second=19;
        }
        else if(coord.second>19){
            coord.second=0;
        }
        return coord;
    }

int main(){
    int cheesenumba,micenumba,catnumba;
    cout << "number of cheese slices(max 20):\n";
    cin >> cheesenumba;
    while(cheesenumba>20 || cheesenumba<1){
        cout << "Please write an integer number between 1 and 20\n";
        cin >> cheesenumba;
    }
    cout << endl << "number of mice(max 20):\n";
    cin >> micenumba;
    while(micenumba>20 || micenumba<1){
        cout << "Please write an integer number between 1 and 20\n";
        cin >> micenumba;
    }
    cout << endl << "number of kittens(max 20):\n";
    cin >> catnumba;
    while(catnumba>20 || catnumba<1){
        cout << "Please write an integer number between 1 and 20\n";
        cin >> catnumba;
    }
    system("cls");

    std::vector<sajt> sajthalmaz;
    for (unsigned i = 0; i < cheesenumba; ++i){
        sajthalmaz.push_back(sajt (1, pair<int, int>(sajtdis(sajtmt),sajtdis(sajtmt))));
    }

    std::vector<Eger> egerhalmaz;
    for (unsigned i = 0; i < micenumba; ++i){
        egerhalmaz.push_back(Eger ( pair<int, int>(sajtdis(sajtmt),sajtdis(sajtmt))));
    }
    std::vector<Cica> cicahalmaz;
    for(unsigned i = 0;i < catnumba;++i){
        cicahalmaz.push_back(Cica(360,"noname",pair<int,int>(sajtdis(sajtmt),sajtdis(sajtmt))));
    }

    while(!(sajthalmaz.size()==0 || egerhalmaz.size()==0) ){

        for(size_t i=0;i<cicahalmaz.size();i++){
            cicahalmaz[i].coord=alszok(cicahalmaz[i].coord);
        }
        for(size_t i=0;i<cicahalmaz.size();i++){
            sorszam[cicahalmaz[i].coord.first][cicahalmaz[i].coord.second]="K";
        }


        for(size_t i=0;i<egerhalmaz.size();i++){
            egerhalmaz[i].coord=alszok(egerhalmaz[i].coord);
        }
        for(size_t egeres=0;egeres<egerhalmaz.size();egeres++){
            for(size_t cicas=0;cicas<cicahalmaz.size();cicas++){
                if(cicahalmaz[cicas].coord.first==egerhalmaz[egeres].coord.first && cicahalmaz[cicas].coord.second==egerhalmaz[egeres].coord.second){
                    egerhalmaz.erase(egerhalmaz.begin() + egeres);
                }
                else{
                    sorszam[egerhalmaz[egeres].coord.first][egerhalmaz[egeres].coord.second]="M";
                }
            }
        }


        for(size_t sajtos=0;sajtos<sajthalmaz.size();sajtos++){
            for(size_t egeres=0;egeres<egerhalmaz.size();egeres++){
                if(egerhalmaz[egeres].coord.first==sajthalmaz[sajtos].coord.first && egerhalmaz[egeres].coord.second==sajthalmaz[sajtos].coord.second){
                    sajthalmaz.erase(sajthalmaz.begin() + sajtos);
                }
                else{
                    sorszam[sajthalmaz[sajtos].coord.first][sajthalmaz[sajtos].coord.second]="C";
                }
            }
        }


    for(int x=0;x<20; x++){
        for(int y=0;y<20;y++){
            cout << sorszam[x][y];
            sorszam[x][y]=" ";

        }
        cout << endl;
    }
    this_thread::sleep_for(chrono::milliseconds(40));
    system("cls");
    }
    if(egerhalmaz.size()==0){
        cout <<"The kittens win.\n";
    }
    else{
        cout <<"The mice win.\n";
    }
    return 0;
}
