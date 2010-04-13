// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "StarDetector.pypp.hpp"

namespace bp = boost::python;

static boost::python::object __call___c2d97c9701a9c79dcec3239fd753dffc( ::cv::StarDetector const & inst, ::cv::Mat const & image ){
    std::vector<cv::KeyPoint, std::allocator<cv::KeyPoint> > keypoints2;
    bp::list keypoints3;
    inst.operator()(image, keypoints2);
    convert_from_T_to_object(keypoints2, keypoints3);
    return bp::object( keypoints3 );
}

void register_StarDetector_class(){

    bp::class_< cv::StarDetector, bp::bases< CvStarDetectorParams > >( "StarDetector", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::StarDetector >() )    
        .def( bp::init< int, int, int, int, int >(( bp::arg("_maxSize"), bp::arg("_responseThreshold"), bp::arg("_lineThresholdProjected"), bp::arg("_lineThresholdBinarized"), bp::arg("_suppressNonmaxSize") )) )    
        .def( 
            "__call__"
            , (boost::python::object (*)( ::cv::StarDetector const &,::cv::Mat const & ))( &__call___c2d97c9701a9c79dcec3239fd753dffc )
            , ( bp::arg("inst"), bp::arg("image") )
            , "\nWrapped function:"
    "\n    operator()"
    "\nArgument 'keypoints':"\
    "\n    C/C++ type: ::std::vector< cv::KeyPoint > &."\
    "\n    Python type: list."\
    "\n    To convert a Mat into a list, invoke one of Mat's member functions "\
    "\n    to_list_of_...()."\
    "\n    Output argument: omitted from the function's calling sequence, and is "\
    "\n    returned along with the function's return value (if any)." );

}
