vuser_end()
{
	
	/* Log out */

	tName = "8.Log_out";
	lr_start_transaction(tName);
	
	status=web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	end_transaction(tName, status);
	lr_think_time(4);
	
	return 0;
}
