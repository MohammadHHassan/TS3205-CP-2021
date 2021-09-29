package java_day2;

public class LearningAssignmentOperator
{
	public static void main(String[] args)		// Main method
	{
		int x=1;
		System.out.println("Initially, x = " + x);
		
		x = x+1;		// Increment x by 1. x=2
		System.out.println("Incremented, x = " + x);
		
		x++;			// Increment x by 1. x=3
		System.out.println("Incremented, x = " + x);
		
		x += 1;			// Increment x by 1. x=4
		System.out.println("Incremented, x = " + x);
		
		x = x-1;		// Decrement x by 1. x=3
		System.out.println("Decremented, x = " + x);
		
		x--;			// Decrement x by 1. x=2
		System.out.println("Decremented, x = " + x);
		
		x -= 1;			// Decrement x by 1. x=1
		System.out.println("Decremented, x = " + x);
	}
}
