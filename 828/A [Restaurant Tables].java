import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n=in.nextInt(),a=in.nextInt(),b=in.nextInt(),d=0,c=0;
        int[] ar=new int[n];
        for(int i=0;i<n;i++)
            ar[i]=in.nextInt();
        for(int i=0;i<n;i++)
        {
            if(ar[i]==1)
            {
                if(a>0)
                    a--;
                else if(b>0)
                {
                    b--;
                    c++;
                }
                else if(c>0)
                    c--;
                else
                    d++;
            }
            else if(ar[i]==2)
            {
                if(b>0)
                    b--;
                else
                    d+=2;
            }

        }
        System.out.println(d);
    }
}
