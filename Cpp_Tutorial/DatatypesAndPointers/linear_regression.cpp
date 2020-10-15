#include <iostream>
using namespace std;

int main()
{
	// Input Features and Labels.
	float X[5] = {1, 2, 3, 6, 10};
	float y[5] = {2, 4, 6, 12, 20};

	// y = Wx + b
	float W = 1.0;
	float b = 0.0;
	
	// Metrics
	int y_hat, loss;
	float learning_rate = 0.01;
	
	for(int epoch=0; epoch<10; epoch++) {
		// Train for one epoch
		for(int i=0; i<5; i++) {
		  y_hat = W * X[i] + b;
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
		  W = W + (learning_rate * loss);
		  // b = b - (learning_rate * loss);
		  cout << "Epoch" << epoch << ", Sample" << i <<", Loss: " << loss << endl;
		}
	}
	cout << "Final Weight:" << W << endl;
	cout << "Final Bias:" << b << endl;
	
    return 0;
}
