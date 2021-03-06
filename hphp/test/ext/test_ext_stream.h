/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2013 Facebook, Inc. (http://www.facebook.com)     |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_TEST_EXT_STREAM_H_
#define incl_HPHP_TEST_EXT_STREAM_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/test/ext/test_cpp_ext.h"

///////////////////////////////////////////////////////////////////////////////

class TestExtStream : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_stream_context_create();
  bool test_stream_context_get_default();
  bool test_stream_context_get_options();
  bool test_stream_context_set_option();
  bool test_stream_context_set_param();
  bool test_stream_copy_to_stream();
  bool test_stream_encoding();
  bool test_stream_bucket_append();
  bool test_stream_bucket_prepend();
  bool test_stream_bucket_make_writeable();
  bool test_stream_bucket_new();
  bool test_stream_filter_register();
  bool test_stream_filter_remove();
  bool test_stream_filter_append();
  bool test_stream_filter_prepend();
  bool test_stream_get_contents();
  bool test_stream_get_filters();
  bool test_stream_get_line();
  bool test_stream_get_meta_data();
  bool test_stream_get_transports();
  bool test_stream_get_wrappers();
  bool test_stream_register_wrapper();
  bool test_stream_wrapper_register();
  bool test_stream_wrapper_restore();
  bool test_stream_wrapper_unregister();
  bool test_stream_resolve_include_path();
  bool test_stream_select();
  bool test_stream_set_blocking();
  bool test_stream_set_timeout();
  bool test_stream_set_write_buffer();
  bool test_set_file_buffer();
  bool test_stream_socket_accept();
  bool test_stream_socket_server();
  bool test_stream_socket_client();
  bool test_stream_socket_enable_crypto();
  bool test_stream_socket_get_name();
  bool test_stream_socket_pair();
  bool test_stream_socket_recvfrom();
  bool test_stream_socket_sendto();
  bool test_stream_socket_sendto_issue324();
  bool test_stream_socket_shutdown();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_STREAM_H_
