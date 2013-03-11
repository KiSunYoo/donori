<?php
/**
 * @todo		DB연결 및 데이터 가져오기
 */

Class DB
{
	private $DB;
	
	public function __construct() {
		if (!mysql_connect(DBHOST,DBID,DBPW) ){
			return FALSE;
		} else {
			return TRUE;
		}
	}
}


?>