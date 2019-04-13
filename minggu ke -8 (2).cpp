#include <iostream>
using namespace::std;

double input (string text){
double nilai;
cout<<"input nilai "<<text<<" : "; cin>>nilai;
return nilai;
}

void grade (double nilai){
if (nilai>80)
    cout<<"\nnilai anda : A";
else if(nilai>60)
    cout<<"\nnilai anda : B";
else if (nilai>40)
    cout<<"\nnilai anda : C";
else if (nilai>20)
    cout<<"\nnilai anda : D";
else
    cout<<"\nnilai anda : E";
}
struct ger {
double uts,uas,tgs,asn,nilai;};


main(){
float nilai;
    ger hh;

hh.uts = input("uts");
hh.uas = input("uas");
hh.tgs = input("tugas");
hh.asn = input("absen");
nilai = (hh.uts*20/100) + (hh.uas*30/100) + (hh.tgs*35/100) + (hh.asn*15/100);
cout<<"nilai akhir anda : "<<nilai<<endl;
grade(nilai);


//cout<<"masukan nilai uts : ";cin>>uts;
//cout<<"masukan nilai uas : ";cin>>uas;
//cout<<"masukan nilai tugas : ";cin>>tgs;
//cout<<"masukan absen : ";cin>>asn;

//s=uts*20/100; cout<<"\nnilai uts : "<<s;
//r=uas*30/100; cout<<"\nnilai uas : "<<r;
//t=tgs*35/100; cout<<"\nnilai tugas : " <<t;
//g=asn*15/100; cout<<"\nabsen : " <<g;

//nilai=s+r+t+g; cout<<"\ntotal : " <<nilai;

//if (nilai>80){cout<<"\nA";}
//else if(nilai>60){cout<<"\nB";}
//else if (nilai>40){cout<<"\nC";}
//else if (nilai>20){cout<<"\nD";}
//else {cout<<"\nE";}





}

