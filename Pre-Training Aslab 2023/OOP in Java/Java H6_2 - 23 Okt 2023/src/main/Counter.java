package main;

public class Counter {
	int c;
	
	public Counter(int c) {
		super();
		this.c = c;
	}
	
	public synchronized void increment() {
		c++;
		c = c+1;
	}
}
