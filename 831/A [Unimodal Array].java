import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n=in.nextInt();
        short cons=-1,inc=-1,dec=-1;
        int[] a=new int[n];
        for(int i=0;i<n;i++)
            a[i]=in.nextInt();
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                if(dec==1)
                {
                    System.out.println("NO");
                    System.exit(0);
                }
                else
                    cons=1;
            }
            else if(a[i]<a[i+1])
            {
                if(dec==1||cons==1)
                {
                    System.out.println("NO");
                    System.exit(0);
                }
                else
                    inc=1;
            }
            else if(a[i]>a[i+1])
            {
                if(inc==0||cons==0)
                {
                    System.out.println("NO");
                    System.exit(0);
                }
                else
                    dec=1;
            }
        }
        System.out.println("YES");
    }
}
