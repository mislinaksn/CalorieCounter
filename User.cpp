#include <string>
#include "User.h"
#include <iostream>
using namespace std;
User::User(int Id, string name, string surname, int age, double agirlik, int donem)
{
	ID = Id;
	this->name = name;
	this->surname = surname;
	this->age = age;
	weight = agirlik;
	week = donem;
	total_taken=0;
	total_burned=0;
	c_Breakfast=0;
	c_Lunch=0;
	c_Dinner=0;
	c_Basketball=0;
	c_Football=0;
	c_Tennis=0;
	c_Swimming=0;

}
User::User()
{
	ID =0;
	name ="";
	surname = "";
	age =0;
	weight =0;
	week =0;
	total_taken = 0;
	total_burned = 0;
	c_Breakfast = 0;
	c_Lunch = 0;
	c_Dinner = 0;
	c_Basketball = 0;
	c_Football = 0;
	c_Tennis = 0;
	c_Swimming = 0;
}
ostream& operator<<(ostream& out, const User& obj)
{
	out << "ID \t : " << obj.ID << endl<<"name \t : "<<obj.name <<endl<<"surname   : " << obj.surname <<endl<<"age \t : "<<obj.age<<endl<<"weight \t : " << obj.weight<<endl<<"week \t : "<<obj.week<<endl;
	return out;
}

User& User::operator=(User& obj)
{
	int i;
	this->ID = obj.ID;
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->weight = obj.weight;
	this->week = obj.week;
	this->total_taken = obj.total_taken;
	this->total_burned = obj.total_burned;
	this->c_Breakfast = obj.c_Breakfast;
	this->c_Lunch = obj.c_Lunch;
	this->c_Dinner = obj.c_Dinner;
	this->c_Basketball = obj.c_Basketball;
	this->c_Football = obj.c_Football;
	this->c_Tennis = obj.c_Tennis;
	this->c_Swimming = obj.c_Swimming;
	for (i = 0; i < 7; i++)
	{ 
		this->userBreakfast[i] = obj.userBreakfast[i];
		this->userLunch[i] = obj.userLunch[i];
		this->userDinner[i] = obj.userDinner[i];
		this->userBasketball[i] = obj.userBasketball[i];
		this->userFootball[i] = obj.userFootball[i];
		this->userTennis[i] = obj.userTennis[i];
		this->userSwimming[i] = obj.userSwimming[i];
	}
	return *this;
}

double User:: operator+(User& obj){ return (this->getTakenCal()- this->getBurnedCal());
}

User::User(const User& obj){
	
	int i;
	ID =obj.ID;
	name = obj.name;
	surname =obj.surname;
	age =obj.age;
	weight =obj.weight;
	week = obj.week;
	total_taken =obj.total_taken;
	total_burned =obj.total_burned;
	c_Breakfast =obj.c_Breakfast;
	c_Lunch =obj.c_Lunch;
	c_Dinner = obj.c_Dinner;
	c_Basketball = obj.c_Basketball;
	c_Football = obj.c_Football;
	c_Tennis = obj.c_Tennis;
	c_Swimming = obj.c_Swimming;
	
	for (i = 0; i < 7; i++)	{
		Breakfast userBreakfast1=obj.userBreakfast[i];
		Lunch userLunch1=obj.userLunch[i];
		Dinner userDinner1=obj.userDinner[i];
		Basketball userBasketball1=obj.userBasketball[i];
		Football userFootball1=obj.userFootball[i];
		Tennis userTennis1=obj.userTennis[i];
		Swimming userSwimming1=obj.userSwimming[i];

		this->userBreakfast[i] = userBreakfast1;
		this->userLunch[i] = userLunch1;
		this->userDinner[i] = userDinner1;
		this->userBasketball[i] = userBasketball1;
		this->userFootball[i] = userFootball1;
		this->userTennis[i] = userTennis1;
		this->userSwimming[i] = userSwimming1;
	}
}

void User::AddMeal(const User& obj,string meal, string portion){
	if (meal == "breakfast")
	{
		if (c_Breakfast >=7)
			cout << "weekly datas have saved successfully";
		else
		{
			c_Breakfast++;
			total_taken = total_taken + userBreakfast[c_Breakfast].PortionCal(portion);
		}
	}
	if (meal == "lunch"){
		if (c_Lunch >=7){ cout << "weekly datas have saved successfully" << endl;	}
		else{
			c_Lunch++;
			total_taken = total_taken + userLunch[c_Lunch].PortionCal(portion);
		}
	}
	if (meal == "dinner"){
		if (c_Dinner>=7)
			cout << "weekly datas have saved successfully";
		else
		{
			c_Dinner++;
			total_taken = total_taken + userDinner[c_Dinner].PortionCal(portion);
		}
	}
}
void User::AddExercise(const User& obj, string sport, int time)
{
	if (sport == "basketball")
	{
		if (c_Basketball >= 7)
			cout << "weekly datas have saved successfully";
		else
		{
			c_Basketball++;
			total_burned = total_burned + userBasketball[c_Basketball].BurnedCal(time);
		}
	}
	if (sport == "football")
	{
		if (c_Football >= 7)
			cout << "weekly datas have saved successfully";
		else
		{
			c_Football++;
			total_burned = total_burned + userFootball[c_Football].BurnedCal(time);
		}
	}
	if (sport == "tennis")
	{
		if (c_Tennis >= 7)
			cout << "weekly datas have saved successfully";
		else
		{
			c_Tennis++;
			total_burned = total_burned + userTennis[c_Tennis].BurnedCal(time);
		}
	}
	if (sport == "swimming")
	{
		if (c_Swimming >= 7)
			cout << "weekly datas have saved successfully";
		else
		{

			c_Swimming++;
			total_burned = total_burned + userSwimming[c_Swimming].BurnedCal(time);
		}
	}
}
double User::getTakenCal()
{
	return total_taken;
}
double User::getBurnedCal()
{
	return total_burned;
}

int User::getBreakfast()
{
	return c_Breakfast;
}

int User::getLunch()
{
	return c_Lunch;
}

int User::getDinner()
{
	return c_Dinner;
}
int User::getBasket()
{
	return c_Basketball;
}
int User::getFootball()
{
	return c_Football;
}
int User::getTennis(){
	return c_Tennis;
}
int User::getSwimming(){
	return c_Swimming;
}
void User::TotalMeal(){

	cout << "Number of Breakfast(s) :" << getBreakfast() << endl;
	cout << "Number of Lunch(es) :" << getLunch() << endl;
	cout << "Number of Dinner(s):" << getDinner()<<endl;
}

void User::TotalSport(){

	cout << "Times of doing exercises" << endl;
	cout << "Basketball:" << getBasket() << endl;
	cout << "Football:" << getFootball() << endl;
	cout << "Swimming:" << getSwimming() << endl;
	cout << "Tennis :" << getTennis() << endl;
}
void User::getBreakfast(const User& obj ){
	int i;
	for (i = 0; i < 7; i++)
		cout << obj.userBreakfast[i];
}
void User::getLunch(const User& obj){
	int i;
	for (i = 0; i < 7; i++)
		cout << obj.userLunch[i];
}
void User::getDinner(const User& obj){
	int i;
	for (i = 0; i < 7; i++)
		cout << obj.userDinner[i];
}
void User::getBasketball(const User& obj){
	int i;
	for (i = 0; i < 7; i++)
		cout << obj.userBasketball[i];
}
void User::getFootball(const User& obj){
	int i;
	for (i = 0; i < 7; i++)
		cout << obj.userFootball[i];
}
void User::getTennis(const User& obj){
	int i;
	for (i = 0; i < 7; i++)
		cout << obj.userTennis[i];
}

void User::getSwimming(const User& obj){
	int i;
	for (i = 0; i < 7; i++)
		cout << obj.userSwimming[i];
}


double User::sumBasketball(const User& obj){	return (this->userBasketball[0] + (obj.userBasketball[0]));}

double User::sumFootball(const User& obj){	return (this->userFootball[0] + (obj.userFootball[0]));}

double User::sumTennis(const User& obj){	return (this->userTennis[0] + (obj.userTennis[0]));}

double User::sumSwimming(const User& obj){	return (this->userSwimming[0] + (obj.userSwimming[0]));}

double User::sumBreakfast(const User& obj){	return (this->userBreakfast[0]+(obj.userBreakfast[0]));}

double User::sumLunch(const User& obj){	return (this->userLunch[0] + (obj.userLunch[0]));}

double User::sumDinner(const User& obj){	return (this->userDinner[0] + (obj.userDinner[0]));}

