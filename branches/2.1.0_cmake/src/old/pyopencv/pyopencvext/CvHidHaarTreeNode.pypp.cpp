// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvHidHaarTreeNode.pypp.hpp"

namespace bp = boost::python;

void register_CvHidHaarTreeNode_class(){

    bp::class_< CvHidHaarTreeNode >( "CvHidHaarTreeNode" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvHidHaarTreeNode >() )    
        .def_readwrite( "feature", &CvHidHaarTreeNode::feature )    
        .def_readwrite( "left", &CvHidHaarTreeNode::left )    
        .def_readwrite( "right", &CvHidHaarTreeNode::right )    
        .def_readwrite( "threshold", &CvHidHaarTreeNode::threshold );

}