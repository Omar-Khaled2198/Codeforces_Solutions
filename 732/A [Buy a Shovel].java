import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int k=in.nextInt(),r=in.nextInt(),save=0;
        for(int i=1;;i++)
        {
            if((i*k)%10==0)
            {
                save=i;
                break;
            }
            else if((i*k)%10!=0&&(i*k)%10!=r&&save!=0)
                break;
            else if((i*k)%10!=0&&(i*k)%10==r)
            {
                save = i;
                break;
            }
        }
        System.out.println(save);
    }
}
