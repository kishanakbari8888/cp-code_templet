import java.util.Scanner;
public class Main1
{
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter you roll ");
        int roll = sc.nextInt(); 
        System.out.printf("Enter you name ");
        String name = sc.next();
        System.out.printf("Enter you per ");
        float per = sc.nextFloat(); 
        System.out.printf("Roll is %d\nName is %s\nPer is %f\n ",roll,name,per);
        
	}
}