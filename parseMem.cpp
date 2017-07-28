#include <cstring>
#include <iostream>
#include <libxml/tree.h>
#include <libxml/parser.h>

int main (int argc, char *argv[])
{
   LIBXML_TEST_VERSION
   char const *xml = "<message>Hello World!</message>";
   xmlDocPtr doc = xmlParseMemory(xml, strlen(xml));
   if (doc == NULL)
      return(1);
   xmlNodePtr root = xmlDocGetRootElement(doc);
   if (root == NULL)
      return(1);
   std::cout << xmlNodeGetContent(root) << std::endl;
   xmlFreeDoc(doc);
   xmlCleanupParser();
   return(0);
}
