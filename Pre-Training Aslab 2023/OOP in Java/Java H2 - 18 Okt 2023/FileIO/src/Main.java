import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.nio.Buffer;
import java.util.Scanner;

public class Main {
	public Scanner s = new Scanner(System.in);
	public Main() {
		readFile();
		writeFile();
	}
	
	public void readFile() {
		//referensi file
		try {
		File file = new File("src/account.txt");
		Scanner fScan = new Scanner(file);
		while(fScan.hasNextLine()) {
			String data = fScan.nextLine();
			System.out.println(data);
		}
		fScan.close();
	}
	 catch (Exception e) {
		e.printStackTrace();
	}
	
}
	public void writeFile() {
		try {
			//path menuju file text
			String path = "src/account.txt";
			
			// untuk tulis file
			FileWriter fw = new FileWriter(path, true);
			// untuk menulis file dalam beberapa kali buffer
			BufferedWriter bw = new BufferedWriter(fw);
			//supaya kita bisa menggunakan println() di dalam file write
			PrintWriter pw = new PrintWriter(fw);
			
			String username = "";
			String password = "";
			
			System.out.print("Name : ");
			username = s.nextLine();
			
			System.out.print("Pass : ");
			password = s.nextLine();
			
			pw.printf("%s#%s\n", username,password);
			pw.close();
			System.out.println("Account saved successfully!");
		} catch (Exception e) {
			e.printStackTrace();
		}
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
new Main();
	}

}
