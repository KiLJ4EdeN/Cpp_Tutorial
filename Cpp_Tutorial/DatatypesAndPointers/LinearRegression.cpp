#include <iostream>
using namespace std;

int main()
{
	// Input Features and Labels.
	float X[5] = {1, 2, 3, 6, 10};
	float y[5] = {4, 6, 8, 14, 22};

	// y = Wx + b
	float W = 100.0;
	float b = 100.0;
	
	// Metrics
	float y_hat, loss, total_loss;
	float learning_rate = 0.001;
	
	for(int epoch=0; epoch<1000; epoch++) {
		total_loss = 0;
		// Train for one batch
		for(int i=0; i<5; i++) {
		  y_hat = W * X[i] + b;
		  loss = (y_hat - y[i]);
		  total_loss += loss;
		  // cout << "Sample" << i <<", Loss: " << loss << endl;
		}
		// If loss was not zero upgrade rule would be:
		W = W - (learning_rate * total_loss);
		b = b - (learning_rate * total_loss);
		cout << "Epoch " << epoch << ", Loss: " << total_loss << endl;  
	}
	cout << "Final Weight:" << W << endl;
	cout << "Final Bias:" << b << endl;	
    return 0;
}
