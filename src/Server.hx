package ;

/**
 * ...
 * @author Ryan
 */
class Server
{

	public function new() 
	{
		var s = new sys.net.Socket();
        s.bind(new sys.net.Host("198.84.223.47"),2000);
        s.listen(1);
        trace("Starting server...");
        while( true ) {
            var c : sys.net.Socket = s.accept();
            trace("Client connected...");
            c.write(Std.string(s));
            c.write("your IP is " + c.peer().host.toString() + "\n");
            c.write("exit");
            c.close();
        }
	}
	
}