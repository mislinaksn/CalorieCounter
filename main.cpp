#include<stdlib.h> 
#include <iostream>
#include "User.h"
#include <string>
#include <iostream>
using namespace std;

string toLower(string str); //String büyük küçük harf sorunu olmamasi için harflerin hepsini küçük yapýyorum.
int main()
{
    int mod=0,i, back;
    int id = 0,age, week;
    string name, surname;
    double weight;
    while (mod != 3)
    {
        menu:
        cout << "Press the number: \n1- User Mode 2- Developer Mode 3- Exit ";
        cin >> mod;
        
        
        if (mod == 1)
        {
            id++;
            int select=0,sporSuresi;
            string meal, portion, sport; 
            
            cout << "Please enter your" << endl;
            cout << "name:";
            cin >> name;
            cout << "surname:";
            cin >> surname;
            cout << "age:";
            cin >> age;
            cout << "weight:";
            cin >> weight;
            cout << "Which week information will be entered? ";
            cin >> week;
            User user(id, name,surname,age,weight,week);
            
            cout << "\nWelcome " << name << " " << surname << " to CalorieTracker!" << endl << endl;
            while (select!=8)
            {
                
                cout << "--- User Mode ---" << endl;
                user:
                cout << "\n 1- Add Meal \n 2- Add Exercise \n 3- Weekly Taken Calories \n 4- Weekly Burned Calories \n 5- Weekly Calorie Sum \n 6- Weekly Number of Meals \n 7-Weekly Number of Exercises \n\n Please press 8 to exit \n" << endl;

                cin >> select;
                switch (select)
                {
                case 1:
                    {
                    cout << "Enter the meal type (breakfast, lunch or dinner)" << endl;
                    cout <<"!please be aware of capslock! ";
                    cin >> meal;
                    cout << "Which portion? (small,medium,large)";
                    cin >> portion;
                    meal = toLower(meal);
                    portion = toLower(portion);
                    user.AddMeal(user, meal, portion);
                    cout << "Meal data saved successfully" << endl;
                    
					cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto user;	}
                    else{ goto exit;		}
                    }
                case 2:
                {
                    cout << "Enter exercised name (basketball,football,tennis,swimming) :";
                    cin >> sport;
                    cout << "how many minutes you exercised?(in minutes) ";
                    cin >> sporSuresi;
                    sport = toLower(sport);
                    user.AddExercise(user,sport,sporSuresi);
                    cout << "Exercise data saved successfully" << endl;
                    
					cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto user;	}
                    else{ goto exit;		}
                }
                case 3:
                {
                    cout <<"Total of Taken Calories:"<< user.getTakenCal()<<endl;
                    
                    cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto user;	}
                    else{ goto exit;		}
                }
                case 4:
                {
                    cout << "Total of Burned Calories :"<<user.getBurnedCal() << endl;
                    
                    cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto user;	}
                    else{ goto exit;		}
                }
                case 5:
                {
                    cout << "Total Calories :" << user+(user)<< endl;
                    
					cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto user;	}
                    else{ goto exit;		}
                }
                case 6:
                {
                    user.TotalMeal();
                    
                    cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto user;	}
                    else{ goto exit;		}
                }
                case 7:
                {
                    user.TotalSport();
                    
					cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto user;	}
                    else{ goto exit;		}
                }
                exit:
                default:
                    break;
                }
            }
           
        }
        else if (mod == 2)
        {
            
            int select=0, back;
            int sporSuresi;
            string meal, portion, sport;

            cout << "--- Developer Mode ---"<<endl;
            User user1(12, "Chandler", "Bing", 29, 80, 2);
            User user2(23, "Joey", "Tribbiani", 30, 85, 1);
            User user4,user5;
            cout << "5 users has created to test the functions" << endl;
            while (select != 15)
            {
                main:
                cout << " Press the number for test the related functions" << endl;
                cout << " 1- Show User Information(<< operator)" << endl;
                cout << " 2- Copy cunstroctor Test " << endl; //User3=User1
                cout << " 3- Assigment constructor (= operator) Test" << endl; //User4=User2
                cout << "rest of the functions will be tested with User1 " << endl;
                cout << " 4- AddMeal" << endl; //for User1 
                cout << " 5- AddExercise" << endl;
                cout << " 6- Weekly Total of Taken Calories" << endl;
                cout << " 7- Weekly Total of Burned " << endl;
                cout << " 8- Weekly Total of Calories  " << endl;
                cout << " 9- Weekly Number of Meals" << endl;
                cout << "10- Weekly Number of Exercises" << endl;
                cout << "11- << operator test for Meals" << endl;
                cout << "12- << operator test for Sports" << endl;
                cout << "13- + operator test for Meals " << endl;
                cout << "14-+ operator test for Sports" << endl;
                cout << "15- Exit" << endl;
                cin >> select;
                switch (select)
                {
                case 1:
                {
                    cout << "User1:" << endl;
                    cout << user1;
                    cout << "User2:" << endl;
                    cout << user2;
                    cout << "User4:" << endl;
                    cout << user4;
                    cout << "User5:" << endl;
                    cout << user5;

                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 2:
                {
                    User user3 = user1;
                    cout << "User3:(copy ctr)" << endl;
                    cout << user3;
                     cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 3:
                {
                   
                    user4 = user2;
                    cout << "User4:(assignment oprtr)" << endl;
                    cout << user4;
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 4:
                {
                    cout << "Enter the meal type (breakfast, lunch or dinner):";
                    cin >> meal;
                    cout << "Which portion? (small,medium,large)";
                    cin >> portion;
                    meal = toLower(meal);
                    portion = toLower(portion);
                    user1.AddMeal(user1, meal, portion);
                    cout << "Meal data added successfully" << endl;
                    
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 5:
                {
                    cout << "Enter exercised name (basketball,football,tennis,swimming) :";
                    cin >> sport;
                    cout << "How many minutes you exercised?(in minutes)";
                    cin >> sporSuresi;
                    sport = toLower(sport);
                    user1.AddExercise(user1, sport, sporSuresi);
                    cout << "Exercise data saved successfully" << endl;
                   
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 6:
                {
                    cout << "Total of Taken Calories :" << user1.getTakenCal() << endl;
                    
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 7:
                {
                    cout << "Total of Burned Calories:" << user1.getBurnedCal() << endl;
                    
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 8:
                {
                    cout << "Total Calories :" << user1 + (user1) << endl;
                    
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 9:
                {
                    user1.TotalMeal();
                   
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 10:
                {
                    user1.TotalSport();
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 11:
                {

                    user1.getBreakfast(user1);
                    user1.getLunch(user1);
                    user1.getDinner(user1);
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}

                }
                case 12:
                {
                    user1.getBasketball(user1);
                    user1.getFootball(user1);
                    user1.getTennis(user1);
                    user1.getSwimming(user1);
                    
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 13:
                {
                   cout << "First Day's taken calories: " << endl;
                   cout << " Breakfast :"<<user1.sumBreakfast(user2) << endl ;
                   cout << " Lunch     :" << user1.sumLunch(user2)   << endl; 
                   cout << " Dinner    :" << user1.sumDinner(user2)  << endl ;

                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                }
                case 14:
                {
                    cout << "First Day's burned calories: " << endl;
                    cout << " Basketball :" << user1.sumBasketball(user2);
                    cout << " Futball :" << user1.sumFootball(user2);
                    cout << " Tennis :" << user1.sumTennis(user2);
                    cout << " Swimming :" << user1.sumSwimming(user2);
                    
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto main;	}
                    else{ goto exit1;		}
                    

                 
                }
                exit1:
                default:
                    break;
                }
            }

        }
    }
}

string toLower(string str) //String büyük küçük harf sorunu olmamasi için harflerin hepsini küçük yapýyorum.
{
    int i;
    for (i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}


