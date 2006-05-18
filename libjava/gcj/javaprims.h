// javaprims.h - Main external header file for libgcj.  -*- c++ -*-


/* Copyright (C) 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation

   This file is part of libgcj.

This software is copyrighted work licensed under the terms of the
Libgcj License.  Please consult the file "LIBGCJ_LICENSE" for
details.  */

#ifndef __JAVAPRIMS_H__
#define __JAVAPRIMS_H__

// Force C++ compiler to use Java-style exceptions.
#pragma GCC java_exceptions

#include <gcj/libgcj-config.h>

// FIXME: this is a hack until we get a proper gcjh.
// It is needed to work around system header files that define TRUE
// and FALSE.
#undef TRUE
#define TRUE TRUE
#undef FALSE
#define FALSE FALSE

// To force selection of correct types that will mangle consistently
// across platforms.
extern "Java"
{
  typedef __java_byte jbyte;
  typedef __java_short jshort;
  typedef __java_int jint;
  typedef __java_long jlong;
  typedef __java_float jfloat;
  typedef __java_double jdouble;
  typedef __java_char jchar;
  typedef __java_boolean jboolean;
  typedef jint jsize;

  // The following class declarations are automatically generated by
  // the `classes.pl' script.
  namespace java
  {
    namespace io
    {
      class BufferedInputStream;
      class BufferedOutputStream;
      class BufferedReader;
      class BufferedWriter;
      class ByteArrayInputStream;
      class ByteArrayOutputStream;
      class CharArrayReader;
      class CharArrayWriter;
      class CharConversionException;
      class Closeable;
      class DataInput;
      class DataInputStream;
      class DataOutput;
      class DataOutputStream;
      class DeleteFileHelper;
      class DeleteFileHelper$1;
      class EOFException;
      class Externalizable;
      class File;
      class FileDescriptor;
      class FileFilter;
      class FileInputStream;
      class FileNotFoundException;
      class FileOutputStream;
      class FilePermission;
      class FileReader;
      class FileWriter;
      class FilenameFilter;
      class FilterInputStream;
      class FilterOutputStream;
      class FilterReader;
      class FilterWriter;
      class Flushable;
      class IOException;
      class InputStream;
      class InputStreamReader;
      class InterruptedIOException;
      class InvalidClassException;
      class InvalidObjectException;
      class LineNumberInputStream;
      class LineNumberReader;
      class NotActiveException;
      class NotSerializableException;
      class ObjectInput;
      class ObjectInputStream;
      class ObjectInputStream$1;
      class ObjectInputStream$2;
      class ObjectInputStream$GetField;
      class ObjectInputStream$ValidatorAndPriority;
      class ObjectInputValidation;
      class ObjectOutput;
      class ObjectOutputStream;
      class ObjectOutputStream$1;
      class ObjectOutputStream$PutField;
      class ObjectStreamClass;
      class ObjectStreamClass$1;
      class ObjectStreamClass$2;
      class ObjectStreamClass$InterfaceComparator;
      class ObjectStreamClass$MemberComparator;
      class ObjectStreamConstants;
      class ObjectStreamException;
      class ObjectStreamField;
      class ObjectStreamField$1;
      class OptionalDataException;
      class OutputStream;
      class OutputStreamWriter;
      class PipedInputStream;
      class PipedOutputStream;
      class PipedReader;
      class PipedWriter;
      class PrintStream;
      class PrintWriter;
      class PushbackInputStream;
      class PushbackReader;
      class RandomAccessFile;
      class Reader;
      class SequenceInputStream;
      class Serializable;
      class SerializablePermission;
      class StreamCorruptedException;
      class StreamTokenizer;
      class StringBufferInputStream;
      class StringReader;
      class StringWriter;
      class SyncFailedException;
      class UTFDataFormatException;
      class UnsupportedEncodingException;
      class VMObjectStreamClass;
      class WriteAbortedException;
      class Writer;
    }

    namespace lang
    {
      class AbstractMethodError;
      class Appendable;
      class ArithmeticException;
      class ArrayIndexOutOfBoundsException;
      class ArrayStoreException;
      class AssertionError;
      class Boolean;
      class Byte;
      class CharSequence;
      class Character;
      class Character$Subset;
      class Character$UnicodeBlock;
      class Class;
      class ClassCastException;
      class ClassCircularityError;
      class ClassFormatError;
      class ClassLoader;
      class ClassNotFoundException;
      class CloneNotSupportedException;
      class Cloneable;
      class Comparable;
      class Compiler;
      class ConcreteProcess;
      class ConcreteProcess$EOFInputStream;
      class ConcreteProcess$ProcessManager;
      class Double;
      class Enum;
      class EnumConstantNotPresentException;
      class Error;
      class Exception;
      class ExceptionInInitializerError;
      class Float;
      class IllegalAccessError;
      class IllegalAccessException;
      class IllegalArgumentException;
      class IllegalMonitorStateException;
      class IllegalStateException;
      class IllegalThreadStateException;
      class IncompatibleClassChangeError;
      class IndexOutOfBoundsException;
      class InheritableThreadLocal;
      class InstantiationError;
      class InstantiationException;
      class Integer;
      class InternalError;
      class InterruptedException;
      class Iterable;
      class LinkageError;
      class Long;
      class Math;
      class NegativeArraySizeException;
      class NoClassDefFoundError;
      class NoSuchFieldError;
      class NoSuchFieldException;
      class NoSuchMethodError;
      class NoSuchMethodException;
      class NullPointerException;
      class Number;
      class NumberFormatException;
      class Object;
      class OutOfMemoryError;
      class Package;
      class Process;
      class Readable;
      class Runnable;
      class Runtime;
      class RuntimeException;
      class RuntimePermission;
      class SecurityContext;
      class SecurityException;
      class SecurityManager;
      class Short;
      class StackOverflowError;
      class StackTraceElement;
      class StrictMath;
      class String;
      class String$CaseInsensitiveComparator;
      class StringBuffer;
      class StringBuilder;
      class StringIndexOutOfBoundsException;
      class System;
      class Thread;
      class Thread$UncaughtExceptionHandler;
      class ThreadDeath;
      class ThreadGroup;
      class ThreadLocal;
      class Throwable;
      class Throwable$StaticData;
      class TypeNotPresentException;
      class UnknownError;
      class UnsatisfiedLinkError;
      class UnsupportedClassVersionError;
      class UnsupportedOperationException;
      class VMClassLoader;
      class VMCompiler;
      class VMDouble;
      class VMFloat;
      class VMSecurityManager;
      class VMThrowable;
      class VerifyError;
      class VirtualMachineError;
      class Void;
      namespace annotation
      {
        class Annotation;
        class AnnotationFormatError;
        class AnnotationTypeMismatchException;
      }

      namespace instrument
      {
        class ClassDefinition;
        class ClassFileTransformer;
        class IllegalClassFormatException;
        class Instrumentation;
        class UnmodifiableClassException;
      }

      namespace ref
      {
        class PhantomReference;
        class Reference;
        class ReferenceQueue;
        class SoftReference;
        class WeakReference;
      }

      namespace reflect
      {
        class AccessibleObject;
        class AnnotatedElement;
        class Array;
        class Constructor;
        class Field;
        class GenericArrayType;
        class GenericDeclaration;
        class GenericSignatureFormatError;
        class InvocationHandler;
        class InvocationTargetException;
        class MalformedParameterizedTypeException;
        class Member;
        class Method;
        class Modifier;
        class ParameterizedType;
        class Proxy;
        class Proxy$ClassFactory;
        class Proxy$ProxyData;
        class Proxy$ProxySignature;
        class Proxy$ProxyType;
        class ReflectPermission;
        class Type;
        class TypeVariable;
        class UndeclaredThrowableException;
        class VMProxy;
        class WildcardType;
      }
    }

    namespace util
    {
      class AbstractCollection;
      class AbstractList;
      class AbstractList$1;
      class AbstractList$2;
      class AbstractList$RandomAccessSubList;
      class AbstractList$SubList;
      class AbstractList$SubList$3;
      class AbstractMap;
      class AbstractMap$1;
      class AbstractMap$1$2;
      class AbstractMap$3;
      class AbstractMap$3$4;
      class AbstractMap$BasicMapEntry;
      class AbstractSequentialList;
      class AbstractSet;
      class ArrayList;
      class Arrays;
      class Arrays$ArrayList;
      class BitSet;
      class Calendar;
      class Collection;
      class Collections;
      class Collections$1;
      class Collections$CopiesList;
      class Collections$EmptyList;
      class Collections$EmptyMap;
      class Collections$EmptySet;
      class Collections$ReverseComparator;
      class Collections$SingletonList;
      class Collections$SingletonMap;
      class Collections$SingletonMap$3;
      class Collections$SingletonSet;
      class Collections$SingletonSet$2;
      class Collections$SynchronizedCollection;
      class Collections$SynchronizedIterator;
      class Collections$SynchronizedList;
      class Collections$SynchronizedListIterator;
      class Collections$SynchronizedMap;
      class Collections$SynchronizedMap$4$SynchronizedMapEntry;
      class Collections$SynchronizedMap$5;
      class Collections$SynchronizedMap$5$6;
      class Collections$SynchronizedRandomAccessList;
      class Collections$SynchronizedSet;
      class Collections$SynchronizedSortedMap;
      class Collections$SynchronizedSortedSet;
      class Collections$UnmodifiableCollection;
      class Collections$UnmodifiableIterator;
      class Collections$UnmodifiableList;
      class Collections$UnmodifiableListIterator;
      class Collections$UnmodifiableMap;
      class Collections$UnmodifiableMap$UnmodifiableEntrySet;
      class Collections$UnmodifiableMap$UnmodifiableEntrySet$7;
      class Collections$UnmodifiableMap$UnmodifiableEntrySet$7$8;
      class Collections$UnmodifiableRandomAccessList;
      class Collections$UnmodifiableSet;
      class Collections$UnmodifiableSortedMap;
      class Collections$UnmodifiableSortedSet;
      class Comparator;
      class ConcurrentModificationException;
      class Currency;
      class Date;
      class Dictionary;
      class EmptyStackException;
      class Enumeration;
      class EventListener;
      class EventListenerProxy;
      class EventObject;
      class GregorianCalendar;
      class HashMap;
      class HashMap$1;
      class HashMap$2;
      class HashMap$3;
      class HashMap$HashEntry;
      class HashMap$HashIterator;
      class HashSet;
      class Hashtable;
      class Hashtable$1;
      class Hashtable$2;
      class Hashtable$3;
      class Hashtable$EntryEnumerator;
      class Hashtable$EntryIterator;
      class Hashtable$HashEntry;
      class Hashtable$KeyEnumerator;
      class Hashtable$KeyIterator;
      class Hashtable$ValueEnumerator;
      class Hashtable$ValueIterator;
      class IdentityHashMap;
      class IdentityHashMap$1;
      class IdentityHashMap$2;
      class IdentityHashMap$3;
      class IdentityHashMap$IdentityEntry;
      class IdentityHashMap$IdentityIterator;
      class InvalidPropertiesFormatException;
      class Iterator;
      class LinkedHashMap;
      class LinkedHashMap$1;
      class LinkedHashMap$LinkedHashEntry;
      class LinkedHashSet;
      class LinkedList;
      class LinkedList$Entry;
      class LinkedList$LinkedListItr;
      class List;
      class ListIterator;
      class ListResourceBundle;
      class Locale;
      class Map;
      class Map$Entry;
      class MissingResourceException;
      class NoSuchElementException;
      class Observable;
      class Observer;
      class Properties;
      class PropertyPermission;
      class PropertyPermissionCollection;
      class PropertyResourceBundle;
      class Random;
      class RandomAccess;
      class ResourceBundle;
      class ResourceBundle$BundleKey;
      class Set;
      class SimpleTimeZone;
      class SortedMap;
      class SortedSet;
      class Stack;
      class StringTokenizer;
      class TimeZone;
      class TimeZone$1;
      class Timer;
      class Timer$Scheduler;
      class Timer$TaskQueue;
      class TimerTask;
      class TooManyListenersException;
      class TreeMap;
      class TreeMap$1;
      class TreeMap$2;
      class TreeMap$3;
      class TreeMap$Node;
      class TreeMap$SubMap;
      class TreeMap$SubMap$4;
      class TreeMap$SubMap$5;
      class TreeMap$SubMap$6;
      class TreeMap$TreeIterator;
      class TreeSet;
      class VMTimeZone;
      class Vector;
      class Vector$1;
      class WeakHashMap;
      class WeakHashMap$1;
      class WeakHashMap$WeakBucket;
      class WeakHashMap$WeakBucket$WeakEntry;
      class WeakHashMap$WeakEntrySet;
      class WeakHashMap$WeakEntrySet$2;
      namespace jar
      {
        class Attributes;
        class Attributes$Name;
        class JarEntry;
        class JarException;
        class JarFile;
        class JarFile$EntryInputStream;
        class JarFile$JarEnumeration;
        class JarInputStream;
        class JarOutputStream;
        class Manifest;
      }

      namespace logging
      {
        class ConsoleHandler;
        class ErrorManager;
        class FileHandler;
        class FileHandler$ostr;
        class Filter;
        class Formatter;
        class Handler;
        class Level;
        class LogManager;
        class LogRecord;
        class Logger;
        class Logger$1;
        class LoggingPermission;
        class MemoryHandler;
        class SimpleFormatter;
        class SocketHandler;
        class StreamHandler;
        class XMLFormatter;
      }

      namespace prefs
      {
        class AbstractPreferences;
        class AbstractPreferences$1;
        class AbstractPreferences$2;
        class BackingStoreException;
        class InvalidPreferencesFormatException;
        class NodeChangeEvent;
        class NodeChangeListener;
        class PreferenceChangeEvent;
        class PreferenceChangeListener;
        class Preferences;
        class Preferences$1;
        class PreferencesFactory;
      }

      namespace regex
      {
        class MatchResult;
        class Matcher;
        class Pattern;
        class PatternSyntaxException;
      }

      namespace zip
      {
        class Adler32;
        class CRC32;
        class CheckedInputStream;
        class CheckedOutputStream;
        class Checksum;
        class DataFormatException;
        class Deflater;
        class DeflaterOutputStream;
        class GZIPInputStream;
        class GZIPOutputStream;
        class Inflater;
        class InflaterInputStream;
        class ZipConstants;
        class ZipEntry;
        class ZipException;
        class ZipFile;
        class ZipFile$1;
        class ZipFile$PartialInputStream;
        class ZipFile$ZipEntryEnumeration;
        class ZipInputStream;
        class ZipOutputStream;
      }
    }
  }
}
  
typedef struct java::lang::Object* jobject;
typedef class java::lang::Class* jclass;
typedef class java::lang::Throwable* jthrowable;
typedef class java::lang::String* jstring;
struct _Jv_JNIEnv;

typedef struct _Jv_Field *jfieldID;
typedef struct _Jv_Method *jmethodID;

extern "C" jobject _Jv_AllocObject (jclass) __attribute__((__malloc__));
extern "C" jobject _Jv_AllocObjectNoFinalizer (jclass) __attribute__((__malloc__));
extern "C" jobject _Jv_AllocObjectNoInitNoFinalizer (jclass) __attribute__((__malloc__));
#ifdef JV_HASH_SYNCHRONIZATION
  extern "C" jobject _Jv_AllocPtrFreeObject (jclass)
  			    __attribute__((__malloc__));
#else
  // Collector still needs to scan sync_info
  static inline jobject _Jv_AllocPtrFreeObject (jclass klass)
  {
    return _Jv_AllocObject(klass);
  }
#endif
extern "C" jboolean _Jv_IsInstanceOf(jobject, jclass);
extern "C" jstring _Jv_AllocString(jsize) __attribute__((__malloc__));
extern "C" jstring _Jv_NewString (const jchar*, jsize)
  __attribute__((__malloc__));
extern jint _Jv_FormatInt (jchar* bufend, jint num);
extern "C" jchar* _Jv_GetStringChars (jstring str);
extern "C" void _Jv_MonitorEnter (jobject);
extern "C" void _Jv_MonitorExit (jobject);
extern "C" jstring _Jv_NewStringUTF (const char *bytes)
  __attribute__((__malloc__));
extern "C" jstring _Jv_NewStringLatin1(const char*, jsize)
  __attribute__((__malloc__));
extern "C" jsize _Jv_GetStringUTFLength (jstring);
extern "C" jsize _Jv_GetStringUTFRegion (jstring, jsize, jsize, char *);
extern "C" jint _Jv_hashUtf8String (const char*, int);

struct _Jv_VMOption
{
  // a VM initialization option
  char* optionString;
  // extra information associated with this option
  void* extraInfo;
};

struct _Jv_VMInitArgs
{
  // for compatibility with JavaVMInitArgs
  jint version;

  // number of VM initialization options
  jint nOptions;

  // an array of VM initialization options
  struct _Jv_VMOption* options;

  // true if the option parser should ignore unrecognized options
  jboolean ignoreUnrecognized;
};

extern jint _Jv_CreateJavaVM (struct _Jv_VMInitArgs*);

void
_Jv_ThreadRun (java::lang::Thread* thread);
jint
_Jv_AttachCurrentThread(java::lang::Thread* thread);
extern "C" java::lang::Thread*
_Jv_AttachCurrentThread(jstring name, java::lang::ThreadGroup* group);
extern "C" java::lang::Thread*
_Jv_AttachCurrentThreadAsDaemon(jstring name, java::lang::ThreadGroup* group);
extern "C" jint _Jv_DetachCurrentThread (void);

extern "C" void _Jv_Throw (jthrowable) __attribute__ ((__noreturn__));
extern "C" void* _Jv_Malloc (jsize) __attribute__((__malloc__));
extern "C" void* _Jv_Realloc (void *, jsize);
extern "C" void _Jv_Free (void*);
extern void (*_Jv_RegisterClassHook) (jclass cl);
extern "C" void _Jv_RegisterClassHookDefault (jclass);

typedef unsigned short _Jv_ushort __attribute__((__mode__(__HI__)));
typedef unsigned int _Jv_uint __attribute__((__mode__(__SI__)));
typedef unsigned int _Jv_ulong __attribute__((__mode__(__DI__)));

class _Jv_Utf8Const
{
  _Jv_ushort hash;
  _Jv_ushort length;	/* In bytes, of data portion, without final '\0'. */
  char data[1];		/* In Utf8 format, with final '\0'. */
 public:
  /** Return same value of java.lang.String's hashCode. */
  jint hash32() { return _Jv_hashUtf8String(data, length); }
  /** Return a hash code that has at least 16 bits of information. */
  _Jv_ushort hash16 () { return hash; }
  /** Return a hash code that has at least 8 bits of information. */
  _Jv_ushort hash8 () { return hash; }
  /** Length in bytes of the UTF8-encoding. */
  _Jv_ushort len () const { return length; }
  /** Pointer to the first byte in the NUL-terminated UTF8-encoding. */
  char* chars() { return data; }
  /** Pointer to the NUL byte that terminated the UTF8-encoding. */
  char* limit() { return data+length; }
  /** Return the first byte in the UTF8-encoding. */
  char first() const { return data[0]; }
  /** Create a (non-interned) java.lang.String from this UTF8Const. */
  jstring toString() { return _Jv_NewStringUTF(data); }
  /** Given an UTF8 string, how many bytes needed for a UTF8Const,
      including struct header, and final NUL.  I.e. what to pas to malloc. */
  static int space_needed (const char *, int len)
  { return sizeof (_Jv_Utf8Const) + len + 1; }
  /** Given an allocated _Jv_Utf8Const, copy / fill it in. */
  void init (const char *s, int len);
  friend jboolean _Jv_equalUtf8Consts (const _Jv_Utf8Const*, const _Jv_Utf8Const *);
  friend jboolean _Jv_equal (_Jv_Utf8Const*, jstring, jint);
  friend jboolean _Jv_equaln (_Jv_Utf8Const*, jstring, jint);
  friend jboolean _Jv_equalUtf8Classnames (const _Jv_Utf8Const*,
                                             const _Jv_Utf8Const*);
  friend jboolean _Jv_isPrimitiveOrDerived (const _Jv_Utf8Const*);
  friend _Jv_Utf8Const *_Jv_makeUtf8Const (const char*, int);
  friend _Jv_Utf8Const *_Jv_makeUtf8Const (jstring);
  friend jstring _Jv_NewStringUtf8Const (_Jv_Utf8Const*);
};


#endif /* __JAVAPRIMS_H__ */
