// dllmain.h : Declaration of module class.

class CATLProjectModule : public ATL::CAtlDllModuleT< CATLProjectModule >
{
public :
	DECLARE_LIBID(LIBID_ATLProjectLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT, "{ae193b62-7f59-4e25-bbac-28ed9b0564a5}")
};

extern class CATLProjectModule _AtlModule;
