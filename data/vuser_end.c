vuser_end()
{

	lr_think_time(40);

	lr_start_transaction("05 SignOff");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t11.inf", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=109", 
		"Resource=0", 
		"Referer=", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("05 SignOff",LR_AUTO);

	return 0;
}