// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvDTree.pypp.hpp"

namespace bp = boost::python;

struct CvDTree_wrapper : CvDTree, bp::wrapper< CvDTree > {

    CvDTree_wrapper(CvDTree const & arg )
    : CvDTree( arg )
      , bp::wrapper< CvDTree >(){
        // copy constructor
        
    }

    CvDTree_wrapper( )
    : CvDTree( )
      , bp::wrapper< CvDTree >(){
        // null constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvDTree::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvDTree::clear( );
    }

    virtual ::CvMat const * get_var_importance(  ) {
        if( bp::override func_get_var_importance = this->get_override( "get_var_importance" ) )
            return func_get_var_importance(  );
        else{
            return this->CvDTree::get_var_importance(  );
        }
    }
    
    ::CvMat const * default_get_var_importance(  ) {
        return CvDTree::get_var_importance( );
    }

    virtual CvDTreeNode * predict( ::CvMat const * _sample, ::CvMat const * _missing_data_mask=0, bool preprocessed_input=false ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_predict = this->get_override( "predict" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_predict.ptr(), _sample, _missing_data_mask, preprocessed_input );
            return bpl::extract< CvDTreeNode * >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvDTree::predict( boost::python::ptr(_sample), boost::python::ptr(_missing_data_mask), preprocessed_input );
        }
    }
    
    static boost::python::object default_predict_76f915d59fbfe6ec6c36b63903c7e6de( ::CvDTree const & inst, ::cv::Mat & _sample, ::cv::Mat _missing_data_mask=cv::Mat(), bool preprocessed_input=false ){
        CvDTreeNode * result;
        if( dynamic_cast< CvDTree_wrapper const* >( boost::addressof( inst ) ) ){
            result = inst.::CvDTree::predict(get_CvMat_ptr(_sample), get_CvMat_ptr(_missing_data_mask), preprocessed_input);
        }
        else{
            result = inst.predict(get_CvMat_ptr(_sample), get_CvMat_ptr(_missing_data_mask), preprocessed_input);
        }
        typedef bp::return_internal_reference< > call_policies_t;
        return bp::object( pyplusplus::call_policies::make_object< call_policies_t, CvDTreeNode * >( result ) );
    }

    virtual ::CvDTreeNode * predict( ::cv::Mat const & _sample, ::cv::Mat const & _missing_data_mask=cv::Mat(), bool preprocessed_input=false ) const  {
        if( bp::override func_predict = this->get_override( "predict" ) )
            return func_predict( boost::ref(_sample), boost::ref(_missing_data_mask), preprocessed_input );
        else{
            return this->CvDTree::predict( boost::ref(_sample), boost::ref(_missing_data_mask), preprocessed_input );
        }
    }
    
    ::CvDTreeNode * default_predict( ::cv::Mat const & _sample, ::cv::Mat const & _missing_data_mask=cv::Mat(), bool preprocessed_input=false ) const  {
        return CvDTree::predict( boost::ref(_sample), boost::ref(_missing_data_mask), preprocessed_input );
    }

    virtual void read( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), fs, node );
        }
        else{
            CvDTree::read( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_read_cddeea9f785886a2157e6dbd38d882a3( ::CvDTree & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvDTree_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvDTree::read(fs.fs, *(node));
        }
        else{
            inst.read(fs.fs, *(node));
        }
    }

    virtual void read( ::CvFileStorage * fs, ::CvFileNode * node, ::CvDTreeTrainData * data ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), fs, node, data );
        }
        else{
            CvDTree::read( boost::python::ptr(fs), boost::python::ptr(node), boost::python::ptr(data) );
        }
    }
    
    static void default_read_ea82e003cd38c548aefac78eb636ff45( ::CvDTree & inst, ::cv::FileStorage & fs, ::cv::FileNode & node, ::CvDTreeTrainData * data ){
        if( dynamic_cast< CvDTree_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvDTree::read(fs.fs, *(node), data);
        }
        else{
            inst.read(fs.fs, *(node), data);
        }
    }

    virtual bool train( ::CvMat const * _train_data, int _tflag, ::CvMat const * _responses, ::CvMat const * _var_idx=0, ::CvMat const * _sample_idx=0, ::CvMat const * _var_type=0, ::CvMat const * _missing_mask=0, ::CvDTreeParams params=::CvDTreeParams( ) ) {
        namespace bpl = boost::python;
        if( bpl::override func_train = this->get_override( "train" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_train.ptr(), _train_data, _tflag, _responses, _var_idx, _sample_idx, _var_type, _missing_mask, params );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvDTree::train( boost::python::ptr(_train_data), _tflag, boost::python::ptr(_responses), boost::python::ptr(_var_idx), boost::python::ptr(_sample_idx), boost::python::ptr(_var_type), boost::python::ptr(_missing_mask), params );
        }
    }
    
    static boost::python::object default_train_e7fbbd1bbcaefbdc1d2bb52c4a4a1164( ::CvDTree & inst, ::cv::Mat & _train_data, int _tflag, ::cv::Mat & _responses, ::cv::Mat _var_idx=cv::Mat(), ::cv::Mat _sample_idx=cv::Mat(), ::cv::Mat _var_type=cv::Mat(), ::cv::Mat _missing_mask=cv::Mat(), ::CvDTreeParams params=::CvDTreeParams( ) ){
        bool result;
        if( dynamic_cast< CvDTree_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::CvDTree::train(get_CvMat_ptr(_train_data), _tflag, get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), get_CvMat_ptr(_var_type), get_CvMat_ptr(_missing_mask), params);
        }
        else{
            result = inst.train(get_CvMat_ptr(_train_data), _tflag, get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), get_CvMat_ptr(_var_type), get_CvMat_ptr(_missing_mask), params);
        }
        return bp::object( result );
    }

    virtual bool train( ::CvMLData * _data, ::CvDTreeParams _params=::CvDTreeParams( ) ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::python::ptr(_data), _params );
        else{
            return this->CvDTree::train( boost::python::ptr(_data), _params );
        }
    }
    
    bool default_train( ::CvMLData * _data, ::CvDTreeParams _params=::CvDTreeParams( ) ) {
        return CvDTree::train( boost::python::ptr(_data), _params );
    }

    virtual bool train( ::CvDTreeTrainData * _train_data, ::CvMat const * _subsample_idx ) {
        namespace bpl = boost::python;
        if( bpl::override func_train = this->get_override( "train" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_train.ptr(), _train_data, _subsample_idx );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvDTree::train( boost::python::ptr(_train_data), boost::python::ptr(_subsample_idx) );
        }
    }
    
    static boost::python::object default_train_e18ab36aab283a0a1ad725a1ae852c5c( ::CvDTree & inst, ::CvDTreeTrainData * _train_data, ::cv::Mat & _subsample_idx ){
        bool result;
        if( dynamic_cast< CvDTree_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::CvDTree::train(_train_data, get_CvMat_ptr(_subsample_idx));
        }
        else{
            result = inst.train(_train_data, get_CvMat_ptr(_subsample_idx));
        }
        return bp::object( result );
    }

    virtual bool train( ::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvDTreeParams params=::CvDTreeParams( ) ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
        else{
            return this->CvDTree::train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
        }
    }
    
    bool default_train( ::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvDTreeParams params=::CvDTreeParams( ) ) {
        return CvDTree::train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
    }

    virtual void write( ::CvFileStorage * fs, char const * name ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), fs, name );
        }
        else{
            CvDTree::write( boost::python::ptr(fs), name );
        }
    }
    
    static void default_write_d5b05f94ebb65d268cbd4756fe0d6221( ::CvDTree const & inst, ::cv::FileStorage & fs, char const * name ){
        if( dynamic_cast< CvDTree_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvDTree::write(fs.fs, name);
        }
        else{
            inst.write(fs.fs, name);
        }
    }

    virtual void write( ::CvFileStorage * fs ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), fs );
        }
        else{
            CvDTree::write( boost::python::ptr(fs) );
        }
    }
    
    static void default_write_d1e064f966d50e01902f80ef0f045741( ::CvDTree const & inst, ::cv::FileStorage & fs ){
        if( dynamic_cast< CvDTree_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvDTree::write(fs.fs);
        }
        else{
            inst.write(fs.fs);
        }
    }

    virtual void load( char const * filename, char const * name=0 ) {
        if( bp::override func_load = this->get_override( "load" ) )
            func_load( filename, name );
        else{
            this->CvStatModel::load( filename, name );
        }
    }
    
    void default_load( char const * filename, char const * name=0 ) {
        CvStatModel::load( filename, name );
    }

    virtual void save( char const * filename, char const * name=0 ) const  {
        if( bp::override func_save = this->get_override( "save" ) )
            func_save( filename, name );
        else{
            this->CvStatModel::save( filename, name );
        }
    }
    
    void default_save( char const * filename, char const * name=0 ) const  {
        CvStatModel::save( filename, name );
    }

};

void register_CvDTree_class(){

    bp::class_< CvDTree_wrapper, bp::bases< CvStatModel > >( "CvDTree", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvDTree >() )    
        .def( 
            "clear"
            , (void ( CvDTree::* )(  ) )(&::CvDTree::clear)
            , (void ( CvDTree_wrapper::* )(  ) )(&CvDTree_wrapper::default_clear) )    
        .def( 
            "get_data"
            , (::CvDTreeTrainData * ( CvDTree::* )(  ) )( &::CvDTree::get_data )
            , bp::return_internal_reference< >() )    
        .def( 
            "get_pruned_tree_idx"
            , (int ( CvDTree::* )(  ) const)( &::CvDTree::get_pruned_tree_idx ) )    
        .def( 
            "get_root"
            , (::CvDTreeNode const * ( CvDTree::* )(  ) const)( &::CvDTree::get_root )
            , bp::return_internal_reference< >() )    
        .def( 
            "get_var_importance"
            , (::CvMat const * ( CvDTree::* )(  ) )(&::CvDTree::get_var_importance)
            , (::CvMat const * ( CvDTree_wrapper::* )(  ) )(&CvDTree_wrapper::default_get_var_importance)
            , bp::return_internal_reference< >() )    
        .def( 
            "predict"
            , (boost::python::object (*)( CvDTree const &,::cv::Mat &,::cv::Mat,bool ))( &CvDTree_wrapper::default_predict_76f915d59fbfe6ec6c36b63903c7e6de )
            , ( bp::arg("inst"), bp::arg("_sample"), bp::arg("_missing_data_mask")=cv::Mat(), bp::arg("preprocessed_input")=(bool)(false) )
            , "\nArgument '_sample':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_missing_data_mask':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "predict"
            , (::CvDTreeNode * ( CvDTree::* )( ::cv::Mat const &,::cv::Mat const &,bool ) const)(&::CvDTree::predict)
            , (::CvDTreeNode * ( CvDTree_wrapper::* )( ::cv::Mat const &,::cv::Mat const &,bool ) const)(&CvDTree_wrapper::default_predict)
            , ( bp::arg("_sample"), bp::arg("_missing_data_mask")=cv::Mat(), bp::arg("preprocessed_input")=(bool)(false) )
            , bp::return_internal_reference< >() )    
        .def( 
            "read_cddeea9f785886a2157e6dbd38d882a3"
            , (void (*)( CvDTree &,::cv::FileStorage &,::cv::FileNode & ))( &CvDTree_wrapper::default_read_cddeea9f785886a2157e6dbd38d882a3 )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") )
            , "\nWrapped function:"
    "\n    read"
    "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage."\
    "\nArgument 'node':"\
    "\n    C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode." )    
        .def( 
            "read_ea82e003cd38c548aefac78eb636ff45"
            , (void (*)( CvDTree &,::cv::FileStorage &,::cv::FileNode &,CvDTreeTrainData * ))( &CvDTree_wrapper::default_read_ea82e003cd38c548aefac78eb636ff45 )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node"), bp::arg("data") )
            , "\nWrapped function:"
    "\n    read"
    "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage."\
    "\nArgument 'node':"\
    "\n    C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode." )    
        .def( 
            "train"
            , (boost::python::object (*)( CvDTree &,::cv::Mat &,int,::cv::Mat &,::cv::Mat,::cv::Mat,::cv::Mat,::cv::Mat,CvDTreeParams ))( &CvDTree_wrapper::default_train_e7fbbd1bbcaefbdc1d2bb52c4a4a1164 )
            , ( bp::arg("inst"), bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("params")=::CvDTreeParams( ) )
            , "\nArgument '_train_data':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_responses':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_idx':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_sample_idx':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_type':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_missing_mask':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "train"
            , (bool ( CvDTree::* )( ::CvMLData *,::CvDTreeParams ) )(&::CvDTree::train)
            , (bool ( CvDTree_wrapper::* )( ::CvMLData *,::CvDTreeParams ) )(&CvDTree_wrapper::default_train)
            , ( bp::arg("_data"), bp::arg("_params")=::CvDTreeParams( ) ) )    
        .def( 
            "train"
            , (boost::python::object (*)( CvDTree &,CvDTreeTrainData *,::cv::Mat & ))( &CvDTree_wrapper::default_train_e18ab36aab283a0a1ad725a1ae852c5c )
            , ( bp::arg("inst"), bp::arg("_train_data"), bp::arg("_subsample_idx") )
            , "\nArgument '_subsample_idx':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "train"
            , (bool ( CvDTree::* )( ::cv::Mat const &,int,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::CvDTreeParams ) )(&::CvDTree::train)
            , (bool ( CvDTree_wrapper::* )( ::cv::Mat const &,int,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::CvDTreeParams ) )(&CvDTree_wrapper::default_train)
            , ( bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("params")=::CvDTreeParams( ) ) )    
        .def( 
            "write_d5b05f94ebb65d268cbd4756fe0d6221"
            , (void (*)( CvDTree const &,::cv::FileStorage &,char const * ))( &CvDTree_wrapper::default_write_d5b05f94ebb65d268cbd4756fe0d6221 )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("name") )
            , "\nWrapped function:"
    "\n    write"
    "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." )    
        .def( 
            "write_d1e064f966d50e01902f80ef0f045741"
            , (void (*)( CvDTree const &,::cv::FileStorage & ))( &CvDTree_wrapper::default_write_d1e064f966d50e01902f80ef0f045741 )
            , ( bp::arg("inst"), bp::arg("fs") )
            , "\nWrapped function:"
    "\n    write"
    "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." )    
        .def_readwrite( "pruned_tree_idx", &CvDTree::pruned_tree_idx )    
        .def( 
            "load"
            , (void ( CvStatModel::* )( char const *,char const * ) )(&::CvStatModel::load)
            , (void ( CvDTree_wrapper::* )( char const *,char const * ) )(&CvDTree_wrapper::default_load)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "save"
            , (void ( CvStatModel::* )( char const *,char const * ) const)(&::CvStatModel::save)
            , (void ( CvDTree_wrapper::* )( char const *,char const * ) const)(&CvDTree_wrapper::default_save)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) );

}
