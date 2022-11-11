#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
int zamiana ( float liczba, int podstawa, int dokladnosc);
int main()
{
    cout<<"Wprowadz liczbe DODATNIA: "<<endl<<"Jesli wprowadzasz liczbe rzeczywista, w jej zapisie uzywaj kropki."<<endl<<"Uzycie przecinka spowoduje zamkniecie programu"<<endl;
    float liczba;
    cin>>liczba;
    if(liczba<0)
    {
        cout<<"Podano ujemna liczbe, sprobuj ponownie"<<endl;
    }
    if(liczba==0)
    {
        cout<<"Wprowadzona liczba jest rowna 0, sprobuj ponownie"<<endl;
    }
    if(liczba>0)
    {



    cout << "Wprowadz podstawe od 2 do 16: " << endl;
    int podstawa;
    cin>>podstawa;
    cout<< "Wprowadz dokladnosc: "<<endl;
    int dokladnosc;
    cin>>dokladnosc;
    zamiana(liczba,podstawa,dokladnosc);
    }


    return 0;
}
int zamiana(float liczba, int podstawa, int dokladnosc)
{
    int pomnozenie;
    pomnozenie= int(liczba * pow(podstawa, dokladnosc));
    vector<char>przeliczona;
    //vector<char>poza10;
    while(pomnozenie>0)
    {
        int wynik;
        wynik=pomnozenie%podstawa;
        cout<<"WYNIK"<<wynik<<endl;

        if(wynik==0)
        {
            przeliczona.push_back('0');
           int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==1)
        {
            przeliczona.push_back('1');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==2)
        {
            przeliczona.push_back('2');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==3)
        {
            przeliczona.push_back('3');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==4)
        {
            przeliczona.push_back('4');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==5)
        {
            przeliczona.push_back('5');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==6)
        {
            przeliczona.push_back('6');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==7)
        {
            przeliczona.push_back('7');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==8)
        {
            przeliczona.push_back('8');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==9)
        {
            przeliczona.push_back('9');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==10)
        {
            przeliczona.push_back('A');
            double y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==11)
        {
            przeliczona.push_back('B');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==12)
        {
            przeliczona.push_back('C');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==13)
        {
            przeliczona.push_back('D');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==14)
        {
            przeliczona.push_back('E');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }
        if(wynik==15)
        {
            przeliczona.push_back('F');
            int y=pomnozenie;
            pomnozenie=y/podstawa;
        }


    }


    for(int i=przeliczona.size()-1;i>=0;i--) {
        cout << przeliczona[i];
        if (dokladnosc == 0) {}
        else if (i == dokladnosc) { cout << ","; }

    }


}