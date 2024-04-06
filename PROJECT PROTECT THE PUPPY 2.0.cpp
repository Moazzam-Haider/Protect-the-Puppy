//Header Files
#include <iostream>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

//Functions Prototypes
void Play(); void Instructions (); void Credits(); void Continue (); void Exit();

//Puppy Function Declartion
void Puppy(int chances)
{
    if (chances>=1)
    {
		cout << "               "<<endl;
    	cout<<"\t\t       _ _ _ _ _ _ _  " <<endl;
    	cout<<"\t\t      /             \\"<<endl;
    	cout<<"\t\t      \\    @   @    /"<<endl;
    	cout<<"\t\t      / /    0    \\ \\"<<endl;
    	cout<<"\t\t      \\/    ~~~    \\/"<<endl;
    	cout<<"\t\t        \\    U    /"<<endl;
    	cout<<"\t\t      @  \\       /"<<endl;
    }
    else
    {
    	cout <<"\n\n\n\n\n\n\n\n";
	}
    
    if (chances>=2)
    {
		cout<<"\t\t      \\\\  |`````|"<<endl;
    	cout<<"\t\t       \\\\/       \\"<<endl;
    	cout<<"\t\t        \\\\       /"<<endl;
    }
    else
    {
    	cout<<"\n\n\n";
	}
	
    if (chances>=3)
    {
		cout<<"\t\t       {`|       |`}"<<endl;
    	cout<<"\t\t       { | /```\\ | }"<<endl;
    	cout<<"\t\t       {_|_|   |_|_}"<<endl;
	}
	else
	{
		cout <<"\n\n\n";
	}
	
	cout << "Chances Left : " << chances; 
}

//Main Function
int main()
{
	char option;
	
	do
	{
		// Title Screen
		system("cls");
		cout <<"\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t"<<"***********************************"<<endl;
		cout<<"\t\t\t\t\t"<<"*        PROTECT THE PUPPY        *"<<endl;
		cout<<"\t\t\t\t\t"<<"***********************************"<<endl<<endl;
		cout<<"\t\t\t\t\t"<<"1. Play"<<endl;
		cout<<"\t\t\t\t\t"<<"2. Instructions"<<endl;
		cout<<"\t\t\t\t\t"<<"3. Exit"<<endl<<endl;
		cout<<"\t\t\t\t\t"<<"Choose Option (1-3):";
		
		cin >> option;
	
		switch(option)
		{
			case '1':
				Play();
				break;
			case '2':
				Instructions();
				break;
		}
	}
	while(option != '3');
	Exit ();
	Credits ();
	return 0;
}

//Copy Function
void Copy (char Orignal[5][25], char Cat [5][25])
{
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<25; j++)
		{
			Cat [i][j] = Orignal [i][j];
		}
	}
}

//Play Function
void Play ()
{
	system ("cls");
	srand(time(NULL));
	
	//2D Arrays Categories
	char Food        [5][25] = {{'O','R','A','N','G','E'},{'B','A','N','A','N','A'},{'P','O','M','E','G','R','A','N','A','T','E'},{'L','Y','C','H','E','E'},{'C','H','E','R','R','Y'}};                                  
	char Place       [5][25] = {{'N','A','T','H','I','A',' ','G','A','L','I'},{'S','T','O','N','E','H','E','N','G','E'},{'M','O','U','N','T',' ','F','U','J','I'},{'A','N','G','K','O','R',' ','W','A','T'},{'K','A','L','A','S','H'}};
	char Movie       [5][25] = {{'T','H','E',' ','M','A','T','R','I','X'},{'B','R','A','V','E','H','E','A','R','T'},{'G','O','O','D','F','E','L','L','A','S'},{'H','O','M','E',' ','A','L','O','N','E'},{'B','A','T','M','A','N'}};
	char Animal      [5][25] = {{'M','O','N','K','E','Y'},{'P','A','N','T','H','E','R'},{'P','E','N','G','U','I','N'},{'R','A','B','B','I','T'},{'O','C','T','O','P','U','S'}};
	char Personality [5][25] = {{'I','M','R','A','N',' ','K','H','A','N'},{'R','O','N','A','L','D','O'},{'N','E','W','T','O','N'},{'J','A','C','K',' ','M','A'},{'H','I','T','L','E','R'}};
	
	char Category [5][25]; 
	string Name;
	
	//Category Selection Menu
	cout<<"\t\t\t\t\t"<<"***********************************"<<endl;
	cout<<"\t\t\t\t\t"<<"*        PROTECT THE PUPPY        *"<<endl;
	cout<<"\t\t\t\t\t"<<"***********************************"<<endl<<endl;	
	cout<<"\t\t\t\t\t"<<"Categories"<<endl;
	cout<<"\t\t\t\t\t"<<"1. Food "<<endl;
	cout<<"\t\t\t\t\t"<<"2. Places "<<endl;
	cout<<"\t\t\t\t\t"<<"3. Movies "<<endl;
	cout<<"\t\t\t\t\t"<<"4. Animals "<<endl;
	cout<<"\t\t\t\t\t"<<"5. Personalities "<<endl;
	cout<<"\t\t\t\t\t"<<"6. Back to Menu "<<endl;
	cout<<"\t\t\t\t\t"<< "Choose Option (1-6): ";
	
	char cat; 
	cin >> cat;
	
	//Calling Copy Function for Category Array
	if (cat == '1')
	{
		Name = "FOOD";
		Copy ( Food, Category ) ;
	}
	else if (cat == '2')
	{
		Name = "PLACE";
		Copy ( Place, Category ) ;
	}	
	else if (cat == '3')
	{
		Name = "MOVIE";
		Copy ( Movie, Category ) ;
	}	
	else if (cat == '4')
	{
		Name = "ANIMAL";
		Copy ( Animal, Category );
	}

	else if (cat == '5')
	{
		Name = "PERSONALITY";
		Copy ( Personality, Category ) ;
	}
	else if (cat == '6')
	{
		main();
	}
	else
	{
		cout << endl;
		cout << "\t\t\t\t\tInvalid Entry" <<endl;
		getch ();
		Play();
	}
	
	//Choosing Random Word
	int i = rand()%5;
	string word = Category[i];
	int wordLength = word.length();
	int size = 2*wordLength-1;
	
	char A[size]={'0'}; char T[size]={'0'}; char chk;
	int x=0; int y=1;
	for (int z=0;z<wordLength;z++)
	{
		T[x] = Category[i][z] ; T[y] = ' ' ;
		if (T[x] == ' ')
		{
			A[x] = ' ' ; A[y] = ' ';
		}
		else
		{
			A[x] = '_' ; A[y] = ' ';
		}
		x=x+2; y=y+2;
	}
	
	//User Input
	int Chances=3;
	cout << endl;
	for (int k=0; ;k++)
	{
		system ("cls");
		int True=0;
		
		Puppy (Chances);	
		cout <<endl<<endl;
		
		cout << "GUESS THE " << Name << " (in capital letters)" <<endl ;
		
		cout<<endl<<A<<endl;
		chk = getche();
		
		for (int l=0; l<size; l=l+2)
		{
			if (chk == T[l])
			{
				True=1;
				A[l] = T[l];
			}
		}
	
		if (True==1)
		{
			cout << endl << "Correct Answer";
			getch();
			if(strcmp (T,A)==0)
			{
				system ("cls");
				Puppy (Chances);		
				cout <<endl<<endl<< T << endl;
				cout << "YOU WIN" << endl;
				cout << "CONGRATULATION" <<endl;
				getch();
				Continue ();
				break;
			}
		}
		else
		{
			Chances--;
			cout << endl << "Wrong Answer";
			getch();
			if (Chances == 0)
			{
				system ("cls");
				Puppy (Chances);
				cout <<endl<<endl<<A<<endl;
				cout << "YOU LOSE" <<endl;
				cout <<T << endl <<endl;
				cout << "GAME OVER" <<endl;
				getch();
				Continue ();
				break;
			}
		}
	}
	
}

void Continue ()
{
	
	char option;
	do
	{
		system ("cls");
		cout << endl << endl;
		cout <<"\t\t\t\t\t"<<"***********************************"<<endl;
		cout <<"\t\t\t\t\t"<<"*        PROTECT THE PUPPY        *"<<endl;
		cout <<"\t\t\t\t\t"<<"***********************************"<<endl<<endl<<endl;			
		cout <<"\t\t\t\t\t\t    GAME OVER" <<endl <<endl;
		cout <<"\t\t\t\t\t"<< "1.Play Again?" <<endl;
		cout <<"\t\t\t\t\t"<< "2.Instructions" <<endl;
		cout <<"\t\t\t\t\t"<< "3.Back to Main Menu"<<endl;
		cout <<"\t\t\t\t\t"<< "4.Exit"<<endl;
		cout <<"\t\t\t\t\t"<< "Choose your Option (1-4):";
		cin >> option;
	
		switch (option)
		{
			case '1' : Play () ; break;
			case '2' : Instructions () ; break;
			case '3' : main () ; break;
		}
	}
	while (option != '4');
	Exit ();
}

//Instructions Function
void Instructions()
{

	system("cls");
	cout << "\t\t\t\t\t" << "***********************************" << endl;
	cout << "\t\t\t\t\t" << "*        PROTECT THE PUPPY        *" << endl;
	cout << "\t\t\t\t\t" << "***********************************" << endl << endl << endl;
	cout << endl << endl << endl;
	cout<<"INSTRUCTIONS           "<<endl;
	cout<<"============="<<endl<<endl;
	cout<<"1. This is a Guessing Game"<<endl;
	cout<<"2. There are 5 Categories, you have to choose one"<<endl;
	cout<<"3. You will be given a Word according to the selected category"<<endl;
	cout<<"4. You have to Enter a Character to Guess the Word"<<endl;
	cout<<"5. Each Correct Guess will fill the blank"<<endl;
	cout<<"6. You have 3 Chances to Guess the Word"<<endl;
	cout<<"7. You can only Press Alphabets"<<endl;
	cout<<endl;
	
	cout<<"Press any key to continue...";
	getch();
}

//Credits
void Credits ()
{
	system ("cls");
	cout<<"\t\t\t\t\t"<<"-----------------------------------"<<endl;
	cout<<"\t\t\t\t\t"<<"|        THANKS FOR PLAYING       |"<<endl;
	cout<<"\t\t\t\t\t"<<"-----------------------------------"<<endl<<endl;
	cout<<"\t\t\t\t\t"<<"\t\tGROUP"<<endl;
	cout<<"\t\t\t\t\t"<<"\t  Lightning Leopards"<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t"<<"MEMBERS"<<endl;
	cout<<"\t\t\t\t\t"<<"Moazzam Haider"<<endl;
	cout<<"\t\t\t\t\t"<<"Humna Ejaz"<<endl;
	cout<<"\t\t\t\t\t"<<"Muhammad Talha"<<endl;
	cout<<endl <<endl <<endl;
	cout<<"\t\t\t\t\t"<<"Press any key to continue...";
	getch();
	exit (0);
}

void Exit ()
{
	for (int i=0;;i++)
	{
		system ("cls");
		char option;
		cout << "\t\t\t\t\t" << "***********************************" << endl;
		cout << "\t\t\t\t\t" << "*        PROTECT THE PUPPY        *" << endl;
		cout << "\t\t\t\t\t" << "***********************************" << endl << endl << endl;
		cout << endl << endl << endl;
		cout <<"\t\t\t\t\t"<<"Are you sure you want to Quit?" <<endl;
		cout <<"\t\t\t\t\t"<<"1. Yes" <<endl;
		cout <<"\t\t\t\t\t"<<"2. No" <<endl;
		cout <<"\t\t\t\t\t"<<"Choose Option (1-2):";
		cin >> option;
	
		switch (option)
		{
			case '1' : Credits () ; break ;
			case '2' : main () ; break ;
		}
	}
}
