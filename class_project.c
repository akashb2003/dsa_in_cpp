#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int queue[200]; // Declare the queue array
int front = 0; // Initialize the front index to 0
int rear = 0; // Initialize the rear index to 0

// Function to remove an element from the queue
void dequeue()
{
if (front == rear) // If the queue is empty
{
printf("Queue is empty\n"); // Print an error message
return; // Exit the function
}
front++; // Increment the front index
}

// Function to swap the positions of two elements in the queue
void swap(int i, int j)
{
int temp = queue[i]; // Store the value of the element at position i in a temporary variable
queue[i] = queue[j]; // Swap the values of the two elements
queue[j] = temp; // Store the value of the element at position i in the element at position j
}

int main()
{
   int i,QUEUE_SIZE;
    
    int customers;
    double arrival_rate, service_rate, probability;
    
    printf("//Priority customers have their id number less than 100\n//For priority customers of 'i'th position will be swaped with the 'i-1'th position\n");
    
    // Read input
    printf("\nEnter number of customers: ");
    scanf("%d", &customers);
    QUEUE_SIZE = customers;
    printf("Enter arrival rate (per minute): ");
    scanf("%lf", &arrival_rate);
    printf("Enter service rate (per minute): ");
    scanf("%lf", &service_rate);
    
    if(arrival_rate > service_rate)
    {
        printf("Service rate cannot be faster than arrival rate\n");
        exit(0);
    }
    
 printf("Enter customers with their customer id \n \n");
for (i = 0; i < QUEUE_SIZE; i++) // Read in 15 numbers
{
    printf("Enter the customer id %d: ", i+1);
scanf("%d", &queue[i]); // Add each number to the queue
}

printf("\nInitial Queue (id number) :\n ");
for (i = 0; i < QUEUE_SIZE; i++) // Iterate through the queue
{
    printf("%d ", queue[i]); // Print each element
}
printf("\n"); // Print a newline after the queue

for (i = 1; i < QUEUE_SIZE; i++) // Iterate through the queue
{
    if (queue[i] < 100) // If the current element is less than 100
    {
        swap(i, i - 1); // Swap its position with the element before it
    }
}

printf("\nFinal Queue (id number) after giving priority to prioritize customers :\n ");
for (i = 0; i < QUEUE_SIZE; i++) // Iterate through the queue
{
    printf("%d ", queue[i]); // Print each element
}
printf("\n"); // Print a newline after the queue

    // Calculate probability of zero customers in the system
    probability = 1 - arrival_rate/service_rate;

    // Calculate average number of customers in the system
    double avg_customers = (arrival_rate/service_rate) / (1 - arrival_rate/service_rate);

    // Calculate average time spent in the system by each customer
    double avg_time = avg_customers / arrival_rate;

    // Calculate average time spent in the queue by each customer
    double avg_queue_time = avg_time - (1/service_rate);

    // Calculate probability of the server being idle
    double idle_probability = (1 / (service_rate - arrival_rate));
    
    double inSytem =  1 - pow((arrival_rate/service_rate),customers)*(1-(arrival_rate/service_rate));
    
    // Print results
    printf("\nProbability of zero customers in the system: %.2lf\n", probability);
    printf("Average number of customers in the system: %.2lf\n", avg_customers);
    printf("Average time spent in the system by non priority customer: %.2lf minutes\n", avg_time+(avg_time*0.15));
    printf("Average time spent in the system by priority customer: %.2lf minutes\n", avg_time-(avg_time*0.15));
    printf("Average time spent in the queue by each customer: %.2lf minutes\n", avg_queue_time);
    printf("Probability of having exactly %d customers in the system is %.2lf\n", customers,inSytem);
    printf("Probability of the server being idle: %.2lf\n", idle_probability);

}
