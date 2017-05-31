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
};

int main()
{

    Cica c(2, "Tom");
    Eger e;

    c.setHungry(5);
    e.setHungry(6);
    std::cout << c.gethunger() << " " << e.gethunger() << endl;

    //sajt nejacca;
    //nejacca.szia.first=2;
    //nejacca.szia.second=3;
    array<array<string,10>,10> sorszam;
    //sorszam[0][5][8]=1;
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<> dis(0,3);
    pair<int,int> coord(8,8);
    //pair<int,int> boord(1,1);
    while(true){
        //sorszam[nejacca.szia.first][nejacca.szia.second]="s";
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
        sorszam[coord.first][coord.second]="s";


    for(int x=0;x<10; x++){
        for(int y=0;y<10;y++){
            //if(sorszam[x][y]!="s"){
            //    sorszam[x][y]=" ";
            //}
            //sorszam[x][y]= dis(mt);
           /*úú----------------- if(dis(mt)==0){
                sorszam[x][y]="s";
            }
            else{
                sorszam[x][y]=" ";
            }
            cout << sorszam[x][y].c_str() << " ";/úúúúúúúúúúúúúúúúúúúúúúúú-----------------*/


            cout << sorszam[x][y];
            sorszam[x][y]=" ";
            //if(sorszam[nejacca.szia.first][nejacca.szia.second]=1){
            //    nejacca.~sajt();
            //    sorszam[x][y]=0;
            //}
        }
        cout << endl;
    }
    this_thread::sleep_for(chrono::milliseconds(400));
    system("cls");
    }
    return 0;
}
