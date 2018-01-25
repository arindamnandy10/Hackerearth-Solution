import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        for(int i=0;i<t;i++){
            int n = s.nextInt();
            ArrayList<Integer> list = new ArrayList<>();
            for(int j=0;j<n;j++){
                list.add(s.nextInt());
            }
            for(int j=0;j<n;j++){
                if(Collections.frequency(list,list.get(j))==1){
                    System.out.println(list.get(j));
                    break;
                }
            }
        }
    }
}
