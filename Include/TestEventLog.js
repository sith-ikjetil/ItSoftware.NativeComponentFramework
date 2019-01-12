var obj = WScript.CreateObject("ItSoftware.NCF.EventLog");

var hr = obj.ReportEvent("TestEventLog.js",3,1,1,1,"Hello World, from TestEventLog.js!");
WScript.Echo("hr: " + hr);