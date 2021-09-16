#pragma once
#include<iostream>


using namespace std;

#include<string>

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);

	void showPerson();

public:
	T1 name;
	T2 age;
};

template<class T1, class T2>
Person< T1, T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

template<class T1, class T2>
void Person< T1, T2>::showPerson()
{
	cout << "ÐÕÃû£º" << this->name << " ÄêÁä£º" << this->age << endl;
}