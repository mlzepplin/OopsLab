package lab2;
import java.lang.Math.*;

public class COAlarm extends SecurityAlarm {
	public final int maxcothreshold=150;
	public final int cofailthreshold=50;
	public int cothreshold;
	public int cosensor;
	public String location;
	public COAlarm(int ct,String l){
		cothreshold=ct;
		cosensor=0;
		location=l;
	}
	public void alarm(){System.out.println("CO ALARM at"+location);}
	public int sensorSample(){
		cosensor=(int)Math.random();
		if(cosensor>maxcothreshold){
			alarm();
			return 1;
		}
		else if(cosensor<cofailthreshold){
			System.out.println("alarm malfunc at"+location);
			return 1;
		}
		else
			return 0;
		
	}
}
