#include <iostream>
using namespace std;
int main(){

	int islem;
	string sayilar;
    int havale;
    string kartno = "5347 5555 4711 4566";
    string miktar;
    string paramik;
    string bilgiler;
    string cekilecekmik;
	
	setlocale(LC_ALL ,"turkish");
	
	string sys_username ="taner";
	string sys_password ="123456";
	
	string username;
	string password;
	while(true){
		cout<<"kullanici adi :";
		cin>>username;
		
		cout <<"parola :";
		cin>>password;
		
		if(username == sys_username && password == sys_password){
			cout<<"hosgeldiniz..."<<username<<endl;
			break;
		}
		else if(username != sys_username && password == sys_password){
			cout<<"kullanici adi hatali..."<<endl;
		}
		else if(username == sys_username && password != sys_password){
			cout<<"parola hatali..."<<endl;
		}
		else {
			cout<<"kullanici adi ve parola hatali"<<endl;
		}
	}
	
	cout<<"yapmak istediginiz islemi seciniz..."<<endl;


	cout<<"--> 1.HAVALE"<<endl;
	cout<<"--> 2.BAK�YE B�LG�S�"<<endl;
	cout<<"--> 3.KULLANICI B�LG�S�"<<endl;
	cout<<"--> 4.KARTLARIM "<<endl;
	cout<<"--> 5.PARA CEKME"<<endl;
	cout<<"--> 6.KART IADE"<<endl;
	cin>>sayilar;


if(sayilar == "1"){
	cout<<"--->havale islemleri"<<endl;
	cout<<"havale yapilacak kart numarasini giriniz..."<<endl;
	cin>>kartno;
	
	
	cout<<"hesaba yatirilacak para miktarini giriniz..."<<endl;
	cin>>miktar;
	
	cout<<"belirtilen hesaba para aktarilmi�tir...";
	
}	
	else if(sayilar == "2"){
		cout<<"-->Bakiye Bilgisi :"<<endl;
		cout<<"Hesabinizda 17.562TL bulunmaktadir."<<endl;
		cin>>paramik;
	}
	
	else if(sayilar == "3"){
		cout<<"Kullanici Bilgileri :"<<endl;
		cout<<"Adi : Taner     Soyadi : EGEHAN    Kart no : 12233333333";
		cin>>bilgiler;
	}
	
	else if(sayilar == "4"){
		cout<<"Kartlarim "<<endl;
		cout<<"�ki adet kartiniz bulunmaktadir :"<<endl;
		cout<<"Ziraat Bankasi : 4.850TL "<<endl;
		cout<<"Is Bankasi : 17.562TL";
	}
	else if(sayilar == "5"){
		cout<<"ne kadar para cekeceksiniz"<<endl;
		cout<<"bakiye : 17.562TL"<<endl;
		cout <<"Cekilecek Miktar :";
		cin>>cekilecekmik;
		cout<<"Once kartinizi sonra parayi aliniz..."<<endl;
		
		
	}

	else{
		cout <<"kartinizi alabilirsiniz."<<endl;
		cout <<"Bizi Tercih Ettiginiz icin TESEKKURLER..."<<endl;
		
		
	}
	
	cout <<"Taner EGEHAN"<<endl;
	return 0;
}
