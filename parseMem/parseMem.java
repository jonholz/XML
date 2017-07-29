import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.DocumentBuilder;
import org.w3c.dom.Document;
import org.xml.sax.InputSource;
import java.io.StringReader;

public class parseMem
{
   public static void main(String[] args)
   {
      try
      {
         DocumentBuilder db = DocumentBuilderFactory.newInstance().newDocumentBuilder();      
         Document dom = db.parse(new InputSource(new StringReader("<message>Hello World</message>")));
         System.out.println(dom.getDocumentElement().getTextContent());
      }
      catch (Exception e)
      {
         e.printStackTrace();
      }
   }
}
