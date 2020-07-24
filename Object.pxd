# Declare the class with cdef
cdef extern from "object.h":
    cdef cppclass Object:
        Object() except +
        void hello()
