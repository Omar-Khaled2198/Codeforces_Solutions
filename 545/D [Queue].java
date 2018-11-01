import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n=in.nextInt(),count=0;
        long[] a=new long[n];
        for(int i=0;i<n;i++)
            a[i]=in.nextLong();
        long B=0;
        Arrays.sort(a);
        for(int i=0;i<n;i++)
        {
            if(B<=a[i])
            {
                count++;
                B+=a[i];
            }
        }
        System.out.println(count);
    }
}