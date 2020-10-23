#include <iostream>
#include <vector>
#include <cstdlib>

void OneLayerPerceptron(std::vector<double> X, std::vector<double> y, int epochs, double learning_rate)
{
	// y = Wx + b
	// Removing Bias For Ease of Use.
	// Initiate The Weight Randomly.
	double W;
        W = ((double) rand() / (RAND_MAX));

        // Metrics
        double y_hat, loss, total_loss;

        for(int epoch=0; epoch<epochs; epoch++) {
                total_loss = 0;
                // Train for one batch, (batchsize is 1)
                for(int i=0; i<X.size(); i++) {
                  y_hat = W * X[i];
                  loss = (y_hat - y[i]);
                  total_loss += loss;
                  // cout << "Sample" << i <<", Loss: " << loss << endl;
                }
                // If loss was not zero upgrade rule would be:
                W = W - (learning_rate * total_loss);
       
                std::cout << "Epoch " << epoch << ", Loss: " << total_loss << std::endl;
        }
        std::cout << "Final Weight:" << W << std::endl;
    
}
int main()
{
	// Input Features and Labels.
	std::vector<double> X = {1, 2, 3, 6, 10};
	std::vector<double> y = {4, 6, 8, 14, 22};
	int epochs = 1000;
	double learning_rate = 0.001;

	// Train The Model.
	OneLayerPerceptron(X, y, epochs, learning_rate);	

    return 0;
}
