using System;

namespace HelloWorld;

class HelloWorld
{
    static void Main(string[] args)
    {
        Console.WriteLine("Hello World!\n");
        Console.WriteLine("I'm on a new line!\n\n");
        Console.WriteLine("\tI'm tabbed");
        
        // This is a comment
        
        /*
         * This
         * Is
         * a
         * multi
         * line
         * comment
         */
        
        Console.WriteLine("Enter your name:\n");
        string name = Console.ReadLine();
        Console.WriteLine("Hello " + name);
    }
}