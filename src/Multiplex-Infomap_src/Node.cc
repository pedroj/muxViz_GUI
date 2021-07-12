#include "Node.h"

Node::Node(){
  
  enter = 0.0;
  exit = 0.0;
  size = 0.0;
  selfLink = 0.0;
  
}


Node::Node(int nodenr,double tpweight){
  
  teleportWeight = tpweight;
  index = nodenr;
  enter = 0.0;
  exit = 0.0;
  size = 0.0;
  selfLink = 0.0;
  members.push_back(nodenr);
  
}
