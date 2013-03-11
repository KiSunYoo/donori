<?php
/**
 * @todo		사이트에서 필요한 디파인값을 모두 이곳에서 정의
 */

// DB 접속 정보
define('DBNAME',	'mercury');
define('DBHOST',	'localhost');
define('DBID',		'mercury');
define('DBPW',		'donori');

define('LIB',		'/lib');

function __autoload( $className ) {
	$classFile	= LIB .'/'. $className .'.inc';

	if (file_exists($classFile)) {
		require_once $classFile;
	}
}
?>