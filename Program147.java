import java.util.*;
import MarvellousNumbers.ArrayX;

class Program147
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iLength = 0; 
		float fRet = 0.0f;
		
		System.out.println("Enter the number of elements");
		iLength = sobj.nextInt();
		
		Marvellous mobj = new Marvellous(iLength); //constructor call
		fRet = mobj.Average();
		System.out.println("Average is :"+fRet);
	}
}


class Marvellous extends ArrayX
{
	public Marvellous(int iValue)
	{
		super (iValue); 
	}
	
	public float Average()
	{
		int iSum = 0, iCnt = 0;
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			iSum = iSum + Arr[iCnt];
		}
		return (iSum / Arr.length);
	}
}

