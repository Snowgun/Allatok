#include <iostream>
#include <array>
#include <random>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <allat.h>
#include <eger.h>
#include <cica.h>

using namespace std;

class sajt{
public:
    pair<int,int> szia;
    bool z=false;
    ~sajt(){
    }
}

int main()
{
    sajt nejacca;
    nejacca.szia.first=2;
    nejacca.szia.second=3;
    array<array<int,10>,10> sorszam;
    //sorszam[0][5][8]=1;
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<> dis(0,3);
    pair<int,int> coord(8,8);
    pair<int,int> boord(1,1);
    while(true){
        sorszam[nejacca.szia.first][nejacca.szia.second]=5;
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
            coord.first=9;
        }
        else if(coord.first>9){
            coord.first=0;
        }
        if(coord.second<0){
            coord.second=9;
        }
        else if(coord.second>9){
            coord.second=0;
        }
        sorszam[coord.first][coord.second]=1;



        int ujirany2 = dis(mt);
        if(ujirany2==0){
            boord.first--;
        }
        else if(ujirany2==1){
            boord.second++;
        }
        else if(ujirany2==2){
            boord.first++;
        }
        else{
            boord.second--;
        }

        if(boord.first<0){
            boord.first=9;
        }
        else if(boord.first>9){
            boord.first=0;
        }
        if(boord.second<0){
            boord.second=9;
        }
        else if(boord.second>9){
            boord.second=0;
        }
        sorszam[boord.first][boord.second]=1;

    for(int x=0;x<10; x++){
        for(int y=0;y<10;y++){
            if(sorszam[x][y]!=1 || sorszam[x][y]!=5){
                sorszam[x][y]=0;
            }
            //sorszam[x][y]= dis(mt);
           /*úú----------------- if(dis(mt)==0){
                sorszam[x][y]="s";
            }
            else{
                sorszam[x][y]=" ";
            }
            cout << sorszam[x][y].c_str() << " ";/úúúúúúúúúúúúúúúúúúúúúúúú-----------------*/


            cout << sorszam[x][y];
            if(sorszam[nejacca.szia.first][nejacca.szia.second]=1){
                nejacca.~sajt();
            sorszam[x][y]=0;

            }
        }
        cout << endl;
    }
    this_thread::sleep_for(chrono::milliseconds(400));
    system("cls");
    }
    return 0;
}
