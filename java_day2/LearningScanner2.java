package java_day2;

import java.util.Scanner;

public class LearningScanner2
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Please enter your first name: ");
		String firstName = scanner.nextLine();
		
		System.out.print("Please enter your last name: ");
		String lastName = scanner.nextLine();
		
		System.out.println("Your full name is " + firstName + " Bin " + lastName);
		
		System.out.print("\nPlease enter an integer value: ");
		int a = scanner.nextInt();
		System.out.println("The integer value you entered is " + a);
		
		System.out.print("\nPlease enter a double value: ");
		double b = scanner.nextDouble();
		System.out.println("The double value you entered is " + b);
		
		System.out.print("\nPlease enter another integer value: ");
		try
		{
			int c = scanner.nextInt();
			System.out.println("c = " + c);
		}
		catch (Exception e)
		{
			System.out.println("You have entered an invalid input.");
		}
		
		scanner.close();
	}
}
