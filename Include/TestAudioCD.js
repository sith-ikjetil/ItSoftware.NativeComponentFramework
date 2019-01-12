var acd = WScript.CreateObject("ItSoftware.NCF.AudioCD");
acd.Load("G:");
acd.ExecuteCddbQuery("freedb.freedb.org/~cddb/cddb.cgi",false);
WScript.Echo(acd.Artist);
WScript.Echo(acd.AlbumTitle);
WScript.Echo(acd.GetTitle(1));