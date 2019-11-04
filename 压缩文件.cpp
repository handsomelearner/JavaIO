public class GZIPTester {

	public static void main(String[] args) throws IOException {
		Scanner stdin=new Scanner(System.in);
		String FileName=stdin.nextLine();
		try {
		File f=new File("/Users/chenhoutao/Desktop/JavaDocument/"+FileName+".txt");
		if(!f.exists()) f.createNewFile();
		FileInputStream fin=new FileInputStream(f);
		GZIPOutputStream push=new GZIPOutputStream(new FileOutputStream("/Users/chenhoutao/Desktop/JavaDocument/"+FileName+".gz"));
		int c;
		while((c=fin.read())!=-1) {
			push.write(c);
		}
		fin.close();
		push.close();
		
		}catch(IOException e) {
			e.printStackTrace();
		}

	}

}
