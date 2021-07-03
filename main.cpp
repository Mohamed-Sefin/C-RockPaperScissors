#include <iostream>            
int main()
{
	char pc[3] = { 'r','p','s' };
	int random;
	char user;
	int userScore = 0;
	int pcScore = 0;
	int count = 0;
	int rounds;
	std::cout << "Welcome to Rock Paper Scissor!!" << std::endl;
	std::cout << "How many rounds ?" << std::endl;
	std::cin >> rounds;
	while (count != rounds)
	{
		random = rand() % 3;
		std::cout << "rock paper or scissor??" << std::endl;
		std::cin >> user;
		if (user == pc[random])
		{
			std::cout << "Tie";
			count++;
		}
		else if ((user == 'r' && pc[random] == 's') || (user == 'p' && pc[random] == 'r') || (user == 's' && pc[random] == 'p'))
		{
			std::cout << "You Won !!!!" << std::endl;
			userScore++;
			count++;
		}
		else
		{
			std::cout << "You Lose !!" << std::endl;
			pcScore++;
			count++;
		}
		std::cout << "Score" << std::endl;
		std::cout << "User :" << userScore << std::endl;
		std::cout << "PC :" << pcScore << std::endl << std::endl << std::endl;


	}

	if (userScore < pcScore)
		std::cout << "PC wins by a score of " << pcScore << std::endl;
	else
		std::cout << "User wins by a score of " << userScore << std::endl;	
}
