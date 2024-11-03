using System;
using System.Security.Principal;

namespace type_casting;

class TypeCasting
{
    private static void Main(string[] args)
    {   
        // type casting =  converts a value to a different data type
        
        // double --> integer
        Console.WriteLine("\nDouble --> integer");
        double a = 3.14;
        int b = Convert.ToInt32(a);
        Console.WriteLine(a.GetType()); // System.Double
        Console.WriteLine(b.GetType()); // System.Int32
        
        // Double <-- integer
        Console.WriteLine("\nDouble <-- integer");
        int c = 123;
        double d = Convert.ToDouble(c);
        Console.WriteLine(d.GetType());
        Console.WriteLine(c.GetType());
        
        // Integer --> string
        Console.WriteLine("\nInteger --> string");
        int e = 321;
        string f = Convert.ToString(e);
        Console.WriteLine(e.GetType());
        Console.WriteLine(f.GetType());
        
        // String --> char
        Console.WriteLine("\nString --> char");
        String g = "$";
        char h = Convert.ToChar(g);
        Console.WriteLine(g.GetType());
        Console.WriteLine(h.GetType());
        
        // String --> boolean
        Console.WriteLine("\nString --> boolean");
        String i = "true";
        bool j = Convert.ToBoolean(i);
        Console.WriteLine(i.GetType());
        Console.WriteLine(j.GetType());
    }
}