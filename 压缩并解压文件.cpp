import java.util.*;
import java.util.zip.GZIPInputStream;
import java.util.zip.GZIPOutputStream;
import java.io.*;
public class GZIPTester {

	public static void main(String[] args) throws IOException {
		Scanner stdin=new Scanner(System.in);
		String FileName=stdin.nextLine();
		try {
		File f=new File("/Users/chenhoutao/Desktop/JavaDocument/"+FileName+".txt");
		if(!f.exists()) f.createNewFile();
		//压缩
		FileInputStream fin=new FileInputStream(f);
		GZIPOutputStream push=new GZIPOutputStream(new FileOutputStream("/Users/chenhoutao/Desktop/JavaDocument/"+FileName+".gz"));
		int c;
		while((c=fin.read())!=-1) {
			push.write(c);
		}
		fin.close();
		push.close();
		//解压
		GZIPInputStream free=new GZIPInputStream(new FileInputStream("/Users/chenhoutao/Desktop/JavaDocument/"+FileName+".gz"));
		FileOutputStream fout=new FileOutputStream("/Users/chenhoutao/Desktop/JavaDocument/new"+FileName+".txt");
		while((c=free.read())!=-1) {
			fout.write(c);
		}
		free.close();
		fout.close();
		}catch(IOException e) {
			e.printStackTrace();
		}

	}

}
