Itinerary()
{

	/* Itinerary */

	tName = "7.Go_to_Itinerary";
	lr_start_transaction(tName);
	
	status=web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	
	end_transaction(tName, status);
	lr_think_time(4);
	
	return 0;
}
