#include <iostream>
#include <string>

// A node in the decision tree
struct Node {
  std::string feature;
  std::string value;
  Node* trueBranch;
  Node* falseBranch;
};

// A function to create a new node in the decision tree
Node* createNode(std::string feature, std::string value, Node* trueBranch, Node* falseBranch) {
  Node* node = new Node();
  node->feature = feature;
  node->value = value;
  node->trueBranch = trueBranch;
  node->falseBranch = falseBranch;
  return node;
}

// A function to classify an animal based on the decision tree
std::string classify(Node* root, std::string animal) {
  if (root->trueBranch == NULL && root->falseBranch == NULL) {
    // If the node has no children, it is a leaf node and contains the classification
    return root->value;
  }
  else {
    // If the node has children, check the value of the feature for the animal
    // and follow the corresponding branch
    if (animal.find(root->feature) != std::string::npos) {
      return classify(root->trueBranch, animal);
    }
    else {
      return classify(root->falseBranch, animal);
    }
  }
}

int main() {
  // Build the decision tree
  Node* root = createNode("feathers", "bird", NULL, NULL);
  root->falseBranch = createNode("fins", "fish", NULL, NULL);
  root->falseBranch->falseBranch = createNode("fur", "mammal", NULL, NULL);
  
  // Classify some animals
  std::cout << classify(root, "bird with feathers") << std::endl;
  std::cout << classify(root, "fish with fins") << std::endl;
  std::cout << classify(root, "mammal with fur") << std::endl;
  
  return 0;
}
