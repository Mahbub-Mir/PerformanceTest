Action()
{

	web_custom_request("json_2", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"RXMK\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":16409,\"downloaded\":25252,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"7861\",\"previousversion\":\"7860\",\"total\":25252,\"url\":\"http://edgedl.me.gvt1.com/edgedl/release2/"
		"chrome_component/adycivsxqgpvafnrlob33gsgz5ca_7861/hfnkpimlhhgieaddgfemjhofmfblmnib_7861_all_dlxbmcjjcwyfwmxkejzo2ux3sq.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.96e70f03bdbd0d81b1d47a1c8a50d2584c0f7b432f4b519c338839af83108ce8\",\"nextversion\":\"7861\",\"previousfp\":\"1.61939cb1b7303baace84f643d97d9e67e4a211a82b7bf26606a8179b8edff954\",\"previousversion\":\"7860\"}],\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.96e70f03bdbd0d81b1d47a1c8a50d2584c0f7b432f4b519c338839af83108ce8\"}]},\"version\":\"7861\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19044.2486\"},\"prodversion\":\"109.0.5414.120\",\"protocol\":\"3.1\",\"requestid\":\""
		"{4cd9a530-d17a-4caf-a30b-a67fa7244bfa}\",\"sessionid\":\"{824f78c9-8217-4e41-a29c-b9284e3b3a97}\",\"updaterversion\":\"109.0.5414.120\"}}", 
		LAST);

	lr_think_time(9);

	lr_start_transaction("02 Flights");

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json_3", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"RXMK\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":8062,\"downloaded\":1114795,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"112.0.5596.0\",\"previousversion\":\"112.0.5594.3\",\"total\":1114795,\"url\":\"http://edgedl.me.gvt1.com/edgedl/"
		"release2/chrome_component/k6cxzsgxccaz5si3vuv4loi2fq_112.0.5596.0/jamhcnnkihinmdlkakkaopbjbbcngflc_112.0.5596.0_all_acfsnohmpzyp4yd47dpqky2p3cfa.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.7cc2eb1e05752fdc722f04ea8a261a3088f9074883367371ff388ba0942187dd\",\"nextversion\":\"112.0.5596.0\",\"previousfp\":\"1.fc9cb033649a77d15d5cbe23b779a71e5d891bc8b9a7b39773f5d08ddf44f29d\",\"previousversion\":\"112.0.5594.3\"}],\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\""
		":\"1.7cc2eb1e05752fdc722f04ea8a261a3088f9074883367371ff388ba0942187dd\"}]},\"version\":\"112.0.5596.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19044.2486\"},\"prodversion\":\"109.0.5414.120\",\"protocol\":\"3.1\",\"requestid\":\""
		"{6b35309f-c299-4a2c-a1fc-c1741e0bdcb4}\",\"sessionid\":\"{824f78c9-8217-4e41-a29c-b9284e3b3a97}\",\"updaterversion\":\"109.0.5414.120\"}}", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("02 Flights",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("03 Itinerary");

	web_url("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("03 Itinerary",LR_AUTO);

	lr_think_time(21);

	lr_start_transaction("04 Home");

	web_image("Home Button", 
		"Alt=Home Button", 
		"Snapshot=t10.inf", 
		LAST);

	lr_end_transaction("04 Home",LR_AUTO);

	return 0;
}
