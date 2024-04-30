/*
    To compile and run, in the terminal, type:
        dotnet build
    After compilation, type:
        dotnet run
*/

using System;

public class main_csharp {
    public static void Main(string[] args) {
        int[] myArray = {1, 3, 5};

        Console.WriteLine(myArray[0]);  // Prints 1
        Console.WriteLine(myArray[1]);  // Prints 3
        Console.WriteLine(myArray[2]);  // Prints 5
        // Console.WriteLine(myArray[3]);  // Exception, out of bounds, but executes everything above
    }
}