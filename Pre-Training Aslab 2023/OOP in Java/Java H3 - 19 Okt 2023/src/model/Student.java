package model;

public class Student {
	
	private String studentName;
	private Integer studentAge;

		public String getStudentName(boolean isStudent) {
			if(!isStudent) {
				System.out.println("You are not a student");
				return null;
			}
			return studentName;
		}
	public Student(String studentName, Integer studentAge) {
		super();
		this.setStudentName(studentName);
		this.setStudentAge(studentAge);
	}
	public String getStudentName() {
		return studentName;
	}
	public void setStudentName(String studentName) {
		this.studentName = studentName;
	}
	public Integer getStudentAge() {
		return studentAge;
	}
	public void setStudentAge(Integer studentAge) {
		this.studentAge = studentAge;
	}

}

