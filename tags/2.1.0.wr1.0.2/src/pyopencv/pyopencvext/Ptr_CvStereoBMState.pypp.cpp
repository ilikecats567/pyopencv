// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "Ptr_CvStereoBMState.pypp.hpp"

namespace bp = boost::python;

static CvStereoBMState const &pointee(::cv::Ptr< CvStereoBMState > const &inst) { return *((CvStereoBMState const *)inst); }

void register_Ptr_CvStereoBMState_class(){

    { //::cv::Ptr< CvStereoBMState >
        typedef bp::class_< cv::Ptr< CvStereoBMState > > Ptr_CvStereoBMState_exposer_t;
        Ptr_CvStereoBMState_exposer_t Ptr_CvStereoBMState_exposer = Ptr_CvStereoBMState_exposer_t( "Ptr_CvStereoBMState", bp::init< >() );
        bp::scope Ptr_CvStereoBMState_scope( Ptr_CvStereoBMState_exposer );
        Ptr_CvStereoBMState_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Ptr< CvStereoBMState > >() );
        Ptr_CvStereoBMState_exposer.def( bp::init< CvStereoBMState * >(( bp::arg("_obj") )) );
        bp::implicitly_convertible< CvStereoBMState *, cv::Ptr< CvStereoBMState > >();
        Ptr_CvStereoBMState_exposer.def( bp::init< cv::Ptr< CvStereoBMState > const & >(( bp::arg("ptr") )) );
        { //::cv::Ptr< CvStereoBMState >::addref
        
            typedef cv::Ptr< CvStereoBMState > exported_class_t;
            typedef void ( exported_class_t::*addref_function_type )(  ) ;
            
            Ptr_CvStereoBMState_exposer.def( 
                "addref"
                , addref_function_type( &::cv::Ptr< CvStereoBMState >::addref ) );
        
        }
        { //::cv::Ptr< CvStereoBMState >::delete_obj
        
            typedef cv::Ptr< CvStereoBMState > exported_class_t;
            typedef void ( exported_class_t::*delete_obj_function_type )(  ) ;
            
            Ptr_CvStereoBMState_exposer.def( 
                "delete_obj"
                , delete_obj_function_type( &::cv::Ptr< CvStereoBMState >::delete_obj ) );
        
        }
        { //::cv::Ptr< CvStereoBMState >::empty
        
            typedef cv::Ptr< CvStereoBMState > exported_class_t;
            typedef bool ( exported_class_t::*empty_function_type )(  ) const;
            
            Ptr_CvStereoBMState_exposer.def( 
                "empty"
                , empty_function_type( &::cv::Ptr< CvStereoBMState >::empty ) );
        
        }
        { //::cv::Ptr< CvStereoBMState >::release
        
            typedef cv::Ptr< CvStereoBMState > exported_class_t;
            typedef void ( exported_class_t::*release_function_type )(  ) ;
            
            Ptr_CvStereoBMState_exposer.def( 
                "release"
                , release_function_type( &::cv::Ptr< CvStereoBMState >::release ) );
        
        }
        Ptr_CvStereoBMState_exposer.add_property("pointee", bp::make_function(&::pointee, bp::return_internal_reference<>()));
    }

}
