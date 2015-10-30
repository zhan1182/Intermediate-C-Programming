#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "answer09.h"

int main(int argc, char *argv[])
{
  BusinessNode * tree = load_tree_from_file(argv[1]);
  BusinessNode * node;
  node = tree_search_name("Pine Cone Restaurant", tree);
  print_node(node);
  node = tree_search_name("McV Salon", tree);
  print_node(node);
  node =tree_search_name("Country Cafe", tree);
  print_node(node);
  node = tree_search_name("Avanti Italian Restaurant", tree);
  print_node(node);
  node =tree_search_name("Hair & Nails Zone", tree);
  print_node(node);
  destroy_tree(tree);
  return 0;
}
