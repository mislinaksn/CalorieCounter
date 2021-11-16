#ifndef USER_H
#define USER_H
#include <string>
#include "Meals.h"
#include "Sports.h"
using namespace std;
class User {
	
private:
	
	int ID;
	int age;
	string name;
	string surname;
	double weight;
	int week;
	double total_taken;
	double total_burned;
	int c_Breakfast;
	int c_Lunch;
	int c_Dinner;
	int c_Basketball;
	int c_Football;
	int c_Tennis;
	int c_Swimming;
	
	//7 objects has declared for all type of class' since there are 7 days in a week
	Breakfast userBreakfast[7];        
	Lunch userLunch[7];				   
	Dinner userDinner[7];			  
	Basketball userBasketball[7];	
	Football userFootball[7];	
	Tennis userTennis[7];		  
	Swimming userSwimming[7];	  

public:
	
	User(int,string , string, int, double,int);
	User();
	User(const User& ); //Copy Constructor
	User& operator=(User& ); //Assigment constructor
	double operator+(User& ); //+ Kiþinin toplam kalorisini buluyoruz.
	friend ostream& operator<<(ostream& , const User& ); //<< constructor
	double getTakenCal();
	double getBurnedCal();
	void AddMeal(const User& ,string,string );
	void AddExercise(const User& ,string, int );
	int getBreakfast();
	int getLunch();
	int getDinner();
	int getBasket();
	int getFootball();
	int getTennis();
	int getSwimming();
	void TotalMeal();
	void TotalSport();
	void getBreakfast(const User& );
	void  getLunch(const User& );
	void  getDinner(const User& );
	void  getBasketball(const User& );
	void  getFootball(const User& );
	void  getTennis(const User& );
	void  getSwimming(const User& );

	double  sumBreakfast(const User& );
	double  sumLunch(const User& );
	double  sumDinner(const User& );
	double  sumBasketball(const User& );
	double  sumFootball(const User& );
	double  sumTennis(const User& );
	double  sumSwimming(const User& );
};
#endif
