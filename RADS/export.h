#ifdef IMPORT_RADS
#define DLLExport __declspec(dllimport)
#else 
#define DLLExport __declspec(dllexport)
#endif