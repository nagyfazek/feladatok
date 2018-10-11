#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    //Változók felvétele


    double a=0;
    double osszeg=0;
    string mertekegyseg="";
    double smallest_value;
    double largest_value;
    vector <double> v;

    //Ciklus kezdete


    while(mertekegyseg!="|"){
        cout<<"Adj meg egy számot!\n";
        cin>>a;
        cout<<"Adj meg egy mértékegyságet!(cm,m,in,ft), kilépéshez írj |-t\n";
        cin>>mertekegyseg;


    //Mértékegység vizsgálat


        if (mertekegyseg == "m"){
            v.push_back(a);
        }
            else{

                if (mertekegyseg == "cm"){
                v.push_back(a/100);
        }
            else{
                if (mertekegyseg == "in"){
                v.push_back(a*0.0254);
        }
            else{

                if (mertekegyseg ==  "ft"){
                v.push_back(a*0.3048);
        }
            else{
                if( mertekegyseg=="|"){
                    cout<<"On kilépett a ciklusból.\n";
                }
            else{
                cout<<"Rossz mértékegység lett megadva!"<<endl;

            }
                }
                    }
                        }
                            }
    }


    //Elemek összege


        for(int i=0;i<v.size();i++){
            osszeg+=v[i];
                            }

    //Legnagyobb érték


        largest_value=v[0];
        for(int i=0;i<v.size();i++){
                if(v[i]>largest_value){
                    largest_value=v[i];
                                        }

                    }


    //Legkisebb érték


        smallest_value=v[0];
        for(int i=0;i<v.size();i++){
                if(v[i]<smallest_value){
                    smallest_value=v[i];
                                        }

                    }


    //Vektor elemeinek rendezése


for(int i=0;i<v.size()-1;i++){
    for(int j=i+1;j<v.size();j++){
        if(v[i]>v[j]){
            double csere=v[i];
            v[i]=v[j];
            v[j]=csere;
        }
    }
}

cout<<"\n";
cout<<"\n";
cout<<"\n";


//A rendezett vektor kiíratása

cout<<"A bekért értékek növekvő sorrendben:\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"m ";
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";


    //A kért értékek kiíratása


    cout<<"A legkisebb érték: "<<smallest_value<<"m"<<endl;
    cout<<"A legnagyobb érték: "<<largest_value<<"m"<<endl;
    cout<<v.size()<<"db érték lett megadva."<<endl;
    cout<<"Az értékék összege: "<<osszeg<<"m"<<endl;



    return 0;
}
