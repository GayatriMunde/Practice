//VarArgs: Variable Arguments
//Method can be called with zero to n arguments
public class VarArgs{
    static int getSum(int ...arr){
        int sum = 0;
        for (int num: arr)
            sum += num;

        return sum;
    }

    //If some constant args are required
    static int getSumWx(int x, int ...arr){
        int sum = x;
        for (int num: arr)
            sum += num;
            
        return sum;
    }

    public static void main(String[] args){
        System.out.println("The sum of 2, 3 is " + getSum(2, 3));
        System.out.println("The sum of 2, 3, 30 is " + getSum(2, 3, 30));
        System.out.println("The sum of 2, 3, 30, 90, -98 is " + getSum(2, 3, 30, 90, 70, 1, -98));

        
        System.out.println("The sum of nothing with 100 is " + getSumWx(100));
        System.out.println("The sum of 20, 30 with 100 is " + getSumWx(100, 20, 30));
    
    }
}