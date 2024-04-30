/*
    To compile and run, in the terminal, type:
        javac main_java.java
    After compilation, in the terminal, type:
        java main_java
*/

// Reading from an array
// Array elements can be called by providing the known index

public class main_java {
    public static void main(String[] args) {
        int[] myArray = {1,3,5};

        System.out.println(myArray[0]);
        System.out.println(myArray[1]);
        System.out.println(myArray[2]);
        // System.out.println(myArray[3]); // Throws Exception - out of bounds, but executes everything else before this
    }
}