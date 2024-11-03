using System;
using System.Security.Principal;

namespace The_math_class;

class The_math_class
{
    static void Main(string[] args)
    {   
        // Power
        double x = 3;
        double a = Math.Pow(x, 2);
        //Outputs 9
        Console.WriteLine(a);
        
        // Square root
        double s = 100;
        double r = Math.Sqrt(s);
        // Outputs 10
        Console.WriteLine(10);
        
        // Absoulute value
        a = -5;
        double v = Math.Abs(a);
        // Outputs 5
        Console.WriteLine(v);
        
        // Rounding
        
        /*
         * Round (Number above 5 rounds up, below 5 rounds down)
         * Ceil(ing) (Rounds up)
         * Floor (Rounds down)
         */
        
        // Round
        r = 34.6;
        double d = Math.Round(r);
        // Outputs 35
        Console.WriteLine(d);
        
        //Ceil(ing)
        double c = 34.6;
        double l = Math.Ceiling(c);
        // Outputs 35
        Console.WriteLine(l);
        
        //Floor
        double f = 34.6;
        double floor = Math.Floor(f);
        // Outputs 34
        Console.WriteLine(floor);
        
        // Comparing
        
        /*
         * Max (highest value)
         * Min (Lowest value)
         */
        
        // Max
        double m = 1;
        a = 10;
        x = Math.Max(m , a);
        // Outputs 10
        Console.WriteLine(x);
        
        // Min
        m = 1;
        a = 10;
        x = Math.Min(m , a);
        // Outputs 1
        Console.WriteLine(x);


    }
}