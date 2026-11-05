#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A8360
// Address: 0x2a8360 - 0x2a8898
void sub_002A8360_0x2a8360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8360_0x2a8360");
#endif

    switch (ctx->pc) {
        case 0x2a8360u: goto label_2a8360;
        case 0x2a8364u: goto label_2a8364;
        case 0x2a8368u: goto label_2a8368;
        case 0x2a836cu: goto label_2a836c;
        case 0x2a8370u: goto label_2a8370;
        case 0x2a8374u: goto label_2a8374;
        case 0x2a8378u: goto label_2a8378;
        case 0x2a837cu: goto label_2a837c;
        case 0x2a8380u: goto label_2a8380;
        case 0x2a8384u: goto label_2a8384;
        case 0x2a8388u: goto label_2a8388;
        case 0x2a838cu: goto label_2a838c;
        case 0x2a8390u: goto label_2a8390;
        case 0x2a8394u: goto label_2a8394;
        case 0x2a8398u: goto label_2a8398;
        case 0x2a839cu: goto label_2a839c;
        case 0x2a83a0u: goto label_2a83a0;
        case 0x2a83a4u: goto label_2a83a4;
        case 0x2a83a8u: goto label_2a83a8;
        case 0x2a83acu: goto label_2a83ac;
        case 0x2a83b0u: goto label_2a83b0;
        case 0x2a83b4u: goto label_2a83b4;
        case 0x2a83b8u: goto label_2a83b8;
        case 0x2a83bcu: goto label_2a83bc;
        case 0x2a83c0u: goto label_2a83c0;
        case 0x2a83c4u: goto label_2a83c4;
        case 0x2a83c8u: goto label_2a83c8;
        case 0x2a83ccu: goto label_2a83cc;
        case 0x2a83d0u: goto label_2a83d0;
        case 0x2a83d4u: goto label_2a83d4;
        case 0x2a83d8u: goto label_2a83d8;
        case 0x2a83dcu: goto label_2a83dc;
        case 0x2a83e0u: goto label_2a83e0;
        case 0x2a83e4u: goto label_2a83e4;
        case 0x2a83e8u: goto label_2a83e8;
        case 0x2a83ecu: goto label_2a83ec;
        case 0x2a83f0u: goto label_2a83f0;
        case 0x2a83f4u: goto label_2a83f4;
        case 0x2a83f8u: goto label_2a83f8;
        case 0x2a83fcu: goto label_2a83fc;
        case 0x2a8400u: goto label_2a8400;
        case 0x2a8404u: goto label_2a8404;
        case 0x2a8408u: goto label_2a8408;
        case 0x2a840cu: goto label_2a840c;
        case 0x2a8410u: goto label_2a8410;
        case 0x2a8414u: goto label_2a8414;
        case 0x2a8418u: goto label_2a8418;
        case 0x2a841cu: goto label_2a841c;
        case 0x2a8420u: goto label_2a8420;
        case 0x2a8424u: goto label_2a8424;
        case 0x2a8428u: goto label_2a8428;
        case 0x2a842cu: goto label_2a842c;
        case 0x2a8430u: goto label_2a8430;
        case 0x2a8434u: goto label_2a8434;
        case 0x2a8438u: goto label_2a8438;
        case 0x2a843cu: goto label_2a843c;
        case 0x2a8440u: goto label_2a8440;
        case 0x2a8444u: goto label_2a8444;
        case 0x2a8448u: goto label_2a8448;
        case 0x2a844cu: goto label_2a844c;
        case 0x2a8450u: goto label_2a8450;
        case 0x2a8454u: goto label_2a8454;
        case 0x2a8458u: goto label_2a8458;
        case 0x2a845cu: goto label_2a845c;
        case 0x2a8460u: goto label_2a8460;
        case 0x2a8464u: goto label_2a8464;
        case 0x2a8468u: goto label_2a8468;
        case 0x2a846cu: goto label_2a846c;
        case 0x2a8470u: goto label_2a8470;
        case 0x2a8474u: goto label_2a8474;
        case 0x2a8478u: goto label_2a8478;
        case 0x2a847cu: goto label_2a847c;
        case 0x2a8480u: goto label_2a8480;
        case 0x2a8484u: goto label_2a8484;
        case 0x2a8488u: goto label_2a8488;
        case 0x2a848cu: goto label_2a848c;
        case 0x2a8490u: goto label_2a8490;
        case 0x2a8494u: goto label_2a8494;
        case 0x2a8498u: goto label_2a8498;
        case 0x2a849cu: goto label_2a849c;
        case 0x2a84a0u: goto label_2a84a0;
        case 0x2a84a4u: goto label_2a84a4;
        case 0x2a84a8u: goto label_2a84a8;
        case 0x2a84acu: goto label_2a84ac;
        case 0x2a84b0u: goto label_2a84b0;
        case 0x2a84b4u: goto label_2a84b4;
        case 0x2a84b8u: goto label_2a84b8;
        case 0x2a84bcu: goto label_2a84bc;
        case 0x2a84c0u: goto label_2a84c0;
        case 0x2a84c4u: goto label_2a84c4;
        case 0x2a84c8u: goto label_2a84c8;
        case 0x2a84ccu: goto label_2a84cc;
        case 0x2a84d0u: goto label_2a84d0;
        case 0x2a84d4u: goto label_2a84d4;
        case 0x2a84d8u: goto label_2a84d8;
        case 0x2a84dcu: goto label_2a84dc;
        case 0x2a84e0u: goto label_2a84e0;
        case 0x2a84e4u: goto label_2a84e4;
        case 0x2a84e8u: goto label_2a84e8;
        case 0x2a84ecu: goto label_2a84ec;
        case 0x2a84f0u: goto label_2a84f0;
        case 0x2a84f4u: goto label_2a84f4;
        case 0x2a84f8u: goto label_2a84f8;
        case 0x2a84fcu: goto label_2a84fc;
        case 0x2a8500u: goto label_2a8500;
        case 0x2a8504u: goto label_2a8504;
        case 0x2a8508u: goto label_2a8508;
        case 0x2a850cu: goto label_2a850c;
        case 0x2a8510u: goto label_2a8510;
        case 0x2a8514u: goto label_2a8514;
        case 0x2a8518u: goto label_2a8518;
        case 0x2a851cu: goto label_2a851c;
        case 0x2a8520u: goto label_2a8520;
        case 0x2a8524u: goto label_2a8524;
        case 0x2a8528u: goto label_2a8528;
        case 0x2a852cu: goto label_2a852c;
        case 0x2a8530u: goto label_2a8530;
        case 0x2a8534u: goto label_2a8534;
        case 0x2a8538u: goto label_2a8538;
        case 0x2a853cu: goto label_2a853c;
        case 0x2a8540u: goto label_2a8540;
        case 0x2a8544u: goto label_2a8544;
        case 0x2a8548u: goto label_2a8548;
        case 0x2a854cu: goto label_2a854c;
        case 0x2a8550u: goto label_2a8550;
        case 0x2a8554u: goto label_2a8554;
        case 0x2a8558u: goto label_2a8558;
        case 0x2a855cu: goto label_2a855c;
        case 0x2a8560u: goto label_2a8560;
        case 0x2a8564u: goto label_2a8564;
        case 0x2a8568u: goto label_2a8568;
        case 0x2a856cu: goto label_2a856c;
        case 0x2a8570u: goto label_2a8570;
        case 0x2a8574u: goto label_2a8574;
        case 0x2a8578u: goto label_2a8578;
        case 0x2a857cu: goto label_2a857c;
        case 0x2a8580u: goto label_2a8580;
        case 0x2a8584u: goto label_2a8584;
        case 0x2a8588u: goto label_2a8588;
        case 0x2a858cu: goto label_2a858c;
        case 0x2a8590u: goto label_2a8590;
        case 0x2a8594u: goto label_2a8594;
        case 0x2a8598u: goto label_2a8598;
        case 0x2a859cu: goto label_2a859c;
        case 0x2a85a0u: goto label_2a85a0;
        case 0x2a85a4u: goto label_2a85a4;
        case 0x2a85a8u: goto label_2a85a8;
        case 0x2a85acu: goto label_2a85ac;
        case 0x2a85b0u: goto label_2a85b0;
        case 0x2a85b4u: goto label_2a85b4;
        case 0x2a85b8u: goto label_2a85b8;
        case 0x2a85bcu: goto label_2a85bc;
        case 0x2a85c0u: goto label_2a85c0;
        case 0x2a85c4u: goto label_2a85c4;
        case 0x2a85c8u: goto label_2a85c8;
        case 0x2a85ccu: goto label_2a85cc;
        case 0x2a85d0u: goto label_2a85d0;
        case 0x2a85d4u: goto label_2a85d4;
        case 0x2a85d8u: goto label_2a85d8;
        case 0x2a85dcu: goto label_2a85dc;
        case 0x2a85e0u: goto label_2a85e0;
        case 0x2a85e4u: goto label_2a85e4;
        case 0x2a85e8u: goto label_2a85e8;
        case 0x2a85ecu: goto label_2a85ec;
        case 0x2a85f0u: goto label_2a85f0;
        case 0x2a85f4u: goto label_2a85f4;
        case 0x2a85f8u: goto label_2a85f8;
        case 0x2a85fcu: goto label_2a85fc;
        case 0x2a8600u: goto label_2a8600;
        case 0x2a8604u: goto label_2a8604;
        case 0x2a8608u: goto label_2a8608;
        case 0x2a860cu: goto label_2a860c;
        case 0x2a8610u: goto label_2a8610;
        case 0x2a8614u: goto label_2a8614;
        case 0x2a8618u: goto label_2a8618;
        case 0x2a861cu: goto label_2a861c;
        case 0x2a8620u: goto label_2a8620;
        case 0x2a8624u: goto label_2a8624;
        case 0x2a8628u: goto label_2a8628;
        case 0x2a862cu: goto label_2a862c;
        case 0x2a8630u: goto label_2a8630;
        case 0x2a8634u: goto label_2a8634;
        case 0x2a8638u: goto label_2a8638;
        case 0x2a863cu: goto label_2a863c;
        case 0x2a8640u: goto label_2a8640;
        case 0x2a8644u: goto label_2a8644;
        case 0x2a8648u: goto label_2a8648;
        case 0x2a864cu: goto label_2a864c;
        case 0x2a8650u: goto label_2a8650;
        case 0x2a8654u: goto label_2a8654;
        case 0x2a8658u: goto label_2a8658;
        case 0x2a865cu: goto label_2a865c;
        case 0x2a8660u: goto label_2a8660;
        case 0x2a8664u: goto label_2a8664;
        case 0x2a8668u: goto label_2a8668;
        case 0x2a866cu: goto label_2a866c;
        case 0x2a8670u: goto label_2a8670;
        case 0x2a8674u: goto label_2a8674;
        case 0x2a8678u: goto label_2a8678;
        case 0x2a867cu: goto label_2a867c;
        case 0x2a8680u: goto label_2a8680;
        case 0x2a8684u: goto label_2a8684;
        case 0x2a8688u: goto label_2a8688;
        case 0x2a868cu: goto label_2a868c;
        case 0x2a8690u: goto label_2a8690;
        case 0x2a8694u: goto label_2a8694;
        case 0x2a8698u: goto label_2a8698;
        case 0x2a869cu: goto label_2a869c;
        case 0x2a86a0u: goto label_2a86a0;
        case 0x2a86a4u: goto label_2a86a4;
        case 0x2a86a8u: goto label_2a86a8;
        case 0x2a86acu: goto label_2a86ac;
        case 0x2a86b0u: goto label_2a86b0;
        case 0x2a86b4u: goto label_2a86b4;
        case 0x2a86b8u: goto label_2a86b8;
        case 0x2a86bcu: goto label_2a86bc;
        case 0x2a86c0u: goto label_2a86c0;
        case 0x2a86c4u: goto label_2a86c4;
        case 0x2a86c8u: goto label_2a86c8;
        case 0x2a86ccu: goto label_2a86cc;
        case 0x2a86d0u: goto label_2a86d0;
        case 0x2a86d4u: goto label_2a86d4;
        case 0x2a86d8u: goto label_2a86d8;
        case 0x2a86dcu: goto label_2a86dc;
        case 0x2a86e0u: goto label_2a86e0;
        case 0x2a86e4u: goto label_2a86e4;
        case 0x2a86e8u: goto label_2a86e8;
        case 0x2a86ecu: goto label_2a86ec;
        case 0x2a86f0u: goto label_2a86f0;
        case 0x2a86f4u: goto label_2a86f4;
        case 0x2a86f8u: goto label_2a86f8;
        case 0x2a86fcu: goto label_2a86fc;
        case 0x2a8700u: goto label_2a8700;
        case 0x2a8704u: goto label_2a8704;
        case 0x2a8708u: goto label_2a8708;
        case 0x2a870cu: goto label_2a870c;
        case 0x2a8710u: goto label_2a8710;
        case 0x2a8714u: goto label_2a8714;
        case 0x2a8718u: goto label_2a8718;
        case 0x2a871cu: goto label_2a871c;
        case 0x2a8720u: goto label_2a8720;
        case 0x2a8724u: goto label_2a8724;
        case 0x2a8728u: goto label_2a8728;
        case 0x2a872cu: goto label_2a872c;
        case 0x2a8730u: goto label_2a8730;
        case 0x2a8734u: goto label_2a8734;
        case 0x2a8738u: goto label_2a8738;
        case 0x2a873cu: goto label_2a873c;
        case 0x2a8740u: goto label_2a8740;
        case 0x2a8744u: goto label_2a8744;
        case 0x2a8748u: goto label_2a8748;
        case 0x2a874cu: goto label_2a874c;
        case 0x2a8750u: goto label_2a8750;
        case 0x2a8754u: goto label_2a8754;
        case 0x2a8758u: goto label_2a8758;
        case 0x2a875cu: goto label_2a875c;
        case 0x2a8760u: goto label_2a8760;
        case 0x2a8764u: goto label_2a8764;
        case 0x2a8768u: goto label_2a8768;
        case 0x2a876cu: goto label_2a876c;
        case 0x2a8770u: goto label_2a8770;
        case 0x2a8774u: goto label_2a8774;
        case 0x2a8778u: goto label_2a8778;
        case 0x2a877cu: goto label_2a877c;
        case 0x2a8780u: goto label_2a8780;
        case 0x2a8784u: goto label_2a8784;
        case 0x2a8788u: goto label_2a8788;
        case 0x2a878cu: goto label_2a878c;
        case 0x2a8790u: goto label_2a8790;
        case 0x2a8794u: goto label_2a8794;
        case 0x2a8798u: goto label_2a8798;
        case 0x2a879cu: goto label_2a879c;
        case 0x2a87a0u: goto label_2a87a0;
        case 0x2a87a4u: goto label_2a87a4;
        case 0x2a87a8u: goto label_2a87a8;
        case 0x2a87acu: goto label_2a87ac;
        case 0x2a87b0u: goto label_2a87b0;
        case 0x2a87b4u: goto label_2a87b4;
        case 0x2a87b8u: goto label_2a87b8;
        case 0x2a87bcu: goto label_2a87bc;
        case 0x2a87c0u: goto label_2a87c0;
        case 0x2a87c4u: goto label_2a87c4;
        case 0x2a87c8u: goto label_2a87c8;
        case 0x2a87ccu: goto label_2a87cc;
        case 0x2a87d0u: goto label_2a87d0;
        case 0x2a87d4u: goto label_2a87d4;
        case 0x2a87d8u: goto label_2a87d8;
        case 0x2a87dcu: goto label_2a87dc;
        case 0x2a87e0u: goto label_2a87e0;
        case 0x2a87e4u: goto label_2a87e4;
        case 0x2a87e8u: goto label_2a87e8;
        case 0x2a87ecu: goto label_2a87ec;
        case 0x2a87f0u: goto label_2a87f0;
        case 0x2a87f4u: goto label_2a87f4;
        case 0x2a87f8u: goto label_2a87f8;
        case 0x2a87fcu: goto label_2a87fc;
        case 0x2a8800u: goto label_2a8800;
        case 0x2a8804u: goto label_2a8804;
        case 0x2a8808u: goto label_2a8808;
        case 0x2a880cu: goto label_2a880c;
        case 0x2a8810u: goto label_2a8810;
        case 0x2a8814u: goto label_2a8814;
        case 0x2a8818u: goto label_2a8818;
        case 0x2a881cu: goto label_2a881c;
        case 0x2a8820u: goto label_2a8820;
        case 0x2a8824u: goto label_2a8824;
        case 0x2a8828u: goto label_2a8828;
        case 0x2a882cu: goto label_2a882c;
        case 0x2a8830u: goto label_2a8830;
        case 0x2a8834u: goto label_2a8834;
        case 0x2a8838u: goto label_2a8838;
        case 0x2a883cu: goto label_2a883c;
        case 0x2a8840u: goto label_2a8840;
        case 0x2a8844u: goto label_2a8844;
        case 0x2a8848u: goto label_2a8848;
        case 0x2a884cu: goto label_2a884c;
        case 0x2a8850u: goto label_2a8850;
        case 0x2a8854u: goto label_2a8854;
        case 0x2a8858u: goto label_2a8858;
        case 0x2a885cu: goto label_2a885c;
        case 0x2a8860u: goto label_2a8860;
        case 0x2a8864u: goto label_2a8864;
        case 0x2a8868u: goto label_2a8868;
        case 0x2a886cu: goto label_2a886c;
        case 0x2a8870u: goto label_2a8870;
        case 0x2a8874u: goto label_2a8874;
        case 0x2a8878u: goto label_2a8878;
        case 0x2a887cu: goto label_2a887c;
        case 0x2a8880u: goto label_2a8880;
        case 0x2a8884u: goto label_2a8884;
        case 0x2a8888u: goto label_2a8888;
        case 0x2a888cu: goto label_2a888c;
        case 0x2a8890u: goto label_2a8890;
        case 0x2a8894u: goto label_2a8894;
        default: break;
    }

    ctx->pc = 0x2a8360u;

label_2a8360:
    // 0x2a8360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a8360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a8364:
    // 0x2a8364: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a8364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2a8368:
    // 0x2a8368: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2a8368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2a836c:
    // 0x2a836c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a836cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a8370:
    // 0x2a8370: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a8370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2a8374:
    // 0x2a8374: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2a8374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2a8378:
    // 0x2a8378: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x2a8378u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2a837c:
    // 0x2a837c: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x2a837cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2a8380:
    // 0x2a8380: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2a8380u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2a8384:
    // 0x2a8384: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2a8384u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2a8388:
    // 0x2a8388: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2a8388u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2a838c:
    // 0x2a838c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2a838cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2a8390:
    // 0x2a8390: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x2a8390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_2a8394:
    // 0x2a8394: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_2a8398:
    if (ctx->pc == 0x2A8398u) {
        ctx->pc = 0x2A8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8394u;
        // 0x2a8398: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A839Cu;
        goto label_2a839c;
    }
    ctx->pc = 0x2A8394u;
    {
        const bool branch_taken_0x2a8394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8394u;
        // 0x2a8398: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8394) {
            ctx->pc = 0x2A860Cu;
            goto label_2a860c;
        }
    }
    ctx->pc = 0x2A839Cu;
label_2a839c:
    // 0x2a839c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2a839cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a83a0:
    // 0x2a83a0: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2a83a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a83a4:
    // 0x2a83a4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2a83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2a83a8:
    // 0x2a83a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a83a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a83ac:
    // 0x2a83ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2a83b0:
    if (ctx->pc == 0x2A83B0u) {
        ctx->pc = 0x2A83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83ACu;
        // 0x2a83b0: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A83B4u;
        goto label_2a83b4;
    }
    ctx->pc = 0x2A83ACu;
    {
        const bool branch_taken_0x2a83ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83ACu;
        // 0x2a83b0: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83ac) {
            ctx->pc = 0x2A83C8u;
            goto label_2a83c8;
        }
    }
    ctx->pc = 0x2A83B4u;
label_2a83b4:
    // 0x2a83b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a83b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a83b8:
    // 0x2a83b8: 0x0  nop
    ctx->pc = 0x2a83b8u;
    // NOP
label_2a83bc:
    // 0x2a83bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a83bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a83c0:
    // 0x2a83c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a83c4:
    if (ctx->pc == 0x2A83C4u) {
        ctx->pc = 0x2A83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83C0u;
        // 0x2a83c4: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A83C8u;
        goto label_2a83c8;
    }
    ctx->pc = 0x2A83C0u;
    {
        const bool branch_taken_0x2a83c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83C0u;
        // 0x2a83c4: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83c0) {
            ctx->pc = 0x2A83E8u;
            goto label_2a83e8;
        }
    }
    ctx->pc = 0x2A83C8u;
label_2a83c8:
    // 0x2a83c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a83cc:
    // 0x2a83cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a83ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a83d0:
    // 0x2a83d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a83d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a83d4:
    // 0x2a83d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a83d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a83d8:
    // 0x2a83d8: 0x0  nop
    ctx->pc = 0x2a83d8u;
    // NOP
label_2a83dc:
    // 0x2a83dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a83dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a83e0:
    // 0x2a83e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a83e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a83e4:
    // 0x2a83e4: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x2a83e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a83e8:
    // 0x2a83e8: 0xc0dde53  jal         func_37794C
label_2a83ec:
    if (ctx->pc == 0x2A83ECu) {
        ctx->pc = 0x2A83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83E8u;
        // 0x2a83ec: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A83F0u;
        goto label_2a83f0;
    }
    ctx->pc = 0x2A83E8u;
    SET_GPR_U32(ctx, 31, 0x2A83F0u);
    ctx->pc = 0x2A83ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A83E8u;
    // 0x2a83ec: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2A83E8u, 0x2A83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A83F0u;
label_2a83f0:
    // 0x2a83f0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2a83f4:
    // 0x2a83f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a83f8:
    // 0x2a83f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a83f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a83fc:
    // 0x2a83fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a8400:
    if (ctx->pc == 0x2A8400u) {
        ctx->pc = 0x2A8400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83FCu;
        // 0x2a8400: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8404u;
        goto label_2a8404;
    }
    ctx->pc = 0x2A83FCu;
    {
        const bool branch_taken_0x2a83fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a83fc) {
            ctx->pc = 0x2A8400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A83FCu;
            // 0x2a8400: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8404u;
            goto label_2a8404;
        }
    }
    ctx->pc = 0x2A8404u;
label_2a8404:
    // 0x2a8404: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2a8404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a8408:
    // 0x2a8408: 0x4810  mfhi        $t1
    ctx->pc = 0x2a8408u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2a840c:
    // 0x2a840c: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
label_2a8410:
    if (ctx->pc == 0x2A8410u) {
        ctx->pc = 0x2A8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A840Cu;
        // 0x2a8410: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8414u;
        goto label_2a8414;
    }
    ctx->pc = 0x2A840Cu;
    {
        const bool branch_taken_0x2a840c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A840Cu;
        // 0x2a8410: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a840c) {
            ctx->pc = 0x2A8450u;
            goto label_2a8450;
        }
    }
    ctx->pc = 0x2A8414u;
label_2a8414:
    // 0x2a8414: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a8418:
    if (ctx->pc == 0x2A8418u) {
        ctx->pc = 0x2A8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8414u;
        // 0x2a8418: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A841Cu;
        goto label_2a841c;
    }
    ctx->pc = 0x2A8414u;
    {
        const bool branch_taken_0x2a8414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8414u;
        // 0x2a8418: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8414) {
            ctx->pc = 0x2A842Cu;
            goto label_2a842c;
        }
    }
    ctx->pc = 0x2A841Cu;
label_2a841c:
    // 0x2a841c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_2a8420:
    if (ctx->pc == 0x2A8420u) {
        ctx->pc = 0x2A8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A841Cu;
        // 0x2a8420: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8424u;
        goto label_2a8424;
    }
    ctx->pc = 0x2A841Cu;
    {
        const bool branch_taken_0x2a841c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a841c) {
            ctx->pc = 0x2A8420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A841Cu;
            // 0x2a8420: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A843Cu;
            goto label_2a843c;
        }
    }
    ctx->pc = 0x2A8424u;
label_2a8424:
    // 0x2a8424: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2a8428:
    if (ctx->pc == 0x2A8428u) {
        ctx->pc = 0x2A8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8424u;
        // 0x2a8428: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A842Cu;
        goto label_2a842c;
    }
    ctx->pc = 0x2A8424u;
    {
        const bool branch_taken_0x2a8424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8424u;
        // 0x2a8428: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8424) {
            ctx->pc = 0x2A84A0u;
            goto label_2a84a0;
        }
    }
    ctx->pc = 0x2A842Cu;
label_2a842c:
    // 0x2a842c: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
label_2a8430:
    if (ctx->pc == 0x2A8430u) {
        ctx->pc = 0x2A8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A842Cu;
        // 0x2a8430: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8434u;
        goto label_2a8434;
    }
    ctx->pc = 0x2A842Cu;
    {
        const bool branch_taken_0x2a842c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a842c) {
            ctx->pc = 0x2A8430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A842Cu;
            // 0x2a8430: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A847Cu;
            goto label_2a847c;
        }
    }
    ctx->pc = 0x2A8434u;
label_2a8434:
    // 0x2a8434: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2a8438:
    if (ctx->pc == 0x2A8438u) {
        ctx->pc = 0x2A8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8434u;
        // 0x2a8438: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A843Cu;
        goto label_2a843c;
    }
    ctx->pc = 0x2A8434u;
    {
        const bool branch_taken_0x2a8434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8434u;
        // 0x2a8438: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8434) {
            ctx->pc = 0x2A84A0u;
            goto label_2a84a0;
        }
    }
    ctx->pc = 0x2A843Cu;
label_2a843c:
    // 0x2a843c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8440:
    // 0x2a8440: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x2a8440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a8444:
    // 0x2a8444: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a8444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a8448:
    // 0x2a8448: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a844c:
    if (ctx->pc == 0x2A844Cu) {
        ctx->pc = 0x2A844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8448u;
        // 0x2a844c: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8450u;
        goto label_2a8450;
    }
    ctx->pc = 0x2A8448u;
    {
        const bool branch_taken_0x2a8448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8448u;
        // 0x2a844c: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8448) {
            ctx->pc = 0x2A8464u;
            goto label_2a8464;
        }
    }
    ctx->pc = 0x2A8450u;
label_2a8450:
    // 0x2a8450: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2a8450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2a8454:
    // 0x2a8454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8458:
    // 0x2a8458: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x2a8458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a845c:
    // 0x2a845c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a845cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a8460:
    // 0x2a8460: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2a8460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2a8464:
    // 0x2a8464: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2a8464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2a8468:
    // 0x2a8468: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x2a8468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_2a846c:
    // 0x2a846c: 0x60f809  jalr        $v1
label_2a8470:
    if (ctx->pc == 0x2A8470u) {
        ctx->pc = 0x2A8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A846Cu;
        // 0x2a8470: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8474u;
        goto label_2a8474;
    }
    ctx->pc = 0x2A846Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A8474u);
        ctx->pc = 0x2A8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A846Cu;
        // 0x2a8470: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A846Cu, 0x2A8474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8474u;
label_2a8474:
    // 0x2a8474: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a8478:
    if (ctx->pc == 0x2A8478u) {
        ctx->pc = 0x2A8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8474u;
        // 0x2a8478: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A847Cu;
        goto label_2a847c;
    }
    ctx->pc = 0x2A8474u;
    {
        const bool branch_taken_0x2a8474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8474u;
        // 0x2a8478: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8474) {
            ctx->pc = 0x2A84A0u;
            goto label_2a84a0;
        }
    }
    ctx->pc = 0x2A847Cu;
label_2a847c:
    // 0x2a847c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8480:
    // 0x2a8480: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x2a8480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a8484:
    // 0x2a8484: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a8484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a8488:
    // 0x2a8488: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2a8488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2a848c:
    // 0x2a848c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2a848cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2a8490:
    // 0x2a8490: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x2a8490u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_2a8494:
    // 0x2a8494: 0x60f809  jalr        $v1
label_2a8498:
    if (ctx->pc == 0x2A8498u) {
        ctx->pc = 0x2A8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8494u;
        // 0x2a8498: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A849Cu;
        goto label_2a849c;
    }
    ctx->pc = 0x2A8494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A849Cu);
        ctx->pc = 0x2A8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8494u;
        // 0x2a8498: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8494u, 0x2A849Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A849Cu;
label_2a849c:
    // 0x2a849c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a84a0:
    // 0x2a84a0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a84a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a84a4:
    // 0x2a84a4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2a84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2a84a8:
    // 0x2a84a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2a84ac:
    if (ctx->pc == 0x2A84ACu) {
        ctx->pc = 0x2A84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84A8u;
        // 0x2a84ac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A84B0u;
        goto label_2a84b0;
    }
    ctx->pc = 0x2A84A8u;
    {
        const bool branch_taken_0x2a84a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84A8u;
        // 0x2a84ac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84a8) {
            ctx->pc = 0x2A84C4u;
            goto label_2a84c4;
        }
    }
    ctx->pc = 0x2A84B0u;
label_2a84b0:
    // 0x2a84b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2a84b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a84b4:
    // 0x2a84b4: 0x0  nop
    ctx->pc = 0x2a84b4u;
    // NOP
label_2a84b8:
    // 0x2a84b8: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x2a84b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2a84bc:
    // 0x2a84bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a84c0:
    if (ctx->pc == 0x2A84C0u) {
        ctx->pc = 0x2A84C4u;
        goto label_2a84c4;
    }
    ctx->pc = 0x2A84BCu;
    {
        const bool branch_taken_0x2a84bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a84bc) {
            ctx->pc = 0x2A84E0u;
            goto label_2a84e0;
        }
    }
    ctx->pc = 0x2A84C4u;
label_2a84c4:
    // 0x2a84c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a84c8:
    // 0x2a84c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a84c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a84cc:
    // 0x2a84cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a84ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a84d0:
    // 0x2a84d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2a84d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a84d4:
    // 0x2a84d4: 0x0  nop
    ctx->pc = 0x2a84d4u;
    // NOP
label_2a84d8:
    // 0x2a84d8: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x2a84d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2a84dc:
    // 0x2a84dc: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x2a84dcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_2a84e0:
    // 0x2a84e0: 0x0  nop
    ctx->pc = 0x2a84e0u;
    // NOP
label_2a84e4:
    // 0x2a84e4: 0x0  nop
    ctx->pc = 0x2a84e4u;
    // NOP
label_2a84e8:
    // 0x2a84e8: 0x460e05c3  div.s       $f23, $f0, $f14
    ctx->pc = 0x2a84e8u;
    { if (ctx->f[14] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[0], ctx->f[14]); }
label_2a84ec:
    // 0x2a84ec: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2a84ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a84f0:
    // 0x2a84f0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2a84f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a84f4:
    // 0x2a84f4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2a84f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2a84f8:
    // 0x2a84f8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_2a84fc:
    if (ctx->pc == 0x2A84FCu) {
        ctx->pc = 0x2A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84F8u;
        // 0x2a84fc: 0x46000bc1  sub.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8500u;
        goto label_2a8500;
    }
    ctx->pc = 0x2A84F8u;
    {
        const bool branch_taken_0x2a84f8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84F8u;
        // 0x2a84fc: 0x46000bc1  sub.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84f8) {
            ctx->pc = 0x2A8514u;
            goto label_2a8514;
        }
    }
    ctx->pc = 0x2A8500u;
label_2a8500:
    // 0x2a8500: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a8500u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a8504:
    // 0x2a8504: 0x0  nop
    ctx->pc = 0x2a8504u;
    // NOP
label_2a8508:
    // 0x2a8508: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a8508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a850c:
    // 0x2a850c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a8510:
    if (ctx->pc == 0x2A8510u) {
        ctx->pc = 0x2A8514u;
        goto label_2a8514;
    }
    ctx->pc = 0x2A850Cu;
    {
        const bool branch_taken_0x2a850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a850c) {
            ctx->pc = 0x2A8530u;
            goto label_2a8530;
        }
    }
    ctx->pc = 0x2A8514u;
label_2a8514:
    // 0x2a8514: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a8514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2a8518:
    // 0x2a8518: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a8518u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2a851c:
    // 0x2a851c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a851cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a8520:
    // 0x2a8520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a8524:
    // 0x2a8524: 0x0  nop
    ctx->pc = 0x2a8524u;
    // NOP
label_2a8528:
    // 0x2a8528: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a8528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a852c:
    // 0x2a852c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a852cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a8530:
    // 0x2a8530: 0x0  nop
    ctx->pc = 0x2a8530u;
    // NOP
label_2a8534:
    // 0x2a8534: 0x0  nop
    ctx->pc = 0x2a8534u;
    // NOP
label_2a8538:
    // 0x2a8538: 0x46017d83  div.s       $f22, $f15, $f1
    ctx->pc = 0x2a8538u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[15], ctx->f[1]); }
label_2a853c:
    // 0x2a853c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2a853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a8540:
    // 0x2a8540: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2a8540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a8544:
    // 0x2a8544: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a8544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8548:
    // 0x2a8548: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x2a8548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a854c:
    // 0x2a854c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2a854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8550:
    // 0x2a8550: 0x46011e01  sub.s       $f24, $f3, $f1
    ctx->pc = 0x2a8550u;
    ctx->f[24] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2a8554:
    // 0x2a8554: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
label_2a8558:
    if (ctx->pc == 0x2A8558u) {
        ctx->pc = 0x2A8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8554u;
        // 0x2a8558: 0x46001641  sub.s       $f25, $f2, $f0 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A855Cu;
        goto label_2a855c;
    }
    ctx->pc = 0x2A8554u;
    {
        const bool branch_taken_0x2a8554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8554u;
        // 0x2a8558: 0x46001641  sub.s       $f25, $f2, $f0 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8554) {
            ctx->pc = 0x2A860Cu;
            goto label_2a860c;
        }
    }
    ctx->pc = 0x2A855Cu;
label_2a855c:
    // 0x2a855c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2a855cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2a8560:
    // 0x2a8560: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a8560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8564:
    // 0x2a8564: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2a8568:
    if (ctx->pc == 0x2A8568u) {
        ctx->pc = 0x2A8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8564u;
        // 0x2a8568: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A856Cu;
        goto label_2a856c;
    }
    ctx->pc = 0x2A8564u;
    {
        const bool branch_taken_0x2a8564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8564u;
        // 0x2a8568: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8564) {
            ctx->pc = 0x2A85F8u;
            goto label_2a85f8;
        }
    }
    ctx->pc = 0x2A856Cu;
label_2a856c:
    // 0x2a856c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a856cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8570:
    // 0x2a8570: 0x0  nop
    ctx->pc = 0x2a8570u;
    // NOP
label_2a8574:
    // 0x2a8574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8578:
    // 0x2a8578: 0x46190502  mul.s       $f20, $f0, $f25
    ctx->pc = 0x2a8578u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_2a857c:
    // 0x2a857c: 0x46160542  mul.s       $f21, $f0, $f22
    ctx->pc = 0x2a857cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_2a8580:
    // 0x2a8580: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x2a8580u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8584:
    // 0x2a8584: 0x0  nop
    ctx->pc = 0x2a8584u;
    // NOP
label_2a8588:
    // 0x2a8588: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2a858c:
    // 0x2a858c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a8590:
    // 0x2a8590: 0xc60d000c  lwc1        $f13, 0xC($s0)
    ctx->pc = 0x2a8590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a8594:
    // 0x2a8594: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2a8594u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2a8598:
    // 0x2a8598: 0xc7b00000  lwc1        $f16, 0x0($sp)
    ctx->pc = 0x2a8598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_2a859c:
    // 0x2a859c: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x2a859cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_2a85a0:
    // 0x2a85a0: 0x46186002  mul.s       $f0, $f12, $f24
    ctx->pc = 0x2a85a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
label_2a85a4:
    // 0x2a85a4: 0xc7b10004  lwc1        $f17, 0x4($sp)
    ctx->pc = 0x2a85a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_2a85a8:
    // 0x2a85a8: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x2a85a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
label_2a85ac:
    // 0x2a85ac: 0xc7b20008  lwc1        $f18, 0x8($sp)
    ctx->pc = 0x2a85acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2a85b0:
    // 0x2a85b0: 0xc7b3000c  lwc1        $f19, 0xC($sp)
    ctx->pc = 0x2a85b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2a85b4:
    // 0x2a85b4: 0x46156b40  add.s       $f13, $f13, $f21
    ctx->pc = 0x2a85b4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
label_2a85b8:
    // 0x2a85b8: 0x46009480  add.s       $f18, $f18, $f0
    ctx->pc = 0x2a85b8u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[0]);
label_2a85bc:
    // 0x2a85bc: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x2a85bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a85c0:
    // 0x2a85c0: 0x460c0b00  add.s       $f12, $f1, $f12
    ctx->pc = 0x2a85c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_2a85c4:
    // 0x2a85c4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a85c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a85c8:
    // 0x2a85c8: 0x46008400  add.s       $f16, $f16, $f0
    ctx->pc = 0x2a85c8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[0]);
label_2a85cc:
    // 0x2a85cc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2a85ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a85d0:
    // 0x2a85d0: 0x46148c40  add.s       $f17, $f17, $f20
    ctx->pc = 0x2a85d0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[20]);
label_2a85d4:
    // 0x2a85d4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a85d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a85d8:
    // 0x2a85d8: 0x46149cc0  add.s       $f19, $f19, $f20
    ctx->pc = 0x2a85d8u;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[20]);
label_2a85dc:
    // 0x2a85dc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a85dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a85e0:
    // 0x2a85e0: 0xc0da8a0  jal         func_36A280
label_2a85e4:
    if (ctx->pc == 0x2A85E4u) {
        ctx->pc = 0x2A85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85E0u;
        // 0x2a85e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A85E8u;
        goto label_2a85e8;
    }
    ctx->pc = 0x2A85E0u;
    SET_GPR_U32(ctx, 31, 0x2A85E8u);
    ctx->pc = 0x2A85E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A85E0u;
    // 0x2a85e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A280u, 0x2A85E0u, 0x2A85E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A85E8u;
label_2a85e8:
    // 0x2a85e8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2a85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2a85ec:
    // 0x2a85ec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2a85ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a85f0:
    // 0x2a85f0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_2a85f4:
    if (ctx->pc == 0x2A85F4u) {
        ctx->pc = 0x2A85F8u;
        goto label_2a85f8;
    }
    ctx->pc = 0x2A85F0u;
    {
        const bool branch_taken_0x2a85f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a85f0) {
            ctx->pc = 0x2A8580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8580;
        }
    }
    ctx->pc = 0x2A85F8u;
label_2a85f8:
    // 0x2a85f8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2a85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2a85fc:
    // 0x2a85fc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2a85fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a8600:
    // 0x2a8600: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2a8600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a8604:
    // 0x2a8604: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
label_2a8608:
    if (ctx->pc == 0x2A8608u) {
        ctx->pc = 0x2A8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8604u;
        // 0x2a8608: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A860Cu;
        goto label_2a860c;
    }
    ctx->pc = 0x2A8604u;
    {
        const bool branch_taken_0x2a8604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8604) {
            ctx->pc = 0x2A8608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8604u;
            // 0x2a8608: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8560;
        }
    }
    ctx->pc = 0x2A860Cu;
label_2a860c:
    // 0x2a860c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a860cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8610:
    // 0x2a8610: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2a8610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2a8614:
    // 0x2a8614: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a8614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a8618:
    // 0x2a8618: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a8618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2a861c:
    // 0x2a861c: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x2a861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2a8620:
    // 0x2a8620: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x2a8620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2a8624:
    // 0x2a8624: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x2a8624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2a8628:
    // 0x2a8628: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2a8628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2a862c:
    // 0x2a862c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2a862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a8630:
    // 0x2a8630: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2a8630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a8634:
    // 0x2a8634: 0x3e00008  jr          $ra
label_2a8638:
    if (ctx->pc == 0x2A8638u) {
        ctx->pc = 0x2A8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8634u;
        // 0x2a8638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A863Cu;
        goto label_2a863c;
    }
    ctx->pc = 0x2A8634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8634u;
        // 0x2a8638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A863Cu;
label_2a863c:
    // 0x2a863c: 0x0  nop
    ctx->pc = 0x2a863cu;
    // NOP
label_2a8640:
    // 0x2a8640: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2a8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2a8644:
    // 0x2a8644: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_2a8648:
    if (ctx->pc == 0x2A8648u) {
        ctx->pc = 0x2A864Cu;
        goto label_2a864c;
    }
    ctx->pc = 0x2A8644u;
    {
        const bool branch_taken_0x2a8644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8644) {
            ctx->pc = 0x2A86D8u;
            goto label_2a86d8;
        }
    }
    ctx->pc = 0x2A864Cu;
label_2a864c:
    // 0x2a864c: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
label_2a8650:
    if (ctx->pc == 0x2A8650u) {
        ctx->pc = 0x2A8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A864Cu;
        // 0x2a8650: 0x31220001  andi        $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8654u;
        goto label_2a8654;
    }
    ctx->pc = 0x2A864Cu;
    {
        const bool branch_taken_0x2a864c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2A8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A864Cu;
        // 0x2a8650: 0x31220001  andi        $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a864c) {
            ctx->pc = 0x2A8668u;
            goto label_2a8668;
        }
    }
    ctx->pc = 0x2A8654u;
label_2a8654:
    // 0x2a8654: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a8654u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8658:
    // 0x2a8658: 0x0  nop
    ctx->pc = 0x2a8658u;
    // NOP
label_2a865c:
    // 0x2a865c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a865cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8660:
    // 0x2a8660: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a8664:
    if (ctx->pc == 0x2A8664u) {
        ctx->pc = 0x2A8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8660u;
        // 0x2a8664: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8668u;
        goto label_2a8668;
    }
    ctx->pc = 0x2A8660u;
    {
        const bool branch_taken_0x2a8660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8660u;
        // 0x2a8664: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8660) {
            ctx->pc = 0x2A8684u;
            goto label_2a8684;
        }
    }
    ctx->pc = 0x2A8668u;
label_2a8668:
    // 0x2a8668: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x2a8668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_2a866c:
    // 0x2a866c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a866cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a8670:
    // 0x2a8670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8674:
    // 0x2a8674: 0x0  nop
    ctx->pc = 0x2a8674u;
    // NOP
label_2a8678:
    // 0x2a8678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a867c:
    // 0x2a867c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a867cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a8680:
    // 0x2a8680: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a8680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2a8684:
    // 0x2a8684: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x2a8684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2a8688:
    // 0x2a8688: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2a868c:
    if (ctx->pc == 0x2A868Cu) {
        ctx->pc = 0x2A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8688u;
        // 0x2a868c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8690u;
        goto label_2a8690;
    }
    ctx->pc = 0x2A8688u;
    {
        const bool branch_taken_0x2a8688 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8688u;
        // 0x2a868c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8688) {
            ctx->pc = 0x2A86A4u;
            goto label_2a86a4;
        }
    }
    ctx->pc = 0x2A8690u;
label_2a8690:
    // 0x2a8690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8694:
    // 0x2a8694: 0x0  nop
    ctx->pc = 0x2a8694u;
    // NOP
label_2a8698:
    // 0x2a8698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a869c:
    // 0x2a869c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a86a0:
    if (ctx->pc == 0x2A86A0u) {
        ctx->pc = 0x2A86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A869Cu;
        // 0x2a86a0: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A86A4u;
        goto label_2a86a4;
    }
    ctx->pc = 0x2A869Cu;
    {
        const bool branch_taken_0x2a869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A869Cu;
        // 0x2a86a0: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a869c) {
            ctx->pc = 0x2A86C4u;
            goto label_2a86c4;
        }
    }
    ctx->pc = 0x2A86A4u;
label_2a86a4:
    // 0x2a86a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a86a8:
    // 0x2a86a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a86a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a86ac:
    // 0x2a86ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a86acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a86b0:
    // 0x2a86b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a86b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a86b4:
    // 0x2a86b4: 0x0  nop
    ctx->pc = 0x2a86b4u;
    // NOP
label_2a86b8:
    // 0x2a86b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a86b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a86bc:
    // 0x2a86bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a86bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a86c0:
    // 0x2a86c0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a86c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2a86c4:
    // 0x2a86c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a86c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a86c8:
    // 0x2a86c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a86c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a86cc:
    // 0x2a86cc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2a86ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2a86d0:
    // 0x2a86d0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2a86d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2a86d4:
    // 0x2a86d4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2a86d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_2a86d8:
    // 0x2a86d8: 0x3e00008  jr          $ra
label_2a86dc:
    if (ctx->pc == 0x2A86DCu) {
        ctx->pc = 0x2A86E0u;
        goto label_2a86e0;
    }
    ctx->pc = 0x2A86D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A86D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A86E0u;
label_2a86e0:
    // 0x2a86e0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2a86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2a86e4:
    // 0x2a86e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a86e8:
    // 0x2a86e8: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_2a86ec:
    if (ctx->pc == 0x2A86ECu) {
        ctx->pc = 0x2A86F0u;
        goto label_2a86f0;
    }
    ctx->pc = 0x2A86E8u;
    {
        const bool branch_taken_0x2a86e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a86e8) {
            ctx->pc = 0x2A877Cu;
            goto label_2a877c;
        }
    }
    ctx->pc = 0x2A86F0u;
label_2a86f0:
    // 0x2a86f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a86f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a86f4:
    // 0x2a86f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a86f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a86f8:
    // 0x2a86f8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2a86fc:
    // 0x2a86fc: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
label_2a8700:
    if (ctx->pc == 0x2A8700u) {
        ctx->pc = 0x2A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86FCu;
        // 0x2a8700: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8704u;
        goto label_2a8704;
    }
    ctx->pc = 0x2A86FCu;
    {
        const bool branch_taken_0x2a86fc = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86FCu;
        // 0x2a8700: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86fc) {
            ctx->pc = 0x2A8718u;
            goto label_2a8718;
        }
    }
    ctx->pc = 0x2A8704u;
label_2a8704:
    // 0x2a8704: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a8704u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8708:
    // 0x2a8708: 0x0  nop
    ctx->pc = 0x2a8708u;
    // NOP
label_2a870c:
    // 0x2a870c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a870cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8710:
    // 0x2a8710: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a8714:
    if (ctx->pc == 0x2A8714u) {
        ctx->pc = 0x2A8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8710u;
        // 0x2a8714: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8718u;
        goto label_2a8718;
    }
    ctx->pc = 0x2A8710u;
    {
        const bool branch_taken_0x2a8710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8710u;
        // 0x2a8714: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8710) {
            ctx->pc = 0x2A8738u;
            goto label_2a8738;
        }
    }
    ctx->pc = 0x2A8718u;
label_2a8718:
    // 0x2a8718: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x2a8718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_2a871c:
    // 0x2a871c: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x2a871cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_2a8720:
    // 0x2a8720: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a8724:
    // 0x2a8724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8728:
    // 0x2a8728: 0x0  nop
    ctx->pc = 0x2a8728u;
    // NOP
label_2a872c:
    // 0x2a872c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a872cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8730:
    // 0x2a8730: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a8734:
    // 0x2a8734: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a8734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2a8738:
    // 0x2a8738: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x2a8738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2a873c:
    // 0x2a873c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2a8740:
    if (ctx->pc == 0x2A8740u) {
        ctx->pc = 0x2A8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A873Cu;
        // 0x2a8740: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8744u;
        goto label_2a8744;
    }
    ctx->pc = 0x2A873Cu;
    {
        const bool branch_taken_0x2a873c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A873Cu;
        // 0x2a8740: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a873c) {
            ctx->pc = 0x2A8758u;
            goto label_2a8758;
        }
    }
    ctx->pc = 0x2A8744u;
label_2a8744:
    // 0x2a8744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8748:
    // 0x2a8748: 0x0  nop
    ctx->pc = 0x2a8748u;
    // NOP
label_2a874c:
    // 0x2a874c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a874cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8750:
    // 0x2a8750: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a8754:
    if (ctx->pc == 0x2A8754u) {
        ctx->pc = 0x2A8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8750u;
        // 0x2a8754: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8758u;
        goto label_2a8758;
    }
    ctx->pc = 0x2A8750u;
    {
        const bool branch_taken_0x2a8750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8750u;
        // 0x2a8754: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8750) {
            ctx->pc = 0x2A8778u;
            goto label_2a8778;
        }
    }
    ctx->pc = 0x2A8758u;
label_2a8758:
    // 0x2a8758: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a8758u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a875c:
    // 0x2a875c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a875cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a8760:
    // 0x2a8760: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a8764:
    // 0x2a8764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8768:
    // 0x2a8768: 0x0  nop
    ctx->pc = 0x2a8768u;
    // NOP
label_2a876c:
    // 0x2a876c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a876cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8770:
    // 0x2a8770: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a8774:
    // 0x2a8774: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a8774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2a8778:
    // 0x2a8778: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2a8778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_2a877c:
    // 0x2a877c: 0x3e00008  jr          $ra
label_2a8780:
    if (ctx->pc == 0x2A8780u) {
        ctx->pc = 0x2A8784u;
        goto label_2a8784;
    }
    ctx->pc = 0x2A877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A877Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8784u;
label_2a8784:
    // 0x2a8784: 0x0  nop
    ctx->pc = 0x2a8784u;
    // NOP
label_2a8788:
    // 0x2a8788: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2a8788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2a878c:
    // 0x2a878c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a8790:
    // 0x2a8790: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_2a8794:
    if (ctx->pc == 0x2A8794u) {
        ctx->pc = 0x2A8798u;
        goto label_2a8798;
    }
    ctx->pc = 0x2A8790u;
    {
        const bool branch_taken_0x2a8790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a8790) {
            ctx->pc = 0x2A888Cu;
            goto label_2a888c;
        }
    }
    ctx->pc = 0x2A8798u;
label_2a8798:
    // 0x2a8798: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
label_2a879c:
    if (ctx->pc == 0x2A879Cu) {
        ctx->pc = 0x2A879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8798u;
        // 0x2a879c: 0x31220001  andi        $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A87A0u;
        goto label_2a87a0;
    }
    ctx->pc = 0x2A8798u;
    {
        const bool branch_taken_0x2a8798 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2A879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8798u;
        // 0x2a879c: 0x31220001  andi        $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8798) {
            ctx->pc = 0x2A87B4u;
            goto label_2a87b4;
        }
    }
    ctx->pc = 0x2A87A0u;
label_2a87a0:
    // 0x2a87a0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a87a0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a87a4:
    // 0x2a87a4: 0x0  nop
    ctx->pc = 0x2a87a4u;
    // NOP
label_2a87a8:
    // 0x2a87a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a87a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a87ac:
    // 0x2a87ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a87b0:
    if (ctx->pc == 0x2A87B0u) {
        ctx->pc = 0x2A87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87ACu;
        // 0x2a87b0: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A87B4u;
        goto label_2a87b4;
    }
    ctx->pc = 0x2A87ACu;
    {
        const bool branch_taken_0x2a87ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87ACu;
        // 0x2a87b0: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87ac) {
            ctx->pc = 0x2A87D0u;
            goto label_2a87d0;
        }
    }
    ctx->pc = 0x2A87B4u;
label_2a87b4:
    // 0x2a87b4: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x2a87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_2a87b8:
    // 0x2a87b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a87b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a87bc:
    // 0x2a87bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a87bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a87c0:
    // 0x2a87c0: 0x0  nop
    ctx->pc = 0x2a87c0u;
    // NOP
label_2a87c4:
    // 0x2a87c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a87c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a87c8:
    // 0x2a87c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a87c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a87cc:
    // 0x2a87cc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a87ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2a87d0:
    // 0x2a87d0: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x2a87d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2a87d4:
    // 0x2a87d4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_2a87d8:
    if (ctx->pc == 0x2A87D8u) {
        ctx->pc = 0x2A87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87D4u;
        // 0x2a87d8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A87DCu;
        goto label_2a87dc;
    }
    ctx->pc = 0x2A87D4u;
    {
        const bool branch_taken_0x2a87d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87D4u;
        // 0x2a87d8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87d4) {
            ctx->pc = 0x2A87F0u;
            goto label_2a87f0;
        }
    }
    ctx->pc = 0x2A87DCu;
label_2a87dc:
    // 0x2a87dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a87dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a87e0:
    // 0x2a87e0: 0x0  nop
    ctx->pc = 0x2a87e0u;
    // NOP
label_2a87e4:
    // 0x2a87e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a87e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a87e8:
    // 0x2a87e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a87ec:
    if (ctx->pc == 0x2A87ECu) {
        ctx->pc = 0x2A87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87E8u;
        // 0x2a87ec: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A87F0u;
        goto label_2a87f0;
    }
    ctx->pc = 0x2A87E8u;
    {
        const bool branch_taken_0x2a87e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87E8u;
        // 0x2a87ec: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87e8) {
            ctx->pc = 0x2A8810u;
            goto label_2a8810;
        }
    }
    ctx->pc = 0x2A87F0u;
label_2a87f0:
    // 0x2a87f0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a87f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2a87f4:
    // 0x2a87f4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2a87f8:
    // 0x2a87f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a87f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a87fc:
    // 0x2a87fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a87fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8800:
    // 0x2a8800: 0x0  nop
    ctx->pc = 0x2a8800u;
    // NOP
label_2a8804:
    // 0x2a8804: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8808:
    // 0x2a8808: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a880c:
    // 0x2a880c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a880cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2a8810:
    // 0x2a8810: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
label_2a8814:
    if (ctx->pc == 0x2A8814u) {
        ctx->pc = 0x2A8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8810u;
        // 0x2a8814: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8818u;
        goto label_2a8818;
    }
    ctx->pc = 0x2A8810u;
    {
        const bool branch_taken_0x2a8810 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2A8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8810u;
        // 0x2a8814: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8810) {
            ctx->pc = 0x2A882Cu;
            goto label_2a882c;
        }
    }
    ctx->pc = 0x2A8818u;
label_2a8818:
    // 0x2a8818: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a8818u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a881c:
    // 0x2a881c: 0x0  nop
    ctx->pc = 0x2a881cu;
    // NOP
label_2a8820:
    // 0x2a8820: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8824:
    // 0x2a8824: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a8828:
    if (ctx->pc == 0x2A8828u) {
        ctx->pc = 0x2A8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8824u;
        // 0x2a8828: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A882Cu;
        goto label_2a882c;
    }
    ctx->pc = 0x2A8824u;
    {
        const bool branch_taken_0x2a8824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8824u;
        // 0x2a8828: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8824) {
            ctx->pc = 0x2A884Cu;
            goto label_2a884c;
        }
    }
    ctx->pc = 0x2A882Cu;
label_2a882c:
    // 0x2a882c: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x2a882cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_2a8830:
    // 0x2a8830: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x2a8830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_2a8834:
    // 0x2a8834: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a8838:
    // 0x2a8838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a883c:
    // 0x2a883c: 0x0  nop
    ctx->pc = 0x2a883cu;
    // NOP
label_2a8840:
    // 0x2a8840: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8844:
    // 0x2a8844: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a8848:
    // 0x2a8848: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a8848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2a884c:
    // 0x2a884c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_2a8850:
    if (ctx->pc == 0x2A8850u) {
        ctx->pc = 0x2A8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A884Cu;
        // 0x2a8850: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8854u;
        goto label_2a8854;
    }
    ctx->pc = 0x2A884Cu;
    {
        const bool branch_taken_0x2a884c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A884Cu;
        // 0x2a8850: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a884c) {
            ctx->pc = 0x2A8868u;
            goto label_2a8868;
        }
    }
    ctx->pc = 0x2A8854u;
label_2a8854:
    // 0x2a8854: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a8854u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8858:
    // 0x2a8858: 0x0  nop
    ctx->pc = 0x2a8858u;
    // NOP
label_2a885c:
    // 0x2a885c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a885cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8860:
    // 0x2a8860: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a8864:
    if (ctx->pc == 0x2A8864u) {
        ctx->pc = 0x2A8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8860u;
        // 0x2a8864: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8868u;
        goto label_2a8868;
    }
    ctx->pc = 0x2A8860u;
    {
        const bool branch_taken_0x2a8860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8860u;
        // 0x2a8864: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8860) {
            ctx->pc = 0x2A8888u;
            goto label_2a8888;
        }
    }
    ctx->pc = 0x2A8868u;
label_2a8868:
    // 0x2a8868: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a8868u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2a886c:
    // 0x2a886c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2a8870:
    // 0x2a8870: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a8874:
    // 0x2a8874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8878:
    // 0x2a8878: 0x0  nop
    ctx->pc = 0x2a8878u;
    // NOP
label_2a887c:
    // 0x2a887c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a887cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8880:
    // 0x2a8880: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a8884:
    // 0x2a8884: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a8884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2a8888:
    // 0x2a8888: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2a8888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_2a888c:
    // 0x2a888c: 0x3e00008  jr          $ra
label_2a8890:
    if (ctx->pc == 0x2A8890u) {
        ctx->pc = 0x2A8894u;
        goto label_2a8894;
    }
    ctx->pc = 0x2A888Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A888Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8894u;
label_2a8894:
    // 0x2a8894: 0x0  nop
    ctx->pc = 0x2a8894u;
    // NOP
    ctx->pc = 0x2a8898u;
}
