/*
 * suppress.h
 *
 * Symbolic macro definitions for compiler warnings
 *
 * This file is part of the ReactOS PSDK package.
 *
 * Contributors:
 *   Timo Kreuzer (timo.kreuzer@reactos.org)
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain. You may
 * use, modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED. This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#pragma once

#ifdef _MSC_VER
#define _PRAGMA_WARNING_SUPPRESS(x) __pragma(warning(suppress: x))
#else
#define _PRAGMA_WARNING_SUPPRESS(x) /* Only for MSVC */
#endif

#define __WARNING_USING_UNINIT_VAR 6001
#define __WARNING_DEREF_NULL_PTR 6011
#define __WARNING_MEMORY_LEAK 6014
#define __WARNING_USING_TAINTED_DATA 6029
#define __WARNING_RETVAL_IGNORED_FUNC_COULD_FAIL 6031
#define __WARNING_MISSING_ZERO_TERMINATION1 6053
#define __WARNING_MISSING_ZERO_TERMINATION2 6054
#define __WARNING_CHAR_BYTE_SIZE_MISMATCH 6057
#define __WARNING_BAD_CONCATENATION 6059
#define __WARNING_MISSING_STRING_ARGUMENT_TO_FORMAT_FUNCTION 6063
#define __WARNING_MISSING_INTEGER_ARGUMENT_TO_FORMAT_FUNCTION 6064
#define __WARNING_NON_POINTER_ARGUMENT_TO_FORMAT_FUNCTION 6066
#define __WARNING_NON_STRING_ARGUMENT_TO_FORMAT_FUNCTION 6067
#define __WARNING_INDEX_EXCEEDS_MAX_NONSTACK 6200
#define __WARNING_INDEX_EXCEEDS_MAX 6201
#define __WARNING_BUFFER_OVERRUN 6202
#define __WARNING_BUFFER_OVERRUN_NONSTACK 6203
#define __WARNING_UNVALIDATED_PARAM 6204
#define __WARNING_SIZEOF_CHAR_BYTE_SIZE_MISMATCH 6209
#define __WARNING_MEMORY_LEAK_EXCEPTION 6211
#define __WARNING_CAST_HRESULT_TO_BOOL 6214
#define __WARNING_CAST_BOOL_TO_HRESULT 6215
#define __WARNING_COMPILER_INSERTED_CAST_BOOL_TO_HRESULT 6216
#define __WARNING_TESTING_HRESULT_WITH_NOT 6217
#define __WARNING_COMPARING_HRESULT_TO_ONE 6219
#define __WARNING_COMPARING_HRESULT_TO_MINUS_ONE 6220
#define __WARNING_COMPARING_HRESULT_TO_INT 6221
#define __WARNING_ASSIGNING_ONE_TO_HRESULT 6225
#define __WARNING_ASSIGNING_MINUS_ONE_TO_HRESULT 6226
#define __WARNING_USING_HRESULT_IN_BOOLEAN_CONTEXT 6230
#define __WARNING_NONZEROLOGICALOR 6235
#define __WARNING_LOGICALORNONZERO 6236
#define __WARNING_ZEROLOGICALANDLOSINGSIDEEFFECTS 6237
#define __WARNING_NONZEROLOGICALAND 6239
#define __WARNING_LOGICALANDNONZERO 6240
#define __WARNING_LOCALUNWINDFORCED 6242
#define __WARNING_LOCALDECLHIDESGLOBAL 6244
#define __WARNING_LOCALDECLHIDESLOCAL 6246
#define __WARNING_CREATINGNULLDACL 6248
#define __WARNING_WIN32UNRELEASEDVADS 6250
#define __WARNING_UNPROTECTEDUSEOFALLOCA 6255
#define __WARNING_USINGTERMINATETHREAD 6258
#define __WARNING_DEADCODEINBITORLIMITEDSWITCH 6259
#define __WARNING_USEOFBYTEAREA 6260
#define __WARNING_EXCESSIVESTACKUSAGE 6262
#define __WARNING_USINGALLOCAINLOOP 6263
#define __WARNING_STRING_LITERAL_TO_NONCONST_CAST 6267
#define __WARNING_MISPARENTHESIZED_CASTS 6268
#define __WARNING_POINTER_DEREF_DISCARDED 6269
#define __WARNING_MISSING_FLOAT_ARGUMENT_TO_FORMAT_FUNCTION 6270
#define __WARNING_EXTRA_ARGUMENT_TO_FORMAT_FUNCTION 6271
#define __WARNING_NON_FLOAT_ARGUMENT_TO_FORMAT_FUNCTION 6272
#define __WARNING_NON_INTEGER_ARGUMENT_TO_FORMAT_FUNCTION 6273
#define __WARNING_NON_CHAR_ARGUMENT_TO_FORMAT_FUNCTION 6274
#define __WARNING_CHAR_TO_WCHAR_CAST 6276
#define __WARNING_CREATEPROCESS_ESCAPE 6277
#define __WARNING_ARRAY_NEW_DELETE_MISMATCH 6278
#define __WARNING_NEW_ARRAY_DELETE_MISMATCH 6279
#define __WARNING_MEMORY_ALLOCATION_MISMATCH 6280
#define __WARNING_BITWISERELATIONPRECEDENCEERROR 6281
#define __WARNING_ASSIGNMENTREPLACESTEST 6282
#define __WARNING_PRIMITIVE_ARRAY_NEW_DELETE_MISMATCH 6283
#define __WARNING_OBJECT_AS_STRING_ARGUMENT_TO_FORMAT_FUNCTION 6284
#define __WARNING_LOGICALOROFCONSTANTS 6285
#define __WARNING_NONZEROLOGICALORLOSINGSIDEEFFECTS 6286
#define __WARNING_REDUNDANTTEST 6287
#define __WARNING_MUTUALINCLUSIONOVERANDISFALSE 6288
#define __WARNING_MUTUALEXCLUSIONOVERORISTRUE 6289
#define __WARNING_LOGICALNOTBITWISEAND 6290
#define __WARNING_LOGICALNOTBITWISEOR 6291
#define __WARNING_LOOP_COUNTS_UP_FROM_MAX 6292
#define __WARNING_LOOP_INDEX_GOES_NEGATIVE 6293
#define __WARNING_LOOP_BODY_NEVER_EXECUTED 6294
#define __WARNING_INFINITE_LOOP 6295
#define __WARNING_LOOP_ONLY_EXECUTED_ONCE 6296
#define __WARNING_RESULTOFSHIFTCASTTOLARGERSIZE 6297
#define __WARNING_CONST_STRING_TO_WRITABLE_STRING 6298
#define __WARNING_BITFIELD_TO_BOOL_COMPARISON 6299
#define __WARNING_CHAR_WCHAR_ARGUMENT_TO_FORMAT_FUNCTION 6302
#define __WARNING_WCHAR_CHAR_ARGUMENT_TO_FORMAT_FUNCTION 6303
#define __WARNING_SIZEOF_COUNTOF_MISMATCH 6305
#define __WARNING_INCORRECT_VARARG_FUNCTIONCALL 6306
#define __WARNING_WCHAR_TO_BSTR 6307
#define __WARNING_REALLOCLEAK 6308
#define __WARNING_PASSING_FUNCTION_UNEXPECTED_NULL 6309
#define __WARNING_ILLEGALEXCEPTEXPRCONST 6310
#define __WARNING_EXCEPTIONCONTINUEEXECUTION 6312
#define __WARNING_BITANDVSZEROVALUEDFLAG 6313
#define __WARNING_BITORVSQUESTION 6314
#define __WARNING_BITORVSBITAND 6315
#define __WARNING_INAPPROPRIATEUSEOFBITOR 6316
#define __WARNING_NOTNOTCOMPLEMENT 6317
#define __WARNING_EXCEPTIONCONTINUESEARCH 6318
#define __WARNING_IGNOREDBYCOMMA 6319
#define __WARNING_EXCEPTIONEXECUTEHANDLER 6320
#define __WARNING_EXCEPT_BLOCK_EMPTY 6322
#define __WARNING_ARITH_OP_ON_BOOL 6323
#define __WARNING_STRCPY_INSTEAD_OF_STRCMP 6324
#define __WARNING_CONST_CONST_COMP 6326
#define __WARNING_DEST_BUFFER_INSUFFICIENT 6327
#define __WARNING_POTENTIAL_INCORRECT_RETVAL_CHECK 6329
#define __WARNING_POTENTIAL_ARGUMENT_TYPE_MISMATCH 6330
#define __WARNING_VIRTUALFREEINVALIDPARAM1 6331
#define __WARNING_VIRTUALFREEINVALIDPARAM2 6332
#define __WARNING_VIRTUALFREEINVALIDPARAM3 6333
#define __WARNING_SIZEOFEXPR 6334
#define __WARNING_LEAKING_PROCESS_HANDLE 6335
#define __WARNING_QUESTIONPRECEDENCE 6336
#define __WARNING_SHUTDOWN_API 6381
#define __WARNING_ELEMENTS_TO_BYTES 6383
#define __WARNING_DIVIDING_SIZEOF_POINTER 6384
#define __WARNING_READ_OVERRUN 6385
#define __WARNING_WRITE_OVERRUN 6386
#define __WARNING_INVALID_PARAM_VALUE_1 6387
#define __WARNING_INVALID_PARAM_VALUE_2 6388
#define __WARNING_BOOL_VARIANT_BOOL_COMPARISON 6392
#define __WARNING_COMPARE64BIT 6393
#define __WARNING_MS03_026_LHS 6394
#define __WARNING_LOCALE_DEPENDENT_CONSTANT_STRING_COMPARISON 6400
#define __WARNING_DEFAULT_LOCALE_CONSTANT_STRING_COMPARISON 6401
#define __WARNING_INVALID_ATTRIBUTE_PROPERTY 6500
#define __WARNING_CONFLICTING_ATTRIBUTE_PROPERTY_VALUES 6501
#define __WARNING_REFERENCES_CANT_BE_NULL 6503
#define __WARNING_NULL_ON_NON_POINTER 6504
#define __WARNING_MUSTCHECK_ON_VOID 6505
#define __WARNING_BUFFER_SIZE_ON_NON_POINTER_OR_ARRAY 6506
#define __WARNING_NULL_MISMATCH_AT_DEREF_0 6507
#define __WARNING_WRITE_ACCESS_ON_CONST 6508
#define __WARNING_RETURN_USED_ON_PRECONDITION 6509
#define __WARNING_NULLTERMINATED_ON_NON_POINTER 6510
#define __WARNING_MUSTCHECK_MAYBE 6511
#define __WARNING_NULL_CONFLICTS_WITH_NOT_VALID 6512
#define __WARNING_ELEMENT_SIZE_WITHOUT_BUFFER_SIZE 6513
#define __WARNING_BUFFER_SIZE_EXCEEDS_ARRAY_SIZE 6514
#define __WARNING_BUFFER_SIZE_ON_NON_POINTER 6515
#define __WARNING_NO_PROPERTIES_ON_ATTRIBUTE 6516
#define __WARNING_VALID_SIZE_ON_NON_READABLE_BUFFER 6517
#define __WARNING_WRITABLE_SIZE_ON_NON_WRITABLE_BUFFER 6518
#define __WARNING_NEEDSRELEASE_MAYBE 6519
#define __WARNING_INVALID_SIZE_STRING_DEREF 6521
#define __WARNING_INVALID_SIZE_STRING_TYPE 6522
#define __WARNING_INVALID_SIZE_STRING_PARAM 6523
#define __WARNING_INVALID_SIZE_STRING_UNREACHABLE_LOCATION 6525
#define __WARNING_INVALID_SIZE_STRING_BUFFER_TYPE 6526
#define __WARNING_NEEDSRELEASE_ON_VOID 6527
#define __WARNING_UNRECOGNIZED_FORMAT_STRING_STYLE 6530
#define __WARNING_BUFFERSIZE_INFEASIBLE 6535
#define __WARNING_OVERRIDING_OLD_MODEL 6540
#define __WARNING_LIB_BADYESNO 6701
#define __WARNING_LIB_BADSTRING 6702
#define __WARNING_LIB_BADNUMBER 6703
#define __WARNING_LIB_EXP_MISC 6704
#define __WARNING_LIB_ANNOTE_ARITY 6705
#define __WARNING_LIB_ANNOTE_MISC 6706
#define __WARNING_LIB_MODEL_MISC 6707
#define __WARNING_MANAGEDCODENOTSUPPORTED 6990
#define __WARNING_ATTRIBUTESNOTSUPPORTED 6991
#define __WARNING_NATIVEEVENTSYNTAXNOTSUPPORTED 6992
#define __WARNING_OMPNOTSUPPORTED 6993
#define __WARNING_PCHNOTFOUND 6994
#define __WARNING__SAVETOXMLFAILED 6995
#define __WARNING_DUMMY_IO_WARNING1 22010
#define __WARNING_ALLOC_SIZE_OVERFLOW 22011
#define __WARNING_ALLOC_SIZE_WRONG_OVERFLOW_CHECK 22012
#define __WARNING_INDEX_WRONG_OVERFLOW_CHECK 22013
#define __WARNING_ALLOC_SIZE_NEGATIVE 22014
#define __WARNING_INDEX_NEGATIVE 22015
#define __WARNING_LOOP_INDEX_WRONG_OVERFLOW_CHECK 22016
#define __WARNING_ALLOC_SIZE_UNDERFLOW 22017
#define __WARNING_INDEX_UNDERFLOW 22018
#define __WARNING_LOOP_INDEX_UNDERFLOW 22019
#define __WARNING_SIGNED_UNSIGNED_COMPARISON 22020
#define __WARNING_DIFF_SIZE_SIGNED_UNSIGNED_COMPARISON 22021
#define __WARNING_ALLOC_SIZE_OVERFLOW_WITH_ACCESS 22022
#define __WARNING_ALLOC_SIZE_OVERFLOW_IN_ALLOC_WRAPPER 22023
#define __WARNING_ALLOC_SIZE_UNDERFLOW_IN_ALLOC_WRAPPER 22024
#define __WARNING_RETVAL_IS_USED_IN_ALLOC_SIZE_COMPUTATION 22025
#define __WARNING_REFARG_IS_USED_IN_ALLOC_SIZE_COMPUTATION 22026
#define __WARNING_OVERFLOW_OR_UNDERFLOW_IN_ALLOCATOR_SIZE_FUNC_RETVAL 22027
#define __WARNING_OVERFLOW_OR_UNDERFLOW_IN_ALLOCATOR_SIZE_FUNC_REFARG 22028
#define __WARNING_OVERFLOW_OR_UNDERFLOW_IN_ALLOC_SIZE 22029
#define __WARNING_OVERFLOW_OR_UNDERFLOW_IN_ALLOC_WRAPPER 22030
#define __WARNING_UNTRUSTED_ALLOC_SIZE_OVERFLOW 22051
#define __WARNING_UNTRUSTED_ALLOC_SIZE_WRONG_OVERFLOW_CHECK 22052
#define __WARNING_UNTRUSTED_INDEX_WRONG_OVERFLOW_CHECK 22053
#define __WARNING_UNTRUSTED_ALLOC_SIZE_NEGATIVE 22054
#define __WARNING_UNTRUSTED_INDEX_NEGATIVE 22055
#define __WARNING_UNTRUSTED_LOOP_INDEX_WRONG_OVERFLOW_CHECK 22056
#define __WARNING_UNTRUSTED_ALLOC_SIZE_UNDERFLOW 22057
#define __WARNING_UNTRUSTED_INDEX_UNDERFLOW 22058
#define __WARNING_UNTRUSTED_LOOP_INDEX_UNDERFLOW 22059
#define __WARNING_UNTRUSTED_SIGNED_UNSIGNED_COMPARISON 22060
#define __WARNING_UNTRUSTED_DIFF_SIZE_SIGNED_UNSIGNED_COMPARISON 22061
#define __WARNING_UNTRUSTED_ALLOC_SIZE_OVERFLOW_WITH_ACCESS 22062
#define __WARNING_UNTRUSTED_ALLOC_SIZE_OVERFLOW_IN_ALLOC_WRAPPER 22063
#define __WARNING_UNTRUSTED_ALLOC_SIZE_UNDERFLOW_IN_ALLOC_WRAPPER 22064
#define __WARNING_UNTRUSTED_OVERFLOW_OR_UNDERFLOW_IN_ALLOCATOR_SIZE_FUNC_RETVAL 22067
#define __WARNING_UNTRUSTED_OVERFLOW_OR_UNDERFLOW_IN_ALLOCATOR_SIZE_FUNC_REFARG 22068
#define __WARNING_UNTRUSTED_OVERFLOW_OR_UNDERFLOW_IN_ALLOC_SIZE 22069
#define __WARNING_UNTRUSTED_OVERFLOW_OR_UNDERFLOW_IN_ALLOC_WRAPPER 22070
#define __WARNING_UNTRUSTED_ALLOC_SIZE 22081
#define __WARNING_UNTRUSTED_INDEX 22082
#define __WARNING_UNTRUSTED_LOOP_INDEX 22083
#define __WARNING_UNTRUSTED_OVERFLOWN_EXPR 22084
#define __WARNING_UNTRUSTED_UNDERFLOWN_EXPR 22085
#define __WARNING_UNRELATED_SIZE_BUFFER_ACCESS 22101
#define __WARNING_UNRELATED_LOOP_TERMINATION 22102
#define __WARNING_UNRELATED_LOOP_TERMINATION_NO_SIZEEXPR 22103
#define __WARNING_BUFFER_COPY_NO_KNOWN_SIZEEXPR 22104
#define __WARNING_BUFFER_COPY_NO_PREDICATE 22105
#define __WARNING_BUFFER_COPY_SOURCE_LEN 22106
#define __WARNING_BUFFER_COPY_STRUCT_FIELD_ANNOTATION 22107
#define __WARNING_SIZEEXPR_NOT_REINIT 22108
#define __WARNING_MOVE_OBJECT_WITH_VTABLE_TO_HEAP 22109
#define __WARNING_ENCODE_GLOBAL_FUNCTION_POINTER 22110
#define __WARNING_ENCODE_GLOBAL_DISPATCH_TABLE 22111
#define __WARNING_ENCODE_MEMBER_FUNCTION_POINTER 22112
#define __WARNING_ENCODE_MEMBER_DISPATCH_TABLE 22113
#define __WARNING_MISSING_ENCODE_ASSIGNMENT 22114
#define __WARNING_MISSING_DECODE_CALL 22115
#define __WARNING_BUFFER_COPY_FUNCTION_NO_PREDICATE 22116
#define __WARNING_SENDMESSAGE_WITHOUT_CHECKING_BUFFER_SIZE 22117
#define __WARNING_MISMATCH_RETURN_TYPE 23601
#define __WARNING_MISMATCH_INITEXPR_TYPE 23602
#define __WARNING_MISMATCH_ASSIGNMENT_TYPE 23603
#define __WARNING_MISMATCH_FORMAL_TYPE_AT_CALL 23604
#define __WARNING_MISMATCH_ADD_PROPERTY 23605
#define __WARNING_MISMATCH_REMOVE_PROPERTY 23606
#define __WARNING_MISMATCH_POST_TYPE 23607
#define __WARNING_MISMATCH_FORMAL_VALID_AT_CALL 23608
#define __WARNING_MISMATCH_FORMAL_VALIDSRC_AT_CALL 23609
#define __WARNING_MISMATCH_REFERENCE_VALID 23610
#define __WARNING_MISMATCH_REFERENCE_VALIDSRC 23611
#define __WARNING_MISMATCH_MEMBER_VALID 23612
#define __WARNING_MISMATCH_MEMBER_VALIDSRC 23613
#define __WARNING_MISMATCH_IN_UNTRUSTED_DATA_SPECS 23614
#define __WARNING_POTENTIAL_FILE_READ 23615
#define __WARNING_CONSUMES_UNTRUSTED_DATA 23616
#define __WARNING_MISMATCH_PUBLIC_FORMAL_VALID_AT_CALL 23617
#define __WARNING_FILE_PARSER_CLASS 23620
#define __WARNING_FILE_PARSER_FUNCTION 23621
#define __WARNING_MISMATCH_RETURN_TYPE_COMPNAME 23622
#define __WARNING_MISMATCH_INITEXPR_TYPE_COMPNAME 23623
#define __WARNING_MISMATCH_ASSIGNMENT_TYPE_COMPNAME 23624
#define __WARNING_MISMATCH_FORMAL_TYPE_AT_CALL_COMPNAME 23625
#define __WARNING_MISMATCH_ADD_PROPERTY_COMPNAME 23626
#define __WARNING_MISMATCH_REMOVE_PROPERTY_COMPNAME 23627
#define __WARNING_MISMATCH_POST_TYPE_COMPNAME 23628
#define __WARNING_ALLOCATOR 23629
#define __WARNING_IPV6_NAME_RESOLUTION_IPV4_SPECIFIC 24001
#define __WARNING_IPV6_ADDRESS_STRUCTURE_IPV4_SPECIFIC 24002
#define __WARNING_IPV6_MULTICAST_IPV4_SPECIFIC 24003
#define __WARNING_IPV6_CONSTANT_IPV4_SPECIFIC 24004
#define __WARNING_IPV6_OBSOLETE_FUNCTION 24005
#define __WARNING_IPV6_DEPRECATED_FUNCTION 24006
#define __WARNING_IPV6_USE_EX_VERSION 24007
#define __WARNING_IPV6_INVALID_DEVICE 24008
#define __WARNING_IPV6_DEPRECATED_IOCTL 24009
#define __WARNING_BIG_FORMAL_PARAM 25000
#define __WARNING_IMPLICIT_CTOR 25001
#define __WARNING_UPCAST_CTOR 25002
#define __WARNING_NONCONST_LOCAL 25003
#define __WARNING_NONCONST_PARAM 25004
#define __WARNING_NONCONST_FUNCTION 25005
#define __WARNING_UNUSED_PARAM 25006
#define __WARNING_STATIC_FUNCTION 25007
#define __WARNING_FREE_CONSTRUCTOR_CALL 25008
#define __WARNING_IDENTITY_ASSIGNMENT 25009
#define __WARNING_VIRTUAL_CALL_IN_CTOR 25010
#define __WARNING_CASE_FALLTHRU 25011
#define __WARNING_SMARTPOINTER_DELETE 25012
#define __WARNING_RETURN_FROM_GOTO_CONTEXT 25013
#define __WARNING_MISSING_OVERRIDE 25014
#define __WARNING_DOESNT_OVERRIDE 25015
#define __WARNING_OVERRIDE_CONST_MISMATCH 25016
#define __WARNING_OVERRIDING_NONVIRTUAL 25017
#define __WARNING_DIFFERENT_CALLING_CONVENTION 25018
#define __WARNING_VERYBIG_FORMAL_PARAM 25019
#define __WARNING_SAMENAME_DATAMEMBER 25020
#define __WARNING_POOR_DATAALIGNMENT 25021
#define __WARNING_REMOVERETURNCONST_FUNCTIONCAST 25022
#define __WARNING_BOGUS_BSTRCONST 25023
#define __WARNING_DANGEROUS_POINTERCAST 25024
#define __WARNING_UNSAFE_STRING_FUNCTION 25025
#define __WARNING_OBSOLETE_INI_ACCESSOR 25026
#define __WARNING_BANNED_FUNCTION 25027
#define __WARNING_FUNCTION_NEEDS_REVIEW 25028
#define __WARNING_OBSOLETE_ACL_FUNCTION 25029
#define __WARNING_BOGUS_EXPRESSION_LIST 25030
#define __WARNING_HRESULT_NOT_CHECKED 25031
#define __WARNING_NONCONST_LOCAL_BUFFERPTR 25032
#define __WARNING_NONCONST_BUFFER_PARAM 25033
#define __WARNING_SIZEOF_POINTER_IN_DIVISION 25035
#define __WARNING_STATIC_MASKING_VIRTUAL 25036
#define __WARNING_TRUE_CONSTANT_EXPR_IN_AND 25037
#define __WARNING_FALSE_CONSTANT_EXPR_IN_AND 25038
#define __WARNING_TRUE_CONSTANT_EXPR_IN_OR 25039
#define __WARNING_FALSE_CONSTANT_EXPR_IN_OR 25040
#define __WARNING_IF_CONDITION_IS_ALWAYS_TRUE 25041
#define __WARNING_IF_CONDITION_IS_ALWAYS_FALSE 25042
#define __WARNING_LOCAL_BSTR_SHOULD_BE_CONST_WCHAR_PTR 25043
#define __WARNING_BSTR_PARAM_SHOULD_BE_CONST_WCHAR_PTR 25044
#define __WARNING_ISBADPTR_FUNCTION 25045
#define __WARNING_SPECIFY_SELECTANY 25046
#define __WARNING_INCORRECT_SELECTANY 25047
#define __WARNING_STRINGCONST_ASSIGNED_TO_NONCONST 25048
#define __WARNING_FREESTANDING_CONSTANT 25049
#define __WARNING_LOCAL_FUNCDECL 25050
#define __WARNING_DIFFERENT_RETURN_TYPE_SIZE 25051
#define __WARNING_DIFFERENT_RETURN_TYPE_KIND 25052
#define __WARNING_DIFFERENT_PARAM_COUNT 25053
#define __WARNING_DIFFERENT_PARAM_TYPE_SIZE 25054
#define __WARNING_DIFFERENT_PARAM_TYPE_KIND 25055
#define __WARNING_REMOVEPARAMCONST_FUNCTIONCAST 25056
#define __WARNING_COUNT_REQUIRED_FOR_WRITABLE_BUFFER 25057
#define __WARNING_CAST_CAN_BE_CONST 25058
#define __WARNING_SUPERFLUOUS_CAST 25059
#define __WARNING_SUPERFLUOUS_NOTNOT 25060
#define __WARNING_BACKWARD_JUMP 25061
#define __WARNING_BACKWARD_JUMP_IN_MACRO 25062
#define __WARNING_FILEMAPPING_WITH_GLOBAL_NAME 25063
#define __WARNING_FUNCTION_CALLED_TWICE_IN_MACRO 25064
#define __WARNING_UNSIGNED_SHORT_NEGATIVE_INT_COMPARISON 25065
#define __WARNING_OUTOFRANGE_SHORT_LONG_COMPARISON 25066
#define __WARNING_UNREACHABLE_CASE_LABEL 25067
#define __WARNING_USE_WIDE_API 25068
#define __WARNING_GOTO 25069
#define __WARNING_UNINITIALIZED_DATAMEMBER 25070
#define __WARNING_NO_MEMBERINIT 25071
#define __WARNING_WRONG_MEMBERINIT_ORDER 25073
#define __WARNING_NOHEAP_MEMBER 25075
#define __WARNING_NOHEAP_BASECLASS 25076
#define __WARNING_NEW_ON_NOHEAP 25077
#define __WARNING_CONDITIONAL_WITH_FALSE_TRUE 25078
#define __WARNING_CONDITIONAL_WITH_TRUE_FALSE 25079
#define __WARNING_CONDITIONAL_WITH_SAME_ALTERNATIVES 25080
#define __WARNING_DANGEROUS_ALL_ACCESS_ACL 25084
#define __WARNING_URL_NEEDS_TO_BE_REVIEWED 25085
#define __WARNING_SD_REQUIRED_FOR_NAMED_OBJECT 25086
#define __WARNING_UNSPECIFIED_ACCESSRIGHTS 25087
#define __WARNING_DEPRECATED_WIN16_FUNCTION 25089
#define __WARNING_USE_CPLUSPLUS_BOOL_CONST 25090
#define __WARNING_RETURNTYPE_CAN_BE_BOOL 25091
#define __WARNING_LOCAL_CAN_BE_BOOL 25092
#define __WARNING_FORMAL_CAN_BE_BOOL 25093
#define __WARNING_BASECLASS_SHOULDHAVE_PROTECTED_OR_VIRTUAL_DTOR 25094
#define __WARNING_ENUM_TYPEDEF 25096
#define __WARNING_INTEGRAL_CAST_TO_OBJECT_WITH_VTABLE 25098
#define __WARNING_USE_PREFIX_OPERATOR 25099
#define __WARNING_LHS_TEMP_OBJECT 25100
#define __WARNING_RHS_TEMP_OBJECT 25101
#define __WARNING_EXC_NOT_CAUGHT_BY_REFERENCE 25102
#define __WARNING_EXC_NOT_THROWN_BY_VALUE 25103
#define __WARNING_INCONSISTENT_DECLSPECS 25104
#define __WARNING_SEALED_BASE_CLASS 25105
#define __WARNING_SEALED_BASE_METHOD 25106
#define __WARNING_NOTRUNCCAST_PARAM 25107
#define __WARNING_UNBOUND_RETURN 25108
#define __WARNING_MISSING_BINDRETURN 25109
#define __WARNING_CLARYFY_PRECEDENCE_FOR_QUESTIONOPERATOR 25110
#define __WARNING_DEPRECATED_FUNCTION 25112
#define __WARNING_DEPRECATED_LANGUAGE_TYPE_USED 25113
#define __WARNING_UNMARKED_INTL_DEPRECATED_FUNCTION 25114
#define __WARNING_DEPRECATED_INTL_FUNCTION_CALL 25115
#define __WARNING_OLEO_DEPRECATED_FUNCTION 25119
#define __WARNING_COUNT_REQUIRED_FOR_VOIDPTR_BUFFER 25120
#define __WARNING_RETURNING_TEMP_OBJECT 25124
#define __WARNING_STRCPY_LOOP 25125
#define __WARNING_POSSIBLE_STRCPY_LOOP 25126
#define __WARNING_BOOLEAN_BITWISE_OPERATOR_MIX 25127
#define __WARNING_DIFFERENT_COMPARE_ON_64BIT 25128
#define __WARNING_POSSIBLE_64BIT_TRUNCATION 25129
#define __WARNING_NONCONST_CLSID 25130
#define __WARNING_EMPTY_DTOR 25131
#define __WARNING_BY_VALUE_FORMAL_WITH_DTOR 25132
#define __WARNING_BY_VALUE_TEMPLATEFORMAL_WITH_DTOR 25133
#define __WARNING_IMPLICIT_TEMPLATECTOR 25134
#define __WARNING_LOCAL_ARRAY_SHOULD_BE_STATIC 25135
#define __WARNING_NONCONST_LOCAL_ARRAY 25136
#define __WARNING_LOCAL_ARRAY_SHOULD_BE_PTR 25137
#define __WARNING_STATIC_ARRAY_SHOULD_BE_LOCAL_PTR 25138
#define __WARNING_EMPTY_NONPUBLIC_DTOR 25139
#define __WARNING_DANGEROUS_INTTOPTR_CAST 25140
#define __WARNING_HUNGARIAN_INFERRED 25351
#define __WARNING_MISSING_ANNOTATION 25352
#define __WARNING_OVERRIDE_AT_NON_VIRTUAL 25353
#define __WARNING_OVERRIDE_AT_STATIC 25354
#define __WARNING_OVERRIDE_AT_BASECLASS 25355
#define __WARNING_UNSUPPORTED_DEREF_VALUE 25356
#define __WARNING_PRE_ANNOTATION_AT_RETURNVALUE 25357
#define __WARNING_MISSING_NOTHROW_AT_DECL 25358
#define __WARNING_DEPRECATED_OVERRIDE 25359
#define __WARNING_OBSOLETE_OVERRIDE 25360
#define __WARNING_ILLEGAL_BOUND_AT_PARAM 25361
#define __WARNING_ILLEGAL_BOUND_AT_RETURN 25362
#define __WARNING_ILLEGAL_DEREF_BOUND_AT_PARAM 25363
#define __WARNING_ILLEGAL_DEREF_BOUND_AT_RETURN 25364
#define __WARNING_ILLEGAL_RANGE_AT_PARAM 25365
#define __WARNING_ILLEGAL_RANGE_AT_RETURN 25366
#define __WARNING_ILLEGAL_DEREF_RANGE_AT_PARAM 25367
#define __WARNING_ILLEGAL_DEREF_RANGE_AT_RETURN 25368
#define __WARNING_PARAM_UPPERBOUND_LT_LOWERBOUND 25369
#define __WARNING_RETURN_UPPERBOUND_LT_LOWERBOUND 25370
#define __WARNING_NO_ANNOTATIONS_AT_DECLARATION 25371
#define __WARNING_DECLSPEC_SAL_ANNOTATION 25372
#define __WARNING_BUFFER_OVERFLOW 26000
#define __WARNING_BUFFER_UNDERFLOW 26001
#define __WARNING_READ_UNTRACKED_BUFFER 26002
#define __WARNING_UNTRACKED_BUFFER 26003
#define __WARNING_UNINITIALIZED_POINTER 26004
#define __WARNING_ZEROLENGTHARRAY 26005
#define __WARNING_INCORRECT_ANNOTATION_STRING 26006
#define __WARNING_INCORRECT_ANNOTATION 26007
#define __WARNING_BUFFERACCESS 26009
#define __WARNING_POTENTIAL_BUFFER_OVERFLOW 26010
#define __WARNING_POTENTIAL_BUFFER_UNDERFLOW 26011
#define __WARNING_UNTRACKED_BUFFER_BUT_UNANNOTATABLE 26012
#define __WARNING_COMPLEX_EXPR 26013
#define __WARNING_INCORRECT_VALIDATION 26014
#define __WARNING_POTENTIAL_BUFFER_OVERFLOW_HIGH_PRIORITY 26015
#define __WARNING_BUFFER_OVERFLOW_NULL_TERMINATED 26016
#define __WARNING_POTENTIAL_BUFFER_OVERFLOW_MISC 26017
#define __WARNING_POTENTIAL_BUFFER_OVERFLOW_NULLTERMINATED 26018
#define __WARNING_INCORRECT_VALIDATION2 26019
#define __WARNING_INSANE_ANNOTATION 26020
#define __WARNING_ANNOTATION_MISMATCH_MISSING_FIRST 26021
#define __WARNING_ANNOTATION_MISMATCH_MISSING_SECOND 26022
#define __WARNING_ANNOTATION_MISMATCH 26023
#define __WARNING_ANNOTATION_MISMATCH_INTERNAL 26029
#define __WARNING_POSTCONDITION_BUFFER_OVERFLOW 26030
#define __WARNING_POSTCONDITION_BUFFER_UNDERFLOW 26031
#define __WARNING_PRECONDITION_NULLTERMINATION_VIOLATION 26035
#define __WARNING_POSTCONDITION_NULLTERMINATION_VIOLATION 26036
#define __WARNING_POTENTIAL_NULLTERMINATION_VIOLATION 26037
#define __WARNING_POTENTIAL_POSTCONDITION_BUFFER_OVERFLOW 26040
#define __WARNING_POTENTIAL_POSTCONDITION_BUFFER_UNDERFLOW 26041
#define __WARNING_INCORRECT_VALIDATION_POSTCONDITION 26044
#define __WARNING_HIGH_PRIORITY_OVERFLOW_POSTCONDITION 26045
#define __WARNING_CHECKER_ASSERTION_FAILURE 26050
#define __WARNING_IRREDUCIBLE_CFG 26051
#define __WARNING_POTENTIALLY_UNCONSTRAINED_CALL 26052
#define __WARNING_POTENTIAL_BUFFER_OVERFLOW_LOOP_DEPENDENT 26053
#define __WARNING_RANGE_PRECONDITION_VIOLATION 26060
#define __WARNING_RANGE_POSTCONDITION_VIOLATION 26061
#define __WARNING_POTENTIAL_RANGE_PRECONDITION_VIOLATION 26070
#define __WARNING_POTENTIAL_RANGE_POSTCONDITION_VIOLATION 26071
#define __WARNING_VALIDATED_ACCESS 26080
#define __WARNING_USING_STRUCT_ANNOTATION 26081
#define __WARNING_SUSPICIOUS_FUNCTION_POINTER_CAST 26090
#define __WARNING_RACE_CONDITION 26100
#define __WARNING_INTERLOCKED_VIOLATION 26101
#define __WARNING_RACE_CONDITION_VIA_PARAMETER 26102
#define __WARNING_LOCKORDER_ACQUIRE_VIOLATION 26105
#define __WARNING_LOCKORDER_RELEASE_VIOLATION 26106
#define __WARNING_CALLER_FAILING_TO_HOLD 26110
#define __WARNING_CALLER_FAILING_TO_RELEASE 26111
#define __WARNING_CALLER_CANNOT_HOLD_ANY_LOCK 26112
#define __WARNING_FAILING_TO_RELEASE 26115
#define __WARNING_FAILING_TO_ACQUIRE 26116
#define __WARNING_RELEASING_UNHELD_LOCK 26117
#define __WARNING_DOUBLE_LOCK 26118
#define __WARNING_NEED_NO_COMPETING_THREAD 26130
#define __WARNING_NEED_REQUIRES_LOCK_HELD 26131
#define __WARNING_NEED_SIDE_EFFECT 26135
#define __WARNING_NEED_GUARDED_BY 26136
#define __WARNING_NEED_INTERLOCKED 26137
#define __WARNING_NEED_LOCK_ORDER 26138
#define __WARNING_NEED_LOCK_PROPERTY 26139
#define __WARNING_CSAL_ANNOTATION_ERROR 26140
#define __WARNING_IGNORE_LOCK_CHECKING 26149
#define __WARNING_RACE_CONDITION_MEDIUM_CONFIDENCE 26150
#define __WARNING_INTERLOCKED_VIOLATION_MEDIUM_CONFIDENCE 26151
#define __WARNING_RACE_CONDITION_VIA_PARAMETER_MEDIUM_CONFIDENCE 26152
#define __WARNING_LOCKORDER_ACQUIRE_VIOLATION_MEDIUM_CONFIDENCE 26155
#define __WARNING_LOCKORDER_RELEASE_VIOLATION_MEDIUM_CONFIDENCE 26156
#define __WARNING_CALLER_FAILING_TO_HOLD_MEDIUM_CONFIDENCE 26160
#define __WARNING_CALLER_FAILING_TO_RELEASE_MEDIUM_CONFIDENCE 26161
#define __WARNING_CALLER_CANNOT_HOLD_ANY_LOCK_MEDIUM_CONFIDENCE 26162
#define __WARNING_FAILING_TO_RELEASE_MEDIUM_CONFIDENCE 26165
#define __WARNING_FAILING_TO_ACQUIRE_MEDIUM_CONFIDENCE 26166
#define __WARNING_RELEASING_UNHELD_LOCK_MEDIUM_CONFIDENCE 26167
#define __WARNING_DOUBLE_LOCK_MEDIUM_CONFIDENCE 26168
#define __WARNING_NEED_NO_COMPETING_THREAD_MEDIUM_CONFIDENCE 26180
#define __WARNING_NEED_REQUIRES_LOCK_HELD_MEDIUM_CONFIDENCE 26181
#define __WARNING_NEED_SIDE_EFFECT_MEDIUM_CONFIDENCE 26185
#define __WARNING_NEED_GUARDED_BY_MEDIUM_CONFIDENCE 26186
#define __WARNING_NEED_INTERLOCKED_MEDIUM_CONFIDENCE 26187
#define __WARNING_NEED_LOCK_ORDER_MEDIUM_CONFIDENCE 26188
#define __WARNING_NEED_LOCK_PROPERTY_MEDIUM_CONFIDENCE 26189
#define __WARNING_DRIVER_FUNCTION_TYPE 28101
#define __WARNING_RESOURCE_LEAK 28103
#define __WARNING_RESOURCE_NOT_ACQUIRED 28104
#define __WARNING_RESOURCE_LEAK_EXCEPTION 28105
#define __WARNING_ALREADY_HELD 28106
#define __WARNING_MUST_HOLD 28107
#define __WARNING_WRONG_KIND 28108
#define __WARNING_MUST_NOT_HOLD 28109
#define __WARNING_FLOAT_IN_DRIVER 28110
#define __WARNING_FP_IRQ_UNMATCHED 28111
#define __WARNING_INTERLOCKED_ACCESS 28112
#define __WARNING_INTERLOCKED_SCLASS 28113
#define __WARNING_IRP_COPY 28114
#define __WARNING_IRQ_TOO_LOW 28120
#define __WARNING_IRQ_TOO_HIGH 28121
#define __WARNING_INFERRED_IRQ_TOO_LOW 28122
#define __WARNING_INFERRED_IRQ_TOO_HIGH 28123
#define __WARNING_IRQ_SET_TOO_LOW 28124
#define __WARNING_PROBE_NO_TRY 28125
#define __WARNING_OBJ_REFERENCE_MODE 28126
#define __WARNING_PROTOTYPE_MISMATCH 28127
#define __WARNING_FUNCTION_ASSIGNMENT 28128
#define __WARNING_MUST_BE_BITOP 28129
#define __WARNING_NOT_COPYING_NAME 28131
#define __WARNING_SIZEOF_POINTER 28132
#define __WARNING_INITIALIZE_TIMER 28133
#define __WARNING_POOL_TAG 28134
#define __WARNING_KE_WAIT_LOCAL 28135
#define __WARNING_ALWAYS_CONSTANT 28137
#define __WARNING_NEVER_CONSTANT 28138
#define __WARNING_STRICT_TYPE_MATCH 28139
#define __WARNING_CRITICAL_OR_IRQ 28140
#define __WARNING_IRQ_LOWERED_IMPROPERLY 28141
#define __WARNING_RELEASE_CONSTANT 28142
#define __WARNING_PENDING_STATUS_ERROR 28143
#define __WARNING_CANCEL_IRQL_FROM_IRP 28144
#define __WARNING_MODIFYING_MDL 28145
#define __WARNING_STRSAFE_H 28146
#define __WARNING_UNHELPFUL_TAG 28147
#define __WARNING_IRQ_SET_TOO_HIGH 28150
#define __WARNING_BAD_IRQL_VALUE 28151
#define __WARNING_INIT_NOT_CLEARED 28152
#define __WARNING_MODEL_BAD_IRQL 28153
#define __WARNING_CLASS_MISMATCH_NONE 28155
#define __WARNING_IRQ_INCORRECT 28156
#define __WARNING_IRQL_NOT_USED 28157
#define __WARNING_IRQL_NOT_SET 28158
#define __WARNING_USE_OTHER_FUNCTION 28159
#define __WARNING_ERROR 28160
#define __WARNING_FLOAT_UNSAFE_EXIT 28161
#define __WARNING_FLOAT_SAFE_EXIT 28162
#define __WARNING_MUST_NOT_TRY 28163
#define __WARNING_PVOID 28164
#define __WARNING_CLASS_MISMATCH 28165
#define __WARNING_NOT_SAME_IRQL 28166
#define __WARNING_UNEXPECTED_IRQL_CHANGE 28167
#define __WARNING_DISPATCH_MISMATCH 28168
#define __WARNING_DISPATCH_MISSING 28169
#define __WARNING_NO_PAGED_CODE 28170
#define __WARNING_MULTIPLE_PAGED_CODE 28171
#define __WARNING_NO_PAGING_SEGMENT 28172
#define __WARNING_GET_ADAPTER_NOT_RETRIED 28173
#define __WARNING_INACCESSIBLE_MEMBER 28175
#define __WARNING_READ_ONLY_MEMBER 28176
#define __WARNING_MULTIPLE_FUNCTION_CLASS 28177
#define __WARNING_DEREF_INTERMEDIATE_NULL_PTR 28181
#define __WARNING_DEREF_RENAMED_NULL_PTR 28182
#define __WARNING_INVALID_PARAM_VALUE_3 28183
#define __WARNING_DEREF_PARAMETER_NULL_PTR 28184
#define __WARNING_INVALID_PARAM_VALUE_4 28185
#define __WARNING_MUST_HOLD_CLASS 28191
#define __WARNING_MUST_NOT_HOLD_CLASS 28192
#define __WARNING_MUST_USE 28193
#define __WARNING_MEMORY_NOT_ALIASED 28194
#define __WARNING_MEMORY_NOT_ACQUIRED 28195
#define __WARNING_RETURNING_BAD_RESULT 28196
#define __WARNING_ALIASED_MEMORY_LEAK 28197
#define __WARNING_ALIASED_MEMORY_LEAK_EXCEPTION 28198
#define __WARNING_MAYBE_UNINIT_VAR 28199
#define __WARNING_INTERNAL_DEBUG 28200
#define __WARNING_XML_ANNOTATION 28201
#define __WARNING_INVALID_ANNOTATION_SYMBOL 28209
#define __WARNING_POST_EXPECTED 28210
#define __WARNING_CONTEXT_EXPECTED 28211
#define __WARNING_POINTER_EXPECTED 28212
#define __WARNING_BAD_USEHEADER 28213
#define __WARNING_BAD_PARAM_NAME 28214
#define __WARNING_DUPLICATE_TYPEFIX 28215
#define __WARNING_MUSTCHECK_NOT_POST 28216
#define __WARNING_UNMATCHED_ANNO_COUNT 28217
#define __WARNING_UNMATCHED_ANNO_TREE 28218
#define __WARNING_ENUM_EXPECTED 28219
#define __WARNING_INTEGER_EXPECTED 28220
#define __WARNING_STRING_EXPECTED 28221
#define __WARNING_YNM_EXPECTED 28222
#define __WARNING_AUTOQUOTE_EXPECTED 28223
#define __WARNING_PARAMS_EXPECTED 28224
#define __WARNING_BAD_NO_PARAMS 28225
#define __WARNING_NOT_BOTH 28226
#define __WARNING_NOT_BOTH_2 28227
#define __WARNING_UNRECOGNIZED_TYPE 28228
#define __WARNING_NO_PARAMS_EXPECTED 28229
#define __WARNING_NO_SUCH_MEMBER 28230
#define __WARNING_ILLEGAL_INDEX 28231
#define __WARNING_DANGLING_QUALIFIER 28232
#define __WARNING_BLOCK_QUALIFIER 28233
#define __WARNING_AT_NOT_ROOT 28234
#define __WARNING_PRIMOP_AS_ANNOTATION 28235
#define __WARNING_ANNOTATION_AS_PRIMOP 28236
#define __WARNING_OBSOLETE 28237
#define __WARNING_TOOMANY_OLD 28238
#define __WARNING_MIXED_OLD_NEW 28239
#define __WARNING_NO_PARAM1 28240
#define __WARNING_EXTERNAL_UNKNOWN_ANNO 28241
#define __WARNING_BAD_MULTIPLIER 28242
#define __WARNING_BAD_DEREF 28243
#define __WARNING_BAD_EXTERNAL 28244
#define __WARNING_THIS_NONMEMBER 28245
#define __WARNING_ANNOTATION_TYPE_MISMATCH 28246
#define __WARNING_XML_DUPLICATE 28247
#define __WARNING_XML_MODEL_FILE_DUPLICATE 28248
#define __WARNING_UNMATCHED_DECL 28250
#define __WARNING_UNMATCHED_DEFN 28251
#define __WARNING_UNMATCHED_DECL_ANNO 28252
#define __WARNING_UNMATCHED_DEFN_ANNO 28253
#define __WARNING_DYNAMIC_CAST 28254
#define __WARNING_MODEL_SYNTAX_ERROR 28260
#define __WARNING_MODEL_SYNTAX_ERROR1 28261
#define __WARNING_MODEL_SYNTAX_ERROR2 28262
#define __WARNING_MUST_BE_CONSTANT 28264
#define __WARNING_MODEL_PLACEMENT_ERROR 28266
#define __WARNING_MODEL_PLACEMENT_ERROR1 28267
#define __WARNING_CLASS_MODEL_MISMATCH 28268
#define __WARNING_MISMATCHED_LIST 28272
#define __WARNING_MISMATCHED_PREDICATE 28273
#define __WARNING_MISMATCHED_PREDICATE1 28274
#define __WARNING_NULL_MACRO_VALUE 28275
#define __WARNING_NO_MACROS 28276
#define __WARNING_NO_PROTOTYPE 28278
#define __WARNING_UNMATCHED_BEGIN 28279
#define __WARNING_UNMATCHED_END 28280
#define __WARNING_BAD_INVALID 28281
#define __WARNING_FORMAT_NOT_PRE 28282
#define __WARNING_UNSUPPORTED_SIZESPEC 28283
#define __WARNING_SPEC_INVALID_PREDICATE 28284
#define __WARNING_SPEC_INVALID_SYNTAX2 28285
#define __WARNING_SPEC_INVALID_SYNTAX 28286
#define __WARNING_INVALID_AT2 28287
#define __WARNING_INVALID_AT 28288
#define __WARNING_LIMITSPEC_EXPECTED 28289
#define __WARNING_SPEC_TOO_MANY 28290
#define __WARNING_LOD_0_NULL 28291
#define __WARNING_MIN_SIZE_MULTIPLE 28292
#define __WARNING_MIN_SIZE_UNKNOWN 28293
#define __WARNING_EXTERNAL_UNKNOWN_PARAM 28294
#define __WARNING_EXTERNAL_UNKNOWN_TYPE 28295
#define __WARNING_MODEL_PARSE_CRASH 28296
#define __WARNING_MODEL_PARSE_1 28297
#define __WARNING_MODEL_TOO_MANY 28299
#define __WARNING_AVOID_BLOCKING_HWNDBROADCAST 28601
#define __WARNING_AVOID_TIMEOUT_HWNDBROADCAST 28602
#define __WARNING_AVOID_SENDMESSAGE_TIMEOUT_MISUSE 28604
#define __WARNING_ALLOCA_RESETSTKOFLW 28615
#define __WARNING_INTERLOCKEDDECREMENT_MISUSE1 28616
#define __WARNING_AVOID_BEGIN_THREAD_RETURN_VALUE 28617
#define __WARNING_UNSIGNED_CAST_OF_GETMESSAGEPOS 28623
#define __WARNING_UNRELEASED_REF 28624
#define __WARNING_COMPILER_OPTIMIZATES_OUT_CLEARING_SENSITIVEDATA 28625
#define __WARNING_LOCAL_FREE_NONALLOCATED 28636
#define __WARNING_UNSAFE_CALL_IN_GLOBAL_INIT 28637
#define __WARNING_DLOAD_FUNCDEFN 28638
#define __WARNING_CLOSEHANDLE_STRING 28639
#define __WARNING_DLOAD_FUNCSTATIC 28640
#define __WARNING_BAD_POSTMESSAGE_FLAG 28642
#define __WARNING_DPA_INSERTPTR_RETURN 28644
#define __WARNING_OBSOLETE_MESSAGE_SYMBOL_QUESTION 28645
#define __WARNING_DO_NOT_USE_PULSEEVENT 28648
#define __WARNING_REDUNDANT_CHECK_FOR_ARRAY_IS_NOT_NULL 28649
#define __WARNING_IMPROPER_NOT_OPERATOR_ON_ZERO 28650
#define __WARNING_NONSTATIC_FUNCPTR_IN_STATIC_INIT 28651
#define __WARNING_BITOP_CALL_IN_STATIC_INIT 28652
#define __WARNING_CAST_NTSTATUS_TO_BOOL 28714
#define __WARNING_CAST_BOOL_TO_NTSTATUS 28715
#define __WARNING_COMPILER_INSERTED_CAST_BOOL_TO_NTSTATUS 28716
#define __WARNING_INVALID_VARIANT_TYPE 28717
#define __WARNING_UNANNOTATED_BUFFER 28718
#define __WARNING_BANNED_API_USAGE 28719
#define __WARNING_ISBADXXXPTR_API_USAGE 28720
#define __WARNING_DEPRECATED_PERF_COUNT 28721
#define __WARNING_UNANNOTATED_BUFFER_IN_DECL 28722
#define __WARNING_UNANNOTATED_BUFFER_IN_DEFN_WO_DECL 28723
#define __WARNING_SETUNHANDLEDEXCEPTIONFILTER_USE 28725
#define __WARNING_BANNED_API_USAGEL2 28726
#define __WARNING_BANNED_API_USAGEL3 28727
#define __WARNING_BANNED_API_USAGEL4 28728
#define __WARNING_INCORRECT_NULLTERM_ASSIGN 28730
#define __WARNING_RETAIL_DEBUGBREAK 28731
#define __WARNING_THROW_DECL_MISMATCH 28732
#define __WARNING_THROW_DECL_MISSING 28733
#define __WARNING_CYCLOMATIC_COMPLEXITY 28734
#define __WARNING_BANNED_CRIMSON_API_USAGE 28735
#define __WARNING_BANNED_API_ARGUMENT_USAGE 28736
#define __WARNING_UNANNOTATED_BUFFER_UCHAR 28740
#define __WARNING_UNANNOTATED_BUFFER_PROTOTYPE 28741
#define __WARNING_UNANNOTATED_BUFFER_PROTOTYPE_UCHAR 28742
#define __WARNING_OUT_NOTNULL_ON_FAILURE 28901
#define __WARNING_QI_SUCCESS_NO_ADDREF 28903
#define __WARNING_BUFFER_SIZE_EQUALS_COUNT 28910
#define __WARNING_REDUNDANT_TEST_IN_MACRO 28920
#define __WARNING_REDUNDANT_POINTER_TEST_CLEANUP 28921
#define __WARNING_REDUNDANT_POINTER_TEST 28922
#define __WARNING_REDUNDANT_SCALAR_TEST 28923
#define __WARNING_REDUNDANT_POINTER_TEST_FAR_EVIDENCE 28924
#define __WARNING_POTENTIALLY_REDUNDANT_GLOBAL_POINTER_TEST 28925
#define __WARNING_UNUSED_POINTER_ASSIGNMENT 28930
#define __WARNING_UNUSED_SCALAR_ASSIGNMENT 28931
#define __WARNING_UNUSED_FORMALPARAM_ASSIGNMENT 28933
#define __WARNING_UNUSED_PTR2PTR_FORMALPARAM_ASSIGNMENT 28934
#define __WARNING_UNUSED_OUT_FORMALPARAM_ASSIGNMENT 28935
#define __WARNING_UNREACHABLE_CODE 28940
#define __WARNING_UNANNONATED_EXP_IN_VOLATILE_CONTEXT 28952
#define __WARNING_UNEXPECED_LEVEL_IN_VOLATILE_CONTEXT 28953
#define __WARNING_MULTIPLE_VOLATILE_ACCESS 28954
#define __WARNING_MULTIPLE_VOLATILE_ACCESS_FROM_ANNOT 28955
#define __WARNING_COMPILER_GENERATED_VOLATILE_CAST 28956
#define __WARNING_LOCAL_VARIABLE_IN_VOLATILE_CONTEXT 28957
#define __WARNING_MULTIPLE_VOLATILE_ACCESS_WITH_CALLS 28958
#define __WARNING_MULTIPLE_VOLATILE_ACCESS_FROM_ANNOT_WITH_CALLS 28959
#define __WARNING_DEPRECATED_MSXML4 30001
#define __WARNING_ACCESSIBILITY_COLORAPI 30022
#define __WARNING_ACCESSIBILITY_CLIPCURSOR 30023
#define __WARNING_TEMP_FILE 33700
#define __WARNING_ZERO_DIVISION 33701
#define __WARNING_ZERO_DIVISION_WITH_FIELD 33702
#define __WARNING_PARAMETER_BUFFER_TO_STRUCT_CAST 33703
#define __WARNING_MEMBER_BUFFER_TO_STRUCT_CAST 33704
#define __WARNING_SAFE_AFTER_UNSAFE_ARITHMETIC 33705
#define __WARNING_UNSAFE_AFTER_SAFE_ARITHMETIC 33706
#define __WARNING_PARAMETER_BUFFER_IN_MEMCPY 33707
#define __WARNING_MEMBER_BUFFER_IN_MEMCPY 33708
#define __WARNING_PARAMETER_BUFFER_IN_WRITE_CALL 33709
#define __WARNING_PARAMETER_BUFFER_IN_READ_CALL 33710
#define __WARNING_MEMBER_BUFFER_IN_WRITE_CALL 33711
#define __WARNING_MEMBER_BUFFER_IN_READ_CALL 33712
#define __WARNING_PARAMETER_BUFFER_UPDATED_INSIDE_LOOP 33713
#define __WARNING_PARAMETER_BUFFER_UPDATED_OUTSIDE_LOOP 33714
#define __WARNING_MEMBER_BUFFER_UPDATED_INSIDE_LOOP 33715
#define __WARNING_MEMBER_BUFFER_UPDATED_OUTSIDE_LOOP 33716
#define __WARNING_NDIS_DRIVER_PARAMETER_BUFFER 33801
#define __WARNING_USE_FILE_DEVICE_SECURE_OPEN 33802
#define __WARNING_USE_SUFFIXED_CALL 33803
#define __WARNING_USE_RPC_IF_ALLOW_SECURE_ONLY 33804
#define __WARNING_X_INVALID_ATTRIBUTE_PROPERTY 36500
#define __WARNING_X_CONFLICTING_ATTRIBUTE_PROPERTY_VALUES 36501
#define __WARNING_X_REFERENCES_CANT_BE_NULL 36503
#define __WARNING_X_NULL_ON_NON_POINTER 36504
#define __WARNING_X_MUSTCHECK_ON_VOID 36505
#define __WARNING_X_BUFFER_SIZE_ON_NON_POINTER_OR_ARRAY 36506
#define __WARNING_X_NULL_MISMATCH_AT_DEREF_0 36507
#define __WARNING_X_WRITE_ACCESS_ON_CONST 36508
#define __WARNING_X_RETURN_USED_ON_PRECONDITION 36509
#define __WARNING_X_NULLTERMINATED_ON_NON_POINTER 36510
#define __WARNING_X_MUSTCHECK_MAYBE 36511
#define __WARNING_X_NULL_CONFLICTS_WITH_NOT_VALID 36512
#define __WARNING_X_ELEMENT_SIZE_WITHOUT_BUFFER_SIZE 36513
#define __WARNING_X_BUFFER_SIZE_EXCEEDS_ARRAY_SIZE 36514
#define __WARNING_X_BUFFER_SIZE_ON_NON_POINTER 36515
#define __WARNING_X_NO_PROPERTIES_ON_ATTRIBUTE 36516
#define __WARNING_X_VALID_SIZE_ON_NON_READABLE_BUFFER 36517
#define __WARNING_X_WRITABLE_SIZE_ON_NON_WRITABLE_BUFFER 36518
#define __WARNING_X_NEEDSRELEASE_MAYBE 36519
#define __WARNING_X_INVALID_SIZE_STRING_DEREF 36521
#define __WARNING_X_INVALID_SIZE_STRING_TYPE 36522
#define __WARNING_X_INVALID_SIZE_STRING_PARAM 36523
#define __WARNING_X_INVALID_SIZE_STRING_UNREACHABLE_LOCATION 36525
#define __WARNING_X_INVALID_SIZE_STRING_BUFFER_TYPE 36526
#define __WARNING_X_NEEDSRELEASE_ON_VOID 36527
#define __WARNING_X_UNRECOGNIZED_FORMAT_STRING_STYLE 36530
#define __WARNING_X_BUFFERSIZE_INFEASIBLE 36535
#define __WARNING_X_OVERRIDING_OLD_MODEL 36540
#define __WARNING_X_INVALID_SIZE_STRING_EXPRESSION 36551
#define __WARNING_X_INVALID_DEREF_EXPRESSION 36552
#define __WARNING_LOCALE_SENSITIVE_STRCMP 38001
#define __WARNING_LOCALE_SENSITIVE_COMPARESTRING 38002
#define __WARNING_SYSTEM_LOCALE_MISUSE 38003
#define __WARNING_DEPRECATED_LIBRARY 38004
#define __WARNING_CALLING_SETTHREADLOCALE 38010
#define __WARNING_OVERRIDING_LOCALE_SETTINGS_WITH_SETLOCALEINFO 38011
#define __WARNING_ANSI_APICALL 38020
#define __WARNING_W2A_BEST_FIT 38021
#define __WARNING_CLIPBOARD_ANSI 38022
#define __WARNING_ANSI_DATAFILE 38023
#define __WARNING_HARD_CODED_STRING_TO_UI_FN 38030
#define __WARNING_HARDCODED_FONT_INFO 38031
#define __WARNING_CONSOLE_OUTPUT_ISSUE 38032
#define __WARNING_FORMAT_MESSAGE_LANG 38033
#define __WARNING_CONCATENATED_RESOURCE_STRING 38034
#define __WARNING_LOCALIZABLE_STRING_FORMAT_ISSUE 38035
#define __WARNING_MESSAGEBOX_RTL 38036
#define __WARNING_BITMAP_OR_ANSI_FONT 38037
#define __WARNING_COMMANDLINK_SETNOTE 38038
#define __WARNING_SCREEN_COORDINATES_CONVERSION 38039
#define __WARNING_GETDATEFORMAT_WRAPPER 38041
#define __WARNING_GETDATEFORMAT_AUTOLAYOUT 38042
#define __WARNING_LAYOUT_BITMAPORIENTATIONPRESERVED 38043
#define __WARNING_LOC_METADATA_GENERATED 38044
#define __WARNING_NON_LOCFRIENDLY_STRING_FORMATTING 38045

