#include <Global.hpp>


START_ATF_NAMESPACE
    namespace Global
    {
        int64_t ARGBToJpegFile(char* arg_0, uint8_t* arg_1, unsigned int arg_2, unsigned int arg_3, unsigned int arg_4, int arg_5, int arg_6)
        {
            using org_ptr = int64_t (WINAPIV*)(char*, uint8_t*, unsigned int, unsigned int, unsigned int, int, int);
            return (org_ptr(0x140510bb0L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6);
        };
        int AddEnvVariable(char* lpName, char* lpValue, int nValueLen)
        {
            using org_ptr = int (WINAPIV*)(char*, char*, int);
            return (org_ptr(0x140480970L))(lpName, lpValue, nValueLen);
        };
        void AdjustIndependenceR3M(struct _R3MATERIAL* arg_0, int32_t arg_1, int32_t arg_2)
        {
            using org_ptr = void (WINAPIV*)(struct _R3MATERIAL*, int32_t, int32_t);
            (org_ptr(0x140504440L))(arg_0, arg_1, arg_2);
        };
        void AfterRenderOneLayer(struct CVertexBuffer* arg_0, struct _BSP_MAT_GROUP* arg_1)
        {
            using org_ptr = void (WINAPIV*)(struct CVertexBuffer*, struct _BSP_MAT_GROUP*);
            (org_ptr(0x1404efbe0L))(arg_0, arg_1);
        };
        void AfterRenderSetting(int arg_0, struct CVertexBuffer* arg_1, struct _BSP_MAT_GROUP* arg_2)
        {
            using org_ptr = void (WINAPIV*)(int, struct CVertexBuffer*, struct _BSP_MAT_GROUP*);
            (org_ptr(0x1404f0140L))(arg_0, arg_1, arg_2);
        };
        int64_t AfxAssertFailedLine(char* arg_0, int arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(char*, int);
            return (org_ptr(0x1404dc20aL))(arg_0, arg_1);
        };
        int AfxCrtErrorCheck(int error)
        {
            using org_ptr = int (WINAPIV*)(int);
            return (org_ptr(0x1400260c0L))(error);
        };
        void AfxEnableControlContainer(struct COccManager* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct COccManager*);
            (org_ptr(0x1404dc02aL))(arg_0);
        };
        HINSTANCE AfxGetInstanceHandle()
        {
            using org_ptr = HINSTANCE (WINAPIV*)();
            return (org_ptr(0x1404dbd9cL))();
        };
        struct AFX_MODULE_STATE* AfxGetModuleState()
        {
            using org_ptr = struct AFX_MODULE_STATE* (WINAPIV*)();
            return (org_ptr(0x140676f90L))();
        };
        int AfxInitialize(int bDLL, unsigned int dwVersion)
        {
            using org_ptr = int (WINAPIV*)(int, unsigned int);
            return (org_ptr(0x140676be0L))(bDLL, dwVersion);
        };
        void AfxThrowInvalidArgException()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404dbb6eL))();
        };
        void AfxThrowMemoryException()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404dbb68L))();
        };
        void AfxThrowOleException(int32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(int32_t);
            (org_ptr(0x1404dbb62L))(arg_0);
        };
        int64_t AfxWinMain(HINSTANCE arg_0, HINSTANCE arg_1, char* arg_2, int arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(HINSTANCE, HINSTANCE, char*, int);
            return (org_ptr(0x140676f8aL))(arg_0, arg_1, arg_2, arg_3);
        };
        wchar_t* AtlA2WHelper(wchar_t* lpw, char* lpa, int nChars, unsigned int acp)
        {
            using org_ptr = wchar_t* (WINAPIV*)(wchar_t*, char*, int, unsigned int);
            return (org_ptr(0x140025ec0L))(lpw, lpa, nChars, acp);
        };
        char* AtlW2AHelper(char* lpa, wchar_t* lpw, int nChars, unsigned int acp)
        {
            using org_ptr = char* (WINAPIV*)(char*, wchar_t*, int, unsigned int);
            return (org_ptr(0x140024da0L))(lpa, lpw, nChars, acp);
        };
        void AtoH(char* src, char* dest, int destlen)
        {
            using org_ptr = void (WINAPIV*)(char*, char*, int);
            (org_ptr(0x14047fd80L))(src, dest, destlen);
        };
        bool AuthorityFilter(struct CHEAT_COMMAND* pCmd, struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CHEAT_COMMAND*, struct CPlayer*);
            return (org_ptr(0x14028f380L))(pCmd, pOne);
        };
        int64_t BGRFromRGB(uint8_t* arg_0, unsigned int arg_1, unsigned int arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(uint8_t*, unsigned int, unsigned int);
            return (org_ptr(0x140510c20L))(arg_0, arg_1, arg_2);
        };
        void BlendOff()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ee4f0L))();
        };
        void BlendOn(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x1404ee530L))(arg_0);
        };
        void BlurFilterShader(uint32_t arg_0, struct CTextureRender* arg_1, struct CTextureRender* arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, struct CTextureRender*, struct CTextureRender*);
            (org_ptr(0x140516ba0L))(arg_0, arg_1, arg_2);
        };
        void BlurFilterSprite(struct CTextureRender* _this, uint32_t arg_0, void* arg_1)
        {
            using org_ptr = void (WINAPIV*)(struct CTextureRender*, uint32_t, void*);
            (org_ptr(0x140515290L))(_this, arg_0, arg_1);
        };
        int32_t BlurShaderVSPS(uint32_t arg_0, struct CTextureRender* arg_1, struct CTextureRender* arg_2)
        {
            using org_ptr = int32_t (WINAPIV*)(uint32_t, struct CTextureRender*, struct CTextureRender*);
            return (org_ptr(0x140516390L))(arg_0, arg_1, arg_2);
        };
        char BtoH(char ch)
        {
            using org_ptr = char (WINAPIV*)(char);
            return (org_ptr(0x14047fe60L))(ch);
        };
        void ByteSortForShort(uint32_t arg_0, uint32_t* arg_1, int16_t* arg_2, uint32_t* arg_3, int16_t* arg_4)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, uint32_t*, int16_t*, uint32_t*, int16_t*);
            (org_ptr(0x14052af30L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        void CN_CalculateSunAndFieldColor(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x140505220L))(arg_0);
        };
        float CN_GetAccselateTime()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x140504f20L))();
        };
        struct Atmosphere* CN_GetAtmosphere()
        {
            using org_ptr = struct Atmosphere* (WINAPIV*)();
            return (org_ptr(0x140504ea0L))();
        };
        void CN_GetDayTime(uint32_t* arg_0, uint32_t* arg_1, uint32_t* arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t*, uint32_t*, uint32_t*);
            (org_ptr(0x140504fc0L))(arg_0, arg_1, arg_2);
        };
        float CN_GetDayTime()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x140505040L))();
        };
        uint32_t CN_GetFieldColor()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x140505390L))();
        };
        uint32_t CN_GetFogColor(float* arg_0)
        {
            using org_ptr = uint32_t (WINAPIV*)(float*);
            return (org_ptr(0x1405063b0L))(arg_0);
        };
        void CN_GetRealDayTime(uint32_t* arg_0, uint32_t* arg_1, uint32_t* arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t*, uint32_t*, uint32_t*);
            (org_ptr(0x140505120L))(arg_0, arg_1, arg_2);
        };
        float CN_GetRealDayTime()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x1405051a0L))();
        };
        Sky* CN_GetSky()
        {
            using org_ptr = Sky* (WINAPIV*)();
            return (org_ptr(0x140504e80L))();
        };
        struct Sun* CN_GetSun()
        {
            using org_ptr = struct Sun* (WINAPIV*)();
            return (org_ptr(0x140504e90L))();
        };
        uint32_t CN_GetSunColor()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x1405053a0L))();
        };
        void CN_GetSunDirection(float* arg_0)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x1405051f0L))(arg_0);
        };
        float CN_GetWeather()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x140504e70L))();
        };
        void CN_InvalidateNature()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140504ed0L))();
        };
        int64_t CN_IsEnableSky()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x140504f00L))();
        };
        uint32_t CN_MixDayColor(uint32_t arg_0)
        {
            using org_ptr = uint32_t (WINAPIV*)(uint32_t);
            return (org_ptr(0x140506930L))(arg_0);
        };
        void CN_NatureFrameMove()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140505c90L))();
        };
        void CN_RenderSky()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1405053b0L))();
        };
        void CN_RestoreNature()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140504eb0L))();
        };
        void CN_SetAccselateTime(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x140504f10L))(arg_0);
        };
        void CN_SetDayTime(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x140505050L))(arg_0);
        };
        void CN_SetDayTime(uint32_t arg_0, uint32_t arg_1, uint32_t arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, uint32_t, uint32_t);
            (org_ptr(0x140504f30L))(arg_0, arg_1, arg_2);
        };
        void CN_SetEnableSky(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x140504ef0L))(arg_0);
        };
        void CN_SetRealDayTime(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x1405051b0L))(arg_0);
        };
        void CN_SetRealDayTime(uint32_t arg_0, uint32_t arg_1, uint32_t arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, uint32_t, uint32_t);
            (org_ptr(0x1405050a0L))(arg_0, arg_1, arg_2);
        };
        void CN_SetWeather(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x140504e60L))(arg_0);
        };
        void CN_SkyVertexShaderConstants()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1405055a0L))();
        };
        float CalcBi_n(int arg_0, int arg_1, double arg_2)
        {
            using org_ptr = float (WINAPIV*)(int, int, double);
            return (org_ptr(0x1404ebd60L))(arg_0, arg_1, arg_2);
        };
        unsigned int* CalcCodeKey(unsigned int* pdwCode)
        {
            using org_ptr = unsigned int* (WINAPIV*)(unsigned int*);
            return (org_ptr(0x14047b360L))(pdwCode);
        };
        void CalcCubicCurve(float** arg_0, int arg_1, float* arg_2)
        {
            using org_ptr = void (WINAPIV*)(float**, int, float*);
            (org_ptr(0x1404eb710L))(arg_0, arg_1, arg_2);
        };
        float CalcEvalCubicCurve(float* arg_0, float arg_1)
        {
            using org_ptr = float (WINAPIV*)(float*, float);
            return (org_ptr(0x1404ebd40L))(arg_0, arg_1);
        };
        int CalcFileSize(char* pszFileName)
        {
            using org_ptr = int (WINAPIV*)(char*);
            return (org_ptr(0x14043b420L))(pszFileName);
        };
        int CalcMastery(int nMasteryCode, int nMasteryIndex, unsigned int dwMasteryCum, int nRaceCode)
        {
            using org_ptr = int (WINAPIV*)(int, int, unsigned int, int);
            return (org_ptr(0x14003eb80L))(nMasteryCode, nMasteryIndex, dwMasteryCum, nRaceCode);
        };
        int CalcRoundUp(float fVal)
        {
            using org_ptr = int (WINAPIV*)(float);
            return (org_ptr(0x14043af30L))(fVal);
        };
        uint32_t CalcSnakeVertexList(struct _D3DR3VERTEX_TEX1* arg_0, float** arg_1, uint32_t arg_2, float arg_3, uint32_t arg_4)
        {
            using org_ptr = uint32_t (WINAPIV*)(struct _D3DR3VERTEX_TEX1*, float**, uint32_t, float, uint32_t);
            return (org_ptr(0x140518840L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        int CalcSquare(int nLoot, int nMulti)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14043afa0L))(nLoot, nMulti);
        };
        void CalculateMoveCamera(_MOVE_CAMERA* arg_0)
        {
            using org_ptr = void (WINAPIV*)(_MOVE_CAMERA*);
            (org_ptr(0x1405297c0L))(arg_0);
        };
        bool CanAddMoneyForMaxLimGold(uint64_t ui64AddGold, uint64_t ui64HasGold)
        {
            using org_ptr = bool (WINAPIV*)(uint64_t, uint64_t);
            return (org_ptr(0x14003f190L))(ui64AddGold, ui64HasGold);
        };
        bool CanAddMoneyForMaxLimMoney(uint64_t ui64AddMoney, uint64_t ui64HasMoney)
        {
            using org_ptr = bool (WINAPIV*)(uint64_t, uint64_t);
            return (org_ptr(0x14003f110L))(ui64AddMoney, ui64HasMoney);
        };
        int CcrFgCallback(int lCallbackCode, void* hUserContext, void* pCallbackParameter, int nParameterSize, void* pReservedParameter)
        {
            using org_ptr = int (WINAPIV*)(int, void*, void*, int, void*);
            return (org_ptr(0x1402c8470L))(lCallbackCode, hUserContext, pCallbackParameter, nParameterSize, pReservedParameter);
        };
        int64_t CheckEdge(float* arg_0, float* arg_1, float* arg_2, float* arg_3, float arg_4)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float*, float*, float*, float);
            return (org_ptr(0x1404e3010L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        int64_t CheckEdgeEpsilon(float* arg_0, float* arg_1, float* arg_2, float* arg_3, float arg_4)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float*, float*, float*, float);
            return (org_ptr(0x1404e30c0L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        bool CheckSameItemFromString_CodeIndex(char* psItemCode, char byTableCode, uint16_t wIndex)
        {
            using org_ptr = bool (WINAPIV*)(char*, char, uint16_t);
            return (org_ptr(0x1400369b0L))(psItemCode, byTableCode, wIndex);
        };
        void Clean2DRectangleZbuffer(int32_t arg_0, int32_t arg_1, int32_t arg_2, int32_t arg_3)
        {
            using org_ptr = void (WINAPIV*)(int32_t, int32_t, int32_t, int32_t);
            (org_ptr(0x140509820L))(arg_0, arg_1, arg_2, arg_3);
        };
        void CleanViewPortStack()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050b310L))();
        };
        void CleanZbuffer(float arg_0, float arg_1, float arg_2, float arg_3)
        {
            using org_ptr = void (WINAPIV*)(float, float, float, float);
            (org_ptr(0x140509040L))(arg_0, arg_1, arg_2, arg_3);
        };
        void ClearDynamicLight()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1405072b0L))();
        };
        unsigned int CombineExCheckKeyGen(unsigned int dwtimeGetTime, unsigned int dwCombineExcelRecordIndex)
        {
            using org_ptr = unsigned int (WINAPIV*)(unsigned int, unsigned int);
            return (org_ptr(0x14003f210L))(dwtimeGetTime, dwCombineExcelRecordIndex);
        };
        int CompareGradeAndPvpPoint(void* arg1, void* arg2)
        {
            using org_ptr = int (WINAPIV*)(void*, void*);
            return (org_ptr(0x140258a80L))(arg1, arg2);
        };
        void ConvAniObject(int arg_0, uint8_t* arg_1, _READ_ANI_OBJECT* arg_2, struct _ANI_OBJECT* arg_3)
        {
            using org_ptr = void (WINAPIV*)(int, uint8_t*, _READ_ANI_OBJECT*, struct _ANI_OBJECT*);
            (org_ptr(0x140520180L))(arg_0, arg_1, arg_2, arg_3);
        };
        struct _STORAGE_LIST::_db_con* ConvertCodeIntoItem(char* pszItemCode, char byOverlapNum, char bySocketConfig)
        {
            using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(char*, char, char);
            return (org_ptr(0x140166ea0L))(pszItemCode, byOverlapNum, bySocketConfig);
        };
        int ConvertErrorCode_Jap(char state)
        {
            using org_ptr = int (WINAPIV*)(char);
            return (org_ptr(0x1402f0e00L))(state);
        };
        uint32_t ConvertHexa(char* arg_0)
        {
            using org_ptr = uint32_t (WINAPIV*)(char*);
            return (org_ptr(0x1404e9560L))(arg_0);
        };
        float CosineInterpolate(float arg_0, float arg_1, float arg_2)
        {
            using org_ptr = float (WINAPIV*)(float, float, float);
            return (org_ptr(0x140523490L))(arg_0, arg_1, arg_2);
        };
        unsigned int CountOfImports(struct _IMAGE_THUNK_DATA64* pitdBase)
        {
            using org_ptr = unsigned int (WINAPIV*)(struct _IMAGE_THUNK_DATA64*);
            return (org_ptr(0x14067647cL))(pitdBase);
        };
        void CreateAndWriteUVOffsets(int arg_0, int arg_1)
        {
            using org_ptr = void (WINAPIV*)(int, int);
            (org_ptr(0x140516720L))(arg_0, arg_1);
        };
        bool CreateAnimus(struct CMapData* pMap, uint16_t wLayer, float* fPos, char byClass, int nHP, int nFP, unsigned int dwExp, struct CPlayer* pMaster)
        {
            using org_ptr = bool (WINAPIV*)(struct CMapData*, uint16_t, float*, char, int, int, unsigned int, struct CPlayer*);
            return (org_ptr(0x14012ade0L))(pMap, wLayer, fPos, byClass, nHP, nFP, dwExp, pMaster);
        };
        void CreateBlurVBuffer(uint32_t arg_0, uint32_t arg_1)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, uint32_t);
            (org_ptr(0x1405097f0L))(arg_0, arg_1);
        };
        struct CGuardTower* CreateGuardTower(struct CMapData* pMap, uint16_t wLayer, float* fPos, struct _STORAGE_LIST::_db_con* pItem, struct CPlayer* pMaster, char byRaceCode, bool bQuick)
        {
            using org_ptr = struct CGuardTower* (WINAPIV*)(struct CMapData*, uint16_t, float*, struct _STORAGE_LIST::_db_con*, struct CPlayer*, char, bool);
            return (org_ptr(0x1401313f0L))(pMap, wLayer, fPos, pItem, pMaster, byRaceCode, bQuick);
        };
        struct CItemBox* CreateItemBox(struct _STORAGE_LIST::_db_con* pItem, struct CPlayer* pOwner, unsigned int dwPartyBossSerial, bool bPartyShare, struct CCharacter* pThrower, char byCreateCode, struct CMapData* pMap, uint16_t wLayerIndex, float* pStdPos, bool bHide)
        {
            using org_ptr = struct CItemBox* (WINAPIV*)(struct _STORAGE_LIST::_db_con*, struct CPlayer*, unsigned int, bool, struct CCharacter*, char, struct CMapData*, uint16_t, float*, bool);
            return (org_ptr(0x140166ad0L))(pItem, pOwner, dwPartyBossSerial, bPartyShare, pThrower, byCreateCode, pMap, wLayerIndex, pStdPos, bHide);
        };
        struct CItemBox* CreateItemBox(struct _STORAGE_LIST::_db_con* pItem, char byCreateCode, struct CMapData* pMap, uint16_t wLayerIndex, float* pStdPos, bool bHide, struct CPlayer* pAttacker, int bHolyScanner, char byEventItemLootAuth)
        {
            using org_ptr = struct CItemBox* (WINAPIV*)(struct _STORAGE_LIST::_db_con*, char, struct CMapData*, uint16_t, float*, bool, struct CPlayer*, int, char);
            return (org_ptr(0x140166cb0L))(pItem, byCreateCode, pMap, wLayerIndex, pStdPos, bHide, pAttacker, bHolyScanner, byEventItemLootAuth);
        };
        struct CMonster* CreateRepMonster(struct CMapData* pMap, uint16_t wLayer, float* fPos, char* pszMonsterCode, struct CMonster* pParent, bool bRobExp, bool bRewardExp, bool bDungeon, bool bWithoutFail, bool bApplyRopExpField)
        {
            using org_ptr = struct CMonster* (WINAPIV*)(struct CMapData*, uint16_t, float*, char*, struct CMonster*, bool, bool, bool, bool, bool);
            return (org_ptr(0x140148d90L))(pMap, wLayer, fPos, pszMonsterCode, pParent, bRobExp, bRewardExp, bDungeon, bWithoutFail, bApplyRopExpField);
        };
        struct CMonster* CreateRespawnMonster(struct CMapData* pMap, uint16_t wLayer, int nMonsterIndex, struct _mon_active* pActiveRec, struct _dummy_position* pDumPosition, bool bRobExp, bool bRewardExp, bool bDungeon, bool bWithoutFail, bool bApplyRopExpField)
        {
            using org_ptr = struct CMonster* (WINAPIV*)(struct CMapData*, uint16_t, int, struct _mon_active*, struct _dummy_position*, bool, bool, bool, bool, bool);
            return (org_ptr(0x140148b90L))(pMap, wLayer, nMonsterIndex, pActiveRec, pDumPosition, bRobExp, bRewardExp, bDungeon, bWithoutFail, bApplyRopExpField);
        };
        struct CGuardTower* CreateSystemTower(struct CMapData* pMap, uint16_t wLayer, float* fPos, int nTowerIndex, char byRaceCode, int nIniIndex)
        {
            using org_ptr = struct CGuardTower* (WINAPIV*)(struct CMapData*, uint16_t, float*, int, char, int);
            return (org_ptr(0x140131590L))(pMap, wLayer, fPos, nTowerIndex, byRaceCode, nIniIndex);
        };
        struct CTrap* CreateTrap(struct CMapData* pMap, uint16_t wLayer, float* fPos, struct CPlayer* pMaster, int nTrapItemIndex)
        {
            using org_ptr = struct CTrap* (WINAPIV*)(struct CMapData*, uint16_t, float*, struct CPlayer*, int);
            return (org_ptr(0x1401402c0L))(pMap, wLayer, fPos, pMaster, nTrapItemIndex);
        };
        void CrossVector(float* arg_0, float* arg_1, float* arg_2)
        {
            using org_ptr = void (WINAPIV*)(float*, float*, float*);
            (org_ptr(0x1404ea070L))(arg_0, arg_1, arg_2);
        };
        float CubicInterpolate(float arg_0, float arg_1, float arg_2, float arg_3, float arg_4)
        {
            using org_ptr = float (WINAPIV*)(float, float, float, float, float);
            return (org_ptr(0x1405234f0L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        void DDX_Control(struct CDataExchange* arg_0, int arg_1, struct CWnd* arg_2)
        {
            using org_ptr = void (WINAPIV*)(struct CDataExchange*, int, struct CWnd*);
            (org_ptr(0x1404dbd84L))(arg_0, arg_1, arg_2);
        };
        void DDX_Text(struct CDataExchange* arg_0, int arg_1, int* arg_2)
        {
            using org_ptr = void (WINAPIV*)(struct CDataExchange*, int, int*);
            (org_ptr(0x1404dc35aL))(arg_0, arg_1, arg_2);
        };
        void DDX_Text(struct CDataExchange* arg_0, int arg_1, unsigned int* arg_2)
        {
            using org_ptr = void (WINAPIV*)(struct CDataExchange*, int, unsigned int*);
            (org_ptr(0x1404dc3b4L))(arg_0, arg_1, arg_2);
        };
        bool DE_AllContDamageForceRemove(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017db20L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_AllContHelpForceRemove(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dac0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_AllContHelpSkillRemove(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017da60L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_AttHPtoDstFP(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017d6a0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_BattleMode_RecallCommonPlayer(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017ed80L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_ContDamageTimeInc(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017d700L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_ContHelpTimeInc(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017d880L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_ConvertMonsterTarget(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dc40L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_ConvertTargetDest(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e1c0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_DamStun(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017df60L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_DetectTrap(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017ddc0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_FPDec(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017df00L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_HPInc(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017d7c0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_IncHPCircleParty(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dde0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_IncreaseDP(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e160L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_LateContDamageRemove(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017da00L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_LateContHelpForceRemove(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017d9a0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_LateContHelpSkillRemove(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017d940L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_LayTrap(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dda0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_MakeGuardTower(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dd80L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_MakePortalReturnBindPositionPartyMember(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e090L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_MakeZeroAnimusRecallTimeOnce(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e280L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_OthersContHelpSFRemove(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017db80L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_OverHealing(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017d8e0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_AllContHelpSkillRemove_Once(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e700L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Buf_Extend(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017f2c0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Chaos_Dec_Time(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e8d0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Chaos_Inc_Time(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e7f0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_CharReName(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017ee00L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Class_Refine(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e960L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Cont_Damage_Remove(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017f750L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_DecHalfSFContDam(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e680L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Exp_Increase_Absolute(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017f060L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Exp_Increase_Percentage(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017ef70L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_FP_In_Value(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e4a0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Gold_Point(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017f660L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_HFP_Full_Recover(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017f700L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_HP_In_Value(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e3c0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Race_Debuff_Clear_One(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017f3e0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Race_Debuff_Clear_Two(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017f520L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_RemoveAfterEffect(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017ea70L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_RemoveAllContinousEffect(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e770L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Revival_Die_Position(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017f1a0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_SP_In_Value(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e590L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Potion_Trunk_Extend(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017f350L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Quick_Revival_Die_Position(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017f230L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_RecallCommonPlayer(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017ebc0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_RecallPartyMember(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e340L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Recall_After_Stone(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017eca0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_RecoverAllReturnStateAnimusHPFull(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e220L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Recovery(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017d760L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_ReleaseMonsterTarget(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dd20L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_RemoveAllContHelp(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e030L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_ReturnBindPosition(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e100L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_SPDec(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dea0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_STInc(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017d820L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_SelfDestruction(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017e2e0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_SkillContHelpTimeInc(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dbe0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Stun(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017de40L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_TeleportCommonPlayer(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017ec40L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_Teleport_After_Stone(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017ed20L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_TransDestHP(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dfc0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_TransMonsterHP(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dca0L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DE_ViewWeakPoint(struct CCharacter* pActChar, struct CCharacter* pTargetChar, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, float, char*);
            return (org_ptr(0x14017dd00L))(pActChar, pTargetChar, fEffectValue, byRet);
        };
        bool DTradeEqualPerson(struct CPlayer* lp_pOne, struct CPlayer** lpp_pDst)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CPlayer**);
            return (org_ptr(0x1400f5d30L))(lp_pOne, lpp_pDst);
        };
        void DXUtil_ConvertAnsiStringToGeneric(char* tstrDestination, char* strSource, int cchDestChar)
        {
            using org_ptr = void (WINAPIV*)(char*, char*, int);
            (org_ptr(0x140437130L))(tstrDestination, strSource, cchDestChar);
        };
        void DXUtil_ConvertAnsiStringToWide(wchar_t* wstrDestination, char* strSource, int cchDestChar)
        {
            using org_ptr = void (WINAPIV*)(wchar_t*, char*, int);
            (org_ptr(0x140436ee0L))(wstrDestination, strSource, cchDestChar);
        };
        void DXUtil_ConvertGenericStringToAnsi(char* strDestination, char* tstrSource, int cchDestChar)
        {
            using org_ptr = void (WINAPIV*)(char*, char*, int);
            (org_ptr(0x140437050L))(strDestination, tstrSource, cchDestChar);
        };
        void DXUtil_ConvertGenericStringToWide(wchar_t* wstrDestination, char* tstrSource, int cchDestChar)
        {
            using org_ptr = void (WINAPIV*)(wchar_t*, char*, int);
            (org_ptr(0x1404370d0L))(wstrDestination, tstrSource, cchDestChar);
        };
        void DXUtil_ConvertWideStringToAnsi(char* strDestination, wchar_t* wstrSource, int cchDestChar)
        {
            using org_ptr = void (WINAPIV*)(char*, wchar_t*, int);
            (org_ptr(0x140436f90L))(strDestination, wstrSource, cchDestChar);
        };
        void DXUtil_ConvertWideStringToGeneric(char* tstrDestination, wchar_t* wstrSource, int cchDestChar)
        {
            using org_ptr = void (WINAPIV*)(char*, wchar_t*, int);
            (org_ptr(0x1404371b0L))(tstrDestination, wstrSource, cchDestChar);
        };
        HRESULT DXUtil_FindMediaFile(char* strPath, char* strFilename)
        {
            using org_ptr = HRESULT (WINAPIV*)(char*, char*);
            return (org_ptr(0x1404364b0L))(strPath, strFilename);
        };
        char* DXUtil_GetDXSDKMediaPath()
        {
            using org_ptr = char* (WINAPIV*)();
            return (org_ptr(0x1404363b0L))();
        };
        HRESULT DXUtil_ReadBoolRegKey(struct HKEY__* hKey, char* strRegName, int* pbValue, int bDefault)
        {
            using org_ptr = HRESULT (WINAPIV*)(struct HKEY__*, char*, int*, int);
            return (org_ptr(0x140436830L))(hKey, strRegName, pbValue, bDefault);
        };
        HRESULT DXUtil_ReadGuidRegKey(struct HKEY__* hKey, char* strRegName, struct _GUID* pGuidValue, struct _GUID* guidDefault)
        {
            using org_ptr = HRESULT (WINAPIV*)(struct HKEY__*, char*, struct _GUID*, struct _GUID*);
            return (org_ptr(0x140436960L))(hKey, strRegName, pGuidValue, guidDefault);
        };
        HRESULT DXUtil_ReadIntRegKey(struct HKEY__* hKey, char* strRegName, unsigned int* pdwValue, unsigned int dwDefault)
        {
            using org_ptr = HRESULT (WINAPIV*)(struct HKEY__*, char*, unsigned int*, unsigned int);
            return (org_ptr(0x140436700L))(hKey, strRegName, pdwValue, dwDefault);
        };
        HRESULT DXUtil_ReadStringRegKey(struct HKEY__* hKey, char* strRegName, char* strValue, unsigned int dwLength, char* strDefault)
        {
            using org_ptr = HRESULT (WINAPIV*)(struct HKEY__*, char*, char*, unsigned int, char*);
            return (org_ptr(0x1404365e0L))(hKey, strRegName, strValue, dwLength, strDefault);
        };
        float DXUtil_Timer(TIMER_COMMAND command)
        {
            using org_ptr = float (WINAPIV*)(TIMER_COMMAND);
            return (org_ptr(0x140436ac0L))(command);
        };
        void DXUtil_Trace(char* strMsg)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x140437310L))(strMsg);
        };
        HRESULT DXUtil_WriteBoolRegKey(struct HKEY__* hKey, char* strRegName, int bValue)
        {
            using org_ptr = HRESULT (WINAPIV*)(struct HKEY__*, char*, int);
            return (org_ptr(0x1404368e0L))(hKey, strRegName, bValue);
        };
        HRESULT DXUtil_WriteGuidRegKey(struct HKEY__* hKey, char* strRegName, struct _GUID guidValue)
        {
            using org_ptr = HRESULT (WINAPIV*)(struct HKEY__*, char*, struct _GUID);
            return (org_ptr(0x140436a30L))(hKey, strRegName, guidValue);
        };
        HRESULT DXUtil_WriteIntRegKey(struct HKEY__* hKey, char* strRegName, unsigned int dwValue)
        {
            using org_ptr = HRESULT (WINAPIV*)(struct HKEY__*, char*, unsigned int);
            return (org_ptr(0x1404367b0L))(hKey, strRegName, dwValue);
        };
        HRESULT DXUtil_WriteStringRegKey(struct HKEY__* hKey, char* strRegName, char* strValue)
        {
            using org_ptr = HRESULT (WINAPIV*)(struct HKEY__*, char*, char*);
            return (org_ptr(0x140436680L))(hKey, strRegName, strValue);
        };
        void DeCryptString(char* pStr, int nSize, char byPlus, uint16_t wCryptKey)
        {
            using org_ptr = void (WINAPIV*)(char*, int, char, uint16_t);
            (org_ptr(0x14043bcf0L))(pStr, nSize, byPlus, wCryptKey);
        };
        void DeCrypt_Move(char* pStr, int nSize, char byPlus, uint16_t wCryptKey)
        {
            using org_ptr = void (WINAPIV*)(char*, int, char, uint16_t);
            (org_ptr(0x14043be30L))(pStr, nSize, byPlus, wCryptKey);
        };
        void DebugDrawIndexedPrimitiveTLTex1(int arg_0, int arg_1, uint16_t* arg_2, void* arg_3)
        {
            using org_ptr = void (WINAPIV*)(int, int, uint16_t*, void*);
            (org_ptr(0x14051b440L))(arg_0, arg_1, arg_2, arg_3);
        };
        void DebugDrawIndexedPrimitiveUPTex1(int arg_0, int arg_1, uint16_t* arg_2, void* arg_3)
        {
            using org_ptr = void (WINAPIV*)(int, int, uint16_t*, void*);
            (org_ptr(0x14051b4c0L))(arg_0, arg_1, arg_2, arg_3);
        };
        void DebugPushEntityNum(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x14051b550L))(arg_0);
        };
        void DebugPushMagicNum(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x14051b540L))(arg_0);
        };
        void DetailTextureOffStage2()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ee0c0L))();
        };
        void DetailTextureOnStage2(struct _R3MATERIAL* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct _R3MATERIAL*);
            (org_ptr(0x1404edfa0L))(arg_0);
        };
        void Dfree(void* arg_0)
        {
            using org_ptr = void (WINAPIV*)(void*);
            (org_ptr(0x1404ec410L))(arg_0);
        };
        void DisplayANSICodePageStrOutputDebug()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14043d070L))();
        };
        char* DisplayItemUpgInfo(int nTableCode, unsigned int dwLvBit)
        {
            using org_ptr = char* (WINAPIV*)(int, unsigned int);
            return (org_ptr(0x14003e4d0L))(nTableCode, dwLvBit);
        };
        void* Dmalloc(int arg_0)
        {
            using org_ptr = void* (WINAPIV*)(int);
            return (org_ptr(0x1404ec3d0L))(arg_0);
        };
        float DotProduct(float* arg_0, float* arg_1)
        {
            using org_ptr = float (WINAPIV*)(float*, float*);
            return (org_ptr(0x1404ea040L))(arg_0, arg_1);
        };
        void EnCryptString(char* pStr, int nSize, char byPlus, uint16_t wCryptKey)
        {
            using org_ptr = void (WINAPIV*)(char*, int, char, uint16_t);
            (org_ptr(0x14043bc50L))(pStr, nSize, byPlus, wCryptKey);
        };
        void EnCrypt_Move(char* pStr, int nSize, char byPlus, uint16_t wCryptKey)
        {
            using org_ptr = void (WINAPIV*)(char*, int, char, uint16_t);
            (org_ptr(0x14043bd90L))(pStr, nSize, byPlus, wCryptKey);
        };
        void Error(char* arg_0, char* arg_1)
        {
            using org_ptr = void (WINAPIV*)(char*, char*);
            (org_ptr(0x1405098a0L))(arg_0, arg_1);
        };
        void ErrorButRun(char* arg_0, char* arg_1)
        {
            using org_ptr = void (WINAPIV*)(char*, char*);
            (org_ptr(0x1405099d0L))(arg_0, arg_1);
        };
        void ExtractVertex(uint16_t arg_0, int arg_1, float** arg_2, void* arg_3, float* arg_4, float arg_5)
        {
            using org_ptr = void (WINAPIV*)(uint16_t, int, float**, void*, float*, float);
            (org_ptr(0x14051d0b0L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
        };
        unsigned int F(unsigned int x, unsigned int y, unsigned int z)
        {
            using org_ptr = unsigned int (WINAPIV*)(unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140443c40L))(x, y, z);
        };
        uint32_t F2DW(float arg_0)
        {
            using org_ptr = uint32_t (WINAPIV*)(float);
            return (org_ptr(0x1404ef490L))(arg_0);
        };
        void FastBBoShasiToFrameBuffer(struct CLevel* arg_0, uint32_t arg_1)
        {
            using org_ptr = void (WINAPIV*)(struct CLevel*, uint32_t);
            (org_ptr(0x140515350L))(arg_0, arg_1);
        };
        int64_t FastCmp(uint32_t* arg_0, uint32_t* arg_1, uint32_t arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(uint32_t*, uint32_t*, uint32_t);
            return (org_ptr(0x14050a030L))(arg_0, arg_1, arg_2);
        };
        void FatalError(char* arg_0, char* arg_1)
        {
            using org_ptr = void (WINAPIV*)(char*, char*);
            (org_ptr(0x140509c90L))(arg_0, arg_1);
        };
        int FindAllFile(char* pszDirectory, char** ppszFileName, int nMax)
        {
            using org_ptr = int (WINAPIV*)(char*, char**, int);
            return (org_ptr(0x140480410L))(pszDirectory, ppszFileName, nMax);
        };
        struct CAnimus* FindEmptyAnimus(struct CAnimus* pObjArray, int nMax)
        {
            using org_ptr = struct CAnimus* (WINAPIV*)(struct CAnimus*, int);
            return (org_ptr(0x14012ad50L))(pObjArray, nMax);
        };
        struct CMerchant* FindEmptyNPC(struct CMerchant* pList, int nMax)
        {
            using org_ptr = struct CMerchant* (WINAPIV*)(struct CMerchant*, int);
            return (org_ptr(0x140139cd0L))(pList, nMax);
        };
        struct CParkingUnit* FindEmptyParkingUnit(struct CParkingUnit* pItem, int nMax)
        {
            using org_ptr = struct CParkingUnit* (WINAPIV*)(struct CParkingUnit*, int);
            return (org_ptr(0x140168100L))(pItem, nMax);
        };
        int FixTalikItemIndex(char byTalikEffectNum)
        {
            using org_ptr = int (WINAPIV*)(char);
            return (org_ptr(0x14003f280L))(byTalikEffectNum);
        };
        void FloatToShort(float* pFloat, int16_t* pShort, int size)
        {
            using org_ptr = void (WINAPIV*)(float*, int16_t*, int);
            (org_ptr(0x14043b260L))(pFloat, pShort, size);
        };
        void Force32BitRendering()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404e9e90L))();
        };
        void ForceFullScreen()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404e9e80L))();
        };
        void FramebufferToBMP(char* Filename)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x140509110L))(Filename);
        };
        void FramebufferToJPG(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x1405092a0L))(arg_0);
        };
        void FreePointer(void* arg_0)
        {
            using org_ptr = void (WINAPIV*)(void*);
            (org_ptr(0x1404ec2f0L))(arg_0);
        };
        uint32_t FtoDW(float arg_0)
        {
            using org_ptr = uint32_t (WINAPIV*)(float);
            return (org_ptr(0x1404f1b40L))(arg_0);
        };
        void FullScreenEffect()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140514a00L))();
        };
        unsigned int G(unsigned int x, unsigned int y, unsigned int z)
        {
            using org_ptr = unsigned int (WINAPIV*)(unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140443d70L))(x, y, z);
        };
        struct CTextureRender* Get1st1024x1024TexRender()
        {
            using org_ptr = struct CTextureRender* (WINAPIV*)();
            return (org_ptr(0x140513ef0L))();
        };
        struct CTextureRender* Get1st256x256TexRender()
        {
            using org_ptr = struct CTextureRender* (WINAPIV*)();
            return (org_ptr(0x140513f20L))();
        };
        struct CTextureRender* Get1st512x512TexRender()
        {
            using org_ptr = struct CTextureRender* (WINAPIV*)();
            return (org_ptr(0x140513f00L))();
        };
        void Get2DTo3DTranslation(float** arg_0, float* arg_1, float* arg_2, float arg_3, float arg_4, float arg_5, float arg_6, float arg_7)
        {
            using org_ptr = void (WINAPIV*)(float**, float*, float*, float, float, float, float, float);
            (org_ptr(0x140507be0L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7);
        };
        struct CTextureRender* Get2nd256x256TexRender()
        {
            using org_ptr = struct CTextureRender* (WINAPIV*)();
            return (org_ptr(0x140513f30L))();
        };
        struct CTextureRender* Get2nd512x512TexRender()
        {
            using org_ptr = struct CTextureRender* (WINAPIV*)();
            return (org_ptr(0x140513f10L))();
        };
        float Get3DSqrt(float* Pos, float* Tar)
        {
            using org_ptr = float (WINAPIV*)(float*, float*);
            return (org_ptr(0x14043adc0L))(Pos, Tar);
        };
        void GetAddrString(struct sockaddr_ipx* pSAddr, char* dest)
        {
            using org_ptr = void (WINAPIV*)(struct sockaddr_ipx*, char*);
            (org_ptr(0x1404800a0L))(pSAddr, dest);
        };
        uint32_t GetAllPlayingWaves()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x14050f730L))();
        };
        float GetAngle(float* mon, float* plr)
        {
            using org_ptr = float (WINAPIV*)(float*, float*);
            return (org_ptr(0x1401261a0L))(mon, plr);
        };
        void GetAniMatrix(float** arg_0, struct _ANI_OBJECT* arg_1, float arg_2)
        {
            using org_ptr = void (WINAPIV*)(float**, struct _ANI_OBJECT*, float);
            (org_ptr(0x14051fa60L))(arg_0, arg_1, arg_2);
        };
        struct _animus_fld* GetAnimusFldFromExp(int nAnimusClass, uint64_t dwExp)
        {
            using org_ptr = struct _animus_fld* (WINAPIV*)(int, uint64_t);
            return (org_ptr(0x14012af00L))(nAnimusClass, dwExp);
        };
        struct _animus_fld* GetAnimusFldFromLv(int nAnimusClass, unsigned int dwLv)
        {
            using org_ptr = struct _animus_fld* (WINAPIV*)(int, unsigned int);
            return (org_ptr(0x14012afc0L))(nAnimusClass, dwLv);
        };
        uint32_t GetAvailableVidMem()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x14050af00L))();
        };
        void GetBBoxRotate(float** arg_0, float** arg_1, float* arg_2, float* arg_3, float arg_4)
        {
            using org_ptr = void (WINAPIV*)(float**, float**, float*, float*, float);
            (org_ptr(0x140507db0L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        void GetBezierPoint(float** arg_0, float** arg_1, uint32_t arg_2, float arg_3)
        {
            using org_ptr = void (WINAPIV*)(float**, float**, uint32_t, float);
            (org_ptr(0x1404ec080L))(arg_0, arg_1, arg_2, arg_3);
        };
        void GetBillboardMatrix(struct D3DXMATRIX* arg_0, float* arg_1, float* arg_2)
        {
            using org_ptr = void (WINAPIV*)(struct D3DXMATRIX*, float*, float*);
            (org_ptr(0x14050b2e0L))(arg_0, arg_1, arg_2);
        };
        unsigned int GetBitAfterDowngrade(unsigned int dwCurBit, char byCurLv)
        {
            using org_ptr = unsigned int (WINAPIV*)(unsigned int, char);
            return (org_ptr(0x14003e400L))(dwCurBit, byCurLv);
        };
        unsigned int GetBitAfterSetLimSocket(char byLimSocketNum)
        {
            using org_ptr = unsigned int (WINAPIV*)(char);
            return (org_ptr(0x14003e470L))(byLimSocketNum);
        };
        unsigned int GetBitAfterUpgrade(unsigned int dwCurBit, unsigned int dwTalikCode, char byCurLv)
        {
            using org_ptr = unsigned int (WINAPIV*)(unsigned int, unsigned int, char);
            return (org_ptr(0x14003e340L))(dwCurBit, dwTalikCode, byCurLv);
        };
        int32_t GetBoldSubLeng(char* arg_0)
        {
            using org_ptr = int32_t (WINAPIV*)(char*);
            return (org_ptr(0x140527700L))(arg_0);
        };
        void GetBumpFactor(float* arg_0)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x1404ef400L))(arg_0);
        };
        void GetCameraPos(float** arg_0)
        {
            using org_ptr = void (WINAPIV*)(float**);
            (org_ptr(0x140507540L))(arg_0);
        };
        int64_t GetCharFromKey()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1405069b0L))();
        };
        unsigned int GetCheckTimeFromCombineExCheckKey(unsigned int dwCombineExCheckKey)
        {
            using org_ptr = unsigned int (WINAPIV*)(unsigned int);
            return (org_ptr(0x14003f260L))(dwCombineExCheckKey);
        };
        uint32_t GetColorToColorAlpha(uint32_t arg_0, uint32_t arg_1, float arg_2)
        {
            using org_ptr = uint32_t (WINAPIV*)(uint32_t, uint32_t, float);
            return (org_ptr(0x140508330L))(arg_0, arg_1, arg_2);
        };
        unsigned int GetConnectTime_AddBySec(int iSec)
        {
            using org_ptr = unsigned int (WINAPIV*)(int);
            return (org_ptr(0x14043cb80L))(iSec);
        };
        int64_t GetConsoleStateB(int arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(int);
            return (org_ptr(0x140511a90L))(arg_0);
        };
        void GetContrast(uint8_t* arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint8_t*);
            (org_ptr(0x1404ec720L))(arg_0);
        };
        int GetCurDay()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043c6d0L))();
        };
        int GetCurHour()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043c660L))();
        };
        int GetCurrentDay()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043b630L))();
        };
        int GetCurrentHour()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043b690L))();
        };
        int GetCurrentMin()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043b6f0L))();
        };
        int GetCurrentMonth()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043b5d0L))();
        };
        int GetCurrentSec()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043b750L))();
        };
        int GetCurrentYear()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043b4e0L))();
        };
        int GetCurwDay()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043c740L))();
        };
        struct IDirect3DTexture8* GetD3DTexture(uint16_t arg_0, uint16_t arg_1, _D3DFORMAT arg_2, uint16_t arg_3, uint16_t arg_4, _D3DFORMAT arg_5, uint8_t* arg_6, uint32_t arg_7)
        {
            using org_ptr = struct IDirect3DTexture8* (WINAPIV*)(uint16_t, uint16_t, _D3DFORMAT, uint16_t, uint16_t, _D3DFORMAT, uint8_t*, uint32_t);
            return (org_ptr(0x140500350L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7);
        };
        struct IDirect3DTexture8* GetD3DTextureFromBuffer(uint8_t* arg_0, uint32_t arg_1, uint32_t arg_2)
        {
            using org_ptr = struct IDirect3DTexture8* (WINAPIV*)(uint8_t*, uint32_t, uint32_t);
            return (org_ptr(0x140500140L))(arg_0, arg_1, arg_2);
        };
        struct IDirect3DDevice8* GetD3dDevice()
        {
            using org_ptr = struct IDirect3DDevice8* (WINAPIV*)();
            return (org_ptr(0x14050b500L))();
        };
        void* GetDDSTexFromBuffer(uint16_t arg_0, uint16_t arg_1, uint32_t arg_2, uint8_t* arg_3)
        {
            using org_ptr = void* (WINAPIV*)(uint16_t, uint16_t, uint32_t, uint8_t*);
            return (org_ptr(0x1405017c0L))(arg_0, arg_1, arg_2, arg_3);
        };
        bool GetDateStrAfterDay(char* szDate, int iBuffSize, uint16_t wDayAfter)
        {
            using org_ptr = bool (WINAPIV*)(char*, int, uint16_t);
            return (org_ptr(0x14043c8b0L))(szDate, iBuffSize, wDayAfter);
        };
        bool GetDateTimeStr(char* szTime)
        {
            using org_ptr = bool (WINAPIV*)(char*);
            return (org_ptr(0x14043c9b0L))(szTime);
        };
        char GetDefItemUpgSocketNum(int nTableCode, int nItemIndex)
        {
            using org_ptr = char (WINAPIV*)(int, int);
            return (org_ptr(0x14003bb50L))(nTableCode, nItemIndex);
        };
        float GetDensityFromPos(float* arg_0)
        {
            using org_ptr = float (WINAPIV*)(float*);
            return (org_ptr(0x140508830L))(arg_0);
        };
        void GetDirection(float** cur, float** tar, float** out, float deg)
        {
            using org_ptr = void (WINAPIV*)(float**, float**, float**, float);
            (org_ptr(0x140127f10L))(cur, tar, out, deg);
        };
        float GetDist(float* arg_0, float* arg_1)
        {
            using org_ptr = float (WINAPIV*)(float*, float*);
            return (org_ptr(0x140507890L))(arg_0, arg_1);
        };
        uint32_t GetDmallocCnt()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x1404ec3c0L))();
        };
        int64_t GetDmallocSize()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404ec3b0L))();
        };
        float GetDuration()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x1404e9b00L))();
        };
        void GetDynamicLight(uint32_t arg_0, float* arg_1, float* arg_2, uint32_t* arg_3, void** arg_4, uint32_t* arg_5)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, float*, float*, uint32_t*, void**, uint32_t*);
            (org_ptr(0x140507330L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
        };
        void GetDynamicLightBBox(uint32_t arg_0, float** arg_1, float** arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, float**, float**);
            (org_ptr(0x1405072d0L))(arg_0, arg_1, arg_2);
        };
        uint32_t GetDynamicLightNum()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x1405072c0L))();
        };
        void GetEXT(char* arg_0, char* arg_1)
        {
            using org_ptr = void (WINAPIV*)(char*, char*);
            (org_ptr(0x1404e93e0L))(arg_0, arg_1);
        };
        struct CGuild* GetEmptyGuildData(struct CGuild* pData, int nNum)
        {
            using org_ptr = struct CGuild* (WINAPIV*)(struct CGuild*, int);
            return (org_ptr(0x140258790L))(pData, nNum);
        };
        void GetEntityAnimationPos(float* arg_0, struct CParticle* arg_1)
        {
            using org_ptr = void (WINAPIV*)(float*, struct CParticle*);
            (org_ptr(0x1405173b0L))(arg_0, arg_1);
        };
        uint16_t GetExcelIndexFromCombineExCheckKey(unsigned int dwCombineExCheckKey)
        {
            using org_ptr = uint16_t (WINAPIV*)(unsigned int);
            return (org_ptr(0x14003f240L))(dwCombineExCheckKey);
        };
        float GetFPS()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x1404e9a30L))();
        };
        int64_t GetFileSize(char* arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(char*);
            return (org_ptr(0x1404e94f0L))(arg_0);
        };
        uint32_t GetFileSizeAndMergeFile(char* arg_0)
        {
            using org_ptr = uint32_t (WINAPIV*)(char*);
            return (org_ptr(0x14050aa20L))(arg_0);
        };
        void GetFinalBilloardMatrix(float** arg_0, float** arg_1, struct CParticle* arg_2, uint32_t arg_3)
        {
            using org_ptr = void (WINAPIV*)(float**, float**, struct CParticle*, uint32_t);
            (org_ptr(0x14051b320L))(arg_0, arg_1, arg_2, arg_3);
        };
        void GetFinalPath(char* arg_0, char* arg_1)
        {
            using org_ptr = void (WINAPIV*)(char*, char*);
            (org_ptr(0x1404e9320L))(arg_0, arg_1);
        };
        float GetFloatMod(float arg_0, float arg_1)
        {
            using org_ptr = float (WINAPIV*)(float, float);
            return (org_ptr(0x14051ffc0L))(arg_0, arg_1);
        };
        uint32_t GetFogColor()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x1404ea030L))();
        };
        void GetFrustumNormalPlane(float** arg_0)
        {
            using org_ptr = void (WINAPIV*)(float**);
            (org_ptr(0x1404ece50L))(arg_0);
        };
        float GetGlobalMusicVolume()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x14050f650L))();
        };
        float GetGlobalWavVolume()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x14050f630L))();
        };
        float GetGravity(float arg_0)
        {
            using org_ptr = float (WINAPIV*)(float);
            return (org_ptr(0x140516f10L))(arg_0);
        };
        struct CGuild* GetGuildDataFromSerial(struct CGuild* pData, int nNum, unsigned int dwSerial)
        {
            using org_ptr = struct CGuild* (WINAPIV*)(struct CGuild*, int, unsigned int);
            return (org_ptr(0x140258850L))(pData, nNum, dwSerial);
        };
        struct CGuild* GetGuildPtrFromName(struct CGuild* pData, int nNum, char* pwszGuildName)
        {
            using org_ptr = struct CGuild* (WINAPIV*)(struct CGuild*, int, char*);
            return (org_ptr(0x140258910L))(pData, nNum, pwszGuildName);
        };
        void GetHeadMatrix(struct D3DXMATRIX* arg_0, struct R3Camera* arg_1, float arg_2, int32_t arg_3, int32_t arg_4)
        {
            using org_ptr = void (WINAPIV*)(struct D3DXMATRIX*, struct R3Camera*, float, int32_t, int32_t);
            (org_ptr(0x140507f80L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        int GetIPAddress(char* szAddr)
        {
            using org_ptr = int (WINAPIV*)(char*);
            return (org_ptr(0x14047fb40L))(szAddr);
        };
        int GetIPAddress(struct sockaddr_in* pAddr)
        {
            using org_ptr = int (WINAPIV*)(struct sockaddr_in*);
            return (org_ptr(0x14047fc30L))(pAddr);
        };
        unsigned int GetIPAddress()
        {
            using org_ptr = unsigned int (WINAPIV*)();
            return (org_ptr(0x14047fcf0L))();
        };
        void GetInverseTransformVertex(float* arg_0, float* arg_1)
        {
            using org_ptr = void (WINAPIV*)(float*, float*);
            (org_ptr(0x1405096b0L))(arg_0, arg_1);
        };
        int GetItemDurPoint(int nTableCode, int nIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x140036b40L))(nTableCode, nIndex);
        };
        char* GetItemEquipCivil(int nTableCode, int nItemIndex)
        {
            using org_ptr = char* (WINAPIV*)(int, int);
            return (org_ptr(0x14003ac00L))(nTableCode, nItemIndex);
        };
        int GetItemEquipGrade(int nTableCode, char* szRecordCode)
        {
            using org_ptr = int (WINAPIV*)(int, char*);
            return (org_ptr(0x14003f470L))(nTableCode, szRecordCode);
        };
        int GetItemEquipGrade(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003f2e0L))(nTableCode, nItemIndex);
        };
        int GetItemEquipLevel(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003a650L))(nTableCode, nItemIndex);
        };
        struct _EQUIP_MASTERY_LIM* GetItemEquipMastery(int nTableCode, int nItemIndex, int* pnLimNum)
        {
            using org_ptr = struct _EQUIP_MASTERY_LIM* (WINAPIV*)(int, int, int*);
            return (org_ptr(0x14003ab10L))(nTableCode, nItemIndex, pnLimNum);
        };
        int GetItemEquipUpLevel(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003a8b0L))(nTableCode, nItemIndex);
        };
        int GetItemGoldPoint(int nTableCode, int nItemIndex, int nRace, char* pbyMoneyKind)
        {
            using org_ptr = int (WINAPIV*)(int, int, int, char*);
            return (org_ptr(0x140038b70L))(nTableCode, nItemIndex, nRace, pbyMoneyKind);
        };
        char GetItemGrade(int nTableCode, int nItemIndex)
        {
            using org_ptr = char (WINAPIV*)(int, int);
            return (org_ptr(0x14003e970L))(nTableCode, nItemIndex);
        };
        int GetItemKillPoint(int nTableCode, int nItemIndex, int nRace, char* pbyMoneyKind)
        {
            using org_ptr = int (WINAPIV*)(int, int, int, char*);
            return (org_ptr(0x1400381c0L))(nTableCode, nItemIndex, nRace, pbyMoneyKind);
        };
        char GetItemKindCode(int nTableCode)
        {
            using org_ptr = char (WINAPIV*)(int);
            return (org_ptr(0x14003e920L))(nTableCode);
        };
        char* GetItemKorName(int nTableCode, int nItemIndex)
        {
            using org_ptr = char* (WINAPIV*)(int, int);
            return (org_ptr(0x14003b350L))(nTableCode, nItemIndex);
        };
        int GetItemProcPoint(int nTableCode, int nItemIndex, int nRace, char* pbyMoneyKind)
        {
            using org_ptr = int (WINAPIV*)(int, int, int, char*);
            return (org_ptr(0x140037810L))(nTableCode, nItemIndex, nRace, pbyMoneyKind);
        };
        int GetItemStdPoint(int nTableCode, int nItemIndex, int nRace, char* pbyMoneyKind)
        {
            using org_ptr = int (WINAPIV*)(int, int, int, char*);
            return (org_ptr(0x140036df0L))(nTableCode, nItemIndex, nRace, pbyMoneyKind);
        };
        int GetItemStdPrice(int nTableCode, int nItemIndex, int nRace, char* pbyMoneyKind)
        {
            using org_ptr = int (WINAPIV*)(int, int, int, char*);
            return (org_ptr(0x140039520L))(nTableCode, nItemIndex, nRace, pbyMoneyKind);
        };
        int GetItemStoragePrice(int nTableCode, int nItemIndex, int nRace)
        {
            using org_ptr = int (WINAPIV*)(int, int, int);
            return (org_ptr(0x140039f20L))(nTableCode, nItemIndex, nRace);
        };
        int GetItemTableCode(char* psItemCode)
        {
            using org_ptr = int (WINAPIV*)(char*);
            return (org_ptr(0x1400362b0L))(psItemCode);
        };
        char GetItemUpgLimSocket(unsigned int dwLvBit)
        {
            using org_ptr = char (WINAPIV*)(unsigned int);
            return (org_ptr(0x14003e290L))(dwLvBit);
        };
        char GetItemUpgedLv(unsigned int dwLvBit)
        {
            using org_ptr = char (WINAPIV*)(unsigned int);
            return (org_ptr(0x14003e200L))(dwLvBit);
        };
        int64_t GetJPGDimensions(char* arg_0, unsigned int* arg_1, unsigned int* arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(char*, unsigned int*, unsigned int*);
            return (org_ptr(0x140510bd0L))(arg_0, arg_1, arg_2);
        };
        unsigned int GetKorLocalTime()
        {
            using org_ptr = unsigned int (WINAPIV*)();
            return (org_ptr(0x140480680L))();
        };
        bool GetLastWriteFileTime(char* szFileName, struct _FILETIME* ftWrite)
        {
            using org_ptr = bool (WINAPIV*)(char*, struct _FILETIME*);
            return (org_ptr(0x14043caa0L))(szFileName, ftWrite);
        };
        uint32_t GetLightMapColor(float* arg_0, int arg_1)
        {
            using org_ptr = uint32_t (WINAPIV*)(float*, int);
            return (org_ptr(0x140502530L))(arg_0, arg_1);
        };
        void* GetLightMapSurface(int arg_0)
        {
            using org_ptr = void* (WINAPIV*)(int);
            return (org_ptr(0x1405025f0L))(arg_0);
        };
        uint32_t GetLightMapTexSize()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x140500900L))();
        };
        unsigned int GetLocalDate()
        {
            using org_ptr = unsigned int (WINAPIV*)();
            return (org_ptr(0x14043b3c0L))();
        };
        unsigned int GetLoopTime()
        {
            using org_ptr = unsigned int (WINAPIV*)();
            return (org_ptr(0x140078f70L))();
        };
        void GetMacAddrString(char* szMac, uint64_t tBuffSize)
        {
            using org_ptr = void (WINAPIV*)(char*, uint64_t);
            (org_ptr(0x1404807a0L))(szMac, tBuffSize);
        };
        struct _R3MATERIAL* GetMainMaterial()
        {
            using org_ptr = struct _R3MATERIAL* (WINAPIV*)();
            return (org_ptr(0x140502670L))();
        };
        uint32_t GetMainMaterialNum()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x140504a50L))();
        };
        void GetMatLightFromColor(struct _D3DLIGHT8* Dst, _D3DMATERIAL8* Dst2, uint32_t arg_0, float arg_1)
        {
            using org_ptr = void (WINAPIV*)(struct _D3DLIGHT8*, _D3DMATERIAL8*, uint32_t, float);
            (org_ptr(0x140507e30L))(Dst, Dst2, arg_0, arg_1);
        };
        int64_t GetMaterialNameNum(struct _R3MATERIAL* arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(struct _R3MATERIAL*);
            return (org_ptr(0x1404f5950L))(arg_0);
        };
        void GetMatrixFrom3DSMAXMatrix(float** arg_0)
        {
            using org_ptr = void (WINAPIV*)(float**);
            (org_ptr(0x1404eab90L))(arg_0);
        };
        void GetMatrixFromAtoB(float** arg_0, float* arg_1, float* arg_2)
        {
            using org_ptr = void (WINAPIV*)(float**, float*, float*);
            (org_ptr(0x140507b60L))(arg_0, arg_1, arg_2);
        };
        void GetMatrixFromAtoB2(float** arg_0, float* arg_1, float* arg_2)
        {
            using org_ptr = void (WINAPIV*)(float**, float*, float*);
            (org_ptr(0x14052ab10L))(arg_0, arg_1, arg_2);
        };
        void GetMatrixFromVector(float** arg_0, float* arg_1, float* arg_2)
        {
            using org_ptr = void (WINAPIV*)(float**, float*, float*);
            (org_ptr(0x1405081a0L))(arg_0, arg_1, arg_2);
        };
        unsigned int GetMaxParamFromExp(int nAnimusClass, uint64_t dwExp)
        {
            using org_ptr = unsigned int (WINAPIV*)(int, uint64_t);
            return (org_ptr(0x14012b080L))(nAnimusClass, dwExp);
        };
        int GetMaxResKind()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x1401f99a0L))();
        };
        struct CMergeFileManager* GetMergeFileManager()
        {
            using org_ptr = struct CMergeFileManager* (WINAPIV*)();
            return (org_ptr(0x14050a9b0L))();
        };
        int64_t GetMipMapSkipSize(struct _DDSURFACEDESC2* arg_0, uint32_t arg_1, uint32_t arg_2, uint32_t arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(struct _DDSURFACEDESC2*, uint32_t, uint32_t, uint32_t);
            return (org_ptr(0x1404ffe70L))(arg_0, arg_1, arg_2, arg_3);
        };
        float GetMotionBlurLength()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x1405149f0L))();
        };
        float GetMultiLayerTime()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x14050f860L))();
        };
        int GetNextDay()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043c830L))();
        };
        void GetNormal(float* arg_0, float* arg_1, float* arg_2, float* arg_3)
        {
            using org_ptr = void (WINAPIV*)(float*, float*, float*, float*);
            (org_ptr(0x1404eb1d0L))(arg_0, arg_1, arg_2, arg_3);
        };
        void GetNowDateTime(char* szDateTime)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x14043c1d0L))(szDateTime);
        };
        float GetNowFrame()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x1404ffe40L))();
        };
        int64_t GetNowFreeJmallocSize()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404ec190L))();
        };
        HWND GetNowHWnd()
        {
            using org_ptr = HWND (WINAPIV*)();
            return (org_ptr(0x140525320L))();
        };
        int64_t GetNowJmallocSize()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404ec1b0L))();
        };
        int64_t GetNowPath(char* arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(char*);
            return (org_ptr(0x1404e9280L))(arg_0);
        };
        int64_t GetNowR3D3DTexCnt()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x140500280L))();
        };
        int64_t GetNowR3TexCnt()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1405002d0L))();
        };
        uint32_t GetNowTexMemSize()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x1404ffe50L))();
        };
        int GetNumAllFile(char* pszDirectory)
        {
            using org_ptr = int (WINAPIV*)(char*);
            return (org_ptr(0x140480580L))(pszDirectory);
        };
        void GetObjectMatrix(float** arg_0, uint16_t arg_1, struct _ANI_OBJECT* arg_2, float arg_3)
        {
            using org_ptr = void (WINAPIV*)(float**, uint16_t, struct _ANI_OBJECT*, float);
            (org_ptr(0x140520030L))(arg_0, arg_1, arg_2, arg_3);
        };
        struct IDirect3DSurface8* GetOldRenderTarget()
        {
            using org_ptr = struct IDirect3DSurface8* (WINAPIV*)();
            return (org_ptr(0x14050ad00L))();
        };
        struct IDirect3DSurface8* GetOldStencilZ()
        {
            using org_ptr = struct IDirect3DSurface8* (WINAPIV*)();
            return (org_ptr(0x14050ad10L))();
        };
        uint32_t GetOneNameFromPath(char* arg_0, char* arg_1, uint32_t* arg_2)
        {
            using org_ptr = uint32_t (WINAPIV*)(char*, char*, uint32_t*);
            return (org_ptr(0x140509f90L))(arg_0, arg_1, arg_2);
        };
        uint32_t GetOutLineColor()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x140511330L))();
        };
        uint32_t GetOutLineColorFont16()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x140511350L))();
        };
        uint32_t GetOutLineColorFont24()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x140511370L))();
        };
        uint32_t GetPlaneCrossPoint(float* arg_0, float* arg_1, float* arg_2, float* arg_3, float arg_4)
        {
            using org_ptr = uint32_t (WINAPIV*)(float*, float*, float*, float*, float);
            return (org_ptr(0x1404e3180L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        int64_t GetPlaneCrossPoint(float* arg_0, float* arg_1, float* arg_2, float* arg_3, float arg_4, float arg_5)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float*, float*, float*, float, float);
            return (org_ptr(0x1404e3280L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
        };
        void GetPointCamera(float** arg_0)
        {
            using org_ptr = void (WINAPIV*)(float**);
            (org_ptr(0x140512d40L))(arg_0);
        };
        void GetPosByDistFromATOB(float** arg_0, float* arg_1, float* arg_2, float arg_3)
        {
            using org_ptr = void (WINAPIV*)(float**, float*, float*, float);
            (org_ptr(0x1405081e0L))(arg_0, arg_1, arg_2, arg_3);
        };
        _PRE_PARTICLE_LIST* GetPreParticleList(int arg_0)
        {
            using org_ptr = _PRE_PARTICLE_LIST* (WINAPIV*)(int);
            return (org_ptr(0x140516ef0L))(arg_0);
        };
        int64_t GetPreParticleListNum()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x140516ee0L))();
        };
        int GetPrevDay()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x14043c7b0L))();
        };
        void GetProjectMatrix(struct D3DXMATRIX* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct D3DXMATRIX*);
            (org_ptr(0x140507d90L))(arg_0);
        };
        struct CPlayer* GetPtrPlayerFromAccount(struct CPlayer* pData, int nNum, char* szAccount)
        {
            using org_ptr = struct CPlayer* (WINAPIV*)(struct CPlayer*, int, char*);
            return (org_ptr(0x140066690L))(pData, nNum, szAccount);
        };
        struct CPlayer* GetPtrPlayerFromAccountSerial(struct CPlayer* pData, int nNum, unsigned int dwSerial)
        {
            using org_ptr = struct CPlayer* (WINAPIV*)(struct CPlayer*, int, unsigned int);
            return (org_ptr(0x140066860L))(pData, nNum, dwSerial);
        };
        struct CPlayer* GetPtrPlayerFromCharSerial(int nNum, unsigned int dwSerial)
        {
            using org_ptr = struct CPlayer* (WINAPIV*)(int, unsigned int);
            return (org_ptr(0x140066520L))(nNum, dwSerial);
        };
        struct CPlayer* GetPtrPlayerFromName(struct CPlayer* pData, int nNum, char* pwszName)
        {
            using org_ptr = struct CPlayer* (WINAPIV*)(struct CPlayer*, int, char*);
            return (org_ptr(0x140066750L))(pData, nNum, pwszName);
        };
        struct CPlayer* GetPtrPlayerFromSerial(struct CPlayer* pData, int nNum, unsigned int dwSerial)
        {
            using org_ptr = struct CPlayer* (WINAPIV*)(struct CPlayer*, int, unsigned int);
            return (org_ptr(0x1400665e0L))(pData, nNum, dwSerial);
        };
        int GetQLen(float* fPos, float* fTar)
        {
            using org_ptr = int (WINAPIV*)(float*, float*);
            return (org_ptr(0x14043ae90L))(fPos, fTar);
        };
        void GetQuaternionFromVector(float* arg_0, float* arg_1)
        {
            using org_ptr = void (WINAPIV*)(float*, float*);
            (org_ptr(0x1404ea140L))(arg_0, arg_1);
        };
        void GetQuaternionFromVector(float* arg_0, float* arg_1, float* arg_2)
        {
            using org_ptr = void (WINAPIV*)(float*, float*, float*);
            (org_ptr(0x1404ea290L))(arg_0, arg_1, arg_2);
        };
        uint32_t GetR3TexManageFlag()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x140500c50L))();
        };
        int64_t GetRandOrNum(FILE* File, float* arg_0, float* arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(FILE*, float*, float*);
            return (org_ptr(0x140517570L))(File, arg_0, arg_1);
        };
        bool GetReactArea(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, struct _react_area* poutReactArea, unsigned int dwDesiredApply, char* pszoutErrMsg, char* pszoutEventCode)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, struct _react_area*, unsigned int, char*, char*);
            return (org_ptr(0x1402784f0L))(fstr, pSetup, poutReactArea, dwDesiredApply, pszoutErrMsg, pszoutEventCode);
        };
        bool GetReactObject(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, struct _react_obj* poutReactObject, bool bReadCnt, unsigned int dwDesiredApply, char* pszoutErrMsg, char* pszoutEventCode)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, struct _react_obj*, bool, unsigned int, char*, char*);
            return (org_ptr(0x140278030L))(fstr, pSetup, poutReactObject, bReadCnt, dwDesiredApply, pszoutErrMsg, pszoutEventCode);
        };
        int64_t GetReflectionState()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404ee810L))();
        };
        int GetRegionIndex(int nMapIndex, unsigned int x, unsigned int y, unsigned int dwMaxX, unsigned int dwMaxY)
        {
            using org_ptr = int (WINAPIV*)(int, unsigned int, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x14018b640L))(nMapIndex, x, y, dwMaxX, dwMaxY);
        };
        char* GetRegionName(int nMapIndex, unsigned int x, unsigned int y, unsigned int dwMaxX, unsigned int dwMaxY)
        {
            using org_ptr = char* (WINAPIV*)(int, unsigned int, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x14018b520L))(nMapIndex, x, y, dwMaxX, dwMaxY);
        };
        int GetRewardItemNumChangeClass(struct _class_fld* pClassFld)
        {
            using org_ptr = int (WINAPIV*)(struct _class_fld*);
            return (org_ptr(0x140097250L))(pClassFld);
        };
        int GetSFLevel(int nLv, unsigned int dwHitCount)
        {
            using org_ptr = int (WINAPIV*)(int, unsigned int);
            return (org_ptr(0x14003ef10L))(nLv, dwHitCount);
        };
        struct CTextureRender* GetShadowRenderTexture()
        {
            using org_ptr = struct CTextureRender* (WINAPIV*)();
            return (org_ptr(0x140514450L))();
        };
        struct IDirect3DTexture8* GetShadowTexture()
        {
            using org_ptr = struct IDirect3DTexture8* (WINAPIV*)();
            return (org_ptr(0x140514440L))();
        };
        bool GetSocketName(uint64_t socket, char* pOut)
        {
            using org_ptr = bool (WINAPIV*)(uint64_t, char*);
            return (org_ptr(0x14047ffe0L))(socket, pOut);
        };
        float GetSqrt(float* fPos, float* fTar)
        {
            using org_ptr = float (WINAPIV*)(float*, float*);
            return (org_ptr(0x14043ad30L))(fPos, fTar);
        };
        int GetStaffMastery(unsigned int* pdwForceLvCum)
        {
            using org_ptr = int (WINAPIV*)(unsigned int*);
            return (org_ptr(0x14003efb0L))(pdwForceLvCum);
        };
        uint32_t GetStateFullScreenEffect()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x140514cf0L))();
        };
        void GetSubDayStr(int nSubDay, char* szOutDay)
        {
            using org_ptr = void (WINAPIV*)(int, char*);
            (org_ptr(0x14043c010L))(nSubDay, szOutDay);
        };
        float GetSwimU(float arg_0)
        {
            using org_ptr = float (WINAPIV*)(float);
            return (org_ptr(0x14050f810L))(arg_0);
        };
        float GetSwimV(float arg_0)
        {
            using org_ptr = float (WINAPIV*)(float);
            return (org_ptr(0x14050f830L))(arg_0);
        };
        char GetTalikFromSocket(unsigned int dwLvBit, char bySocketIndex)
        {
            using org_ptr = char (WINAPIV*)(unsigned int, char);
            return (org_ptr(0x14003e2e0L))(dwLvBit, bySocketIndex);
        };
        void* GetTempBuffer()
        {
            using org_ptr = void* (WINAPIV*)();
            return (org_ptr(0x1404ec6b0L))();
        };
        uint32_t GetTempBufferSize()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x1404ec6c0L))();
        };
        int GetTextureMatrix(struct _R3MATERIAL* arg_0, int arg_1, struct D3DXMATRIX* arg_2, float arg_3)
        {
            using org_ptr = int (WINAPIV*)(struct _R3MATERIAL*, int, struct D3DXMATRIX*, float);
            return (org_ptr(0x14050fca0L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t GetTileAniTextureAddId(struct _R3MATERIAL* arg_0, int arg_1, float arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(struct _R3MATERIAL*, int, float);
            return (org_ptr(0x14050fc50L))(arg_0, arg_1, arg_2);
        };
        void GetTodayStr(char* szToday)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x14043bed0L))(szToday);
        };
        uint32_t GetTokenFloat(char* arg_0, float* arg_1)
        {
            using org_ptr = uint32_t (WINAPIV*)(char*, float*);
            return (org_ptr(0x1405174a0L))(arg_0, arg_1);
        };
        uint32_t GetTotalFrame()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x1404ffe30L))();
        };
        int64_t GetTotalFreeJmallocSize()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404ec180L))();
        };
        uint32_t GetTotalVertexBufferCnt()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x14050c520L))();
        };
        uint32_t GetTotalVertexBufferSize()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x14050c510L))();
        };
        int64_t GetTransformVertex(float** arg_0, float* arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(float**, float*);
            return (org_ptr(0x140507cf0L))(arg_0, arg_1);
        };
        int GetUsePcCashType(char byTblCode, int nIndex)
        {
            using org_ptr = int (WINAPIV*)(char, int);
            return (org_ptr(0x140041020L))(byTblCode, nIndex);
        };
        void GetVertexFromBVertex(float* arg_0, void* arg_1, struct _BSP_READ_M_GROUP* arg_2)
        {
            using org_ptr = void (WINAPIV*)(float*, void*, struct _BSP_READ_M_GROUP*);
            (org_ptr(0x1404f64c0L))(arg_0, arg_1, arg_2);
        };
        void GetVertexFromFVertex(float* arg_0, void* arg_1, struct _BSP_READ_M_GROUP* arg_2)
        {
            using org_ptr = void (WINAPIV*)(float*, void*, struct _BSP_READ_M_GROUP*);
            (org_ptr(0x1404f6580L))(arg_0, arg_1, arg_2);
        };
        void GetVertexFromWVertex(float* arg_0, void* arg_1, struct _BSP_READ_M_GROUP* arg_2)
        {
            using org_ptr = void (WINAPIV*)(float*, void*, struct _BSP_READ_M_GROUP*);
            (org_ptr(0x1404f6520L))(arg_0, arg_1, arg_2);
        };
        void GetViewMatrix(struct D3DXMATRIX* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct D3DXMATRIX*);
            (org_ptr(0x140507d70L))(arg_0);
        };
        void GetViewVector(float* arg_0)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x140518760L))(arg_0);
        };
        char GetWeaponClass(int nItemIndex)
        {
            using org_ptr = char (WINAPIV*)(int);
            return (org_ptr(0x14003e140L))(nItemIndex);
        };
        void GetWebBrowserRect(struct tagRECT* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct tagRECT*);
            (org_ptr(0x1404ecec0L))(arg_0);
        };
        float GetXAngle(float* arg_0, float* arg_1)
        {
            using org_ptr = float (WINAPIV*)(float*, float*);
            return (org_ptr(0x1405079a0L))(arg_0, arg_1);
        };
        int GetYAngle(float* arg_0, float* arg_1, float* arg_2)
        {
            using org_ptr = int (WINAPIV*)(float*, float*, float*);
            return (org_ptr(0x140507a30L))(arg_0, arg_1, arg_2);
        };
        float GetYAngle(float* Pos, float* Tar)
        {
            using org_ptr = float (WINAPIV*)(float*, float*);
            return (org_ptr(0x14043abe0L))(Pos, Tar);
        };
        void GetYBillboardMatrix(struct D3DXMATRIX* arg_0, int32_t arg_1, struct D3DXVECTOR3* arg_2)
        {
            using org_ptr = void (WINAPIV*)(struct D3DXMATRIX*, int32_t, struct D3DXVECTOR3*);
            (org_ptr(0x14050b160L))(arg_0, arg_1, arg_2);
        };
        void GetYBillboardMatrix(struct D3DXMATRIX* arg_0, float* arg_1, float* arg_2)
        {
            using org_ptr = void (WINAPIV*)(struct D3DXMATRIX*, float*, float*);
            (org_ptr(0x14050b0a0L))(arg_0, arg_1, arg_2);
        };
        void GetZBillboardMatrix(struct D3DXMATRIX* arg_0, float* arg_1, float* arg_2)
        {
            using org_ptr = void (WINAPIV*)(struct D3DXMATRIX*, float*, float*);
            (org_ptr(0x14050b220L))(arg_0, arg_1, arg_2);
        };
        void Get_CashEvent_Name(char byEventType, char* szEventName)
        {
            using org_ptr = void (WINAPIV*)(char, char*);
            (org_ptr(0x1402f7dc0L))(byEventType, szEventName);
        };
        unsigned int H(unsigned int x, unsigned int y, unsigned int z)
        {
            using org_ptr = unsigned int (WINAPIV*)(unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140443e60L))(x, y, z);
        };
        void HtoA(char* src, char* dest, int srclen)
        {
            using org_ptr = void (WINAPIV*)(char*, char*, int);
            (org_ptr(0x14047fed0L))(src, dest, srclen);
        };
        char HtoB(char ch)
        {
            using org_ptr = char (WINAPIV*)(char);
            return (org_ptr(0x14047ffa0L))(ch);
        };
        unsigned int I(unsigned int x, unsigned int y, unsigned int z)
        {
            using org_ptr = unsigned int (WINAPIV*)(unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140443f40L))(x, y, z);
        };
        uint32_t IM_LoadWave(char* arg_0, uint32_t arg_1)
        {
            using org_ptr = uint32_t (WINAPIV*)(char*, uint32_t);
            return (org_ptr(0x14050f790L))(arg_0, arg_1);
        };
        void IM_PlayWave(uint32_t arg_0, float arg_1, float arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, float, float);
            (org_ptr(0x14050f7c0L))(arg_0, arg_1, arg_2);
        };
        void IM_ReleaseAllWaves()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050f7b0L))();
        };
        void IM_ReleaseWave(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x14050f7a0L))(arg_0);
        };
        void IM_SetLoopCntWave(uint32_t arg_0, uint32_t arg_1)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, uint32_t);
            (org_ptr(0x14050f800L))(arg_0, arg_1);
        };
        void IM_SetWaveVolumeAndPan(uint32_t arg_0, float arg_1, float arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, float, float);
            (org_ptr(0x14050f7e0L))(arg_0, arg_1, arg_2);
        };
        void IM_StopWave(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x14050f7d0L))(arg_0);
        };
        bool IPConvertingStringToByte(char* szIP, char* pbyIP)
        {
            using org_ptr = bool (WINAPIV*)(char*, char*);
            return (org_ptr(0x140480200L))(szIP, pbyIP);
        };
        unsigned int IndexFromPImgThunkData(struct _IMAGE_THUNK_DATA64* pitdCur, struct _IMAGE_THUNK_DATA64* pitdBase)
        {
            using org_ptr = unsigned int (WINAPIV*)(struct _IMAGE_THUNK_DATA64*, struct _IMAGE_THUNK_DATA64*);
            return (org_ptr(0x140676470L))(pitdCur, pitdBase);
        };
        int64_t InitBlurShader()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x140516120L))();
        };
        void InitCheatCommand(struct CHEAT_COMMAND* pCmdList, char* byCommandSizeList)
        {
            using org_ptr = void (WINAPIV*)(struct CHEAT_COMMAND*, char*);
            (org_ptr(0x14028f270L))(pCmdList, byCommandSizeList);
        };
        void InitConsole()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140511a30L))();
        };
        void InitCore()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ed0d0L))();
        };
        void InitFullScreenEffect()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140514070L))();
        };
        void InitFunctionKey(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x140511b40L))(arg_0);
        };
        int64_t InitJmalloc(int arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(int);
            return (org_ptr(0x1404ec130L))(arg_0);
        };
        void InitMasteryFormula(struct CRecordData* pSkillData, struct CRecordData* pForceData)
        {
            using org_ptr = void (WINAPIV*)(struct CRecordData*, struct CRecordData*);
            (org_ptr(0x14003ea40L))(pSkillData, pForceData);
        };
        void InitR3Engine(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x1404e9ea0L))(arg_0);
        };
        void InitR3Particle()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140518e80L))();
        };
        int64_t InitR3SoundSystem(char* arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(char*);
            return (org_ptr(0x14050f5e0L))(arg_0);
        };
        void InitR3Text()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140510c50L))();
        };
        void InitSpriteManager()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140501b80L))();
        };
        void InitWebBrowser(int32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(int32_t);
            (org_ptr(0x1404ece80L))(arg_0);
        };
        void InsertConsoleStringQ(char* Src)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x140511ae0L))(Src);
        };
        int64_t InsertDynamicLight(float* arg_0, float arg_1, uint32_t arg_2, void* arg_3, int arg_4, uint32_t arg_5)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float, uint32_t, void*, int, uint32_t);
            return (org_ptr(0x1405073b0L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
        };
        float InterpolatedNoise_1(float arg_0)
        {
            using org_ptr = float (WINAPIV*)(float);
            return (org_ptr(0x1405235d0L))(arg_0);
        };
        float InterpolatedNoise_1(float arg_0, float arg_1)
        {
            using org_ptr = float (WINAPIV*)(float, float);
            return (org_ptr(0x1405237d0L))(arg_0, arg_1);
        };
        int IsAbrItem(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003c080L))(nTableCode, nItemIndex);
        };
        bool IsAddAbleTalikToItem(char byItemTableCode, uint16_t wItemIndex, unsigned int dwItemCurLv, uint16_t wTalikIndex, int* pnTalikLim)
        {
            using org_ptr = bool (WINAPIV*)(char, uint16_t, unsigned int, uint16_t, int*);
            return (org_ptr(0x14003e5f0L))(byItemTableCode, wItemIndex, dwItemCurLv, wTalikIndex, pnTalikLim);
        };
        int64_t IsAniTex(char* arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(char*);
            return (org_ptr(0x140501320L))(arg_0);
        };
        int64_t IsBBoxInFrustum(float* arg_0, float* arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float*);
            return (org_ptr(0x1404ecd30L))(arg_0, arg_1);
        };
        int64_t IsBBoxInFrustum(int16_t* arg_0, int16_t* arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(int16_t*, int16_t*);
            return (org_ptr(0x1404ecde0L))(arg_0, arg_1);
        };
        struct CItemStore* IsBeNearStore(struct CPlayer* p, int nStoreCode)
        {
            using org_ptr = struct CItemStore* (WINAPIV*)(struct CPlayer*, int);
            return (org_ptr(0x140262c40L))(p, nStoreCode);
        };
        int64_t IsBothRayAABB(float* arg_0, float* arg_1, float* arg_2, float* arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float*, float*, float*);
            return (org_ptr(0x1404e8500L))(arg_0, arg_1, arg_2, arg_3);
        };
        int IsBothRayAABB(int16_t* arg_0, int16_t* arg_1, float* arg_2, float* arg_3)
        {
            using org_ptr = int (WINAPIV*)(int16_t*, int16_t*, float*, float*);
            return (org_ptr(0x1404e8580L))(arg_0, arg_1, arg_2, arg_3);
        };
        int IsCashItem(char byTblCode, unsigned int dwIndex)
        {
            using org_ptr = int (WINAPIV*)(char, unsigned int);
            return (org_ptr(0x14003f600L))(byTblCode, dwIndex);
        };
        int64_t IsCollisionBBox(float* arg_0, float* arg_1, float* arg_2, float* arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float*, float*, float*);
            return (org_ptr(0x1404e9060L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t IsCollisionBBox(int16_t* arg_0, int16_t* arg_1, float* arg_2, float* arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(int16_t*, int16_t*, float*, float*);
            return (org_ptr(0x1404e8ff0L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t IsCollisionBBox(int16_t* arg_0, int16_t* arg_1, int16_t* arg_2, int16_t* arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(int16_t*, int16_t*, int16_t*, int16_t*);
            return (org_ptr(0x1404e90b0L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t IsCollisionBBoxPoint(float* arg_0, float* arg_1, float* arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float*, float*);
            return (org_ptr(0x1404e8f30L))(arg_0, arg_1, arg_2);
        };
        int64_t IsCollisionBBoxPoint(int16_t* arg_0, int16_t* arg_1, float* arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(int16_t*, int16_t*, float*);
            return (org_ptr(0x1404e8f80L))(arg_0, arg_1, arg_2);
        };
        int64_t IsCollisionBBoxToFace(float** arg_0, float* arg_1, float* arg_2, float* arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(float**, float*, float*, float*);
            return (org_ptr(0x1404e8e30L))(arg_0, arg_1, arg_2, arg_3);
        };
        bool IsDayChanged(int* iOldDay)
        {
            using org_ptr = bool (WINAPIV*)(int*);
            return (org_ptr(0x14043c5f0L))(iOldDay);
        };
        int64_t IsEnableBBoShasiShader()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x140513f40L))();
        };
        int64_t IsEnableShader(uint32_t arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(uint32_t);
            return (org_ptr(0x140515660L))(arg_0);
        };
        int IsExchangeItem(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x140040120L))(nTableCode, nItemIndex);
        };
        bool IsExistDarkHoleOpenGate()
        {
            using org_ptr = bool (WINAPIV*)();
            return (org_ptr(0x1401644b0L))();
        };
        int64_t IsExistFile(char* arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(char*);
            return (org_ptr(0x1404e9670L))(arg_0);
        };
        int64_t IsExistFileAndMergeFile(char* arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(char*);
            return (org_ptr(0x14050a9c0L))(arg_0);
        };
        int64_t IsExistFromSoundSpt(uint32_t arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(uint32_t);
            return (org_ptr(0x14050f700L))(arg_0);
        };
        int IsExistItem(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003c920L))(nTableCode, nItemIndex);
        };
        int64_t IsFadeIn()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x140507610L))();
        };
        int64_t IsFadeOut()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1405075f0L))();
        };
        int64_t IsFading()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1405075d0L))();
        };
        int64_t IsFarDistance(struct _BSP_LEAF* arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(struct _BSP_LEAF*);
            return (org_ptr(0x1404fa050L))(arg_0);
        };
        int IsGroundableItem(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003c190L))(nTableCode, nItemIndex);
        };
        int64_t IsInitCore()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404ec6d0L))();
        };
        int64_t IsInitR3Engine()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404e9f00L))();
        };
        int IsItemCombineExKind(int nTableCode)
        {
            using org_ptr = int (WINAPIV*)(int);
            return (org_ptr(0x14003e0a0L))(nTableCode);
        };
        int IsItemEquipCivil(int nTableCode, int nItemIndex, char byRaceSex)
        {
            using org_ptr = int (WINAPIV*)(int, int, char);
            return (org_ptr(0x14003bdb0L))(nTableCode, nItemIndex, byRaceSex);
        };
        int IsItemSerialNum(int nTableCode)
        {
            using org_ptr = int (WINAPIV*)(int);
            return (org_ptr(0x14003dfb0L))(nTableCode);
        };
        int64_t IsLoadedMaterial()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1405035d0L))();
        };
        int64_t IsLoadedRTCamera()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404ffd40L))();
        };
        int64_t IsLoadedRTMovie()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404ffd30L))();
        };
        int64_t IsMagicLight(uint32_t arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(uint32_t);
            return (org_ptr(0x140507310L))(arg_0);
        };
        int IsNormalAccountUsable(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003d830L))(nTableCode, nItemIndex);
        };
        int64_t IsOneBackCollision()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x14050cba0L))();
        };
        char IsOtherInvalidObjNear(struct CGameObject* pEster, float* pfEstPos, struct CTrap* pEstObj, struct _TrapItem_fld* pEstTrapItemInfo)
        {
            using org_ptr = char (WINAPIV*)(struct CGameObject*, float*, struct CTrap*, struct _TrapItem_fld*);
            return (org_ptr(0x1401404b0L))(pEster, pfEstPos, pEstObj, pEstTrapItemInfo);
        };
        bool IsOtherTowerNear(struct CGameObject* pEster, float* pfEstPos, struct CGuardTower* pEstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, float*, struct CGuardTower*);
            return (org_ptr(0x140131850L))(pEster, pfEstPos, pEstObj);
        };
        int IsOverLapItem(int nTableCode)
        {
            using org_ptr = int (WINAPIV*)(int);
            return (org_ptr(0x14003be60L))(nTableCode);
        };
        int64_t IsParticle(char* arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(char*);
            return (org_ptr(0x1405082d0L))(arg_0);
        };
        int64_t IsPlayMP3()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x14050f710L))();
        };
        int IsProtectItem(int nTableCode)
        {
            using org_ptr = int (WINAPIV*)(int);
            return (org_ptr(0x14003bed0L))(nTableCode);
        };
        int64_t IsRTMoviePlaying()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404ffe00L))();
        };
        int64_t IsRayAABB(float* arg_0, float* arg_1, float* arg_2, float* arg_3, float** arg_4)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float*, float*, float*, float**);
            return (org_ptr(0x1404e82c0L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        int64_t IsRayAABB(float** arg_0, int16_t* arg_1, float* arg_2, float* arg_3, float** arg_4)
        {
            using org_ptr = int64_t (WINAPIV*)(float**, int16_t*, float*, float*, float**);
            return (org_ptr(0x1404e8480L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        int64_t IsRenderTargetFrameBuffer()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x140513fc0L))();
        };
        int IsRepairableItem(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003bf20L))(nTableCode, nItemIndex);
        };
        int64_t IsRightIndexedUP(int arg_0, uint16_t* arg_1, int arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(int, uint16_t*, int);
            return (org_ptr(0x14051b560L))(arg_0, arg_1, arg_2);
        };
        bool IsSQLValidString(char* wszStr)
        {
            using org_ptr = bool (WINAPIV*)(char*);
            return (org_ptr(0x1400408a0L))(wszStr);
        };
        int IsSaveItem(int nTableCode)
        {
            using org_ptr = int (WINAPIV*)(int);
            return (org_ptr(0x14003cfd0L))(nTableCode);
        };
        int IsSellItem(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003f9a0L))(nTableCode, nItemIndex);
        };
        int64_t IsServerMode()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404e9e70L))();
        };
        int IsStorageCodeWithItemKind(int nTableCode, int nStorageCode)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003bd10L))(nTableCode, nStorageCode);
        };
        int IsStorageRange(char byStorageCode, char byStorageIndex)
        {
            using org_ptr = int (WINAPIV*)(char, char);
            return (org_ptr(0x14003d000L))(byStorageCode, byStorageIndex);
        };
        int IsTalikAboutTol(int nTalikIndex)
        {
            using org_ptr = int (WINAPIV*)(int);
            return (org_ptr(0x14003bcd0L))(nTalikIndex);
        };
        bool IsTargeting(struct CGameObject* pTar)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x1400fd990L))(pTar);
        };
        int64_t IsTextureFormatOk(_D3DFORMAT arg_0, _D3DFORMAT arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(_D3DFORMAT, _D3DFORMAT);
            return (org_ptr(0x14050ac90L))(arg_0, arg_1);
        };
        int IsTimeItem(char byTblCode, unsigned int dwIndex)
        {
            using org_ptr = int (WINAPIV*)(char, unsigned int);
            return (org_ptr(0x1400409c0L))(byTblCode, dwIndex);
        };
        int IsTrunkIOAble(int nTableCode, int nItemIndex)
        {
            using org_ptr = int (WINAPIV*)(int, int);
            return (org_ptr(0x14003d110L))(nTableCode, nItemIndex);
        };
        bool IsUsableTempEffectAtStoneState(int nTempEffectType)
        {
            using org_ptr = bool (WINAPIV*)(int);
            return (org_ptr(0x14017f130L))(nTempEffectType);
        };
        int64_t IsWebBrowserMode()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x1404ece70L))();
        };
        uint8_t* Jmalloc(int arg_0)
        {
            using org_ptr = uint8_t* (WINAPIV*)(int);
            return (org_ptr(0x1404ec1e0L))(arg_0);
        };
        uint8_t* JpegFileToRGB(char* arg_0, unsigned int* arg_1, unsigned int* arg_2)
        {
            using org_ptr = uint8_t* (WINAPIV*)(char*, unsigned int*, unsigned int*);
            return (org_ptr(0x140510ba0L))(arg_0, arg_1, arg_2);
        };
        void LightMappingTex1(struct _BSP_MAT_GROUP* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct _BSP_MAT_GROUP*);
            (org_ptr(0x1404efaf0L))(arg_0);
        };
        float LinearInterpolate(float arg_0, float arg_1, float arg_2)
        {
            using org_ptr = float (WINAPIV*)(float, float, float);
            return (org_ptr(0x140523470L))(arg_0, arg_1, arg_2);
        };
        int32_t LoadAndCreateShader(char* arg_0, uint32_t* arg_1, uint32_t arg_2, int arg_3, uint32_t* arg_4)
        {
            using org_ptr = int32_t (WINAPIV*)(char*, uint32_t*, uint32_t, int, uint32_t*);
            return (org_ptr(0x14050aac0L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        uint8_t* LoadBmp(char* arg_0, int* arg_1, int* arg_2)
        {
            using org_ptr = uint8_t* (WINAPIV*)(char*, int*, int*);
            return (org_ptr(0x1404e96b0L))(arg_0, arg_1, arg_2);
        };
        int32_t LoadCreateShader(char* arg_0, uint32_t* arg_1, uint32_t arg_2, int arg_3, uint32_t* arg_4)
        {
            using org_ptr = int32_t (WINAPIV*)(char*, uint32_t*, uint32_t, int, uint32_t*);
            return (org_ptr(0x140515680L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        struct _R3MATERIAL* LoadIndependenceR3M(char* arg_0)
        {
            using org_ptr = struct _R3MATERIAL* (WINAPIV*)(char*);
            return (org_ptr(0x1405044b0L))(arg_0);
        };
        void LoadLightMap(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x1405023a0L))(arg_0);
        };
        struct _R3MATERIAL* LoadMainMaterial(char* arg_0)
        {
            using org_ptr = struct _R3MATERIAL* (WINAPIV*)(char*);
            return (org_ptr(0x140504b10L))(arg_0);
        };
        struct _R3MATERIAL* LoadMainR3M(char* arg_0)
        {
            using org_ptr = struct _R3MATERIAL* (WINAPIV*)(char*);
            return (org_ptr(0x140504b90L))(arg_0);
        };
        bool LoadMasteryLimFile(char* pszErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(char*);
            return (org_ptr(0x140066910L))(pszErrMsg);
        };
        int64_t LoadR3MP3(char* arg_0, uint32_t arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(char*, uint32_t);
            return (org_ptr(0x14050f660L))(arg_0, arg_1);
        };
        void LoadR3T(R3Texture* arg_0)
        {
            using org_ptr = void (WINAPIV*)(R3Texture*);
            (org_ptr(0x140501e80L))(arg_0);
        };
        _LIGHTMAP** LoadR3TLightMap(R3Texture* arg_0, _D3DFORMAT arg_1)
        {
            using org_ptr = _LIGHTMAP** (WINAPIV*)(R3Texture*, _D3DFORMAT);
            return (org_ptr(0x140500910L))(arg_0, arg_1);
        };
        void LoadR3X(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x140504130L))(arg_0);
        };
        bool LoadRegionData(int nMapNum, char** ppszMapNameList, char* pszErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(int, char**, char*);
            return (org_ptr(0x14018aeb0L))(nMapNum, ppszMapNameList, pszErrMsg);
        };
        int64_t LoadStreamR3MP3(char* arg_0, uint32_t arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(char*, uint32_t);
            return (org_ptr(0x14050f740L))(arg_0, arg_1);
        };
        struct _R3MATERIAL* LoadSubMaterial(char* arg_0)
        {
            using org_ptr = struct _R3MATERIAL* (WINAPIV*)(char*);
            return (org_ptr(0x1405035e0L))(arg_0);
        };
        struct _R3MATERIAL* LoadSubR3M(char* arg_0)
        {
            using org_ptr = struct _R3MATERIAL* (WINAPIV*)(char*);
            return (org_ptr(0x140504700L))(arg_0);
        };
        void LoadVertexShaderList()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140516d40L))();
        };
        void LoadWaveList(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x14050f600L))(arg_0);
        };
        int LuaScripAlert(lua_State* L)
        {
            using org_ptr = int (WINAPIV*)(lua_State*);
            return (org_ptr(0x1403feef0L))(L);
        };
        bool M2W(char* lpStr, char* wszTran, unsigned int wTranBuffSize)
        {
            using org_ptr = bool (WINAPIV*)(char*, char*, unsigned int);
            return (org_ptr(0x1401e1470L))(lpStr, wszTran, wTranBuffSize);
        };
        void MakeBinaryStr(char* pBuff, uint64_t tBufSize, char* pOut, uint64_t tOutSize)
        {
            using org_ptr = void (WINAPIV*)(char*, uint64_t, char*, uint64_t);
            (org_ptr(0x14043cf30L))(pBuff, tBufSize, pOut, tOutSize);
        };
        uint8_t* MakeDwordAlignedBuf(uint8_t* arg_0, unsigned int arg_1, unsigned int arg_2, unsigned int* arg_3)
        {
            using org_ptr = uint8_t* (WINAPIV*)(uint8_t*, unsigned int, unsigned int, unsigned int*);
            return (org_ptr(0x140510be0L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t MakeGrayScale(uint8_t* arg_0, unsigned int arg_1, unsigned int arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(uint8_t*, unsigned int, unsigned int);
            return (org_ptr(0x140510c10L))(arg_0, arg_1, arg_2);
        };
        struct _STORAGE_LIST::_db_con* MakeLoot(char byTableCode, uint16_t wItemIndex)
        {
            using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(char, uint16_t);
            return (org_ptr(0x1401fb840L))(byTableCode, wItemIndex);
        };
        void MakeMipMap(uint16_t arg_0, uint16_t arg_1, uint16_t* arg_2, uint8_t* arg_3)
        {
            using org_ptr = void (WINAPIV*)(uint16_t, uint16_t, uint16_t*, uint8_t*);
            (org_ptr(0x140500770L))(arg_0, arg_1, arg_2, arg_3);
        };
        void MakeMipMap(uint16_t arg_0, uint16_t arg_1, uint16_t* arg_2, uint16_t* arg_3)
        {
            using org_ptr = void (WINAPIV*)(uint16_t, uint16_t, uint16_t*, uint16_t*);
            (org_ptr(0x1405005b0L))(arg_0, arg_1, arg_2, arg_3);
        };
        void MakeUV(struct _D3DR3VERTEX_TEX1* arg_0, int arg_1, void* arg_2, struct _R3MATERIAL* arg_3, int arg_4)
        {
            using org_ptr = void (WINAPIV*)(struct _D3DR3VERTEX_TEX1*, int, void*, struct _R3MATERIAL*, int);
            (org_ptr(0x140510750L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        void MakeUV(struct _D3DR3VERTEX_TEX2* arg_0, int arg_1, void* arg_2, void* arg_3, struct _R3MATERIAL* arg_4, int arg_5, float arg_6)
        {
            using org_ptr = void (WINAPIV*)(struct _D3DR3VERTEX_TEX2*, int, void*, void*, struct _R3MATERIAL*, int, float);
            (org_ptr(0x14050f920L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6);
        };
        void MakeUVExt(struct _D3DR3VERTEX_TEX2* arg_0, int arg_1, void* arg_2, void* arg_3, struct _R3MATERIAL* arg_4, int arg_5, float arg_6)
        {
            using org_ptr = void (WINAPIV*)(struct _D3DR3VERTEX_TEX2*, int, void*, void*, struct _R3MATERIAL*, int, float);
            (org_ptr(0x140510450L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6);
        };
        void MatrixCopy(float** arg_0, float** arg_1)
        {
            using org_ptr = void (WINAPIV*)(float**, float**);
            (org_ptr(0x1404eacf0L))(arg_0, arg_1);
        };
        void MatrixFromQuaternion(float** arg_0, float arg_1, float arg_2, float arg_3, float arg_4)
        {
            using org_ptr = void (WINAPIV*)(float**, float, float, float, float);
            (org_ptr(0x1404ea420L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        void MatrixIdentity(float** arg_0)
        {
            using org_ptr = void (WINAPIV*)(float**);
            (org_ptr(0x1404eac70L))(arg_0);
        };
        int64_t MatrixInvert(float** arg_0, float** arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(float**, float**);
            return (org_ptr(0x1404ea860L))(arg_0, arg_1);
        };
        void MatrixMultiply(float** arg_0, float** arg_1, float** arg_2)
        {
            using org_ptr = void (WINAPIV*)(float**, float**, float**);
            (org_ptr(0x1404eabe0L))(arg_0, arg_1, arg_2);
        };
        void MatrixRotate(float** arg_0, float arg_1, float arg_2, float arg_3)
        {
            using org_ptr = void (WINAPIV*)(float**, float, float, float);
            (org_ptr(0x1404ead00L))(arg_0, arg_1, arg_2, arg_3);
        };
        void MatrixRotateX(float** arg_0, float arg_1)
        {
            using org_ptr = void (WINAPIV*)(float**, float);
            (org_ptr(0x1404eafc0L))(arg_0, arg_1);
        };
        void MatrixRotateY(float** arg_0, float arg_1)
        {
            using org_ptr = void (WINAPIV*)(float**, float);
            (org_ptr(0x1404eb070L))(arg_0, arg_1);
        };
        void MatrixRotateZ(float** arg_0, float arg_1)
        {
            using org_ptr = void (WINAPIV*)(float**, float);
            (org_ptr(0x1404eb120L))(arg_0, arg_1);
        };
        void MatrixScale(float** arg_0, float arg_1, float arg_2, float arg_3)
        {
            using org_ptr = void (WINAPIV*)(float**, float, float, float);
            (org_ptr(0x1404eacb0L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t MaxFixFloatToInt(float arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(float);
            return (org_ptr(0x1404e9650L))(arg_0);
        };
        int64_t MinFixFloatToInt(float arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(float);
            return (org_ptr(0x1404e9660L))(arg_0);
        };
        void MultiTexOff()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404edee0L))();
        };
        void MultiTexOn()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ede40L))();
        };
        int MyCrtDebugReportHook(int nRptType, char* szMsg, int* retVal)
        {
            using org_ptr = int (WINAPIV*)(int, char*, int*);
            return (org_ptr(0x1401fba40L))(nRptType, szMsg, retVal);
        };
        void MyMessageBox(char* szTitle, char* szMessage)
        {
            using org_ptr = void (WINAPIV*)(char*, char*);
            (org_ptr(0x14043b010L))(szTitle, szMessage);
        };
        void NetTrace(char* fmt)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x140480320L))(fmt);
        };
        float Noise(int32_t arg_0, int32_t arg_1)
        {
            using org_ptr = float (WINAPIV*)(int32_t, int32_t);
            return (org_ptr(0x1405236c0L))(arg_0, arg_1);
        };
        float Noise1(int32_t arg_0)
        {
            using org_ptr = float (WINAPIV*)(int32_t);
            return (org_ptr(0x140523540L))(arg_0);
        };
        void Normalize(float* v)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x14014bc00L))(v);
        };
        void OnLoop_GuildSystem(bool bChangeDay)
        {
            using org_ptr = void (WINAPIV*)(bool);
            (org_ptr(0x1402589e0L))(bChangeDay);
        };
        void OnLoop_VoteSystem()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1402b09c0L))();
        };
        void OutputDebugLog(char* szFormat)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x1401e15a0L))(szFormat);
        };
        int ParsingCommandA(char* pszSrc, int nMaxWordNum, char** ppszDst, int nMaxWordSize)
        {
            using org_ptr = int (WINAPIV*)(char*, int, char**, int);
            return (org_ptr(0x14043b930L))(pszSrc, nMaxWordNum, ppszDst, nMaxWordSize);
        };
        int ParsingCommandW(char* pwszSrc, int nMaxWordNum, char** ppwszDst, int nMaxWordSize)
        {
            using org_ptr = int (WINAPIV*)(char*, int, char**, int);
            return (org_ptr(0x14043bac0L))(pwszSrc, nMaxWordNum, ppwszDst, nMaxWordSize);
        };
        float PerlinNoise_1D(float arg_0, float arg_1, uint32_t arg_2)
        {
            using org_ptr = float (WINAPIV*)(float, float, uint32_t);
            return (org_ptr(0x140523610L))(arg_0, arg_1, arg_2);
        };
        float PerlinNoise_2D(float arg_0, float arg_1, float arg_2, uint32_t arg_3)
        {
            using org_ptr = float (WINAPIV*)(float, float, float, uint32_t);
            return (org_ptr(0x140523890L))(arg_0, arg_1, arg_2, arg_3);
        };
        uint32_t PixelFromFramebuffer(int16_t arg_0, int16_t arg_1)
        {
            using org_ptr = uint32_t (WINAPIV*)(int16_t, int16_t);
            return (org_ptr(0x140509520L))(arg_0, arg_1);
        };
        void PlayR3MP3()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050f680L))();
        };
        void PlayStreamR3MP3()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050f760L))();
        };
        void PlayWave(uint32_t arg_0, uint32_t arg_1, float arg_2, float arg_3)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, uint32_t, float, float);
            (org_ptr(0x14050f6d0L))(arg_0, arg_1, arg_2, arg_3);
        };
        void PopViewPortArea()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050b380L))();
        };
        float PowInterpolate(float arg_0, float arg_1, float arg_2)
        {
            using org_ptr = float (WINAPIV*)(float, float, float);
            return (org_ptr(0x140518dc0L))(arg_0, arg_1, arg_2);
        };
        void PreRenderOneLayer(struct CVertexBuffer* arg_0, struct _BSP_MAT_GROUP* arg_1)
        {
            using org_ptr = void (WINAPIV*)(struct CVertexBuffer*, struct _BSP_MAT_GROUP*);
            (org_ptr(0x1404ef4a0L))(arg_0, arg_1);
        };
        void PreRenderSetting(int arg_0, struct CVertexBuffer* arg_1, struct _BSP_MAT_GROUP* arg_2)
        {
            using org_ptr = void (WINAPIV*)(int, struct CVertexBuffer*, struct _BSP_MAT_GROUP*);
            (org_ptr(0x1404efe30L))(arg_0, arg_1, arg_2);
        };
        void PrepareAllShadow()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140514420L))();
        };
        bool ProcessCheatCommand(struct CPlayer* pOne, char* pwszCommand)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
            return (org_ptr(0x14028ef70L))(pOne, pwszCommand);
        };
        void ProgressConsole(struct CLevel* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CLevel*);
            (org_ptr(0x140512830L))(arg_0);
        };
        void ProgressFunctionKey()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140511df0L))();
        };
        void PushViewPortArea()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050b320L))();
        };
        void PutMessage(char* arg_0, char* arg_1)
        {
            using org_ptr = void (WINAPIV*)(char*, char*);
            (org_ptr(0x140509bf0L))(arg_0, arg_1);
        };
        void QuaternionFromRotation(float* arg_0, float* arg_1, float arg_2)
        {
            using org_ptr = void (WINAPIV*)(float*, float*, float);
            (org_ptr(0x1404ea0d0L))(arg_0, arg_1, arg_2);
        };
        void QuaternionSlerp(float* arg_0, float* arg_1, float* arg_2, float* arg_3, float arg_4, float arg_5, float arg_6, float arg_7, float arg_8, float arg_9, float arg_10, float arg_11, float arg_12)
        {
            using org_ptr = void (WINAPIV*)(float*, float*, float*, float*, float, float, float, float, float, float, float, float, float);
            (org_ptr(0x1404ea590L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9, arg_10, arg_11, arg_12);
        };
        int64_t R3BeginScene()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x140514270L))();
        };
        int64_t R3CalcStrIndexPitInWidthA(char* arg_0, int arg_1, int arg_2, uint32_t arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(char*, int, int, uint32_t);
            return (org_ptr(0x140511560L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t R3CalcStrIndexPitInWidthW(wchar_t* arg_0, int arg_1, int arg_2, uint32_t arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(wchar_t*, int, int, uint32_t);
            return (org_ptr(0x1405114e0L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t R3CalcStrPixelSizeA(char* arg_0, struct tagSIZE* arg_1, int arg_2, uint32_t arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(char*, struct tagSIZE*, int, uint32_t);
            return (org_ptr(0x140511440L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t R3CalcStrPixelSizeW(wchar_t* arg_0, struct tagSIZE* arg_1, int arg_2, uint32_t arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(wchar_t*, struct tagSIZE*, int, uint32_t);
            return (org_ptr(0x140511390L))(arg_0, arg_1, arg_2, arg_3);
        };
        void R3CalculateTime()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404e9c90L))();
        };
        void R3ClearFrameBuffer()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1405141e0L))();
        };
        int32_t R3ConfirmDevice(struct _D3DCAPS8* arg_0, uint32_t arg_1, _D3DFORMAT arg_2)
        {
            using org_ptr = int32_t (WINAPIV*)(struct _D3DCAPS8*, uint32_t, _D3DFORMAT);
            return (org_ptr(0x1404e9fa0L))(arg_0, arg_1, arg_2);
        };
        int32_t R3DeleteDevice()
        {
            using org_ptr = int32_t (WINAPIV*)();
            return (org_ptr(0x1404e9fd0L))();
        };
        void R3Draw2DLine(float* arg_0, float* arg_1, uint32_t arg_2)
        {
            using org_ptr = void (WINAPIV*)(float*, float*, uint32_t);
            (org_ptr(0x1404f17f0L))(arg_0, arg_1, arg_2);
        };
        void R3Draw2DLineList(float** arg_0, uint32_t arg_1, uint32_t arg_2)
        {
            using org_ptr = void (WINAPIV*)(float**, uint32_t, uint32_t);
            (org_ptr(0x1404f1930L))(arg_0, arg_1, arg_2);
        };
        void R3DrawLine(float* arg_0, float* arg_1, uint32_t arg_2)
        {
            using org_ptr = void (WINAPIV*)(float*, float*, uint32_t);
            (org_ptr(0x1404f1740L))(arg_0, arg_1, arg_2);
        };
        void R3EndScene()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140514370L))();
        };
        void R3EnvironmentQuake(float arg_0, float arg_1)
        {
            using org_ptr = void (WINAPIV*)(float, float);
            (org_ptr(0x140507240L))(arg_0, arg_1);
        };
        void R3EnvironmentShake(float arg_0, float arg_1)
        {
            using org_ptr = void (WINAPIV*)(float, float);
            (org_ptr(0x140506cd0L))(arg_0, arg_1);
        };
        void R3EnvironmentShakeOff()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140506d10L))();
        };
        int64_t R3EnvironmentShakeState()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x140506d20L))();
        };
        void R3FlyMove(float arg_0, float* arg_1)
        {
            using org_ptr = void (WINAPIV*)(float, float*);
            (org_ptr(0x140512da0L))(arg_0, arg_1);
        };
        void R3FlyMoveSetPos(float* arg_0)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x140512d70L))(arg_0);
        };
        float R3GetLoopTime()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x1404e9e10L))();
        };
        void R3GetPreAniTextureId(char* arg_0, char* arg_1, int32_t* arg_2, int32_t* arg_3)
        {
            using org_ptr = void (WINAPIV*)(char*, char*, int32_t*, int32_t*);
            (org_ptr(0x140501450L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t R3GetPreTextureId(char* arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(char*);
            return (org_ptr(0x140501020L))(arg_0);
        };
        void R3GetQuakeMatrix(float** arg_0)
        {
            using org_ptr = void (WINAPIV*)(float**);
            (org_ptr(0x140506bc0L))(arg_0);
        };
        void R3GetQuakeVector(float* arg_0)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x140506f80L))(arg_0);
        };
        void R3GetShakeVector(float* arg_0)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x140506d30L))(arg_0);
        };
        struct IDirect3DTexture8* R3GetSurface(int arg_0)
        {
            using org_ptr = struct IDirect3DTexture8* (WINAPIV*)(int);
            return (org_ptr(0x140501760L))(arg_0);
        };
        R3Texture* R3GetTexInfoR3T(char* arg_0, uint32_t arg_1)
        {
            using org_ptr = R3Texture* (WINAPIV*)(char*, uint32_t);
            return (org_ptr(0x140500c60L))(arg_0, arg_1);
        };
        char* R3GetTexName(int arg_0)
        {
            using org_ptr = char* (WINAPIV*)(int);
            return (org_ptr(0x140500ff0L))(arg_0);
        };
        float R3GetTime()
        {
            using org_ptr = float (WINAPIV*)();
            return (org_ptr(0x1404e9e30L))();
        };
        int32_t R3GetToggle15fps()
        {
            using org_ptr = int32_t (WINAPIV*)();
            return (org_ptr(0x1404e9ba0L))();
        };
        int32_t R3GetToggle30fps()
        {
            using org_ptr = int32_t (WINAPIV*)();
            return (org_ptr(0x1404e9b30L))();
        };
        int32_t R3GetToggle7fps()
        {
            using org_ptr = int32_t (WINAPIV*)();
            return (org_ptr(0x1404e9c10L))();
        };
        void R3GetViewPort(int32_t* arg_0, int32_t* arg_1, int32_t* arg_2, int32_t* arg_3)
        {
            using org_ptr = void (WINAPIV*)(int32_t*, int32_t*, int32_t*, int32_t*);
            (org_ptr(0x1404e9ff0L))(arg_0, arg_1, arg_2, arg_3);
        };
        int32_t R3InitDevice(struct IDirect3DDevice8* arg_0, int arg_1, int arg_2)
        {
            using org_ptr = int32_t (WINAPIV*)(struct IDirect3DDevice8*, int, int);
            return (org_ptr(0x1404e9f60L))(arg_0, arg_1, arg_2);
        };
        int32_t R3InvalidateDevice()
        {
            using org_ptr = int32_t (WINAPIV*)();
            return (org_ptr(0x1404e9fc0L))();
        };
        struct IDirect3DTexture8* R3LoadDDS(char* arg_0, uint32_t arg_1, uint32_t arg_2, uint32_t arg_3)
        {
            using org_ptr = struct IDirect3DTexture8* (WINAPIV*)(char*, uint32_t, uint32_t, uint32_t);
            return (org_ptr(0x140502010L))(arg_0, arg_1, arg_2, arg_3);
        };
        struct IDirect3DTexture8* R3LoadDDSAndTextureMem(char* arg_0, uint32_t arg_1)
        {
            using org_ptr = struct IDirect3DTexture8* (WINAPIV*)(char*, uint32_t);
            return (org_ptr(0x140500180L))(arg_0, arg_1);
        };
        struct IDirect3DTexture8* R3LoadDDSFromFP(FILE* File, size_t Size, uint32_t arg_0, uint32_t arg_1, uint32_t arg_2)
        {
            using org_ptr = struct IDirect3DTexture8* (WINAPIV*)(FILE*, size_t, uint32_t, uint32_t, uint32_t);
            return (org_ptr(0x140500010L))(File, Size, arg_0, arg_1, arg_2);
        };
        void R3LoadTextTexture()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140510cc0L))();
        };
        void R3LoadTextureMem(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x140502120L))(arg_0);
        };
        void R3MouseInput()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050b660L))();
        };
        struct D3DXMATRIX* R3MoveGetViewMatrix()
        {
            using org_ptr = struct D3DXMATRIX* (WINAPIV*)();
            return (org_ptr(0x1405131b0L))();
        };
        void R3MsgProc(HWND arg_0, unsigned int arg_1, uint64_t arg_2, int64_t arg_3)
        {
            using org_ptr = void (WINAPIV*)(HWND, unsigned int, uint64_t, int64_t);
            (org_ptr(0x1404ea020L))(arg_0, arg_1, arg_2, arg_3);
        };
        void R3ReleaseAllTextures()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1405020b0L))();
        };
        void R3ReleasePreTextures()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1405015b0L))();
        };
        void R3ReleaseTextTexture()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140510e50L))();
        };
        void R3ReleaseTextureMem(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x140501610L))(arg_0);
        };
        void R3RestoreAllTextures()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140502270L))();
        };
        int32_t R3RestoreDevice()
        {
            using org_ptr = int32_t (WINAPIV*)();
            return (org_ptr(0x1404e9fb0L))();
        };
        void R3SetCameraMatrix(float* arg_0, float** arg_1)
        {
            using org_ptr = void (WINAPIV*)(float*, float**);
            (org_ptr(0x1405131c0L))(arg_0, arg_1);
        };
        void R3SetLoopTime(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x1404e9e20L))(arg_0);
        };
        void R3SetMinFPS(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x1404e9e50L))(arg_0);
        };
        void R3SetTime(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x1404e9e40L))(arg_0);
        };
        void R3SetViewPort(int32_t arg_0, int32_t arg_1, int32_t arg_2, int32_t arg_3)
        {
            using org_ptr = void (WINAPIV*)(int32_t, int32_t, int32_t, int32_t);
            (org_ptr(0x1404e9fe0L))(arg_0, arg_1, arg_2, arg_3);
        };
        uint8_t* RGBFromDWORDAligned(uint8_t* arg_0, unsigned int arg_1, unsigned int arg_2, unsigned int arg_3)
        {
            using org_ptr = uint8_t* (WINAPIV*)(uint8_t*, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140510bf0L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t RGBToJpegFile(char* arg_0, uint8_t* arg_1, unsigned int arg_2, unsigned int arg_3, int arg_4, int arg_5)
        {
            using org_ptr = int64_t (WINAPIV*)(char*, uint8_t*, unsigned int, unsigned int, int, int);
            return (org_ptr(0x140510bc0L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
        };
        void RTMoiveGetCameraMatrix(float** arg_0)
        {
            using org_ptr = void (WINAPIV*)(float**);
            (org_ptr(0x1404ffde0L))(arg_0);
        };
        void RTMoiveGetCameraPos(float* arg_0)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x1404ffdd0L))(arg_0);
        };
        void RTMovieAddState(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x1404ffe10L))(arg_0);
        };
        void RTMovieCreate(char* arg_0, struct CLevel* arg_1)
        {
            using org_ptr = void (WINAPIV*)(char*, struct CLevel*);
            (org_ptr(0x1404ffd50L))(arg_0, arg_1);
        };
        void RTMovieFrameMove()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ffd70L))();
        };
        uint32_t RTMovieGetState()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x1404ffdb0L))();
        };
        void RTMoviePause(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x1404ffdf0L))(arg_0);
        };
        void RTMovieRelease()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ffd60L))();
        };
        void RTMovieRender()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ffd80L))();
        };
        void RTMovieSetState(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x1404ffda0L))(arg_0);
        };
        void RTMovieSkipShadowState(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x1404ffd90L))(arg_0);
        };
        void RTMovieStartPlay(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x1404ffdc0L))(arg_0);
        };
        void RTMovieSubState(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x1404ffe20L))(arg_0);
        };
        void* ReAlloc(void* arg_0, int arg_1, int arg_2)
        {
            using org_ptr = void* (WINAPIV*)(void*, int, int);
            return (org_ptr(0x1404ec440L))(arg_0, arg_1, arg_2);
        };
        void ReLoadMaterial(char* arg_0, struct _R3MATERIAL* arg_1)
        {
            using org_ptr = void (WINAPIV*)(char*, struct _R3MATERIAL*);
            (org_ptr(0x140504720L))(arg_0, arg_1);
        };
        void ReMoveCamera(_MOVE_CAMERA* arg_0)
        {
            using org_ptr = void (WINAPIV*)(_MOVE_CAMERA*);
            (org_ptr(0x1405298a0L))(arg_0);
        };
        void ReleaesR3MP3()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050f670L))();
        };
        void ReleaesStreamR3MP3()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050f750L))();
        };
        void ReleaseAllSpriteTexMem()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140501cb0L))();
        };
        void ReleaseBlurShader()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140516310L))();
        };
        void ReleaseBlurVBuffer()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140509810L))();
        };
        void ReleaseConsole()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140511a60L))();
        };
        void ReleaseCore()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404edcd0L))();
        };
        void ReleaseFullScreenEffect()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140514190L))();
        };
        void ReleaseFunctionKey()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140511dd0L))();
        };
        void ReleaseJmalloc()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ec1c0L))();
        };
        void ReleaseLightMap()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140502480L))();
        };
        void ReleaseMainMaterial()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140504a20L))();
        };
        void ReleaseR3Engine()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404e9f10L))();
        };
        void ReleaseR3Particle()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140516f40L))();
        };
        void ReleaseR3SoundSystem()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050f5f0L))();
        };
        void ReleaseR3Text()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140510c60L))();
        };
        void ReleaseSpriteManager(CSprite* arg_0)
        {
            using org_ptr = void (WINAPIV*)(CSprite*);
            (org_ptr(0x140501dc0L))(arg_0);
        };
        void ReleaseSpriteManager()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140501bb0L))();
        };
        void ReleaseSubMaterial(struct _R3MATERIAL* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct _R3MATERIAL*);
            (org_ptr(0x140504a00L))(arg_0);
        };
        void ReleaseSystemTexture()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140501710L))();
        };
        void ReleaseVertexShaderList()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140516e30L))();
        };
        void ReleaseWaveList()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050f610L))();
        };
        void ReleaseWebBrowser()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404eceb0L))();
        };
        void ResetTexMemSize()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ffe60L))();
        };
        void ResetTotalVertexBufferInfo()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050c500L))();
        };
        void ResetVertexBufferCache()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050bfe0L))();
        };
        void RestoreAllSpriteTexMem()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140501c40L))();
        };
        void RestoreSpriteManager(struct CSprite* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*);
            (org_ptr(0x140501d20L))(arg_0);
        };
        void RestoreSystemTexture()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1405021f0L))();
        };
        void Rijndael_VC60Workaround()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140660660L))();
        };
        unsigned int RotateLeftBits(unsigned int x, unsigned int n)
        {
            using org_ptr = unsigned int (WINAPIV*)(unsigned int, unsigned int);
            return (org_ptr(0x140443c80L))(x, n);
        };
        void Round1(unsigned int* output, unsigned int x, unsigned int y, unsigned int z, unsigned int decode, unsigned int bits, unsigned int AC)
        {
            using org_ptr = void (WINAPIV*)(unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
            (org_ptr(0x140443b90L))(output, x, y, z, decode, bits, AC);
        };
        void Round2(unsigned int* output, unsigned int x, unsigned int y, unsigned int z, unsigned int decode, unsigned int bits, unsigned int AC)
        {
            using org_ptr = void (WINAPIV*)(unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
            (org_ptr(0x140443cc0L))(output, x, y, z, decode, bits, AC);
        };
        void Round3(unsigned int* output, unsigned int x, unsigned int y, unsigned int z, unsigned int decode, unsigned int bits, unsigned int AC)
        {
            using org_ptr = void (WINAPIV*)(unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
            (org_ptr(0x140443db0L))(output, x, y, z, decode, bits, AC);
        };
        void Round4(unsigned int* output, unsigned int x, unsigned int y, unsigned int z, unsigned int decode, unsigned int bits, unsigned int AC)
        {
            using org_ptr = void (WINAPIV*)(unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
            (org_ptr(0x140443e90L))(output, x, y, z, decode, bits, AC);
        };
        void SaveBMP(char* Filename, int64_t arg_0, int arg_1, int arg_2, uint8_t* arg_3)
        {
            using org_ptr = void (WINAPIV*)(char*, int64_t, int, int, uint8_t*);
            (org_ptr(0x1404e97e0L))(Filename, arg_0, arg_1, arg_2, arg_3);
        };
        void SaveJPG(char* arg_0, int arg_1, int arg_2, int arg_3, uint8_t* arg_4)
        {
            using org_ptr = void (WINAPIV*)(char*, int, int, int, uint8_t*);
            (org_ptr(0x1404e99f0L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        int64_t ScanCodeToVKCode(int arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(int);
            return (org_ptr(0x14050b510L))(arg_0);
        };
        struct CUserDB* SearchAvatorWithCMS(struct CUserDB* pList, int nMax, char* pCMS)
        {
            using org_ptr = struct CUserDB* (WINAPIV*)(struct CUserDB*, int, char*);
            return (org_ptr(0x14011b610L))(pList, nMax, pCMS);
        };
        struct CUserDB* SearchAvatorWithName(struct CUserDB* pList, int nMax, char* pwszName)
        {
            using org_ptr = struct CUserDB* (WINAPIV*)(struct CUserDB*, int, char*);
            return (org_ptr(0x14011b4f0L))(pList, nMax, pwszName);
        };
        struct CMonster* SearchEmptyMonster(bool bWithoutFail)
        {
            using org_ptr = struct CMonster* (WINAPIV*)(bool);
            return (org_ptr(0x140148f20L))(bWithoutFail);
        };
        SearchJobCommandFn_ret SearchJobCommandFn(char* pszCommand)
        {
            using org_ptr = SearchJobCommandFn_ret (WINAPIV*)(char*);
            return (org_ptr(0x140273200L))(pszCommand);
        };
        SearchMissionCommandFn_ret SearchMissionCommandFn(char* pszCommand)
        {
            using org_ptr = SearchMissionCommandFn_ret (WINAPIV*)(char*);
            return (org_ptr(0x140273160L))(pszCommand);
        };
        SearchQuestCommandFn_ret SearchQuestCommandFn(char* pszCommand)
        {
            using org_ptr = SearchQuestCommandFn_ret (WINAPIV*)(char*);
            return (org_ptr(0x1402730c0L))(pszCommand);
        };
        unsigned int SendLoop(void* pVoid)
        {
            using org_ptr = unsigned int (WINAPIV*)(void*);
            return (org_ptr(0x140319840L))(pVoid);
        };
        void SendMsg_EconomyDataToWeb()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1402a5110L))();
        };
        struct CDarkHole* SerarchEmptyDarkHole()
        {
            using org_ptr = struct CDarkHole* (WINAPIV*)();
            return (org_ptr(0x140164430L))();
        };
        void ServerProgramExit(char* pszCall, bool bSave)
        {
            using org_ptr = void (WINAPIV*)(char*, bool);
            (org_ptr(0x1401fabc0L))(pszCall, bSave);
        };
        void SetConsoleStateB(int arg_0, int arg_1)
        {
            using org_ptr = void (WINAPIV*)(int, int);
            (org_ptr(0x140511ac0L))(arg_0, arg_1);
        };
        void SetContrast(float* arg_0)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x1404ec6e0L))(arg_0);
        };
        void SetContrast(uint8_t* Src)
        {
            using org_ptr = void (WINAPIV*)(uint8_t*);
            (org_ptr(0x1404ec700L))(Src);
        };
        void SetDDSTexNameDebug(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x1405017a0L))(arg_0);
        };
        void SetDDSTexSizeDebug(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x140501790L))(arg_0);
        };
        void SetDefaultFlags()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050ba30L))();
        };
        void SetDefaultFov()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050b030L))();
        };
        void SetDetailTexVS(struct D3DXMATRIX* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct D3DXMATRIX*);
            (org_ptr(0x140515d40L))(arg_0);
        };
        void SetDynamicLight(float* arg_0, float arg_1, uint32_t arg_2, void* arg_3, int arg_4, uint32_t arg_5)
        {
            using org_ptr = void (WINAPIV*)(float*, float, uint32_t, void*, int, uint32_t);
            (org_ptr(0x1404f0460L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
        };
        void SetErrorButRunMessageProc(void (WINAPIV* arg_0)(char*))
        {
            using org_ptr = void (WINAPIV*)(void (WINAPIV*)(char*));
            (org_ptr(0x140509890L))(arg_0);
        };
        void SetErrorMessageProc(void (WINAPIV* arg_0)(char*))
        {
            using org_ptr = void (WINAPIV*)(void (WINAPIV*)(char*));
            (org_ptr(0x140509870L))(arg_0);
        };
        void SetFadeFactor(uint32_t arg_0, float arg_1, void* arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, float, void*);
            (org_ptr(0x140507570L))(arg_0, arg_1, arg_2);
        };
        void SetFadeIn(uint32_t arg_0, float arg_1, float arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, float, float);
            (org_ptr(0x140507630L))(arg_0, arg_1, arg_2);
        };
        void SetFadeOut(uint32_t arg_0, float arg_1, float arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, float, float);
            (org_ptr(0x140507680L))(arg_0, arg_1, arg_2);
        };
        void SetFadeSky(uint32_t arg_0, float arg_1)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, float);
            (org_ptr(0x1405083c0L))(arg_0, arg_1);
        };
        void SetFadeTex(uint32_t arg_0, float arg_1, void* arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, float, void*);
            (org_ptr(0x140508650L))(arg_0, arg_1, arg_2);
        };
        void SetFov(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x14050afd0L))(arg_0);
        };
        void SetFreePointer()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ec2a0L))();
        };
        void SetFrustumNormalPlane()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404ec760L))();
        };
        void SetGamma(float arg_0, int arg_1)
        {
            using org_ptr = void (WINAPIV*)(float, int);
            (org_ptr(0x1404ecf10L))(arg_0, arg_1);
        };
        int64_t SetGlobalMusicVolume(float arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(float);
            return (org_ptr(0x14050f640L))(arg_0);
        };
        int64_t SetGlobalWavVolume(float arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(float);
            return (org_ptr(0x14050f620L))(arg_0);
        };
        void SetGrassVS(float arg_0, float* arg_1, float arg_2, uint32_t arg_3)
        {
            using org_ptr = void (WINAPIV*)(float, float*, float, uint32_t);
            (org_ptr(0x1405158e0L))(arg_0, arg_1, arg_2, arg_3);
        };
        void SetLightMap(int32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(int32_t);
            (org_ptr(0x1404edf30L))(arg_0);
        };
        void SetLitGrassVS(float arg_0, float* arg_1, float arg_2, uint32_t arg_3, float* arg_4)
        {
            using org_ptr = void (WINAPIV*)(float, float*, float, uint32_t, float*);
            (org_ptr(0x140515ae0L))(arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        void SetMainLight(float* arg_0)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x1404ec4c0L))(arg_0);
        };
        void SetMatAlphaColor(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x1404f02e0L))(arg_0);
        };
        void SetMergeFileManager(struct CMergeFileManager* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CMergeFileManager*);
            (org_ptr(0x14050a9a0L))(arg_0);
        };
        void SetMotionBlurLength(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x1405149e0L))(arg_0);
        };
        void SetMultiLayerCamera(float* arg_0)
        {
            using org_ptr = void (WINAPIV*)(float*);
            (org_ptr(0x14050f870L))(arg_0);
        };
        void SetMultiLayerTime(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x14050f850L))(arg_0);
        };
        void SetNoLodTextere()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140504a60L))();
        };
        void SetNowR3D3DTexCnt(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x140500290L))(arg_0);
        };
        void SetNowR3TexCnt(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x1405002e0L))(arg_0);
        };
        void SetOpStack(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x140511a20L))(arg_0);
        };
        void SetOutLineColor(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x140511340L))(arg_0);
        };
        void SetOutLineColorFont16(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x140511360L))(arg_0);
        };
        void SetOutLineColorFont24(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x140511380L))(arg_0);
        };
        void SetPlayMusicState(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x14050f6c0L))(arg_0);
        };
        void SetPlayWaveState(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x14050f6b0L))(arg_0);
        };
        void SetProjectShadow(float* arg_0, void* arg_1, float arg_2, uint32_t arg_3, float arg_4, float arg_5)
        {
            using org_ptr = void (WINAPIV*)(float*, void*, float, uint32_t, float, float);
            (org_ptr(0x1404f0ba0L))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
        };
        void SetR3D3DTexture(uint32_t arg_0, uint32_t arg_1)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, uint32_t);
            (org_ptr(0x140501e60L))(arg_0, arg_1);
        };
        void SetR3TexManageFlag(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x140500c40L))(arg_0);
        };
        void SetR3TextFont(char* Source, uint32_t arg_0, uint32_t arg_1, uint32_t arg_2)
        {
            using org_ptr = void (WINAPIV*)(char*, uint32_t, uint32_t, uint32_t);
            (org_ptr(0x140510c70L))(Source, arg_0, arg_1, arg_2);
        };
        void SetReLoadState(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x140502680L))(arg_0);
        };
        void SetReflectionState(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x1404ee820L))(arg_0);
        };
        void SetReflectionVS()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140515ea0L))();
        };
        void SetSkipOneBboShasi1(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x1405143e0L))(arg_0);
        };
        int64_t SetSkyVS()
        {
            using org_ptr = int64_t (WINAPIV*)();
            return (org_ptr(0x140515aa0L))();
        };
        void SetStateFullScreenEffect(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x140514cd0L))(arg_0);
        };
        void SetTextureRenderTargetFrameBuffer(int arg_0)
        {
            using org_ptr = void (WINAPIV*)(int);
            (org_ptr(0x140513fb0L))(arg_0);
        };
        void SetTimerRate(float arg_0)
        {
            using org_ptr = void (WINAPIV*)(float);
            (org_ptr(0x1404e9c80L))(arg_0);
        };
        void SetTransformClipInfo(float arg_0, float arg_1, float arg_2, float arg_3)
        {
            using org_ptr = void (WINAPIV*)(float, float, float, float);
            (org_ptr(0x1404eb380L))(arg_0, arg_1, arg_2, arg_3);
        };
        void SetVPIPTex1(void* arg_0, void* arg_1)
        {
            using org_ptr = void (WINAPIV*)(void*, void*);
            (org_ptr(0x14050c000L))(arg_0, arg_1);
        };
        void SetVPIPTex1IndexPrimitive(void* arg_0, void* arg_1)
        {
            using org_ptr = void (WINAPIV*)(void*, void*);
            (org_ptr(0x14050c150L))(arg_0, arg_1);
        };
        void SetVPIPTex1IndexPrimitiveTL(void* arg_0, void* arg_1)
        {
            using org_ptr = void (WINAPIV*)(void*, void*);
            (org_ptr(0x14050c120L))(arg_0, arg_1);
        };
        void SetVPIPTex2(void* arg_0, void* arg_1)
        {
            using org_ptr = void (WINAPIV*)(void*, void*);
            (org_ptr(0x14050c090L))(arg_0, arg_1);
        };
        void SetViewPortArea(int32_t arg_0, int32_t arg_1, int32_t arg_2, int32_t arg_3)
        {
            using org_ptr = void (WINAPIV*)(int32_t, int32_t, int32_t, int32_t);
            (org_ptr(0x14050b3f0L))(arg_0, arg_1, arg_2, arg_3);
        };
        int64_t SetVolumeMP3(float arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(float);
            return (org_ptr(0x14050f6a0L))(arg_0);
        };
        int64_t SetVolumeStreamMP3(float arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(float);
            return (org_ptr(0x14050f780L))(arg_0);
        };
        void SetWarningMessageProc(void (WINAPIV* arg_0)(char*))
        {
            using org_ptr = void (WINAPIV*)(void (WINAPIV*)(char*));
            (org_ptr(0x140509880L))(arg_0);
        };
        void SetWaveVolAndPan(uint32_t arg_0, float arg_1, float arg_2)
        {
            using org_ptr = void (WINAPIV*)(uint32_t, float, float);
            (org_ptr(0x14050f6f0L))(arg_0, arg_1, arg_2);
        };
        void SetWorldViewMatrixVS(float** arg_0)
        {
            using org_ptr = void (WINAPIV*)(float**);
            (org_ptr(0x140515870L))(arg_0);
        };
        void ShadowBeginScene()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1405143f0L))();
        };
        void ShadowEndScene()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140514430L))();
        };
        void ShortToFloat(int16_t* pShort, float* pFloat, int size)
        {
            using org_ptr = void (WINAPIV*)(int16_t*, float*, int);
            (org_ptr(0x14043b1e0L))(pShort, pFloat, size);
        };
        float SmoothedNoise1(int32_t arg_0)
        {
            using org_ptr = float (WINAPIV*)(int32_t);
            return (org_ptr(0x140523580L))(arg_0);
        };
        float SmoothedNoise1(int32_t arg_0, int32_t arg_1)
        {
            using org_ptr = float (WINAPIV*)(int32_t, int32_t);
            return (org_ptr(0x140523710L))(arg_0, arg_1);
        };
        uint64_t SplitString(char* strSrc, char* _Delim, struct std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >* stringlist)
        {
            using org_ptr = uint64_t (WINAPIV*)(char*, char*, struct std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >*);
            return (org_ptr(0x1404189a0L))(strSrc, _Delim, stringlist);
        };
        void StopR3MP3()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050f690L))();
        };
        void StopStreamR3MP3()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050f770L))();
        };
        void StopWave(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(uint32_t);
            (org_ptr(0x14050f6e0L))(arg_0);
        };
        void StripEXT(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x1404e9110L))(arg_0);
        };
        void StripFinalPath(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x1404e94a0L))(arg_0);
        };
        void StripName(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x1404e9240L))(arg_0);
        };
        void StripPath(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x1404e9160L))(arg_0);
        };
        void TestAllGroup(void* arg_0, void* arg_1, int arg_2, int arg_3)
        {
            using org_ptr = void (WINAPIV*)(void*, void*, int, int);
            (org_ptr(0x1404f1a80L))(arg_0, arg_1, arg_2, arg_3);
        };
        void TestWriteFile(char* arg_0, char* arg_1)
        {
            using org_ptr = void (WINAPIV*)(char*, char*);
            (org_ptr(0x1404e9600L))(arg_0, arg_1);
        };
        void TextureCopy(struct CTextureRender* _this, void* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CTextureRender*, void*);
            (org_ptr(0x140515300L))(_this, arg_0);
        };
        void TextureSplatting(struct _BSP_MAT_GROUP* arg_0, int arg_1)
        {
            using org_ptr = void (WINAPIV*)(struct _BSP_MAT_GROUP*, int);
            (org_ptr(0x1404ef880L))(arg_0, arg_1);
        };
        int64_t TransformVertex(float* arg_0, float** arg_1, float* arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float**, float*);
            return (org_ptr(0x1404eb3c0L))(arg_0, arg_1, arg_2);
        };
        int64_t TransformVertex(float* arg_0, float** arg_1, float* arg_2, float* arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(float*, float**, float*, float*);
            return (org_ptr(0x1404eb530L))(arg_0, arg_1, arg_2, arg_3);
        };
        void UnLightMappingTex1()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404efb90L))();
        };
        void UnSetDynamicLight()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404f0a30L))();
        };
        void UnSetMatAlphaColor()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404f0400L))();
        };
        void UnSetProjectedShadow()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404f1070L))();
        };
        void UnTextureSplatting()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1404efa80L))();
        };
        void UpdateStreamMP3()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14050f7f0L))();
        };
        void Vector3fTransform(float* arg_0, float* arg_1, float** arg_2)
        {
            using org_ptr = void (WINAPIV*)(float*, float*, float**);
            (org_ptr(0x1404eb670L))(arg_0, arg_1, arg_2);
        };
        int64_t VertFlipBuf(uint8_t* arg_0, unsigned int arg_1, unsigned int arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(uint8_t*, unsigned int, unsigned int);
            return (org_ptr(0x140510c00L))(arg_0, arg_1, arg_2);
        };
        bool W2M(char* lpwStr, char* szTran, unsigned int wTranBuffSize)
        {
            using org_ptr = bool (WINAPIV*)(char*, char*, unsigned int);
            return (org_ptr(0x1401e13f0L))(lpwStr, szTran, wTranBuffSize);
        };
        bool WCHARTOMULTI(wchar_t* lpwStr, char* szTran, unsigned int wTranBuffSize)
        {
            using org_ptr = bool (WINAPIV*)(wchar_t*, char*, unsigned int);
            return (org_ptr(0x1401e14e0L))(lpwStr, szTran, wTranBuffSize);
        };
        void Warning(char* arg_0, char* arg_1)
        {
            using org_ptr = void (WINAPIV*)(char*, char*);
            (org_ptr(0x140509b00L))(arg_0, arg_1);
        };
        int64_t WndProc(HWND arg_0, unsigned int arg_1, uint64_t arg_2, int64_t arg_3)
        {
            using org_ptr = int64_t (WINAPIV*)(HWND, unsigned int, uint64_t, int64_t);
            return (org_ptr(0x140523ac0L))(arg_0, arg_1, arg_2, arg_3);
        };
        void WriteCheatLog(char* pwszCommand, struct CPlayer* pOne)
        {
            using org_ptr = void (WINAPIV*)(char*, struct CPlayer*);
            (org_ptr(0x14028f480L))(pwszCommand, pOne);
        };
        bool WriteLogFileLong(char* pszFileName, char* log)
        {
            using org_ptr = bool (WINAPIV*)(char*, char*);
            return (org_ptr(0x14043b7b0L))(pszFileName, log);
        };
        void WriteServerStartHistory(char* fmt)
        {
            using org_ptr = void (WINAPIV*)(char*);
            (org_ptr(0x1401facf0L))(fmt);
        };
        bool WriteTableData(int nItemNum, struct CRecordData* pItemData, bool bUseHash, char* szErrCode)
        {
            using org_ptr = bool (WINAPIV*)(int, struct CRecordData*, bool, char*);
            return (org_ptr(0x140036830L))(nItemNum, pItemData, bUseHash, szErrCode);
        };
        bool WriteTableDataPart(int nTableCode, struct CRecordData* pItemData, char* szErrCode)
        {
            using org_ptr = bool (WINAPIV*)(int, struct CRecordData*, char*);
            return (org_ptr(0x140036a60L))(nTableCode, pItemData, szErrCode);
        };
        int _AfxInitManaged()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x1400266e0L))();
        };
        int _CalcPayExgRatePerRace(float* pfAvrTradeMoney, int nRaceCode)
        {
            using org_ptr = int (WINAPIV*)(float*, int);
            return (org_ptr(0x1402a4e90L))(pfAvrTradeMoney, nRaceCode);
        };
        void _CcrFG_rs_CloseUserContext(void** arg_0)
        {
            using org_ptr = void (WINAPIV*)(void**);
            (org_ptr(0x14066d79cL))(arg_0);
        };
        void* _CcrFG_rs_CreateUserContext(uint32_t arg_0, uint8_t* arg_1, uint32_t arg_2, uint8_t* arg_3, uint32_t arg_4, uint32_t arg_5, void* arg_6)
        {
            using org_ptr = void* (WINAPIV*)(uint32_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t, void*);
            return (org_ptr(0x14066d78aL))(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6);
        };
        int _CcrFG_rs_DecryptPacket(void* arg_0, uint8_t* arg_1, int arg_2)
        {
            using org_ptr = int (WINAPIV*)(void*, uint8_t*, int);
            return (org_ptr(0x14066d7c0L))(arg_0, arg_1, arg_2);
        };
        int _CcrFG_rs_EncryptPacket(void* arg_0, uint8_t* arg_1, int arg_2)
        {
            using org_ptr = int (WINAPIV*)(void*, uint8_t*, int);
            return (org_ptr(0x14066d7d2L))(arg_0, arg_1, arg_2);
        };
        uint32_t _CcrFG_rs_GetLastError()
        {
            using org_ptr = uint32_t (WINAPIV*)();
            return (org_ptr(0x14066d7aeL))();
        };
        int _CcrFG_rs_Initialize(int (WINAPIV* arg_0)(int32_t, void*, void*, int, void*), uint8_t* arg_1, uint32_t arg_2)
        {
            using org_ptr = int (WINAPIV*)(int (WINAPIV*)(int32_t, void*, void*, int, void*), uint8_t*, uint32_t);
            return (org_ptr(0x14066d7f6L))(arg_0, arg_1, arg_2);
        };
        void _CcrFG_rs_Uninitialize()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x14066d7e4L))();
        };
        int _CheckCumulativeSF(char byEffectCode, unsigned int dwEffectIndex, int* nCumulMax, int* nEffectCount, char** pstrLinkCode)
        {
            using org_ptr = int (WINAPIV*)(char, unsigned int, int*, int*, char**);
            return (org_ptr(0x140173c20L))(byEffectCode, dwEffectIndex, nCumulMax, nEffectCount, pstrLinkCode);
        };
        bool _CheckDestMonsterLimitLv(int MyLevel, int iDstLevel, char byID)
        {
            using org_ptr = bool (WINAPIV*)(int, int, char);
            return (org_ptr(0x140099540L))(MyLevel, iDstLevel, byID);
        };
        bool _CheckPotionData(struct _CheckPotion_fld::_CheckEffectCode* CheckEffectNode, struct CPlayer* pApplyPlayer)
        {
            using org_ptr = bool (WINAPIV*)(struct _CheckPotion_fld::_CheckEffectCode*, struct CPlayer*);
            return (org_ptr(0x14039e2b0L))(CheckEffectNode, pApplyPlayer);
        };
        bool _CheckSameItem(char* strLinkItem, char* strDst, char* bySelectLinkIndex, bool bStuff)
        {
            using org_ptr = bool (WINAPIV*)(char*, char*, char*, bool);
            return (org_ptr(0x1402ae220L))(strLinkItem, strDst, bySelectLinkIndex, bStuff);
        };
        int _Check_SF_UseType(struct _base_fld* pFld, int nEffectType)
        {
            using org_ptr = int (WINAPIV*)(struct _base_fld*, int);
            return (org_ptr(0x140155e90L))(pFld, nEffectType);
        };
        void _CreateLootingNovusItem(char* strItemCode, char* strMapName, struct LuaParam3 Pos, struct LuaParam3 vParam)
        {
            using org_ptr = void (WINAPIV*)(char*, char*, struct LuaParam3, struct LuaParam3);
            (org_ptr(0x140406120L))(strItemCode, strMapName, Pos, vParam);
        };
        struct CMonster* _CreateMon(char* strMapName, char* MonCode, float fX, float fY, float fZ)
        {
            using org_ptr = struct CMonster* (WINAPIV*)(char*, char*, float, float, float);
            return (org_ptr(0x140406260L))(strMapName, MonCode, fX, fY, fZ);
        };
        HRESULT _DbgOut(char* strFile, unsigned int dwLine, HRESULT hr, char* strMsg)
        {
            using org_ptr = HRESULT (WINAPIV*)(char*, unsigned int, HRESULT, char*);
            return (org_ptr(0x140437210L))(strFile, dwLine, hr, strMsg);
        };
        void _DeleteExceptionPtr(__ExceptionPtr* arg_0)
        {
            using org_ptr = void (WINAPIV*)(__ExceptionPtr*);
            (org_ptr(0x140543df0L))(arg_0);
        };
        bool _FailItemShortBuffer(int* nBuffer, char byMtSlotNum, struct _ItemCombine_exp_fld::_material* pMtlList, struct _STORAGE_LIST::_db_con** pMt_Sv_Inv)
        {
            using org_ptr = bool (WINAPIV*)(int*, char, struct _ItemCombine_exp_fld::_material*, struct _STORAGE_LIST::_db_con**);
            return (org_ptr(0x1402ac160L))(nBuffer, byMtSlotNum, pMtlList, pMt_Sv_Inv);
        };
        struct CLuaEventMgr* _GetLuaEventMgr()
        {
            using org_ptr = struct CLuaEventMgr* (WINAPIV*)();
            return (org_ptr(0x1404060f0L))();
        };
        uint16_t _GetMonsterContTime(char byEffectCode, char byLv)
        {
            using org_ptr = uint16_t (WINAPIV*)(char, char);
            return (org_ptr(0x140147560L))(byEffectCode, byLv);
        };
        bool _GetTempEffectValue(struct _skill_fld* pEffectFld, int nTempEffectType, float* fValue)
        {
            using org_ptr = bool (WINAPIV*)(struct _skill_fld*, int, float*);
            return (org_ptr(0x14039e250L))(pEffectFld, nTempEffectType, fValue);
        };
        struct _trand_tbl* _GetTransTBL(int nState)
        {
            using org_ptr = struct _trand_tbl* (WINAPIV*)(int);
            return (org_ptr(0x14027c050L))(nState);
        };
        bool _IsXmasSnowEffect(struct _sf_continous* pSFCont)
        {
            using org_ptr = bool (WINAPIV*)(struct _sf_continous*);
            return (org_ptr(0x140053ce0L))(pSFCont);
        };
        char* _KickReason(char byReason)
        {
            using org_ptr = char* (WINAPIV*)(char);
            return (org_ptr(0x140417ce0L))(byReason);
        };
        long double _Pow_int(long double _X, int _Y)
        {
            using org_ptr = long double (WINAPIV*)(long double, int);
            return (org_ptr(0x1400d17e0L))(_X, _Y);
        };
        float _Pow_int(float _X, int _Y)
        {
            using org_ptr = float (WINAPIV*)(float, int);
            return (org_ptr(0x14007ed20L))(_X, _Y);
        };
        void _RTC_AllocaFailure(void* retaddr, struct _RTC_ALLOCA_NODE* pn, int num)
        {
            using org_ptr = void (WINAPIV*)(void*, struct _RTC_ALLOCA_NODE*, int);
            (org_ptr(0x1404ddea0L))(retaddr, pn, num);
        };
        void _RTC_Failure(void* retaddr, int errnum)
        {
            using org_ptr = void (WINAPIV*)(void*, int);
            (org_ptr(0x1404dda00L))(retaddr, errnum);
        };
        _RTC_GetErrorFunc_ret _RTC_GetErrorFunc(void* addr)
        {
            using org_ptr = _RTC_GetErrorFunc_ret (WINAPIV*)(void*);
            return (org_ptr(0x1404dd1a0L))(addr);
        };
        _RTC_GetErrorFuncW_ret _RTC_GetErrorFuncW(void* addr)
        {
            using org_ptr = _RTC_GetErrorFuncW_ret (WINAPIV*)(void*);
            return (org_ptr(0x1404dd1b0L))(addr);
        };
        int _RTC_GetSrcLine(char* address, wchar_t* source, unsigned int sourcelen, int* pline, wchar_t* moduleName, unsigned int modulelen)
        {
            using org_ptr = int (WINAPIV*)(char*, wchar_t*, unsigned int, int*, wchar_t*, unsigned int);
            return (org_ptr(0x1404de6d0L))(address, source, sourcelen, pline, moduleName, modulelen);
        };
        void _RTC_StackFailure(void* retaddr, char* varname)
        {
            using org_ptr = void (WINAPIV*)(void*, char*);
            (org_ptr(0x1404ddd90L))(retaddr, varname);
        };
        bool _ReadEconomyIniFile()
        {
            using org_ptr = bool (WINAPIV*)();
            return (org_ptr(0x1402a5040L))();
        };
        unsigned int _SearchPlayer(char* szCharName)
        {
            using org_ptr = unsigned int (WINAPIV*)(char*);
            return (org_ptr(0x1403f8710L))(szCharName);
        };
        void _UpdateNewEconomy(struct _economy_calc_data* pData)
        {
            using org_ptr = void (WINAPIV*)(struct _economy_calc_data*);
            (org_ptr(0x1402a48e0L))(pData);
        };
        void _UpdateRateSendToAllPlayer()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1402a4fb0L))();
        };
        void __ArrayUnwind(void* ptr, uint64_t size, int count, void (WINAPIV* pDtor)(void*))
        {
            using org_ptr = void (WINAPIV*)(void*, uint64_t, int, void (WINAPIV*)(void*));
            (org_ptr(0x1404dcad0L))(ptr, size, count, pDtor);
        };
        int __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS* pPtrs)
        {
            using org_ptr = int (WINAPIV*)(struct _EXCEPTION_POINTERS*);
            return (org_ptr(0x1404de230L))(pPtrs);
        };
        bool __destroy_item(struct CPlayer* pMaster, struct _combine_ex_item_result_zocl::__item* pItem, struct _STORAGE_LIST::_db_con* pSvItem, struct _combine_ex_item_request_clzo::_list* pMeterial, int nSocketIndex)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _combine_ex_item_result_zocl::__item*, struct _STORAGE_LIST::_db_con*, struct _combine_ex_item_request_clzo::_list*, int);
            return (org_ptr(0x1402ae150L))(pMaster, pItem, pSvItem, pMeterial, nSocketIndex);
        };
        char __make_item(struct CPlayer* pMaster, struct _combine_ex_item_result_zocl::__item* pItem, struct _ItemCombine_exp_fld* pfld, int nIndex, char byLinkTableIndex)
        {
            using org_ptr = char (WINAPIV*)(struct CPlayer*, struct _combine_ex_item_result_zocl::__item*, struct _ItemCombine_exp_fld*, int, char);
            return (org_ptr(0x1402aded0L))(pMaster, pItem, pfld, nIndex, byLinkTableIndex);
        };
        void clear_file(char* pszDir, unsigned int dwCutDay)
        {
            using org_ptr = void (WINAPIV*)(char*, unsigned int);
            (org_ptr(0x14043c440L))(pszDir, dwCutDay);
        };
        bool ct_CashEventStart(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296170L))(pOne);
        };
        bool ct_CdeEndup(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295fb0L))(pOne);
        };
        bool ct_CdeStart(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295ea0L))(pOne);
        };
        bool ct_ClassRefineEvent(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294730L))(pOne);
        };
        bool ct_ClearSettleOwnerGuild(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295820L))(pOne);
        };
        bool ct_ConEventStart(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298ce0L))(pOne);
        };
        bool ct_Gold_Age_Event_Status(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14029a000L))(pOne);
        };
        bool ct_Gold_Age_Get_Box_Cnt(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14029a390L))(pOne);
        };
        bool ct_Gold_Age_Set_Event_Status(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14029a1e0L))(pOne);
        };
        bool ct_HolyKeeperAttack(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294df0L))(pOne);
        };
        bool ct_HolySystem(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402948f0L))(pOne);
        };
        bool ct_HolySystem_Jp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294b70L))(pOne);
        };
        bool ct_InformCristalBattleBeforeAnHour(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402955e0L))(pOne);
        };
        bool ct_InformPatriarchProcessor(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295370L))(pOne);
        };
        bool ct_NuAfterEffect(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295d70L))(pOne);
        };
        bool ct_PcBandPrimium(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294620L))(pOne);
        };
        bool ct_PvpLimitInit(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295c10L))(pOne);
        };
        bool ct_ReqChangeHonorGuild(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295ac0L))(pOne);
        };
        bool ct_ReqPunishment(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295a30L))(pOne);
        };
        bool ct_SetGuildGrade(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294ea0L))(pOne);
        };
        bool ct_SetGuildGradeByGuildSerial(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294fa0L))(pOne);
        };
        bool ct_SetGuildGradeByName(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294f20L))(pOne);
        };
        bool ct_SetGuildMaster(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295030L))(pOne);
        };
        bool ct_SetMaxLevelLimit(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402950e0L))(pOne);
        };
        bool ct_SetPatriarchAuto(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295150L))(pOne);
        };
        bool ct_SetPatriarchClear(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295290L))(pOne);
        };
        bool ct_SetPatriarchGroup(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402952f0L))(pOne);
        };
        bool ct_SetPatriarchProcessor(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402951f0L))(pOne);
        };
        bool ct_SetSettleOwnerGuild(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295660L))(pOne);
        };
        bool ct_Win_RaceWar(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140299f90L))(pOne);
        };
        bool ct_action_point_set(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140299d80L))(pOne);
        };
        bool ct_add_guild_schedule(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140292b70L))(pOne);
        };
        bool ct_add_one_day_guild_schedule(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293670L))(pOne);
        };
        bool ct_all_item_muzi(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028fa80L))(pOne);
        };
        bool ct_all_map(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028fc40L))(pOne);
        };
        bool ct_alter_cashbag(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290fd0L))(pOne);
        };
        bool ct_alter_dalant(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291180L))(pOne);
        };
        bool ct_alter_exp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028fbd0L))(pOne);
        };
        bool ct_alter_gold(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291220L))(pOne);
        };
        bool ct_alter_inven_dur(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290b80L))(pOne);
        };
        bool ct_alter_lv(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290ce0L))(pOne);
        };
        bool ct_alter_pvp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290f60L))(pOne);
        };
        bool ct_amp_full(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294050L))(pOne);
        };
        bool ct_amp_set(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293f80L))(pOne);
        };
        bool ct_animus_attack_grade(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140292430L))(pOne);
        };
        bool ct_animus_recall_term(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291040L))(pOne);
        };
        bool ct_animusexp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298500L))(pOne);
        };
        bool ct_basemastery(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298460L))(pOne);
        };
        bool ct_boss_sms_cancel(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291b70L))(pOne);
        };
        bool ct_buf_potion_use(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297d10L))(pOne);
        };
        bool ct_cashitembuy(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294590L))(pOne);
        };
        bool ct_change_class(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290600L))(pOne);
        };
        bool ct_change_degree(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028f5b0L))(pOne);
        };
        bool ct_change_master_elect(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296d50L))(pOne);
        };
        bool ct_change_mastery(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028f930L))(pOne);
        };
        bool ct_chatsave(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296290L))(pOne);
        };
        bool ct_check_guild_batlle_goal(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293470L))(pOne);
        };
        bool ct_circle_mon_kill(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028f890L))(pOne);
        };
        bool ct_circle_user_num(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291870L))(pOne);
        };
        bool ct_combine_ex_result(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293c30L))(pOne);
        };
        bool ct_complete_quest(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290740L))(pOne);
        };
        bool ct_complete_quest_other(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402925c0L))(pOne);
        };
        bool ct_cont_effet_clear(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402916a0L))(pOne);
        };
        bool ct_cont_effet_time(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291630L))(pOne);
        };
        bool ct_continue_palytime_inc(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297260L))(pOne);
        };
        bool ct_copy_avator(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290920L))(pOne);
        };
        bool ct_create_guildbattle_field_object(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293080L))(pOne);
        };
        bool ct_cur_guildbattle_color(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140292fa0L))(pOne);
        };
        bool ct_darkholereward(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298640L))(pOne);
        };
        bool ct_defense_item_grace(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402920f0L))(pOne);
        };
        bool ct_defense_item_grace_Jp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140292290L))(pOne);
        };
        bool ct_destroy_gravitystone(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293290L))(pOne);
        };
        bool ct_destroy_guildbattle_field_object(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402930d0L))(pOne);
        };
        bool ct_destroy_system_tower(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291820L))(pOne);
        };
        bool ct_die(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290a90L))(pOne);
        };
        bool ct_drop_gravitystone(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402933c0L))(pOne);
        };
        bool ct_drop_jade(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402969f0L))(pOne);
        };
        bool ct_elect_info_player(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140299000L))(pOne);
        };
        bool ct_elect_set_env(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298f60L))(pOne);
        };
        bool ct_elect_set_player(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298e90L))(pOne);
        };
        bool ct_eventset_start(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297970L))(pOne);
        };
        bool ct_eventset_stop(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297ae0L))(pOne);
        };
        bool ct_exception(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296e30L))(pOne);
        };
        bool ct_exip_keeper(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402903e0L))(pOne);
        };
        bool ct_exit_stone(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290510L))(pOne);
        };
        bool ct_expire_pcbang(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298dc0L))(pOne);
        };
        bool ct_free_ride_ship(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402902d0L))(pOne);
        };
        bool ct_free_sf_by_class(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290c90L))(pOne);
        };
        bool ct_full_animus_gauge(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295d20L))(pOne);
        };
        bool ct_full_force(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402912c0L))(pOne);
        };
        bool ct_full_gauge(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290b30L))(pOne);
        };
        bool ct_fullset(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291c50L))(pOne);
        };
        bool ct_get_gravitystone(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293360L))(pOne);
        };
        bool ct_goto_char(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295b30L))(pOne);
        };
        bool ct_goto_mine(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402908d0L))(pOne);
        };
        bool ct_goto_monster(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295dd0L))(pOne);
        };
        bool ct_goto_npc(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296600L))(pOne);
        };
        bool ct_goto_shipport_eder(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290260L))(pOne);
        };
        bool ct_goto_shipport_town(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402901f0L))(pOne);
        };
        bool ct_goto_stone(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402904a0L))(pOne);
        };
        bool ct_guild_battle_force_stone(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293420L))(pOne);
        };
        bool ct_guild_call(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402944a0L))(pOne);
        };
        bool ct_guild_info(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293a20L))(pOne);
        };
        bool ct_guild_suggest(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293a00L))(pOne);
        };
        bool ct_half_gauge(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290ae0L))(pOne);
        };
        bool ct_init_monster(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291130L))(pOne);
        };
        bool ct_inven_empty(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291540L))(pOne);
        };
        bool ct_itemloot(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298280L))(pOne);
        };
        bool ct_jump_to_pos(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028fd00L))(pOne);
        };
        bool ct_kick_player(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402906b0L))(pOne);
        };
        bool ct_loadcashamount(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294510L))(pOne);
        };
        bool ct_look_like_boss(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028f8e0L))(pOne);
        };
        bool ct_loot_bag(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402914a0L))(pOne);
        };
        bool ct_loot_dungeon(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291f90L))(pOne);
        };
        bool ct_loot_item(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291360L))(pOne);
        };
        bool ct_loot_material(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291310L))(pOne);
        };
        bool ct_loot_mine(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402914f0L))(pOne);
        };
        bool ct_loot_tower(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291450L))(pOne);
        };
        bool ct_loot_upgrade(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291d10L))(pOne);
        };
        bool ct_loot_upgrade_item(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140292620L))(pOne);
        };
        bool ct_lua_command(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297d80L))(pOne);
        };
        bool ct_make_system_tower(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291770L))(pOne);
        };
        bool ct_makeitem_need_matrial(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140292a20L))(pOne);
        };
        bool ct_makeitem_no_matrial(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402929d0L))(pOne);
        };
        bool ct_manage_guild(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296ae0L))(pOne);
        };
        bool ct_max_attack(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290060L))(pOne);
        };
        bool ct_mepcbang(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298aa0L))(pOne);
        };
        bool ct_min_attack(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402900b0L))(pOne);
        };
        bool ct_minespeed(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298320L))(pOne);
        };
        bool ct_mormal_attack(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290100L))(pOne);
        };
        bool ct_party_call(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294430L))(pOne);
        };
        bool ct_pass_dungeon(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028ff70L))(pOne);
        };
        bool ct_pass_sch(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290320L))(pOne);
        };
        bool ct_pcanimusexp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298960L))(pOne);
        };
        bool ct_pcbangitemget(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298b70L))(pOne);
        };
        bool ct_pcbasemastery(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402988c0L))(pOne);
        };
        bool ct_pcitemloot(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402986e0L))(pOne);
        };
        bool ct_pcminespeed(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298780L))(pOne);
        };
        bool ct_pcplayerexp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298a00L))(pOne);
        };
        bool ct_pcroom_premium(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297870L))(pOne);
        };
        bool ct_pcsfmastery(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298820L))(pOne);
        };
        bool ct_period_time_set(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402993e0L))(pOne);
        };
        bool ct_playerexp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402985a0L))(pOne);
        };
        bool ct_premium_rate(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402974c0L))(pOne);
        };
        bool ct_query_remain_ore(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297020L))(pOne);
        };
        bool ct_recall_monster(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402907f0L))(pOne);
        };
        bool ct_recall_player(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290790L))(pOne);
        };
        bool ct_recv_change_atrad_taxrate(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293b60L))(pOne);
        };
        bool ct_recv_current_battle_info(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402935f0L))(pOne);
        };
        bool ct_recv_pvp_guild_rank(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293ad0L))(pOne);
        };
        bool ct_recv_reserved_schedulelist(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402934f0L))(pOne);
        };
        bool ct_recv_total_guild_rank(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293a40L))(pOne);
        };
        bool ct_regen_gravitystone(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293120L))(pOne);
        };
        bool ct_release_loot_free(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402905b0L))(pOne);
        };
        bool ct_release_make_succ(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402915e0L))(pOne);
        };
        bool ct_release_matchless(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402901a0L))(pOne);
        };
        bool ct_release_never_die(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290c40L))(pOne);
        };
        bool ct_release_punishment(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296ec0L))(pOne);
        };
        bool ct_remove_sf_delay(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295ff0L))(pOne);
        };
        bool ct_report_cri_hp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028fae0L))(pOne);
        };
        bool ct_report_position(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028fb00L))(pOne);
        };
        bool ct_request_delete_quest(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296860L))(pOne);
        };
        bool ct_request_npc_quest(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296790L))(pOne);
        };
        bool ct_respawn_start(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028f610L))(pOne);
        };
        bool ct_respawn_stop(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028f750L))(pOne);
        };
        bool ct_resurrect_player(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140292a70L))(pOne);
        };
        bool ct_server_rate(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402972f0L))(pOne);
        };
        bool ct_server_time(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294260L))(pOne);
        };
        bool ct_set_animus_exp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402910c0L))(pOne);
        };
        bool ct_set_animus_lv(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140295cc0L))(pOne);
        };
        bool ct_set_damage_part(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297730L))(pOne);
        };
        bool ct_set_exp_rate(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402964f0L))(pOne);
        };
        bool ct_set_guildbattle_color(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140292e30L))(pOne);
        };
        bool ct_set_hfs_full(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14029a630L))(pOne);
        };
        bool ct_set_hp(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14029a570L))(pOne);
        };
        bool ct_set_jade_effect(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296900L))(pOne);
        };
        bool ct_set_kill_list_init(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297cc0L))(pOne);
        };
        bool ct_set_loot_free(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290560L))(pOne);
        };
        bool ct_set_make_succ(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291590L))(pOne);
        };
        bool ct_set_matchless(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290150L))(pOne);
        };
        bool ct_set_never_die(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290bf0L))(pOne);
        };
        bool ct_set_ore_amount(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296f50L))(pOne);
        };
        bool ct_set_temp_cash_point(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297c30L))(pOne);
        };
        bool ct_sfmastery(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402983c0L))(pOne);
        };
        bool ct_start_cri(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290370L))(pOne);
        };
        bool ct_start_keeper(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290430L))(pOne);
        };
        bool ct_take_gravitystone(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402932f0L))(pOne);
        };
        bool ct_takeholymental(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140294880L))(pOne);
        };
        bool ct_telekinesis(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140292500L))(pOne);
        };
        bool ct_tl_info_set(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140299600L))(pOne);
        };
        bool ct_tl_info_view(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402997c0L))(pOne);
        };
        bool ct_tl_system_setting(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140299b20L))(pOne);
        };
        bool ct_tracing_hide(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x14028ffc0L))(pOne);
        };
        bool ct_tracing_show(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290010L))(pOne);
        };
        bool ct_trap_attack_grade(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140297660L))(pOne);
        };
        bool ct_trunk_init(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140291c00L))(pOne);
        };
        bool ct_up_allskill(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290ef0L))(pOne);
        };
        bool ct_up_allskill_pt(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140292550L))(pOne);
        };
        bool ct_up_forceitem(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290d50L))(pOne);
        };
        bool ct_up_forcemastery(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290e80L))(pOne);
        };
        bool ct_up_skill(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290dc0L))(pOne);
        };
        bool ct_user_num(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140290980L))(pOne);
        };
        bool ct_userchatban(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293d90L))(pOne);
        };
        bool ct_ut_cancel_regist(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402960e0L))(pOne);
        };
        bool ct_ut_cancel_registlogout(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140296070L))(pOne);
        };
        bool ct_view_method(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x1402916f0L))(pOne);
        };
        bool ct_vote_enable(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140298e30L))(pOne);
        };
        bool ct_whoami(struct CPlayer* pOne)
        {
            using org_ptr = bool (WINAPIV*)(struct CPlayer*);
            return (org_ptr(0x140293ce0L))(pOne);
        };
        char* cvt_string(int nVal)
        {
            using org_ptr = char* (WINAPIV*)(int);
            return (org_ptr(0x1402896a0L))(nVal);
        };
        void eAddCutOre(int nRaceCode, char byKind, int nAdd)
        {
            using org_ptr = void (WINAPIV*)(int, char, int);
            (org_ptr(0x1402a42d0L))(nRaceCode, byKind, nAdd);
        };
        void eAddDalant(int nRaceCode, int nAdd)
        {
            using org_ptr = void (WINAPIV*)(int, int);
            (org_ptr(0x1402a41b0L))(nRaceCode, nAdd);
        };
        void eAddGold(int nRaceCode, int nAdd)
        {
            using org_ptr = void (WINAPIV*)(int, int);
            (org_ptr(0x1402a4160L))(nRaceCode, nAdd);
        };
        void eAddMineOre(int nRaceCode, char byKind, int nAdd)
        {
            using org_ptr = void (WINAPIV*)(int, char, int);
            (org_ptr(0x1402a4220L))(nRaceCode, byKind, nAdd);
        };
        long double eGetCutOre(int nRaceCode, char byKind)
        {
            using org_ptr = long double (WINAPIV*)(int, char);
            return (org_ptr(0x1402a4460L))(nRaceCode, byKind);
        };
        long double eGetDalant(int nRaceCode)
        {
            using org_ptr = long double (WINAPIV*)(int);
            return (org_ptr(0x1402a4390L))(nRaceCode);
        };
        long double eGetGold(int nRaceCode)
        {
            using org_ptr = long double (WINAPIV*)(int);
            return (org_ptr(0x1402a4340L))(nRaceCode);
        };
        uint16_t eGetGuide(int nRaceCode)
        {
            using org_ptr = uint16_t (WINAPIV*)(int);
            return (org_ptr(0x1402a46d0L))(nRaceCode);
        };
        struct _economy_history_data* eGetGuideHistory()
        {
            using org_ptr = struct _economy_history_data* (WINAPIV*)();
            return (org_ptr(0x1402a48c0L))();
        };
        unsigned int eGetLocalDate()
        {
            using org_ptr = unsigned int (WINAPIV*)();
            return (org_ptr(0x1402a50b0L))();
        };
        int eGetMgrValue()
        {
            using org_ptr = int (WINAPIV*)();
            return (org_ptr(0x1402a48b0L))();
        };
        long double eGetMineOre(int nRaceCode, char byKind)
        {
            using org_ptr = long double (WINAPIV*)(int, char);
            return (org_ptr(0x1402a43e0L))(nRaceCode, byKind);
        };
        long double eGetOldCutOre(int nRaceCode, char byKind)
        {
            using org_ptr = long double (WINAPIV*)(int, char);
            return (org_ptr(0x1402a4850L))(nRaceCode, byKind);
        };
        long double eGetOldDalant(int nRaceCode)
        {
            using org_ptr = long double (WINAPIV*)(int);
            return (org_ptr(0x1402a47a0L))(nRaceCode);
        };
        long double eGetOldGold(int nRaceCode)
        {
            using org_ptr = long double (WINAPIV*)(int);
            return (org_ptr(0x1402a4750L))(nRaceCode);
        };
        long double eGetOldMineOre(int nRaceCode, char byKind)
        {
            using org_ptr = long double (WINAPIV*)(int, char);
            return (org_ptr(0x1402a47f0L))(nRaceCode, byKind);
        };
        float eGetOreRate(int nRaceCode)
        {
            using org_ptr = float (WINAPIV*)(int);
            return (org_ptr(0x1402a4700L))(nRaceCode);
        };
        int eGetRate(int nRaceCode)
        {
            using org_ptr = int (WINAPIV*)(int);
            return (org_ptr(0x1402a4630L))(nRaceCode);
        };
        float eGetTex(int nRaceCode)
        {
            using org_ptr = float (WINAPIV*)(int);
            return (org_ptr(0x1402a44e0L))(nRaceCode);
        };
        unsigned int eGetTexRate(int nRaceCode)
        {
            using org_ptr = unsigned int (WINAPIV*)(int);
            return (org_ptr(0x1402a45a0L))(nRaceCode);
        };
        bool eInitEconomySystem(int nCurMgrValue, int nNextMgrValue, struct _economy_history_data* pData, int nHisNum, struct _economy_history_data* pCurData)
        {
            using org_ptr = bool (WINAPIV*)(int, int, struct _economy_history_data*, int, struct _economy_history_data*);
            return (org_ptr(0x1402a2db0L))(nCurMgrValue, nNextMgrValue, pData, nHisNum, pCurData);
        };
        void eUpdateEconomySystem(bool* pbChangeDay)
        {
            using org_ptr = void (WINAPIV*)(bool*);
            (org_ptr(0x1402a3670L))(pbChangeDay);
        };
        bool jc_Contents(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140277740L))(fstr, pSetup, pszoutErrMsg);
        };
        bool jc_Count(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402779c0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool jc_Description(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140277ed0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool jc_ReactContents(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140277c90L))(fstr, pSetup, pszoutErrMsg);
        };
        bool jc_ReactType(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140277aa0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool jc_Type(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140277620L))(fstr, pSetup, pszoutErrMsg);
        };
        lua_State* lua_my_open()
        {
            using org_ptr = lua_State* (WINAPIV*)();
            return (org_ptr(0x1403fedb0L))();
        };
        bool mc_AddMonster(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140275730L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_AddTime(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140277280L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_Area(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402749e0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_ChangeMonster(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140276050L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_CompleteMsg(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140275280L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_Description(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140275180L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_GatePos(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140274c20L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_If(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402763b0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_Inner(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140276720L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_JobOrder(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140274d40L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_LimTimeSec(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140274e60L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_LootItem(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140275380L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_RespawnMonster(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402759d0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_RespawnMonsterOption(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140275e60L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_ResultContents(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140275060L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_ResultType(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140274f10L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_StartPos(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140274b00L))(fstr, pSetup, pszoutErrMsg);
        };
        bool mc_respond(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140276d10L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_Dalant(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140274740L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_Description(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402748e0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_DummyBlock(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402737c0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_LimitLvMax(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402736f0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_LimitLvMin(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140273620L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_MemberNum(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140273340L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_MembershipParty(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402732a0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_RewardExp(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402743f0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_RewardItem(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140273eb0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_RewardPvp(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402745a0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_StartMission(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140273520L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_UseMap(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x1402733e0L))(fstr, pSetup, pszoutErrMsg);
        };
        bool qc_monsterGroup(struct strFILE* fstr, struct CDarkHoleDungeonQuestSetup* pSetup, char* pszoutErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct strFILE*, struct CDarkHoleDungeonQuestSetup*, char*);
            return (org_ptr(0x140273b40L))(fstr, pSetup, pszoutErrMsg);
        };
        void wa_EnterWorld(struct _WA_AVATOR_CODE* pData, uint16_t wZoneIndex)
        {
            using org_ptr = void (WINAPIV*)(struct _WA_AVATOR_CODE*, uint16_t);
            (org_ptr(0x140046110L))(pData, wZoneIndex);
        };
        void wa_ExitWorld(struct _CLID* pidWorld)
        {
            using org_ptr = void (WINAPIV*)(struct _CLID*);
            (org_ptr(0x140046190L))(pidWorld);
        };
        void wa_PartyDisjoint(struct _CLID* pidBoss)
        {
            using org_ptr = void (WINAPIV*)(struct _CLID*);
            (org_ptr(0x140046a50L))(pidBoss);
        };
        void wa_PartyForceLeave(struct _CLID* pidBoss, struct _CLID* pidLeaver)
        {
            using org_ptr = void (WINAPIV*)(struct _CLID*, struct _CLID*);
            (org_ptr(0x140046830L))(pidBoss, pidLeaver);
        };
        void wa_PartyJoin(struct _CLID* pidBoss, struct _CLID* pidJoiner)
        {
            using org_ptr = void (WINAPIV*)(struct _CLID*, struct _CLID*);
            (org_ptr(0x140046390L))(pidBoss, pidJoiner);
        };
        void wa_PartyLock(struct _CLID* pidBoss, bool bLock)
        {
            using org_ptr = void (WINAPIV*)(struct _CLID*, bool);
            (org_ptr(0x140046d50L))(pidBoss, bLock);
        };
        void wa_PartyLootShareSystem(struct _CLID* pidBoss, char byLootShareMode)
        {
            using org_ptr = void (WINAPIV*)(struct _CLID*, char);
            (org_ptr(0x140046e80L))(pidBoss, byLootShareMode);
        };
        void wa_PartySelfLeave(struct _CLID* pidLeaver)
        {
            using org_ptr = void (WINAPIV*)(struct _CLID*);
            (org_ptr(0x140046660L))(pidLeaver);
        };
        void wa_PartySuccession(struct _CLID* pidBoss, struct _CLID* pidSuccessor)
        {
            using org_ptr = void (WINAPIV*)(struct _CLID*, struct _CLID*);
            (org_ptr(0x140046bc0L))(pidBoss, pidSuccessor);
        };
    }; // end namespace Global
END_ATF_NAMESPACE
