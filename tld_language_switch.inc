<?php

function tld_language_switch_language_from_tld($languages){
	$url = $_SERVER['HTTP_HOST'];

        $domain_name = explode(".", $url);
        $domain_name = array_reverse($domain_name);
        if(strpos($domain_name[0], ":") !== false){ 
                $tld = explode(":", $domain_name[0]);
                $tld = $tld[0];
        }else { 
                $tld = $domain_name[0]; 
        }

	foreach($languages as $lang_key => $lang ){
		if($lang->domain == $tld){
			return $lang_key;
		}
	}

	return 'en';
}
