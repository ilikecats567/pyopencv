// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvBox2D.pypp.hpp"

namespace bp = boost::python;

void register_CvBox2D_class(){

    bp::class_< CvBox2D >( "CvBox2D" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBox2D >() )    
        .def_readwrite( "angle", &CvBox2D::angle )    
        .def_readwrite( "center", &CvBox2D::center )    
        .def_readwrite( "size", &CvBox2D::size );

}
