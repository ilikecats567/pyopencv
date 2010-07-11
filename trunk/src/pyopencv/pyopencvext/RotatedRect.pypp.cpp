// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "RotatedRect.pypp.hpp"

namespace bp = boost::python;

void register_RotatedRect_class(){

    bp::class_< cv::RotatedRect >( "RotatedRect", "\nPossibly rotated rectangle."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/basic_structures.html#rotatedrect", bp::init< >("\nConstructor."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/basic_structures.html#rotatedrect") )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::RotatedRect >(), "\nPossibly rotated rectangle."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/basic_structures.html#rotatedrect" )    
        .def( bp::init< cv::Point2f const &, cv::Size2f const &, float >(( bp::arg("_center"), bp::arg("_size"), bp::arg("_angle") ), "\nConstructor."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/basic_structures.html#rotatedrect") )    
        .def( 
            "boundingRect"
            , (::cv::Rect ( cv::RotatedRect::* )(  ) const)( &::cv::RotatedRect::boundingRect )
            , "\nReturns minimal up-right rectangle that contains the rotated "
    "\nrectangle."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/basic_structures.html#rotatedrect" )    
        .def( 
            "points"
            , (void ( cv::RotatedRect::* )( ::cv::Point2f * ) const)( &::cv::RotatedRect::points )
            , ( bp::arg("pt") ) )    
        .def_readwrite( "angle", &cv::RotatedRect::angle )    
        .def_readwrite( "center", &cv::RotatedRect::center )    
        .def_readwrite( "size", &cv::RotatedRect::size )    
        .def("from_ndarray", &sdcpp::from_ndarray< cv::RotatedRect >, (bp::arg("inst_ndarray")) )    
        .staticmethod("from_ndarray")    
        .add_property("ndarray", &sdcpp::as_ndarray< cv::RotatedRect >);

}
