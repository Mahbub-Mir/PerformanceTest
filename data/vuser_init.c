/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 911
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://192.168.1.115:9098/device_description.xml", "Referer=", ENDITEM, 
		"Url=http://192.168.1.116:9098/device_description.xml", "Referer=", ENDITEM, 
		"Url=http://192.168.1.110:9098/device_description.xml", "Referer=", ENDITEM, 
		LAST);

	web_url("description.xml", 
		"URL=http://192.168.1.151/description.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("description.xml_2", 
		"URL=http://192.168.1.151/description.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://192.168.1.219:8008/ssdp/device-desc.xml", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	lr_think_time(82);

	lr_start_transaction("01 Login");

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=135796.719157554zQifAtDpHtVzzzzHtVQVApczctf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=43", ENDITEM, 
		"Name=login.y", "Value=7", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=12:_7vTNF8CMkz9NxZEy3jZZ2gOVsybB4fy-02TzyKLbzs&cup2hreq=50a6ebf4471b28f2a8b5bc9c963b5b7e585222c49f5e9944871b2635a8dae1f0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"RXMK\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Windows (102+, canary/dev/beta/stable)\",\"enabled\":true,\"installdate\":5818,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.faef821457e35b44f92e45ae9c7c4424eb39c8f8bd02562a358bd2c5542570b9\"}]},\"ping\":{\"ping_freshness\":\""
		"{089c4b08-2d43-4cca-ad86-ceca5038a551}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"1.0.2512.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"RXMK\",\"cohort\":\"1:1bk9:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"4.10.2557.0 for Chrome 95+\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{247ed7ef-8cc7-4c34-8011-ef77c7bc21d0}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\""
		"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"RXMK\",\"cohort\":\"1:15j3:\",\"cohorthint\":\"Win (Including up-to-date)\",\"cohortname\":\"Win (Including up-to-date)\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{ad8f2436-760a-45e5-967e-2da08e0d2fec}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"RXMK\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{d4449c46-3916-4955-9c63-dc798caddc07}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"RXMK\",\"cohort\":\"1:bm1:1gex@0.01\",\"cohorthint\":\"M54AndUp\",\""
		"cohortname\":\"M54AndUp\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8bceded7cdf26414c48fbe82b390be1db9ee44c3f7fb500187fda6787a5e82de\"}]},\"ping\":{\"ping_freshness\":\"{0c66112e-f115-4de6-9398-3c6257cf5769}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"9.42.0\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"RXMK\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\""
		":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4d3d17300165ac9941be6006036ac2f7a2abdba541ce92a657141d4915019748\"}]},\"ping\":{\"ping_freshness\":\"{f9dd12bc-b6f3-44f7-8347-295a1004f0e7}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"20230204.507919928\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"RXMK\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.0bb427f50f31d3696115c77cf47808bbec1e7f8d0ec968d00daf897111850154\"}]},\"ping\":{\"ping_freshness\":\"{e05cbda5-3ef2-4652-bcff-4e30153de146}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"379\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"RXMK\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{5be829b9-52c3-4ef4-b42b-eee0e2c306e8}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"RXMK\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.74633ccd85618153bf04daa3bdc6b093f5715d704f757cd6e8360d69d9df289d\"}]},\""
		"ping\":{\"ping_freshness\":\"{494d4c65-8858-4785-928e-aefa69823082}\",\"rd\":5888},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"57\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"RXMK\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.61939cb1b7303baace84f643d97d9e67e4a211a82b7bf26606a8179b8edff954\"}]},\"ping\":{\"ping_freshness\":\""
		"{0bb9a0c3-bd6e-4cb8-b039-b34c17f904e1}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"7860\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"RXMK\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{987e8b77-211b-4d49-b424-9d7c2cf64d3c}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\""
		"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"RXMK\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{93189760-8e41-46a6-86e1-7acfbf80a1fd}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"RXMK\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5797,\""
		"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f01de52469688ae15bd4cc6e43e5fd0ae8a80d4bd6954967fd4f499c7507aa2e\"}]},\"ping\":{\"ping_freshness\":\"{18e2b9d3-f002-437f-86df-eed1b6f20bfd}\",\"rd\":5888},\"tag\":\"stable\",\"updatecheck\":{},\"version\":\"107.294.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"RXMK\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\""
		"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{525b7585-d428-4128-a080-2f17e5cd2d2e}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"RXMK\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.70fd1230208204c8173c8e55c11e34bf528d4524da4040c487135c1ddc4135e6\"}]},\"ping\":{\"ping_freshness\":\"{6d92f6aa-c8fd-4a92-b810-a554c53916ae}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"500\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"RXMK\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4ab0e01c29cd077ba50b89e0698854113957fbba3829cc9fcccdf75dc0eb258c\"}]},\""
		"ping\":{\"ping_freshness\":\"{2134b126-fff4-487e-b489-589b31f0e85f}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"2922\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"RXMK\",\"cohort\":\"1:ut9/1a0f:\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"108-and-above-all-users\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ed2f4d0fa9d2f99837719f80e3990498314290c6a294a72296ddcada784dd278\"}]},\"ping\":{\"ping_freshness\":\""
		"{cb286399-4b0d-4aa7-bcc6-4863e46ec05b}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"2022.12.16.779\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"RXMK\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0c24e9bd976adffa987e08fc54dc0950c84cf18f9cdb4c5caabc6acf24887c4f\"}]},\"ping\":{\"ping_freshness\":\"{3ca8145d-d66e-4236-a6e7-3bbc6218fe48}\",\"rd\":5888},\""
		"updatecheck\":{},\"version\":\"20220505\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"RXMK\",\"cohort\":\"1:17lx:\",\"cohorthint\":\"desktop_1_flatbuffer\",\"cohortname\":\"desktop_1_flatbuffer\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.5c953c75dab5fcbf3e90fb5d8098380b106ccb6fbafa0ea714a917df6fea814e\"}]},\"ping\":{\"ping_freshness\":\"{ed252377-3505-48e0-8923-7ed2f5cbd258}\",\"rd\":5888},\"tag\":\"desktop_1_flatbuffer\",\""
		"updatecheck\":{},\"version\":\"30.1\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"RXMK\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fc9cb033649a77d15d5cbe23b779a71e5d891bc8b9a7b39773f5d08ddf44f29d\"}]},\"ping\":{\"ping_freshness\":\"{0d1ddb1b-1280-47f8-b0f5-d92c72b944dc}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"112.0.5594.3\"},{\"appid\":\""
		"cocncanleafgejenidihemfflagifjic\",\"brand\":\"RXMK\",\"cohort\":\"1:13hr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.481c6b6e5d4234c7838fe16f9f87ec651474ac4ce5c429ff57094f93f8c730ea\"}]},\"ping\":{\"ping_freshness\":\"{11b77f0a-01b9-447c-9a98-67347edd1dbb}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"2022.11.28.1510\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"RXMK\",\""
		"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{6d191505-2ae6-43f4-9e6b-47f0047e660c}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"RXMK\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\""
		"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{860eb191-617f-4c2e-a236-2ceab90d536c}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"RXMK\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"General release\""
		",\"enabled\":true,\"installdate\":5797,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{9fddf61b-8ec5-4940-9474-99477cc15594}\",\"rd\":5888},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true"
		",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19044.2486\"},\"prodversion\":\"109.0.5414.120\",\"protocol\":\"3.1\",\"requestid\":\"{c6a50030-ca10-481b-b29d-372b8af2932c}\",\"sessionid\":\"{824f78c9-8217-4e41-a29c-b9284e3b3a97}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.152\"},\"updaterversion\":\"109.0.5414.120\"}}", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("01 Login",LR_AUTO);

	return 0;
}
