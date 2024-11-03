using System;
using System.Security.Principal;

namespace random_numbers;

class random_numbers
{
    static void Main(string[] args)
    {
        Random random = new Random();
        int random_number = random.Next(1 , 6 + 1); // Generates a number in between 1 and 6
        Console.WriteLine(random_number);
    }
}