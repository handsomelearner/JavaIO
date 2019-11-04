public class Tester {

	public static void main(String[] args) {
	Scanner stdin=new Scanner(System.in);
	String FileName=stdin.nextLine();
	File MyFile=new File("/Users/chenhoutao/Desktop/JavaDocument/"+FileName+".txt");
	System.out.println("获得文件路径: "+MyFile.getPath());
	System.out.println("获得文件名: "+MyFile.getName());
	System.out.println("获得它上一级的路径: "+MyFile.getParentFile());
	MyFile.delete();	//删除该文件
	}
}
