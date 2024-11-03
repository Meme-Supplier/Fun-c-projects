namespace constants;

internal class constants
{
    private static void Main(string[] args)
    {
        //Constants = immutable values which are known at compile time and do not change for the life of the program

        const double pi = 3.14159;

        // This won't work
        //pi = 420;

        Console.WriteLine(pi);
    }
}