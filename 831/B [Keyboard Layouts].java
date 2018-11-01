
import java.util.HashMap;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        HashMap<Character, Character> mp = new HashMap<Character, Character>();
        String s1=in.next(),s2=in.next(),t=in.next();
        for(int i=0;i<26;i++)
            mp.put((Character)s1.charAt(i),(Character) s2.charAt(i));
        for(int i=0;i<t.length();i++)
        {
            if(t.charAt(i)>='0'&&t.charAt(i)<='9')
                System.out.print(t.charAt(i));
            else if(Character.isUpperCase(t.charAt(i))==true)
                System.out.print(Character.toUpperCase(mp.get(Character.toLowerCase(t.charAt(i)))));
            else
                System.out.print(mp.get(t.charAt(i)));
        }
    }
}
