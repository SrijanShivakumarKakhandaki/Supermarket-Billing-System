# Supermarket Billing System

## Overview
The **Supermarket Billing System** is a console-based application written in C that simulates a billing process in a supermarket. This project allows users to select items from different grocery sections (Fruits, Vegetables, Meat, Dairy), enter the desired quantities, and generates a bill, including a 5% discount for a newly opened store.

## Features
- Item selection from various grocery sections:
  - Fruits
  - Vegetables
  - Meat
  - Dairy Products
- Real-time total bill calculation based on selected items and quantities.
- Automatically applies a 5% discount on the total bill.
- Friendly prompts and user interface using console output formatting.
- Displays the current date and time during the billing process.

## How It Works
1. The user is presented with a welcome message and the current date/time.
2. The user chooses grocery sections and selects items by inputting serial numbers and quantities.
3. After selecting from all the required sections, the total bill is calculated.
4. A 5% discount is applied, and the final bill is presented.

## Code Structure
- **Main function** initializes variables for item quantities, total amounts, and prompts the user for inputs.
- **Switch-case statements** handle user choices for different grocery sections.
- **Loops** are used for item selection, and each section's total is calculated individually.
- The final bill is computed by summing up section totals and applying the discount.

## Future Improvements
- Addition of a **Graphical User Interface (GUI)** to enhance user interaction.
- Integration with a **database** for inventory tracking.
- Expansion of available products and dynamic price updates.

## How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/your-repo-link/supermarket-billing-system.git
   ```
2. Compile the C code:
   ```bash
   g++ supermarket_billing_system.cpp -o billing_system
   ```
3. Run the program:
   ```bash
   ./billing_system
   ```

## Conclusion
This project serves as a great introduction to programming concepts like user input handling, switch-case statements, loops, and basic arithmetic operations. It's a simple yet effective system demonstrating the power of C for building small-scale applications.
