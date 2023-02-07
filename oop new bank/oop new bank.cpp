// oop new bank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class bank
{
private:
	string name;
	int phone_num;
public:
	bank(string n = " ", int pn = 0)
	{
		name = n;
		phone_num = pn;
	}
	void setdata(string n, int pn)
	{
		name = n;
		phone_num = pn;
	}
	virtual void input()
	{
		cout << "Enter Bank name:";
		cin >> name;
		cout << "Enter phone number:";
		cin >> phone_num;
	}
	virtual void print()
	{
		cout << "Bank name is " << name << endl;
		cout << "Phone number is " << phone_num << endl;
	}
};
class account : public bank
{
	string type;
	int number;
public:
	account(string t = "", int n = 0)
	{
		type = t;
		number = n;
	}
	void set_ACC_Data(string t = "", int no = 0)
	{
		type = t;
		number = no;
	}
	virtual void input()
	{
		//bank::input();
		cout << "Enter Bank type:";
		cin >> type;
	}
	virtual void print_()
	{
		//bank::print();
		cout << "bank type is " << type << endl;
		
	}
};
class customer : public bank
{
private:
	string customer_name;
	bank* obj_b;
	account* a1;
public:
	customer()
	{
		customer_name = "";
		obj_b = NULL;
		a1 = nullptr;
	}
	customer(string customer , string n, int pn, string t, int no)
	{
		customer_name = customer;
		obj_b->setdata(n, pn);
		a1->setdata(t, no);
	}
	void set_customer(string customer , string n, int pn, string t, int no)
	{
		customer_name = customer;
		obj_b->setdata(n, pn);
		a1->setdata(t, no);
	}
	virtual void input()
	{
		cout << "Enter costumer name:";
		cin >> customer_name;
		obj_b->input();
		a1->input();
	}
	virtual void print()
	{
		cout << "customer name is" << customer_name << endl;
		obj_b->print();
		a1->print_();
	}
};

int main()
{
	customer c1;
	c1.input();
	c1.print();
	bank* b = new account;
	b->input();
	b->print();
	bank* b1 = new customer;
	b->input();
	b->print();
	system("pause");
	return 0;
}


