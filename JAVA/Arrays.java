import java.util.Scanner;

//Arrays: Collection of similar data types 
public class Arrays{
    public static void main(String[] args){
        Scanner io = new Scanner(System.in);

        //Declaration of array
        int [] arr;       //1D array
        float [][] arr2;  //2D array

        //Memory allocation      
        arr = new int[5];       //1D array
        arr2 = new float[2][3]; //2D array
        
        //Declaration + Memory allocation
        int [] list = new int[3];           //1D array
        float [][] list2 = new float[2][4]; //2D array

        //Declaration + Memory allocation + initilaization
        int [] marks = {10, 20, 30, 40, 50};           //1D array
        char [][] matrix = {{'a', 'b'}, {'c', 'd'}};   //2D array
        
        //Get size of an array
        int len = marks.length; 
        System.out.println("Total subjects are: "+ len);
        
        //1D Array traversal
        for (int i = 0; i < len; i++){
            System.out.println("Marks of " + i + "th subject is: " + marks[i]);
        }

        //For-each loop
        System.out.println("\nUsing for-each loop.");
        for (int mark: marks){
            System.out.println(mark);
        }

        //2D Array traversal
        for (int i = 0; i < matrix.length; i++){
            for (int j = 0; j < matrix[i].length; j++){
                System.out.printf("%c ", matrix[i][j]);
            }
            System.out.println();
        }


    }
}