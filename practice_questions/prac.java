/*write a program that takes n as input and give the sum of number that is in between 1-->n ,which are devisible by 2,3;
*/
import java.util.Scanner;
public class prac{
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number you wants ");
        int n=sc.nextInt();
        int count =0;
        for(int i=1;i<n;i++){
            if(n/2==0 && n/3==0){
                count++;
            }
            else;
            return count;
        }

    }

}