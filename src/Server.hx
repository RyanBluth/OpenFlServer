package ;
#if neko
import neko.Lib;
import neko.net.ThreadServer;
#end
#if cpp
import cpp.Lib;
import cpp.net.ThreadServer;
#end
import sys.net.Socket;
import haxe.io.Bytes;

typedef ServerClient = {
  var id : Int;
}

typedef Message = {
  var str : String;
}

class Server extends ThreadServer<ServerClient, Message>
{
  // create a Client
  override function clientConnected( s : Socket ) : ServerClient
  {
    var num = Std.random(100);
    Lib.println("client " + num + " is " + s.peer());
    return { id: num };
  }
  
  public function runServer(){
	var host = "0.0.0.0";
	var port = 5552;
	super.run(host,port);
  }

  override function clientDisconnected( c : ServerClient )
  {
    Lib.println("client " + Std.string(c.id) + " disconnected");
  }

  override function readClientMessage(c:ServerClient, buf:Bytes, pos:Int, len:Int)
  {
    // find out if there's a full message, and if so, how long it is.
    var complete = false;
    var cpos = pos;
    while (cpos < (pos+len) && !complete)
    {
     //check for a period/full stop (i.e.:  "." ) to signify a complete message 
      complete = (buf.get(cpos) == 46);
      cpos++;
    }
    // no full message
    if( !complete ) return null;

    // got a full message, return it
    var msg:String = buf.readString(pos, cpos - pos);
    return {msg: {str: msg}, bytes: cpos-pos};
  }

  override function clientMessage( c : ServerClient, msg : Message )
  {
    Lib.println(c.id + " sent: " + msg.str);
  }

}