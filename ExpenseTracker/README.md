# Personal Expense Tracker

## Project Overview
This is a GTK-based GUI project built in C, designed to help users track their expenses efficiently. It allows users to add, categorize, view, and analyze their expenses through an interactive interface. The application is structured to support scrollable data views and graphical representation of expense distribution.

## Features
- **Expense Entry**: Add expenses with fields for name, amount, and category.
- **Expense List**: View a scrollable list of added expenses with columns for name, amount, and category.
- **Total Calculation**: Automatically calculate and display the total of all expenses.
- **Expense Distribution**: Visualize expenses by category using bar or pie charts.
- **Scrollable TreeView**: Allows easy navigation through long lists of expenses.

## Installation
### Prerequisites
1. Install GTK+3 development libraries:
   ```bash
   sudo apt-get install libgtk-3-dev
   ```
2. A C compiler such as `gcc`.

### Build Instructions
1. Clone the repository:
   ```bash
   git clone https://github.com/SCCSMARTCODE/GTK-GUI-Learning
   cd ExpenseTracker
   ```
2. Compile the project:
   ```bash
   gcc -Wall -Werror -Wextra src/main.c src/handlers.c src/file_operations.c src/utils.c -o ExpenseTracker `pkg-config --cflags --libs gtk+-3.0`
   ```
3. Run the application:
   ```bash
    ./ExpenseTracker
   ```

## Usage
### User Interface Layout
1. **Expense Entry Form**:
   - Fields: Expense Name, Amount, and Category.
   - Action Button: `Save Expense` to add the expense to the list.
2. **Expense List**:
   - Displays a table with all added expenses.
   - Columns: Name, Amount, and Category.
   - Scrollable interface for long lists.
3. **Total Expenses**:
   - Displays the sum of all expenses at the bottom.
4. **Expense Distribution**:
   - Graphical visualization of expenses by category using a placeholder for future pie/bar chart integration.

### Workflow
1. Enter the expense details in the input fields.
2. Click on `Save Expense` to add the entry.
3. Review the expense in the list and observe updated totals.
4. View the distribution of expenses in the graphical area.

## Code Structure
- **Main Application**:
  - Initializes the GTK application and creates the main window.
  - Packs the widgets into a vertical layout.
- **Scrollable TreeView**:
  - Displays the list of expenses.
  - Integrated with `GtkScrolledWindow` for scrollable functionality.
- **Signal Handling**:
  - Button signals manage adding and listing expenses dynamically.
- **Expense Distribution Chart** (placeholder):
  - Reserved section for graphical visualization using GTK-based drawing or chart libraries.

## Future Enhancements
- Integrate graphical libraries like Cairo for bar/pie chart rendering.
- Add functionality to export expenses to CSV.
- Implement advanced filtering and sorting options.

## License
This project is licensed under the MIT License. See the LICENSE file for details.

## Contributions
Contributions are welcome! Please follow these steps:
1. Fork the repository.
2. Create a feature branch.
3. Commit your changes.
4. Submit a pull request.

---
Developed with GTK+ and a passion for learning GUI programming in C!

