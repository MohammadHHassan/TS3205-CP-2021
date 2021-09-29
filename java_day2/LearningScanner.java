/* This program asks the user to enter his/her name.
 * To accept user input, we need to use Scanner class.
 * To use Scanner class, we need to import Scanner API.
 * API = Application Programming Interface
 */

package java_day2;

import java.util.Scanner;

public class LearningScanner
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);		// Declaration of Scanner class
		
		System.out.println("Please enter your name: ");
		String name = scanner.nextLine();				// Storing user input in variable name
		
		System.out.println("Your name is " + name);
		
		scanner.close();		// Close scanner class
	}
}
