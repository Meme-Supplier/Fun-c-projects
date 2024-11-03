using System;

namespace Rock_Paper_Scissors
{
    class Rps
    {
        static void Main(string[] args)
        {
            
            bool play = true;
            
            while (true && play == true)
            {
                Random random = new Random();
                int bot = random.Next(1, 3 + 1);
                
                /*
                 * 1 = Rock
                 * 2 = Paper
                 * 3 = Scissors
                 */
            
                Console.WriteLine("Rock Paper Scissors!\nPlease input Rock, Paper, or Scissors!");
                string response = Console.ReadLine();
                
                Console.WriteLine();
                if (response == "Rock" || response == "rock")
                {
                    switch (bot)
                    {
                        case 1:
                            Console.WriteLine("Tie!");
                            break;
                        case 2:
                            Console.WriteLine("You lose!");
                            break;
                        case 3:
                            Console.WriteLine("You win!");
                            break;
                    }
                } 
                
                else if (response == "Paper" || response == "paper")
                {
                    switch (bot)
                    {
                        case 1:
                            Console.WriteLine("You win!");
                            break;
                        case 2:
                            Console.WriteLine("Tie!");
                            break;
                        case 3:
                            Console.WriteLine("You lose!");
                            break;
                    }
                } 
                
                else if (response == "Scissors" || response == "scissors")
                {
                    switch (bot)
                    {
                        case 1:
                            Console.WriteLine("You lose!");
                            break;
                        case 2:
                            Console.WriteLine("You win!");
                            break;
                        case 3:
                            Console.WriteLine("Tie!");
                            break;
                    }
                } 
                
                Console.WriteLine("\nWould you like to play again?\n(Y/N)");
                string again = Console.ReadLine();

                if (again == "Y" || again == "y")
                {
                    play = true;
                }

                else
                {
                    Console.WriteLine("Thank you for playing!");
                    play = false;
                }
            }
        }
    }
}