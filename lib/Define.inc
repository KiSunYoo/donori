<?php
/**
 * @todo		����Ʈ���� �ʿ��� �����ΰ��� ��� �̰����� ����
 */

// DB ���� ����
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