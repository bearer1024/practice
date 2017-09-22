/**
 *this file is used to test asseration in java
 *@date 2017.09.02
 */
class Main{
    /**
     * Describe <code>main</code> method here.
     *
     * @param args a <code>String</code> value
     */
    public static void main(String []args){
	int a = 1000;
	String greeting = "hello bearer";
	assert a>1:a;
	assert greeting != null : "here has a greeting ";
	System.out.println("hello");
    }
}
