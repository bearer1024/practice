package practiceJava;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

public class HashMapDemo {

	@SuppressWarnings({ "unchecked", "rawtypes" })
	public static void main(String[] args) {
		//create a hashMap
		HashMap hashMap = new HashMap();
		
		//put some elements
		hashMap.put("cat", new Integer(10000));
		hashMap.put("dog",new Double(11.00));
		hashMap.put("pig", new String("fat"));
		
		//get a set of the entries
		Set set = hashMap.entrySet();
		
		//get an iterator
		Iterator it = set.iterator();
		
		//display elements
		while(it.hasNext()) {
			Map.Entry me = (Map.Entry)it.next();
			System.out.println("key is: "+ me.getKey());
			System.out.println("value is: "+ me.getValue());
		}
		System.out.println();
		
		//modify info in hashMap
		hashMap.put("pig", "fat and lazy");
		System.out.println("now the Mr pig is: "+hashMap.get("pig"));
	}
}
