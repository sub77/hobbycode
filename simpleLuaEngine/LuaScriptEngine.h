#ifndef _LuaScriptEngine_h_
#define _LuaScriptEngine_h_

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern "C" {
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

#include "Singleton.h"


class LuaScriptEngine : public Singleton<LuaScriptEngine> 
{
	public:
	/**
	 * Constructor
	 */
	LuaScriptEngine();
	/**
	  * Destructor
	*/
	~LuaScriptEngine();
	/**
	  * This method loads up and configures our Lua VM subsystem.
	*/
	bool loadEngine();
	/**
	  * This method just unloads and frees any allocated input devices
	*/
	void unloadEngine();
	/**
	  * Run the given script.
	*/
	int runFile(const char *fileName);
	int runString(const char *strLuaInput);
	int loadFile(const char *fileName);
	int loadBuffer(const char *buff);
	void report();
	
	protected:
    /** our LUA VM handle */
    lua_State* m_pLuaVM;
};

typedef Singleton<LuaScriptEngine> LuaScriptEngineStonT;

#endif
