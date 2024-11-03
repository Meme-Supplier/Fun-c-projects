using System.Threading.Channels;

namespace arithmetic;

class Arithmetic
{
    static void Main(string[] args)
    {
        int friends = 5;
        
        friends = friends + 1;
        Console.WriteLine(friends);
        
        friends++;
        Console.WriteLine(friends);      
        
        friends = friends - 1;
        Console.WriteLine(friends);
        
        friends--;
        Console.WriteLine(friends);

        friends = friends / 2;
        Console.WriteLine(friends);

        friends = friends * friends;
        Console.WriteLine(friends);
        
        friends = friends % friends;
        Console.WriteLine(friends);
    }
}