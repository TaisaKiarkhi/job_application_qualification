#include <iostream>
#include <format>
using namespace std;

int main() {

//This is a very weird program with very weird conditions in the job interview. The task was taken from a c++ book.
// The person who applies for a job should be older than 21 years old and less than 35,
//the person should be an umarried woman who has bachelor or master degree and speaks Hindi or Urdu

	    int age{};
	    char gender{};
	    enum class AcademicDegree:int{none = 1, associate, bachelor, professional, master, doctor};
	    bool married{};
	    char married_char{};
	    bool speaks_Hindi{};
	    bool speaks_Urdu{};
	    char Hindi{};
	    char Urdu{};
	    AcademicDegree degree{};
     	int degree_selection{};


        cout << "Good day! This is an online job interview. We will ask you questions and check if you are the person we have been searching for! Please, answer honestly. ";
	    cout << "What is your age?: ";
	    cin >> age;


	    if (age > 21 && age < 35) {
        cout << "What is your gender? (enter letters M/F): ";
		cin >> gender;

		gender=tolower(gender);
  
	    if (gender == 'f') {
		cout << "Are you married?(enter letters Y/N):";
		cin >> married_char;

	    married_char=tolower(married_char);

	    if (married_char=='n') {
		cout << "You should have an academic degree to work with us. Select your academic degree from the following list: ";
		cout << endl;
		cout << "1. None" << endl << "2. Associate" << endl << "3. Bachelor" << endl << "4. Professional" << endl << "5. Master" << endl << "6. Doctor";
		cin >> degree_selection;
		cout << endl;


		switch(degree_selection) {
		case 1:
		degree = AcademicDegree::none;
		cout << "Sorry, you have no academic degree. You are not suitable for this job.";
		break;

		case 2:
		degree = AcademicDegree::associate;
		cout << "Sorry, your academic degree is not suitable.";
		break;

		case 3:
		degree = AcademicDegree::bachelor;

		cout << "You have a bachelor degree that is suitable. " << endl;
		cout << "Do you speak Urdu? (Y/N): ";
		cin >> Urdu;

		Urdu = tolower(Urdu);

		cout << "Do you speak Hindi? (Y/N): ";
		cin >> Hindi;

		Hindi = tolower(Hindi);

		if (Urdu == 'y') {
		speaks_Urdu = true;

		cout << "Congratulation, you are qualified! The manager will contact you soon.";
		}

		else if (Hindi == 'y') {
		speaks_Hindi = true;

		cout << "Congratulation, you are qualified! The manager will contact you soon.";
		}
					
		else {
		cout << "Sorry, you should know either Hindi or Urdu to be qualified";
		}
        break;

		case 4: 
		degree = AcademicDegree::professional;

		cout << "Sorry, your academic degree is not suitable.";
		break;

		case 5: 
		degree = AcademicDegree::master;

		cout << "You have a master degree that is suitable. ";
		cout << "Do you speak Urdu? (Y/N): ";
		cin >> Urdu;

		Urdu = tolower(Urdu);

		cout << "Do you speak Hindi? (Y/N): ";
		cin >> Hindi;

		Hindi = tolower(Hindi);

		if (Urdu == 'y') {
		speaks_Urdu = true;

		cout << "Congratulation, you are qualified! The manager will contact you soon.";
		}
		else if (Hindi == 'y') {
		speaks_Hindi = true;

		cout << "Congratulation, you are qualified! The manager will contact you soon.";
		}

		else {
		cout << "Sorry, you should know either Hindi or Urdu to be qualified";
		}
		break;

		case 6: 
		degree = AcademicDegree::doctor;
		cout << "Sorry, your academic degree is not suitable.";
		break;
        }

	    }
	    else {
		cout << "Sorry, you should be unmarried to work with us.";
	    }

	    }
	    else {
		cout << "Sorry, we are searching for a female worker.";
	    }

	    }

	    else {
		cout << "Sorry, your age is not suitable, but thank you for your interest!";
	    }
	 
	    return 0;
}
