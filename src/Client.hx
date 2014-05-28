package ;
import haxe.Timer;
import sys.net.Address;
import sys.net.Socket;

/**
 * ...
 * @author Ryan
 */
class Client
{

	public var connected:Bool;
	public var s:Socket;
	
	private var pollTimer:Timer;
	
	public function new() 
	{	
		connected = false;
		pollTimer = new Timer(1000);
		pollTimer.run = function() { pollState(); };
    }
	
	private function pollState():Void{
		if (!connected) {
			tryConnect();
		}
	}
	
	private function tryConnect() {	
		try {
			s.connect(new sys.net.Host("198.84.223.47"), 2000);
			connected = true;
		}catch (exception:Dynamic){
			trace("Could not connect to server");
		}
	}
	
	private function connectedToServer() {
		while( true ) {
            var l = s.input.readLine();
            trace(l);
            if( l == "exit" ) {
                s.close();
				connected = false;
                break;
            }
        }
	}

}