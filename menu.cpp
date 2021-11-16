#include <stdlib.h> 
#include <iostream>
#include <string>
#include <iostream>
#include "User.h"

using namespace std;

string toLower(string str);

int main(){
	
	int select, i, back, muser, minutes, deve;
    int id = 0, age, week;
    double weight;
    string name, surname, meal, portion, sport;
    
    main:
    cout << "Press 1 for Developer Mode, 2 for User Mode and 3 for end the program" << endl;
    cin  >> select;
    
    switch(select){
    
    //developer mode menu
  {
 m_developer:	
    case 1:	
    
    cout << "--- Developer Mode ---" << endl;
    User user1(12, "Chandler", "Bing", 29, 80, 2);
    User user2(23, "Joey", "Tribbiani", 30, 85, 1);
    User user4, user5;
    cout << "5 users has created to test the functions" << endl;
    
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
    cin >> deve;
    
    switch(deve){
    	
    	case 1:
    	
    	cout << "User1:" << endl;
        cout << user1;
        cout << "User2:" << endl;
        cout << user2;
        cout << "User4:" << endl;
        cout << user4;
        cout << "User5:" << endl;
        cout << user5;

        cout << "To go back to developer menu please press 0, to exit please press 1" << endl;
        cin >> back;
        if(back==0){ goto m_developer;	}
        else{ goto exit;		}
        
        
        case 2:
        
		{
			
		User user3=user1;
        cout << "User3:(copy ctr)" << endl;
        cout << user3;
        cout << "To go back to main menu please press 0, to exit please press 1" << endl;
        cin >> back; 
        
		}
        if(back==0){ goto m_developer;	}
        else{ goto exit;		}
		
	
		
		case 3:
		
		user4 = user2;
        cout << "User4:(assignment oprtr)" << endl;
        cout << user4;
        cout << "To go back to main menu please press 0, to exit please press 1" << endl;
        cin >> back;
        if(back==0){ goto m_developer;	}
        else{ goto exit;		}
        
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
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}
                }
                case 5:
                {
                    cout << "Enter exercised name (basketball,football,tennis,swimming) :";
                    cin >> sport;
                    cout << "How many minutes you exercised?(in minutes)";
                    cin >> minutes;
                    sport = toLower(sport);
                    user1.AddExercise(user1, sport, minutes);
                    cout << "Exercise data saved successfully" << endl;
                   
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}
                }
                case 6:
                {
                    cout << "Total of Taken Calories :" << user1.getTakenCal() << endl;
                    
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}
                }
                case 7:
                {
                    cout << "Total of Burned Calories:" << user1.getBurnedCal() << endl;
                    
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}
                }
                case 8:
                {
                    cout << "Total Calories :" << user1 + (user1) << endl;
                    
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}
                }
                case 9:
                {
                    user1.TotalMeal();
                   
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}
                }
                case 10:
                {
                    user1.TotalSport();
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}
                }
                case 11:
                {

                    user1.getBreakfast(user1);
                    user1.getLunch(user1);
                    user1.getDinner(user1);
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}

                }
                case 12:
                {
                    user1.getBasketball(user1);
                    user1.getFootball(user1);
                    user1.getTennis(user1);
                    user1.getSwimming(user1);
                    
                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}
                }
                case 13:
                {
                   cout << "First Day's taken calories: " << endl;
                   cout << " Breakfast :"<<user1.sumBreakfast(user2) << endl ;
                   cout << " Lunch     :" << user1.sumLunch(user2)   << endl; 
                   cout << " Dinner    :" << user1.sumDinner(user2)  << endl ;

                    cout << "To go back to main menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}
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
                    if(back==0){ goto m_developer;	}
                    else{ goto exit;		}
                    

                 
                }
			
        	
    	
    	
    	
    	
    	
	}//developer seçiminin sonu
    
    
    
    
    
}
    //user mode menu
{    case 2:
    	
    	cout << "Please enter your related informations" << endl;
    	cout << "Name: ";
    	cin  >> name;
    	cout << "Surname: ";
    	cin  >> surname;
    	cout << "Age: ";
    	cin  >> age;
    	cout << "Weight:";
        cin  >> weight;
        cout << "Which week information will be entered? ";
        cin  >> week;
        id++;
        
        User user(id, name, surname, age, weight, week);
        
        cout << name << " " << surname << "Welcome to CalorieTracker!" <<endl;
        cout << "Your id: "<< id << endl;
        
        m_user:
        cout << "--- User Mode ---" << endl;
        cout << "\n 1- Add Meal \n 2- Add Exercise \n 3- Weekly Taken Calories \n 4- Weekly Burned Calories \n 5- Weekly Calorie Sum \n 6- Weekly Number of Meals \n 7-Weekly Number of Exercises \n\n Please press 8 to exit \n" << endl;
        cin  >> muser;
        
        switch(muser){
        	
        case 1: cout << "--- 1.Add Meal ---" << endl;
        
                    cout << "Enter the meal type (breakfast, lunch or dinner)" << endl;
                    cout <<"!please be sure about your capslock is off" << endl;
                    cin >> meal;
                    
                    cout << "Which portion? (small,medium,large)";
                    cin >> portion;
                    
                    // meal = toLower(meal);
                   // portion = toLower(portion);
                   
                    user.AddMeal(user, meal, portion);
                    
                    cout << "Meal data saved successfully" << endl;
					cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_user;	}
                    else{ goto exit;		}
        	
        case 2: cout << "--- 2.Add Exercise ---" << endl;
        
                    cout << "Enter exercised name (basketball,football,tennis,swimming) :";
                    cin >> sport;
                    cout << "how many minutes you exercised?(in minutes) ";
                    cin >> minutes;
                   // sport = toLower(sport);
                    user.AddExercise(user,sport,minutes);
                    cout << "Exercise data saved successfully" << endl;
                    
					cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_user;	}
                    else{ goto exit;		}
		
		
		case 3: cout << "--- 3.Weekly Taken Calories ---" << endl;
		
		            cout << "Total of Taken Calories:" << user.getTakenCal() << endl;
                    cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_user;	}
                    else{ goto exit;		}
		
		
		case 4: cout << "--- 4.Weekly Burned Calories ---" << endl;
		
	            	cout << "Total of Burned Calories :"<<user.getBurnedCal() << endl;
                    cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_user;	}
                    else{ goto exit;		}
		
		
		case 5: cout << "--- 5.Weekly Calorie Sum ---" << endl;
		
		            cout << "Total Calories :" << user+(user)<< endl;
					cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_user;	}
                    else{ goto exit;		}
		
		
		case 6: cout << "--- 6.Weekly Number of Meals ---" << endl;
		
		            user.TotalMeal();
                    cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_user;	}
                    else{ goto exit;		}
		
		
		case 7: cout << "--- 7.Weekly Number of Exercises ---" << endl;
		
		            user.TotalSport();
					cout << "To go back to user menu please press 0, to exit please press 1" << endl;
                    cin >> back;
                    if(back==0){ goto m_user;	}
                    else{ goto exit;	    	}
		
		
		case 8:	break;
    	
		}//user tercih switchinin sonu
}
    //default: break;	
	}//büyük switchin sonu
    exit:
	return 0;
}
