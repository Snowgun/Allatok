#ifndef ALLATOK_H
#define ALLATOK_H
using namespace std



;template <class c>
class Allatok<class c>{
public:
    template<class C>
    class Allatok{
    private:
        string name;
        int hunger;
    public:
        void setName(string n);

        void serialize(string filename);

        void setHungry(int sup);
        int gethunger();
        void eszik(C zsakmany);
    };



};


#endif // ALLATOK_H
