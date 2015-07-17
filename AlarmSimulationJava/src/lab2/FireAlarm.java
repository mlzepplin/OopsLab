package lab2;

public class FireAlarm extends SecurityAlarm {
	public FireAlarm(double tempsensor, String location) {
		super();
		this.tempsensor = tempsensor;
		this.location = location;
	}
	public FireAlarm(double tempthreshold, double tempsensor, String location) {
		super();
		this.tempthreshold = tempthreshold;
		this.tempsensor = tempsensor;
		this.location = location;
	}
	/**
	 * @return the tempthreshold
	 */
	public synchronized double getTempthreshold() {
		return tempthreshold;
	}
	/**
	 * @param tempthreshold the tempthreshold to set
	 */
	public synchronized void setTempthreshold(double tempthreshold) {
		this.tempthreshold = tempthreshold;
	}
	/* (non-Javadoc)
	 * @see java.lang.Object#toString()
	 */
	@Override
	public String toString() {
		return "FireAlarm [max_temp=" + max_temp + ", temp_fail=" + temp_fail
				+ ", tempthreshold=" + tempthreshold + ", tempsensor="
				+ tempsensor + ", location=" + location + ", alarm_normal="
				+ alarm_normal + ", alarm_activated=" + alarm_activated
				+ ", alarm_failure=" + alarm_failure + ", getTempthreshold()="
				+ getTempthreshold() + ", getTempsensor()=" + getTempsensor()
				+ ", getLocation()=" + getLocation() + ", getMax_temp()="
				+ getMax_temp() + ", getTemp_fail()=" + getTemp_fail()
				+ ", hashCode()=" + hashCode() + ", sensorSample()="
				+ sensorSample() + ", getClass()=" + getClass()
				+ ", toString()=" + super.toString() + "]";
	}
	/**
	 * @return the tempsensor
	 */
	public synchronized double getTempsensor() {
		return tempsensor;
	}
	/**
	 * @param tempsensor the tempsensor to set
	 */
	public synchronized void setTempsensor(double tempsensor) {
		this.tempsensor = tempsensor;
	}
	/**
	 * @return the location
	 */
	public synchronized String getLocation() {
		return location;
	}
	/**
	 * @param location the location to set
	 */
	public synchronized void setLocation(String location) {
		this.location = location;
	}
	/**
	 * @return the max_temp
	 */
	public synchronized double getMax_temp() {
		return max_temp;
	}
	/**
	 * @return the temp_fail
	 */
	public synchronized double getTemp_fail() {
		return temp_fail;
	}
	/* (non-Javadoc)
	 * @see java.lang.Object#hashCode()
	 */
	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result
				+ ((location == null) ? 0 : location.hashCode());
		long temp;
		temp = Double.doubleToLongBits(max_temp);
		result = prime * result + (int) (temp ^ (temp >>> 32));
		temp = Double.doubleToLongBits(temp_fail);
		result = prime * result + (int) (temp ^ (temp >>> 32));
		temp = Double.doubleToLongBits(tempsensor);
		result = prime * result + (int) (temp ^ (temp >>> 32));
		temp = Double.doubleToLongBits(tempthreshold);
		result = prime * result + (int) (temp ^ (temp >>> 32));
		return result;
	}
	/* (non-Javadoc)
	 * @see java.lang.Object#equals(java.lang.Object)
	 */
	@Override
	public boolean equals(Object obj) {
		if (this == obj) {
			return true;
		}
		if (obj == null) {
			return false;
		}
		if (!(obj instanceof FireAlarm)) {
			return false;
		}
		FireAlarm other = (FireAlarm) obj;
		if (location == null) {
			if (other.location != null) {
				return false;
			}
		} else if (!location.equals(other.location)) {
			return false;
		}
		if (Double.doubleToLongBits(max_temp) != Double
				.doubleToLongBits(other.max_temp)) {
			return false;
		}
		if (Double.doubleToLongBits(temp_fail) != Double
				.doubleToLongBits(other.temp_fail)) {
			return false;
		}
		if (Double.doubleToLongBits(tempsensor) != Double
				.doubleToLongBits(other.tempsensor)) {
			return false;
		}
		if (Double.doubleToLongBits(tempthreshold) != Double
				.doubleToLongBits(other.tempthreshold)) {
			return false;
		}
		return true;
	}
	public final double max_temp=200.0;
	public final double temp_fail=40.0;
	public double tempthreshold;
	public double tempsensor;
	String location;
	public void alarm(){System.out.println("fire alarm"+location);}
	public int sensorSample(){
		tempsensor=Math.random();
		if(tempsensor>max_temp&&tempthreshold>max_temp)
		{	alarm();
			return 1;
		}
		else if(tempsensor<temp_fail)
		{		System.out.println("alarm malfunc"+location);
				return 1;
		}
		else return 0;
		
	}

		
}
