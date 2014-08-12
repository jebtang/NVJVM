// This file is an automatically generated file, please do not edit this file, modify the WrapperGenerator.java file instead !

package sun.awt.X11;

import sun.misc.*;

import sun.util.logging.PlatformLogger;
public class XExtCodes extends XWrapperBase { 
	private Unsafe unsafe = XlibWrapper.unsafe; 
	private final boolean should_free_memory;
	public static int getSize() { return 16; }
	public int getDataSize() { return getSize(); }

	long pData;

	public long getPData() { return pData; }


	public XExtCodes(long addr) {
		log.finest("Creating");
		pData=addr;
		should_free_memory = false;
	}


	public XExtCodes() {
		log.finest("Creating");
		pData = unsafe.allocateMemory(getSize());
		should_free_memory = true;
	}


	public void dispose() {
		log.finest("Disposing");
		if (should_free_memory) {
			log.finest("freeing memory");
			unsafe.freeMemory(pData); 
	}
		}
	public int get_extension() { log.finest("");return (Native.getInt(pData+0)); }
	public void set_extension(int v) { log.finest(""); Native.putInt(pData+0, v); }
	public int get_major_opcode() { log.finest("");return (Native.getInt(pData+4)); }
	public void set_major_opcode(int v) { log.finest(""); Native.putInt(pData+4, v); }
	public int get_first_event() { log.finest("");return (Native.getInt(pData+8)); }
	public void set_first_event(int v) { log.finest(""); Native.putInt(pData+8, v); }
	public int get_first_error() { log.finest("");return (Native.getInt(pData+12)); }
	public void set_first_error(int v) { log.finest(""); Native.putInt(pData+12, v); }


	String getName() {
		return "XExtCodes"; 
	}


	String getFieldsAsString() {
		String ret="";

		ret += ""+"extension = " + get_extension() +", ";
		ret += ""+"major_opcode = " + get_major_opcode() +", ";
		ret += ""+"first_event = " + get_first_event() +", ";
		ret += ""+"first_error = " + get_first_error() +", ";
		return ret;
	}


}


