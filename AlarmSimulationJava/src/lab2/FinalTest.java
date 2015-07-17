package lab2;

public class FinalTest {
	public static void main(String args[]){
		SecurityAlarm[] alarm={new FireAlarm(10.0,"kitchen"),
								new EntryAlarm(10,"rear ent"),
								new COAlarm(130,"furnace room")
		};
		
		int status=0;
		System.out.println("simulating");
		for(int i=0;i<3;++i)
			for(int j=0;j<alarm.length;++j)
					status=alarm[j].sensorSample();
	}
}
