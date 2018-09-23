#include <iostream>
using namespace std;

int main()
{

	//withdrawel = value
	int value = 0;

	int onebil = 1;
	int fivebil = 5;
	int tenbil = 10;
	int twentybil = 20;
	int fiftybil = 50;

	int onecount = 0;
	int fivecount = 0;
	int tencount = 0;
	int twentycount = 0;
	int fiftycount = 0;

	char answer;

	do {

		answer = 'n';
		onecount = 0;
		fivecount = 0;
		tencount = 0;
		twentycount = 0;
		fiftycount = 0;

		do {
			cout << "Enter withdrawel amount: "<<endl;
				cin >> value;


			if (value > 300) cout << "Unfortunately the max you can withdraw is $300" <<endl;
			if (value < 1) cout << "Unfortunately the min you can withdraw is $1" <<endl;
		}

		while ((value < 1) | (value > 300));


			if ((value >= 50) && (value / fiftybil > 0) && (value > 0))
			{
				fiftycount = value / fiftybil;
				value = value % fiftybil;
				if (fiftycount > 0)
					cout << " You have" << fiftycount << "$50 bills" <<endl;
			}
		if ((value >= 20) && (value / twentybil > 0) && (value > 0))
		{
			twentycount = value / twentybil;
			value = value % twentybil;
			if (twentycount > 0)
				cout << " You have" << twentycount << "$20 bills" <<endl;
		}
		if ((value >= 10) && (value / tenbil > 0) && (value > 0))
		{
			tencount = value / tenbil;
			value = value % tenbil;
			if (tencount > 0)
				cout << " You have" << tencount << "$10 bills" <<endl;
		}
		if ((value >= 5) && (value / fivebil > 0) && (value > 0))
		{
			fivecount = value / fivebil;
			value = value % fivebil;
			if (fivecount > 0)
				cout << " You have" << fivecount << "$5 bills" <<endl;
		}
		if ((value >= 1) && (value / onebil > 0) && (value > 0))
		{
			onecount = value / onebil;
			value = value % onebil;
			if (onecount > 0)
				cout << " You have" << onecount << "$1 bills" <<endl;
		}


		cout << "Another withdrawel? Enter Y to continue" <<endl; 
		cin >> answer;
	}

	while (answer == 'Y');
	system("pause");
	return 0;

}





