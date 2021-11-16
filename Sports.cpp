#include <string>
#include "Sports.h"
#include <iostream>
using namespace std;


Basketball::Basketball(){ // default ctr 
	time = 0;
	burned = 0;
}

ostream& operator<<(ostream& out, const Basketball& obj){
	out << "portion name  \t : " << obj.time << endl << "Alinan Kalori  \t : " << obj.burned << endl;
	return out;
}

Basketball& Basketball::operator=(Basketball& other){
	this->time = other.time;
	this->burned = other.burned;
	return *this;
}
double Basketball::operator+(const Basketball& obj){
	return (this->burned + obj.burned);
}
Basketball::Basketball(const Basketball& obj){
	burned = obj.burned;
	time = obj.time;
}
double Basketball::BurnedCal(int sure){
	double kalori = (double)sure*6;
	return kalori;
}

//FUTBOLL
Football::Football()
{
	time = 0;
	burned = 0;
}
ostream& operator<<(ostream& out, const Football& obj)
{
	out << "Time: " << obj.time << endl << "Burned Calories : " << obj.burned << endl;
	return out;
}

Football& Football::operator=(Football& other)
{
	this->time = other.time;
	this->burned = other.burned;
	return *this;
}
double Football:: operator+(const Football& obj)
{
	return (this->burned + obj.burned);
}
Football::Football(const Football& obj)
{
	burned = obj.burned;
	time = obj.time;
}
double Football::BurnedCal(int sure)
{
	double kalori = (double)sure * 5;
	return kalori;
}

//TENNÝS
Tennis::Tennis()
{
	time = 0;
	burned = 0;
}
ostream& operator<<(ostream& out, const Tennis& obj)
{
out << "Time: " << obj.time << endl << "Burned Calories : " << obj.burned << endl;
	return out;
}

Tennis& Tennis::operator=(Tennis& other)
{
	this->time = other.time;
	this->burned = other.burned;
	return *this;
}
double Tennis:: operator+(const Tennis& obj)
{
	return (this->burned + obj.burned);
}
Tennis::Tennis(const Tennis& obj)
{
	burned = obj.burned;
	time = obj.time;
}

double Tennis::BurnedCal(int sure)
{
	double kalori = (double)sure * 5;
	return kalori;
}



Swimming::Swimming()
{
	time = 0;
	burned = 0;
}
ostream& operator<<(ostream& out, const Swimming& obj)
{
	out << "Time: " << obj.time << endl << "Burned Calories : " << obj.burned << endl;
	return out;
}

Swimming& Swimming::operator=(Swimming& other)
{
	this->time = other.time;
	this->burned = other.burned;
	return *this;
}
double Swimming:: operator+(const Swimming& obj)
{
	return (this->burned + obj.burned);
}
Swimming::Swimming(const Swimming& obj)
{
	burned = obj.burned;
	time = obj.time;
}

double Swimming::BurnedCal(int sure)
{
	double kalori = (double)sure * 7;
	return kalori;
}
