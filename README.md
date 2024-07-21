# Rational Polynomial Library

This project provides a C++ library for working with rational polynomials.
This project is made as a pet project to study CMake tool.

## Installation

To build and install the library, follow these steps:

1. Clone this repository:
```bash
git clone https://github.com/MaksimVarivodin/rational_poly.git
```

2. Navigate to the project directory:
```bash
cd rational_poly
```

3. Create a build directory:
```bash
mkdir build && cd build
```

4. Configure the build using CMake:
```bash
cmake ..
```

5. Build the library:
```bash
make
```

6. Install the library:
```bash
sudo make install
```

## Usage

To use the library in your own project, add the following lines to your `CMakeLists.txt`:

```cmake
add_subdirectory(path/to/rational_poly)
target_link_libraries(your_target lib_rational)
target_include_directories(your_target PUBLIC path/to/rational_poly/lib_rational)
```

Replace `path/to/rational_poly` with the actual path to the cloned repository.

## Contributing

Contributions are welcome! If you find any bugs or have suggestions for improvements, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE.txt) file for more information.