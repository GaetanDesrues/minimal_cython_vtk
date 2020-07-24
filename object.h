#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>

#include <vtkSmartPointer.h>
#include <vtkProperty.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>

/* *** Any of the following yields ImportError *** */
// #include <vtkPolyData.h>
// #include <vtkTriangleFilter.h>
// #include <vtkRegularPolygonSource.h>

class Object {
    public:
        Object() { }
        void hello() { std::cout<<"hello"<<std::endl; }
};

#endif
