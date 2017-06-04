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
    std::vector<sajt> sajthalmaz;
    int cheesenumba,micenumba;
    cout << "number of cheese slices:\n";
    cin >> cheesenumba;
    cout << endl << "number of mice:\n";
    cin >> micenumba;
    system("cls");

    for (unsigned i = 0; i < cheesenumba; ++i){
        sajthalmaz.push_back(sajt (1, pair<int, int>(sajtdis(sajtmt),sajtdis(sajtmt))));
    }

    std::vector<Eger> egerhalmaz;
    for (unsigned i = 0; i < micenumba; ++i){
        egerhalmaz.push_back(Eger ( pair<int, int>(sajtdis(sajtmt),sajtdis(sajtmt))));
    }

    while(sajthalmaz.size()!=0){


        for(size_t i=0;i<egerhalmaz.size();i++){
            egerhalmaz[i].coord=alszok(egerhalmaz[i].coord);
        }


        for(size_t i=0;i<egerhalmaz.size();i++){
            sorszam[egerhalmaz[i].coord.first][egerhalmaz[i].coord.second]="M";
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
    return 0;
}
