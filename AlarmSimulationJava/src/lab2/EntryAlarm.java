package lab2;
import java.lang.Math.*;
public class EntryAlarm extends SecurityAlarm{
	public final double entry_threshold=0.5;
	public String location;
	public int alarmnumber;
	public double entrysensor;
	public EntryAlarm(){}
	public EntryAlarm(int n,String s){
		location=s;
		alarmnumber=n;
		entrysensor=0.0;
	}
	public void alarm(){System.out.println("entry alarm"+location);}
	public int sensorSample(){
		entrysensor=Math.random();
		if(entrysensor>entry_threshold)
		{	alarm();
			return 1;//alarm
		}
		else
			return 0;//no alarm
	}
}
