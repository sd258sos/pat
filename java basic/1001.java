import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int step = 0;

        Scanner scanner = new Scanner(System.in);
        int s = scanner.nextInt();
        while (s>1)
        {
            step++;
            if(s%2==0)
            {
                s=s/2;
            }else {

                s=(3*s+1)/2;
            }

        }
        System.out.print(step);
    }
}
