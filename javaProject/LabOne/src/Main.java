import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.printf("Input 3 sides for triangle\n");
        int sideA = in.nextInt();
        int sideB = in.nextInt();
        int sideC = in.nextInt();
        System.out.printf("Perimeter = %d\n", sideA+sideB+sideC);
        double p = ((sideA + sideB + sideC)/2.0);
        double tSquare = Math.sqrt(p*(p-sideA)*(p-sideB)*(p-sideC));
        System.out.printf("Square = %.2f\n", tSquare);
        if (sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA){
            System.out.printf("Not a triangle");
        }else if (sideA == sideB && sideB == sideC){
            System.out.printf("Equal triangle");
        }else if (sideA == sideB || sideA == sideC || sideB == sideC){
            System.out.printf("Isosceles triangle");
        }else {System.out.printf("Triangle");}
    }
}