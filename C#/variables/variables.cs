using System;
using System.Security.Principal;

namespace variables;

class variables
{
    static void Main(string[] args)
    {   
        // Just declaration, no value assigned
        //int x;
        
        // Declaration and assignment
        
        // int = whole integer
        int x = 69;
        int y = 420;
        
        Console.WriteLine(x);
        Console.WriteLine(y);

        // double = Decimal
        double pi = 3.14;
        Console.WriteLine(pi);
        
        // bool (true or false)
        bool t = true;
        bool f = false;
        Console.WriteLine(t);
        Console.WriteLine(f);
        
        // 1 single character
        char symbol = '@';
        Console.WriteLine(symbol);
    }
}