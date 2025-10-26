# C++ State Method

This repository demonstrates a clean implementation of the **State** design pattern in C++ for a console-based application.

---

## Project Structure

- `IState.hpp` – Interface for defining state behavior  
- `StateA.hpp / StateA.cpp` – Concrete state A implementation  
- `StateB.hpp / StateB.cpp` – Concrete state B implementation  
- `Context.hpp / Context.cpp` – Maintains current state and delegates behavior  
- `main.cpp` – Entry point showcasing dynamic state transitions  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
Context context;

context.setState(new StateA());
context.request(); // Executes StateA behavior

context.setState(new StateB());
context.request(); // Executes StateB behavior
