# Qt-Assignment-01

## Header files(.h) : 
### Point3D.h
This file defines a C++ class called Point3D which represents a point in 3D space. It includes constructors to initialize the point with coordinates, getter and setter methods for each coordinate (x, y, z), and an overloaded less-than operator to compare points. The class encapsulates three private member variables mX, mY, and mZ to store the coordinates.

### Reader.h
This file defines a C++ class called Reader, which appears to be responsible for reading STL files. It includes a constructor and a destructor. The main function of this class is readSTL, which takes a filepath as a string and a reference to a Triangulation object. Presumably, this function reads data from an STL file located at the given filepath and populates the provided Triangulation object with the data.

### Triangle.h
This file defines a C++ class named Triangle, representing a triangle. It includes constructors and a destructor. The constructors initialize the triangle with indices representing its vertices (inV1, inV2, inV3) and an index for its normal. The class provides accessor methods (v1(), v2(), v3(), normalOfTriangle()) to retrieve these indices. The private members mV1, mV2, mV3, and mNormal store the vertex and normal indices respectively.

### TriangleWindow.h
This file defines a C++ class named TriangleWindow, which appears to be a subclass of OpenGLWindow. It includes initialize() and render() functions, both of which are overridden from the OpenGLWindow base class. The class also declares private member variables m_posAttr, m_colAttr, m_matrixUniform, m_program, and m_frame

### Triangulation.h
This file defines a C++ class named Triangulation. It includes a default constructor and a destructor. The class provides member functions to access the list of triangles (triangles()), unique points (uniquePoints()), and unique normals (uniqueNormal()). Additionally, it includes a function printtriangles() which presumably prints information about the triangles. 

### Writer.h
This file defines a C++ class named Writer. It contains a single member function write() that takes a Triangulation object as a reference parameter and returns a vector of double values. Presumably, this function is intended to write geometry data to an STL file
<hr/>


## Cpp files(.cpp) : 

### Point3D.cpp
This file contains the implementation of the Point3D class, a C++ class representing a point in 3D space. It includes constructors to initialize the point with coordinates, getter methods to retrieve the coordinates, setter methods to modify the coordinates, and an overloaded less-than operator for comparing points. 

### Reader.cpp
The provided code implements a function readSTL within the Reader class, which reads data from an STL file specified by filepath. It parses vertex coordinates and normals from the file, constructs triangles, and populates a Triangulation object with this data.

### Triangle.cpp
The provided file Triangle.cpp contains the implementation of the Triangle class. It defines constructors, a destructor, and accessor methods for the vertices and the normal of a triangle. The constructors initialize the vertices and normal indices, while the accessor methods facilitate retrieving these indices. This class encapsulates functionality for representing and accessing information about a triangle.

### TriangleWindow.cpp
The code provided implements the member functions for the TriangleWindow class, which is responsible for rendering graphics using OpenGL. In the initialize() function, OpenGL shaders are set up, linked, and attribute/uniform locations are retrieved. The render() function orchestrates the rendering process by setting up the viewport, clearing buffers, and binding the shader program. It then reads STL data using the Reader class, populates a Triangulation object, and writes geometry data using the Writer class. Random colors are generated for the vertices, and the geometry data along with colors are passed to OpenGL attributes. Finally, the geometry is drawn using glDrawArrays, and OpenGL states are released. This implementation facilitates the rendering of complex 3D geometry within the context of a Qt application.

### Triangulation.cpp
The provided code implements the Triangulation class, which represents a collection of triangles and associated unique points and normals. It includes constructors and a destructor. 

### Writer.cpp
This code defines the write function within the Writer class. It takes a Triangulation object as a parameter and returns a vector of doubles representing the vertices of triangles in the triangulation. The function retrieves references to the unique points and triangles from the Triangulation object. It then iterates over each triangle, extracting its vertices from the unique points and appending their coordinates to the vertices vector. Finally, it returns the vector of vertices.
<hr/>

`main.cpp`

This main function essentially launches the Qt application, creating an OpenGL window for rendering. It starts the event loop by calling app.exec(), which allows the application to respond to user input and perform rendering tasks. 
