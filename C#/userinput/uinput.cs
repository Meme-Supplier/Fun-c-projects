namespace user_input;

class UserInput
{
    static void Main(string[] args)
    {   
        Console.WriteLine("What is your name?");
        String name = Console.ReadLine();
        Console.WriteLine("Hello " +name);
        
        Console.WriteLine("\nHow old are you?");
        int age = Convert.ToInt32(Console.ReadLine()); // Converting to an integer first is reccomended
        Console.WriteLine("Hello " +name);
        Console.WriteLine("You are " +age +" years old");
    }
}