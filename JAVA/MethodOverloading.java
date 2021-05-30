//MethodOverloading: Two or more methods can have same name
//but different parameters
public class MethodOverloading{
    static int getSumW10(){
        return 10;
    }

    static int getSumW10(int a){
        return a + 10;
    }

    static void getSumW10(int a, int b){
        System.out.println(a + b + 10);
    }

    public static void main(String[] args){
        int a = 5;
        int b = 7;

        System.out.println("O/p of method with 0 arguments: " + getSumW10());
        System.out.println("O/p of method with 1 arguments: " + getSumW10(a));
        System.out.print("O/p of method with 2 arguments: ");
        getSumW10(a, b);
    }
}