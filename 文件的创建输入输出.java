import java.io.IOException;
import java.io.FileWriter;
import java.io.FileReader;
import java.io.File;
import java.util.Scanner;

public class Tester03 {

	public static void main(String[] args) throws IOException {
		Scanner stdin=new Scanner(System.in);
		//创建文件
		File myfile=new File("/Users/chenhoutao/Desktop/myfile.txt");
		if(myfile.exists()) {
			System.out.println("文件已经存在，快去编辑它吧！");
		}
		else {
			myfile.createNewFile();
		}
		//把数据写入文件
		try {
			FileWriter writer=new FileWriter(myfile,true);
			String s=stdin.nextLine();	
			writer.write(s);
			writer.write("\n");
			writer.close();
		}catch(IOException e) {
			e.printStackTrace();
		}
		//读取文件中的数据
		try {
			FileReader reader=new FileReader(myfile);
			char[] c=new char[1000];
			reader.read(c,0,1000);
			System.out.print(c);
			reader.close();
		}catch(IOException e) {
			e.printStackTrace();
		}

	}

}
