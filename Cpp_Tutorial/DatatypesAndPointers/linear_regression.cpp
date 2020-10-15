#include <iostream>
using namespace std;

int main()
{
	// Input Features and Labels.
	float X[5] = {1, 2, 3, 6, 10};
	float y[5] = {2, 4, 6, 12, 20};

	// y = Wx + b, b=0
	float W = 100.0;
	
	// Metrics
	float y_hat, loss;
	float learning_rate = 0.05;
	
	for(int epoch=0; epoch<10; epoch++) {
		// Train for one epoch
		for(int i=0; i<5; i++) {
		  y_hat = W * X[i];
		  loss = (y_hat - y[i]);
		  // If loss was not zero upgrade rule would be:
		  W = W - (learning_rate * loss);
		  cout << "Epoch" << epoch << ", Sample" << i <<", Loss: " << loss << endl;
		}
	}
	cout << "Final Weight:" << W << endl;
	
    return 0;
}
