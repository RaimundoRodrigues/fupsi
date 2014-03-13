//HB
#include <iostream>
#include <cmath>

using namespace std;

#define GREEN "\033[1;32m"
#define RED   "\033[1;31m"
#define DEF   "\033[1;37m"
#define RESET "\033[0m"
#define BACKBLACK "\033[40m"
#define WHITE "\033[1;32m"
#define CLS "\033[2J"

class Tester
{
private:
    int value;//valor da questao corrente
    int sum;//total apurado
    bool win; //se a questao esta correta
    int question;//numero da questao

    bool fequal(double a, double b)
    {
        return fabs(a - b) < (1.0E-8);
    }
public:
    Tester():sum(0), win(true), question(0) {
        cout << BACKBLACK;
        cout << DEF << CLS;
    }
    void open(string nome, int _value)
    {
        value = _value;
        win = true;
        question ++ ;
        cout << question << ". " <<  nome << " :: "<< value << " pts"<< DEF << endl << "   ";
    }

    void  close()
    {
        if(win)
        {
            cout << endl << GREEN << "   Sucesso!!! " << "\n  " << DEF << endl;
            sum += value;
        }
        else
            cout << endl << RED   << "   Nao Ainda!"  << "\n  " << DEF << endl;
    }

    void operator << (bool b)
    {
        add(b);
    }

    void add (bool b)
    {
        win = (win && b);
        cout << win;
    }


    void add(bool a, int b){
        add(a == b);
    }

    void add(bool a, bool b){
        add(a == b);
    }

    void add(int a, bool b){
        add(a == b);
    }

    void add(double a, double b){
        add(fequal(a, b));
    }
    void add(double a, int b){
        add(fequal(a, (double)b));
    }
    void add(int a, double b){
        add(fequal((double)a, b));
    }

    void space()
    {
        cout << " " ;
    }

    template <typename T>
    bool vetcmp(T a, T b, int tam){
        for(int i = 0; i < tam ; i++)
            if(a[i] != b[i])
                return false;
        return true;
    }

    int total()
    {
        cout << "Total de Pontos" << "  " << sum << " pts" << endl;
        cout << RESET;
        return sum;

    }
};

