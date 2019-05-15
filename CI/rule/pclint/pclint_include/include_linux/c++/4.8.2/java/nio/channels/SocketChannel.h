
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_channels_SocketChannel__
#define __java_nio_channels_SocketChannel__

#pragma interface

#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
        class Socket;
        class SocketAddress;
    }
    namespace nio
    {
        class ByteBuffer;
      namespace channels
      {
          class SocketChannel;
        namespace spi
        {
            class SelectorProvider;
        }
      }
    }
  }
}

class java::nio::channels::SocketChannel : public ::java::nio::channels::spi::AbstractSelectableChannel
{

public: // actually protected
  SocketChannel(::java::nio::channels::spi::SelectorProvider *);
public:
  static ::java::nio::channels::SocketChannel * open();
  static ::java::nio::channels::SocketChannel * open(::java::net::SocketAddress *);
  virtual jlong read(JArray< ::java::nio::ByteBuffer * > *);
  virtual jlong write(JArray< ::java::nio::ByteBuffer * > *);
  virtual jint validOps();
  virtual jint read(::java::nio::ByteBuffer *) = 0;
  virtual jboolean connect(::java::net::SocketAddress *) = 0;
  virtual jboolean finishConnect() = 0;
  virtual jboolean isConnected() = 0;
  virtual jboolean isConnectionPending() = 0;
  virtual jlong read(JArray< ::java::nio::ByteBuffer * > *, jint, jint) = 0;
  virtual ::java::net::Socket * socket() = 0;
  virtual jint write(::java::nio::ByteBuffer *) = 0;
  virtual jlong write(JArray< ::java::nio::ByteBuffer * > *, jint, jint) = 0;
  static ::java::lang::Class class$;
};

#endif // __java_nio_channels_SocketChannel__
