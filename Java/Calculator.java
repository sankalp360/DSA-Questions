package test1;
import java.util.*;
public class Calculator {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// If it will be executed or not
		
		int a = 0;
		int b = 0;
		char op = ' ';
		while(true)
		{
			Scanner scn = new Scanner(System.in);
			boolean toContinue;
			toContinue = scn.nextBoolean();
			if(toContinue == false)
			{
				break;
			}
		
			a = scn.nextInt();
			op = scn.next().charAt(0);
			b = scn.nextInt();
			
			switch(op)
			{
			case '+':
				System.out.println(a + b);
				break;
				
			case '-':
				System.out.println(a - b);
				break;
				
			case '*':
				System.out.println(a * b);
				break;
				
			case '/':
				float ans = (float) a / b;
				System.out.println(ans);
				break;
				
			case '%':
				System.out.println(a % b);
				break;
				
			default:
				System.out.println("Undefined Operation");
				
				
				
				
			}
			
		}
	
	}

}
