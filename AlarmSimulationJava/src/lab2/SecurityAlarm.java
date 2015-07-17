package lab2;

public abstract class SecurityAlarm {
	public final int alarm_normal=0;
	public final int alarm_activated=1;
	public final int alarm_failure=2;
	public SecurityAlarm(){}
	public void alarmFailure(String s){
		System.out.println(s);
	}
	public abstract void alarm();
	public abstract int sensorSample();
}
