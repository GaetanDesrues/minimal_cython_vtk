# Declare the class with cdef
cdef extern from "object.h":
    cdef cppclass Object:
        Rectangle() except +
        void hello()
