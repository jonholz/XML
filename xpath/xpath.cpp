#include <iostream>
#include <libxml/tree.h>
#include <libxml/parser.h>
#include <libxml/xpath.h>
#include <libxml/xpathInternals.h>

int main (int argc, char *argv[])
{
   LIBXML_TEST_VERSION
   char const *xml = "xpath.xml";
   xmlDocPtr doc = xmlParseFile(xml);
   if (doc == NULL)
      return(1);
   xmlNodePtr root = xmlDocGetRootElement(doc);
   if (root == NULL)
      return(1);
   xmlXPathContextPtr ctxt = xmlXPathNewContext(doc);
   char const *exp = "//c[@id = 3]";
   xmlXPathObjectPtr res = xmlXPathEvalExpression((const xmlChar *)exp,ctxt);

   if (res == NULL)
   {
      std::cout << "No matching Node" << std::endl;  
   }
   else
   {
      xmlNodeSetPtr nodeset = res->nodesetval;
      std::cout << "Found " << nodeset->nodeNr << " nodes"  << std::endl;
      if (nodeset->nodeNr)
      {
         std::cout << nodeset->nodeTab[0]->children->content << std::endl;
      }   
   }

   xmlXPathFreeObject(res);
   xmlFreeDoc(doc);
   xmlCleanupParser();
   return(0);
}
