var obj = WScript.CreateObject("ItSoftware.NCF.Url");

var url = "http://www.microsoft.com:80/index/index.asp";

var protocol;
var domain;
var port;
var path;
var filename;

protocol 	= obj.ExtractProtocol(url);
domain 		= obj.ExtractDomain(url);
port 		= obj.ExtractPort(url);
path 		= obj.ExtractPath(url);
filename 	= obj.ExtractFilename(url);


WScript.Echo(url);
WScript.Echo("protocol: " + protocol);
WScript.Echo("domain: " + domain);
WScript.Echo("port: " + port);
WScript.Echo("path: " + path);
WScript.Echo("filename: " + filename);