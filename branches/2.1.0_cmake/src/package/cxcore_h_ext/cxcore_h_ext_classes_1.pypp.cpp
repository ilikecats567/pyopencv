// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__array_1.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cxcore_h_wrapper.hpp"
#include "boost/python/object.hpp"
#include "cxcore_h_ext_classes_1.pypp.hpp"

namespace bp = boost::python;

static ::CvGraphVtx * get_CvGraphScanner_vtx( CvGraphScanner const & inst ) { return inst.vtx; }

static ::CvGraphVtx * get_CvGraphScanner_dst( CvGraphScanner const & inst ) { return inst.dst; }

static ::CvGraphEdge * get_CvGraphScanner_edge( CvGraphScanner const & inst ) { return inst.edge; }

static ::CvGraph * get_CvGraphScanner_graph( CvGraphScanner const & inst ) { return inst.graph; }

static ::CvSeq * get_CvGraphScanner_stack( CvGraphScanner const & inst ) { return inst.stack; }

static ::CvModuleInfo * get_CvModule_info( CvModule const & inst ) { return inst.info; }

static ::CvModuleInfo * get_CvModule_first( CvModule const & inst ) { return inst.first; }

static ::CvModuleInfo * get_CvModule_last( CvModule const & inst ) { return inst.last; }

struct CvNArrayIterator_wrapper : CvNArrayIterator, bp::wrapper< CvNArrayIterator > {

    CvNArrayIterator_wrapper(CvNArrayIterator const & arg )
    : CvNArrayIterator( arg )
      , bp::wrapper< CvNArrayIterator >(){
        // copy constructor
        
    }

    CvNArrayIterator_wrapper()
    : CvNArrayIterator()
      , bp::wrapper< CvNArrayIterator >(){
        // null constructor
        
    }

    static pyplusplus::containers::static_sized::array_1_t< int, 32>
    pyplusplus_stack_wrapper( CvNArrayIterator & inst ){
        return pyplusplus::containers::static_sized::array_1_t< int, 32>( inst.stack );
    }

};

struct CvTreeNodeIterator_wrapper : CvTreeNodeIterator, bp::wrapper< CvTreeNodeIterator > {

    CvTreeNodeIterator_wrapper(CvTreeNodeIterator const & arg )
    : CvTreeNodeIterator( arg )
      , bp::wrapper< CvTreeNodeIterator >(){
        // copy constructor
        
    }

    CvTreeNodeIterator_wrapper()
    : CvTreeNodeIterator()
      , bp::wrapper< CvTreeNodeIterator >(){
        // null constructor
        
    }

};

static ::CvTypeInfo * get_CvType_info( CvType const & inst ) { return inst.info; }

static ::CvTypeInfo * get_CvType_first( CvType const & inst ) { return inst.first; }

static ::CvTypeInfo * get_CvType_last( CvType const & inst ) { return inst.last; }

void register_classes_1(){

    bp::class_< CvGraphScanner >( "CvGraphScanner" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvGraphScanner >() )    
        .def_readwrite( "index", &CvGraphScanner::index )    
        .def_readwrite( "mask", &CvGraphScanner::mask )    
        .add_property( "vtx", bp::make_function(&::get_CvGraphScanner_vtx, bp::return_internal_reference<>()) )    
        .add_property( "dst", bp::make_function(&::get_CvGraphScanner_dst, bp::return_internal_reference<>()) )    
        .add_property( "edge", bp::make_function(&::get_CvGraphScanner_edge, bp::return_internal_reference<>()) )    
        .add_property( "graph", bp::make_function(&::get_CvGraphScanner_graph, bp::return_internal_reference<>()) )    
        .add_property( "stack", bp::make_function(&::get_CvGraphScanner_stack, bp::return_internal_reference<>()) );

    { //::CvModule
        typedef bp::class_< CvModule > CvModule_exposer_t;
        CvModule_exposer_t CvModule_exposer = CvModule_exposer_t( "CvModule", bp::init< CvModuleInfo * >(( bp::arg("_info") )) );
        bp::scope CvModule_scope( CvModule_exposer );
        CvModule_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvModule >() );
        bp::implicitly_convertible< CvModuleInfo *, CvModule >();
        CvModule_exposer.add_property( "info", bp::make_function(&::get_CvModule_info, bp::return_internal_reference<>()) );
        CvModule_exposer.add_property( "first", bp::make_function(&::get_CvModule_first, bp::return_internal_reference<>()) );
        CvModule_exposer.add_property( "last", bp::make_function(&::get_CvModule_last, bp::return_internal_reference<>()) );
    }

    { //::CvNArrayIterator
        typedef bp::class_< CvNArrayIterator_wrapper > CvNArrayIterator_exposer_t;
        CvNArrayIterator_exposer_t CvNArrayIterator_exposer = CvNArrayIterator_exposer_t( "CvNArrayIterator" );
        bp::scope CvNArrayIterator_scope( CvNArrayIterator_exposer );
        CvNArrayIterator_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvNArrayIterator >() );
        CvNArrayIterator_exposer.def_readwrite( "count", &CvNArrayIterator::count );
        CvNArrayIterator_exposer.def_readwrite( "dims", &CvNArrayIterator::dims );
        CvNArrayIterator_exposer.def_readwrite( "size", &CvNArrayIterator::size );
        pyplusplus::containers::static_sized::register_array_1< int, 32 >( "__array_1_int_32" );
        { //CvNArrayIterator::stack [variable], type=int[32]
        
            typedef pyplusplus::containers::static_sized::array_1_t< int, 32> ( *array_wrapper_creator )( CvNArrayIterator & );
            
            CvNArrayIterator_exposer.add_property( "stack"
                , bp::make_function( array_wrapper_creator(&CvNArrayIterator_wrapper::pyplusplus_stack_wrapper)
                                    , bp::with_custodian_and_ward_postcall< 0, 1 >() ) );
        }
    }

    bp::class_< CvTreeNodeIterator_wrapper >( "CvTreeNodeIterator" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvTreeNodeIterator >() )    
        .def_readwrite( "level", &CvTreeNodeIterator::level )    
        .def_readwrite( "max_level", &CvTreeNodeIterator::max_level )    
        .add_property( "node"
                    , pyplus_conv::make_addressof_getter(&CvTreeNodeIterator::node)
                    , pyplus_conv::make_address_setter(&CvTreeNodeIterator::node) );

    bp::class_< CvType >( "CvType", bp::no_init )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvType >() )    
        .add_property( "info", bp::make_function(&::get_CvType_info, bp::return_internal_reference<>()) )    
        .add_property( "first", bp::make_function(&::get_CvType_first, bp::return_internal_reference<>()) )    
        .add_property( "last", bp::make_function(&::get_CvType_last, bp::return_internal_reference<>()) );

    { //::cxcore_h_dummy_struct
        typedef bp::class_< cxcore_h_dummy_struct > __cxcore_h_dummy_struct_exposer_t;
        __cxcore_h_dummy_struct_exposer_t __cxcore_h_dummy_struct_exposer = __cxcore_h_dummy_struct_exposer_t( "__cxcore_h_dummy_struct" );
        bp::scope __cxcore_h_dummy_struct_scope( __cxcore_h_dummy_struct_exposer );
        __cxcore_h_dummy_struct_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cxcore_h_dummy_struct >() );
        bp::class_< cxcore_h_dummy_struct::dummy_struct2 >( "dummy_struct2" )    
            .add_property( "this", pyplus_conv::make_addressof_inst_getter< cxcore_h_dummy_struct::dummy_struct2 >() );
        __cxcore_h_dummy_struct_exposer.setattr("v0", 0);
    }
    {;
    }

}
