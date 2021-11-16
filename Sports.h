#ifndef SPORTS_H
#define SPORTS_H
#include <string>
using namespace std;
class Basketball {
private:
	int time;
	double burned;
public:

	Basketball();
	Basketball(const Basketball& ); //Copy Constructor
	Basketball& operator=(Basketball& ); //Assigment constructor
	double operator+(const Basketball& );
	friend ostream& operator<<(ostream& , const Basketball& ); //<< constructor
	double BurnedCal(int sure);
};
class Football {
private:
	int time;
	double burned;
public:
	Football();
	Football(const Football& ); //Copy Constructor
	Football& operator=(Football& ); //Assigment constructor
	double operator+(const Football& );
	friend ostream& operator<<(ostream& , const Football& ); //<< constructor
	double BurnedCal(int sure);
};
class Tennis {
private:
	int time;
	double burned;
public:
	Tennis();
	Tennis(const Tennis& ); //Copy Constructor
	Tennis& operator=(Tennis& ); //Assigment constructor
	double operator+(const Tennis& );
	friend ostream& operator<<(ostream& , const Tennis&); //<< constructor
	double BurnedCal(int sure);
};
class Swimming {
private:
	int time;
	double burned;
public:
	Swimming();
	Swimming(const Swimming& ); //Copy Constructor
	Swimming& operator=(Swimming& ); //Assigment constructor
	double operator+(const Swimming& );
	friend ostream& operator<<(ostream& , const Swimming&); //<< constructor
	double BurnedCal(int sure);
};
#endif
