package lab1;

public class Circle 
{	
	private double radius;
	public Circle (double r)
	{
		radius = r;
	}
	public double area()
	{
		return Math.PI*Math.pow(radius, 2);
	}
	public double perimeter()
	{
		return Math.PI*2*radius;
		}
	void details()
	{
		System.out.println("\ndetails of circle");
		System.out.println("\nThe area of circle="+area()+"\n\n");
		System.out.println("\nThe perimeter of circle="+perimeter()+"\n\n");
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle circ1, circ2;
		circ1 = new Circle(8);
		circ2 = new Circle(16);
		circ1.details();
		circ2.details();
	}

}
