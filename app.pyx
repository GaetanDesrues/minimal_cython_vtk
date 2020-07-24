# distutils: language = c++

from Object cimport Object

cdef class PyObject:
    cdef Object c_obj

    def hello(self):
        self.c_obj.hello()
