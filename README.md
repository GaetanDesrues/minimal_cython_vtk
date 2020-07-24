## Trying to create a cython wrapping of a C++ class depending on the vtk library.

- `object.h` contains the implementation of the C++ class and the *vtk imports*.
- VTK library path is included from `setup.py` (`/usr/local/include/vtk-9.0/`).


#### Out of the box:

Run `python setup.py build_ext --inplace`
Then in python:
```
import app
obj = app.PyObject()
obj.hello() # hello
```

#### BUT when you uncomment one of the offending lines in `object.h`,
Run `python setup.py build_ext --inplace` ok
Then `import app` gives:
```
Traceback (most recent call last):
  File "<string>", line 1, in <module>
ImportError: minimal/rect.cpython-37m-x86_64-linux-gnu.so: undefined symbol: _ZN20vtkDebugLeaksManagerD1Ev
```
