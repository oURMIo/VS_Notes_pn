#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdio>
#include <iterator>



using namespace std;


void newk()
{
	system("cls");
	setlocale(2,"");
	char n[25]="/0",f[25]="/0",o[25]="/0",t[25]="/0",a[25]="/0";
	ofstream fout;
	fout.open("lolo.txt", ios::app);
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Всё надо писать на английском!"<<endl<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Имя:";
	cin>> n;
	fout<< n<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Фамилию:";
	cin>> f;
	fout<< f<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Отчество:";
	cin>> o;
	fout<< o<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Телефон:";
	cin>> t;
	fout<< t<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Адрес (улица):";
	cin>> a;
	fout<< a<<endl<<endl;
	fout.close();
    system("pause");
}


void opk()
{
	system("cls");
	setlocale(2,"");
	setlocale(LC_ALL, "rus");
	char n[25],f[25],t[25],k[25],a[25],o[25],one[25];
	cout<<endl<<endl<<'\t'<<"\t"<<"Просмотреть контакт:";
	cin>>k;
	ifstream fin("lolo.txt");
	do
	{   fin>> one;    
		if(fin.eof()){
		    break;
		  }
		if(strcmp(one,k)==0){
	copy(one, one+25, n);
	fin>> f;
	fin>> o;
	fin>> t;
	fin>> a;
	cout<<endl<<endl;
	cout<<"\t"<<"\t"<<"\t"<<"Имя:"<<n <<endl;
	cout<<"\t"<<"\t"<<"\t"<<"Фамилия:"<<f <<endl;
	cout<<"\t"<<"\t"<<"\t"<<"Отчество:"<<o <<endl;
	cout<<"\t"<<"\t"<<"\t"<<"Телефон:"<<t <<endl;
	cout<<"\t"<<"\t"<<"\t"<<"Адрес:"<<a <<endl;
	fin.getline(n, 25);
	fin.getline(f, 25);
	fin.getline(o, 25);
	fin.getline(t, 25);
	fin.getline(a, 25);
		}
	}
	while(!fin.eof());

	fin.close();
	system("pause");
}


void vs()
{
	char n[25]="/0",f[25],t[25],a[25],o[25];
	system("cls");
	setlocale(2,"");
	cout<<endl<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Все контакты:"<<endl<<endl;
	ifstream fin("lolo.txt");
	do
	{
	fin>> n;
	if (fin.eof()){
		break;
	}
	fin>> f;
	fin>> o;
	fin>> t;
	fin>> a;
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Имя:"<<n <<endl;
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Фамилия:"<<f <<endl;
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Отчество:"<<o <<endl;
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Телефон:"<<t <<endl;
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Адрес:"<<a <<endl<<endl;
	}
	while(!fin.eof());
	cout<<endl;
	system("pause");
}


void delk()
{
	system("cls");
	setlocale(2,"");
	char n[25],f[25],t[25],a[25],o[25],del[25];
	cout<<endl<<endl<<endl<<endl<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Кого удалить:";
	cin>>del;
	std::vector<std::string> vec;
	ifstream fin("lolo.txt");
	do
	{
		fin>> n;
		fin>> f;
		fin>> o;
		fin>> t;
		fin>> a;
		if(!fin.eof() && (strcmp(del,n)!=0)){
			  vec.push_back(n);
			  vec.push_back(f);
			  vec.push_back(o);
			  vec.push_back(a);
			  vec.push_back(t);
		 }	
	}
	while(!fin.eof());
	fin.close();
	cout<<endl<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Контакт удалён."<<endl;
	system("pause");
	if(vec.size() > 0){
	  ofstream fout;
	  fout.open("lolo.txt");
	  std::copy(vec.begin(), vec.end(), 
      std::ostream_iterator<std::string>(fout, "\n"));
      fout.close();
	}
}


void remek()
{
	system("cls");
	setlocale(2,"");
	char n[25],f[25],t[25],a[25],o[25],del[25];
	cout<<endl<<endl<<endl<<endl<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Кого удалить:  ";
	cin>>del;
	std::vector<std::string> vec;
	ofstream fout;
	ifstream fin("lolo.txt");
	do
	{
		fin>> n;
		fin>> f;
		fin>> o;
		fin>> t;
		fin>> a;
		if(fin.eof()){
			break;
		}
		if(strcmp(del,n)!=0){
	        vec.push_back(n);
	        vec.push_back(f);
	        vec.push_back(o);
	        vec.push_back(a);
	        vec.push_back(t);
	        continue;                      //=else
		}
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Этот контакт будет весь изменён."<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Всё надо писать на английском!"<<endl<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Имя:";
	cin>> n;
	fout<< n<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Фамилию:";
	cin>> f;
	fout<< f<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Отчество:";
	cin>> o;
	fout<< o<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Телефон:";
	cin>> t;
	fout<< t<<endl;
	cout<<'\t'<<"\t"<<"\t"<<"\t"<<"Адрес (улица):";
	cin>> a;
	fout<< a<<endl<<endl;
		    vec.push_back(n);
	        vec.push_back(f);
	        vec.push_back(o);
	        vec.push_back(a);
	        vec.push_back(t);	 	
	}
	while(!fin.eof());
	fin.close();
	system("pause");
	if(vec.size() > 0){
	  ofstream fout;
	  fout.open("lolo.txt");
	  std::copy(vec.begin(), vec.end(), 
      std::ostream_iterator<std::string>(fout, "\n"));
      fout.close();
	}
}


void menu()
{
	system("cls");
	setlocale(2,"");
	cout<<endl<<endl<<endl<<endl;
	cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"ЗАПИСНАЯ КНИЖКА"<<endl<<endl<<endl<<endl;
	cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<" 1 - создать контакт "<<endl<<endl<<endl;
	cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<" 2 - просмотр контакт "<<endl<<endl<<endl;
	cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<" 3 - просмотр всех контактов"<<endl<<endl<<endl;
	cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<" 4 - удалить контакт "<<endl<<endl<<endl;
	cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<" 5 - изменить контакт "<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"педагог: Татьяна Юрьевна"<<endl;
	cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"создал: Дима Чистяков"<<endl;

}


void main()
{
	std::system("mode con cols=170 lines=40");
  char p;
  do
  {
	  menu();
	  cin>>p;
	  switch(p)
	  {case '1' :newk();break;
	   case '2' :opk();break;
	   case '3' :vs();break;
	   case '4' :delk();break;
	   case '5' :remek();break;
	  }
  }while (p!=27);
  system("pause");
}