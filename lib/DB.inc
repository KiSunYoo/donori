<?php
/**
 * @todo		DB���� �� ������ ��������
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