#include <iostream>
using namespace std;

int main()
{
	// Input Features and Labels.
	int X[5] = {1, 2, 3, 6, 10};
	int y[5] = {1, 6, 10, 15, 30};

	// y = Wx + b
	int W[5] = {1, 3, 3, 2, 3};
	int b[5] = {1, 1, 1, 1, 1};
	
	// Metrics
	int y_hat, loss;
	
	for(int i=0; i<5; i++) {
	  y_hat = W[i] * X[i] + b[i];
	  loss = (y[i] - y_hat);
	  // abs
	  if (loss >= 0) {
		  loss = loss;
	  }
	  else {
		  loss = -loss;
	  }
	  // If loss was not zero upgrade rule would be:
	  // W[i] = W[i] - (0.001 * loss)
	  cout << "Step" << i <<", Loss: " << loss << endl;
	}
	
    return 0;
}