
extern zend_class_entry *phalcon_http_message_responsefactory_ce;

ZEPHIR_INIT_CLASS(Phalcon_Http_Message_ResponseFactory);

PHP_METHOD(Phalcon_Http_Message_ResponseFactory, createResponse);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_http_message_responsefactory_createresponse, 0, 0, Psr\\Http\\Message\\ResponseInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_http_message_responsefactory_createresponse, 0, 0, IS_OBJECT, "Psr\\Http\\Message\\ResponseInterface", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, code)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, reasonPhrase, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, reasonPhrase)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_http_message_responsefactory_method_entry) {
	PHP_ME(Phalcon_Http_Message_ResponseFactory, createResponse, arginfo_phalcon_http_message_responsefactory_createresponse, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
