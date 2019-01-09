import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        int sum = 0;
        String pinyins[] = {"ling", "yi", "er", "san", "si",
                "wu", "liu", "qi", "ba", "jiu"};


        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();

        for (int i =0;i<s.length();i++)
        {
            char c=s.charAt(i);
            sum+=(c-'0');

        }
        if((sum / 100)!=0)                           /* hundreds */
            System.out.print(pinyins[sum / 100]+" ");
        if((sum / 10)!=0)                            /* tens */
            System.out.print( pinyins[sum / 10 % 10]+" ");
        System.out.print(pinyins[sum % 10]);        /* units */



    }
}
