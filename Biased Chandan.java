import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Test
{
    public static void main(String args[]) throws NumberFormatException,IOException
    {
        BufferedReader s=new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(s.readLine());
        int arr[]=new int[n];
        int sum=0;
        Stack<Integer> st=new Stack<Integer>();
        for(int i=0;i<n;i++)
        {
            arr[i]=Integer.parseInt(s.readLine());
            if(arr[i]==0)
            {
                if(!st.isEmpty())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(arr[i]);
            }
        }
        while(!st.isEmpty())
        {
            sum+=st.pop();
        }
        System.out.println(sum);
    }
}
