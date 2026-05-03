
#include <iostream>

using namespace std;



//Function prototypes 
void choice(char Array[][3]);
void display( char Array[][3]);

int main()
{

	char Array[3][3] = { { '1','2','3'}, {'4', '5', '6'}, {'7', '8', '9'}}; //board array 


	//Title card 
	cout << "TIC TAC TOE\n";
	cout << "_____________________________________\n\n"; 



	//show start board
	display(Array);


	//start game
	choice(Array);



	//show ending board
	display(Array); 
	








	return 0; 
}




void choice(char Array[][3])

{

	cout << "Player 1 pick: " << endl;

	char input1; 
	cin >>   input1; //read position 

	
	//search through the board 
	for (int i = 0; i < 3; ++i)
	{
		

		for (int j = 0; j < 3; ++j)
		{
			
			if (input1 == Array[i][j])// compare input to array 

			{

				Array[i][j] = 'X'; //assign x to array char
				
				
				
			}



		}



	}

	display(Array);


	cout << "Player 2 pick: " << endl;

	char input2;
	cin >> input2;


	//search through the board 

	for (int i = 0; i < 3; ++i)
	{


		for (int j = 0; j < 3; ++j)
		{

			if (input2 == Array[i][j])// compare input to array 

			{

				Array[i][j] = 'O';//assign O to array char



			}



		}

	

	}


	

}




void display(char Array[][3])
{



	

	for (int i = 0; i < 3; ++i)
	{


		for (int j = 0; j < 3; ++j)
		{
			cout << "|";
			cout << Array[i][j]; 
			
			
			cout << "|";

		}
		
		cout << endl;

	}



	
}
