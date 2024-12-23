
# GTK Calculator App

This is a beginner-friendly **Calculator App** built using **GTK** and **Glade**, styled with **CSS**. The application supports basic arithmetic operations and demonstrates how to integrate modern styling into GTK applications.

---

## Features

- **Basic Arithmetic:** Perform addition, subtraction, multiplication, and division.
- **Interactive Interface:** Responsive design using CSS for a better user experience.
- **Signal Handling:** Implements event-driven programming with GTK.
- **Extendable:** Designed for future enhancements, such as advanced mathematical functions.

---

## Getting Started

### Prerequisites
Ensure the following are installed on your system:
- [GTK 3](https://www.gtk.org/) or newer
- [Glade](https://glade.gnome.org/) for UI design
- GCC for C compilation

---

### Installation
1. Clone this repository:
   ```bash
   git clone https://github.com/SCCSMARTCODE/GTK-GUI-Learning.git
   cd CalculatorApp
   ```
2. Build the application:
   ```bash
   make
   ```
3. Run the application:
   ```bash
   ./build/CalculatorApp
   ```

---

## File Structure

- `assets/` - Contains CSS and optional icons.
- `src/` - Application source code, including main logic and utility files.
- `ui/` - The Glade file for the user interface design.
- `docs/` - Project documentation and guides.

---

## How It Works

1. **UI Design with Glade:** The interface is built in `calculator.glade` and loaded at runtime.
2. **Styling with CSS:** The `assets/styles/main.css` file defines styles for buttons, input fields, and layout.
3. **Signal Handling:** Button clicks are connected to C functions defined in `callbacks.c`.

---

## Screenshots

*(Add screenshots of your application here after building the UI.)*

---

## Future Enhancements

- Implement advanced operations (e.g., trigonometric functions, memory storage).
- Add keyboard shortcuts for faster interaction.
- Support multiple themes using different CSS files.

---

## License

This project is licensed under the [MIT License](LICENSE).

---

## Contributing

Contributions are welcome! Feel free to fork the repository and submit pull requests.