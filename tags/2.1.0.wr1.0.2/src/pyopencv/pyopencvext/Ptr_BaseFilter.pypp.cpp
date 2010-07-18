// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object/life_support.hpp"
#include "Ptr_BaseFilter.pypp.hpp"

namespace bp = boost::python;

static bp::object from_BaseFilter(bp::object const &inst_BaseFilter)
{
    bp::extract<cv::BaseFilter *> elem(inst_BaseFilter);
    if(!elem.check())
    {
        char s[300];
        sprintf( s, "Argument 'inst_BaseFilter' must contain an object of type BaseFilter." );
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set();
    }

    bp::object result = bp::object(::cv::Ptr< cv::BaseFilter >(elem()));
    bp::objects::make_nurse_and_patient(result.ptr(), inst_BaseFilter.ptr());
    return result;
}

static cv::BaseFilter const &pointee(::cv::Ptr< cv::BaseFilter > const &inst) { return *((cv::BaseFilter const *)inst); }

void register_Ptr_BaseFilter_class(){

    { //::cv::Ptr< cv::BaseFilter >
        typedef bp::class_< cv::Ptr< cv::BaseFilter > > Ptr_BaseFilter_exposer_t;
        Ptr_BaseFilter_exposer_t Ptr_BaseFilter_exposer = Ptr_BaseFilter_exposer_t( "Ptr_BaseFilter", bp::init< >() );
        bp::scope Ptr_BaseFilter_scope( Ptr_BaseFilter_exposer );
        Ptr_BaseFilter_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Ptr< cv::BaseFilter > >() );
        { //::cv::Ptr< cv::BaseFilter >::addref
        
            typedef cv::Ptr< cv::BaseFilter > exported_class_t;
            typedef void ( exported_class_t::*addref_function_type )(  ) ;
            
            Ptr_BaseFilter_exposer.def( 
                "addref"
                , addref_function_type( &::cv::Ptr< cv::BaseFilter >::addref ) );
        
        }
        { //::cv::Ptr< cv::BaseFilter >::delete_obj
        
            typedef cv::Ptr< cv::BaseFilter > exported_class_t;
            typedef void ( exported_class_t::*delete_obj_function_type )(  ) ;
            
            Ptr_BaseFilter_exposer.def( 
                "delete_obj"
                , delete_obj_function_type( &::cv::Ptr< cv::BaseFilter >::delete_obj ) );
        
        }
        { //::cv::Ptr< cv::BaseFilter >::empty
        
            typedef cv::Ptr< cv::BaseFilter > exported_class_t;
            typedef bool ( exported_class_t::*empty_function_type )(  ) const;
            
            Ptr_BaseFilter_exposer.def( 
                "empty"
                , empty_function_type( &::cv::Ptr< cv::BaseFilter >::empty ) );
        
        }
        { //::cv::Ptr< cv::BaseFilter >::release
        
            typedef cv::Ptr< cv::BaseFilter > exported_class_t;
            typedef void ( exported_class_t::*release_function_type )(  ) ;
            
            Ptr_BaseFilter_exposer.def( 
                "release"
                , release_function_type( &::cv::Ptr< cv::BaseFilter >::release ) );
        
        }
        Ptr_BaseFilter_exposer.def("fromBaseFilter", &::from_BaseFilter, (bp::arg("inst_BaseFilter")));
        Ptr_BaseFilter_exposer.staticmethod("fromBaseFilter");
        Ptr_BaseFilter_exposer.add_property("pointee", bp::make_function(&::pointee, bp::return_internal_reference<>()));
    }

}