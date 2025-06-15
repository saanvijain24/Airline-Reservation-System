# Airline Reservation System (C++)

> Simple console-based airline reservation system using C++ and object-oriented programming.  
> Built to demonstrate basic OOP principles (*encapsulation, inheritance, modularity*) through a hands-on, menu-driven application.

---

## ✈️  Key Features

| Module        | Responsibilities |
|---------------|------------------|
| Management   | Launches the main menu and orchestrates program flow |
| **Details**      | Captures & stores passenger information (ID, name, age, address, gender) |
| **Registration** | Lists available flights for six popular destinations and records the selected itinerary & fare |
| **Tickets**      | Generates a formatted ticket displaying customer details, destination, and total charges |

**Highlights:**
- Clean, human-readable menu interface
- Static data members for shared state (e.g., customer name, gender, flight details)
- Basic input validation with return-to-menu logic
- Extensible structure—easily add new destinations or features

---

## 🛠 Build & Run

### Prerequisites
- A **C++17**-compatible compiler (e.g., `g++`, `clang++`, MSVC)

### Compile
```bash
# On Linux / macOS / Windows (MinGW)
g++ -std=c++17 -o airline_reservation main.cpp
