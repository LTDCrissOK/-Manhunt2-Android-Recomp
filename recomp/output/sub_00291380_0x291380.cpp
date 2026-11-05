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

// Function: sub_00291380
// Address: 0x291380 - 0x291758
void sub_00291380_0x291380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291380_0x291380");
#endif

    switch (ctx->pc) {
        case 0x291380u: goto label_291380;
        case 0x291384u: goto label_291384;
        case 0x291388u: goto label_291388;
        case 0x29138cu: goto label_29138c;
        case 0x291390u: goto label_291390;
        case 0x291394u: goto label_291394;
        case 0x291398u: goto label_291398;
        case 0x29139cu: goto label_29139c;
        case 0x2913a0u: goto label_2913a0;
        case 0x2913a4u: goto label_2913a4;
        case 0x2913a8u: goto label_2913a8;
        case 0x2913acu: goto label_2913ac;
        case 0x2913b0u: goto label_2913b0;
        case 0x2913b4u: goto label_2913b4;
        case 0x2913b8u: goto label_2913b8;
        case 0x2913bcu: goto label_2913bc;
        case 0x2913c0u: goto label_2913c0;
        case 0x2913c4u: goto label_2913c4;
        case 0x2913c8u: goto label_2913c8;
        case 0x2913ccu: goto label_2913cc;
        case 0x2913d0u: goto label_2913d0;
        case 0x2913d4u: goto label_2913d4;
        case 0x2913d8u: goto label_2913d8;
        case 0x2913dcu: goto label_2913dc;
        case 0x2913e0u: goto label_2913e0;
        case 0x2913e4u: goto label_2913e4;
        case 0x2913e8u: goto label_2913e8;
        case 0x2913ecu: goto label_2913ec;
        case 0x2913f0u: goto label_2913f0;
        case 0x2913f4u: goto label_2913f4;
        case 0x2913f8u: goto label_2913f8;
        case 0x2913fcu: goto label_2913fc;
        case 0x291400u: goto label_291400;
        case 0x291404u: goto label_291404;
        case 0x291408u: goto label_291408;
        case 0x29140cu: goto label_29140c;
        case 0x291410u: goto label_291410;
        case 0x291414u: goto label_291414;
        case 0x291418u: goto label_291418;
        case 0x29141cu: goto label_29141c;
        case 0x291420u: goto label_291420;
        case 0x291424u: goto label_291424;
        case 0x291428u: goto label_291428;
        case 0x29142cu: goto label_29142c;
        case 0x291430u: goto label_291430;
        case 0x291434u: goto label_291434;
        case 0x291438u: goto label_291438;
        case 0x29143cu: goto label_29143c;
        case 0x291440u: goto label_291440;
        case 0x291444u: goto label_291444;
        case 0x291448u: goto label_291448;
        case 0x29144cu: goto label_29144c;
        case 0x291450u: goto label_291450;
        case 0x291454u: goto label_291454;
        case 0x291458u: goto label_291458;
        case 0x29145cu: goto label_29145c;
        case 0x291460u: goto label_291460;
        case 0x291464u: goto label_291464;
        case 0x291468u: goto label_291468;
        case 0x29146cu: goto label_29146c;
        case 0x291470u: goto label_291470;
        case 0x291474u: goto label_291474;
        case 0x291478u: goto label_291478;
        case 0x29147cu: goto label_29147c;
        case 0x291480u: goto label_291480;
        case 0x291484u: goto label_291484;
        case 0x291488u: goto label_291488;
        case 0x29148cu: goto label_29148c;
        case 0x291490u: goto label_291490;
        case 0x291494u: goto label_291494;
        case 0x291498u: goto label_291498;
        case 0x29149cu: goto label_29149c;
        case 0x2914a0u: goto label_2914a0;
        case 0x2914a4u: goto label_2914a4;
        case 0x2914a8u: goto label_2914a8;
        case 0x2914acu: goto label_2914ac;
        case 0x2914b0u: goto label_2914b0;
        case 0x2914b4u: goto label_2914b4;
        case 0x2914b8u: goto label_2914b8;
        case 0x2914bcu: goto label_2914bc;
        case 0x2914c0u: goto label_2914c0;
        case 0x2914c4u: goto label_2914c4;
        case 0x2914c8u: goto label_2914c8;
        case 0x2914ccu: goto label_2914cc;
        case 0x2914d0u: goto label_2914d0;
        case 0x2914d4u: goto label_2914d4;
        case 0x2914d8u: goto label_2914d8;
        case 0x2914dcu: goto label_2914dc;
        case 0x2914e0u: goto label_2914e0;
        case 0x2914e4u: goto label_2914e4;
        case 0x2914e8u: goto label_2914e8;
        case 0x2914ecu: goto label_2914ec;
        case 0x2914f0u: goto label_2914f0;
        case 0x2914f4u: goto label_2914f4;
        case 0x2914f8u: goto label_2914f8;
        case 0x2914fcu: goto label_2914fc;
        case 0x291500u: goto label_291500;
        case 0x291504u: goto label_291504;
        case 0x291508u: goto label_291508;
        case 0x29150cu: goto label_29150c;
        case 0x291510u: goto label_291510;
        case 0x291514u: goto label_291514;
        case 0x291518u: goto label_291518;
        case 0x29151cu: goto label_29151c;
        case 0x291520u: goto label_291520;
        case 0x291524u: goto label_291524;
        case 0x291528u: goto label_291528;
        case 0x29152cu: goto label_29152c;
        case 0x291530u: goto label_291530;
        case 0x291534u: goto label_291534;
        case 0x291538u: goto label_291538;
        case 0x29153cu: goto label_29153c;
        case 0x291540u: goto label_291540;
        case 0x291544u: goto label_291544;
        case 0x291548u: goto label_291548;
        case 0x29154cu: goto label_29154c;
        case 0x291550u: goto label_291550;
        case 0x291554u: goto label_291554;
        case 0x291558u: goto label_291558;
        case 0x29155cu: goto label_29155c;
        case 0x291560u: goto label_291560;
        case 0x291564u: goto label_291564;
        case 0x291568u: goto label_291568;
        case 0x29156cu: goto label_29156c;
        case 0x291570u: goto label_291570;
        case 0x291574u: goto label_291574;
        case 0x291578u: goto label_291578;
        case 0x29157cu: goto label_29157c;
        case 0x291580u: goto label_291580;
        case 0x291584u: goto label_291584;
        case 0x291588u: goto label_291588;
        case 0x29158cu: goto label_29158c;
        case 0x291590u: goto label_291590;
        case 0x291594u: goto label_291594;
        case 0x291598u: goto label_291598;
        case 0x29159cu: goto label_29159c;
        case 0x2915a0u: goto label_2915a0;
        case 0x2915a4u: goto label_2915a4;
        case 0x2915a8u: goto label_2915a8;
        case 0x2915acu: goto label_2915ac;
        case 0x2915b0u: goto label_2915b0;
        case 0x2915b4u: goto label_2915b4;
        case 0x2915b8u: goto label_2915b8;
        case 0x2915bcu: goto label_2915bc;
        case 0x2915c0u: goto label_2915c0;
        case 0x2915c4u: goto label_2915c4;
        case 0x2915c8u: goto label_2915c8;
        case 0x2915ccu: goto label_2915cc;
        case 0x2915d0u: goto label_2915d0;
        case 0x2915d4u: goto label_2915d4;
        case 0x2915d8u: goto label_2915d8;
        case 0x2915dcu: goto label_2915dc;
        case 0x2915e0u: goto label_2915e0;
        case 0x2915e4u: goto label_2915e4;
        case 0x2915e8u: goto label_2915e8;
        case 0x2915ecu: goto label_2915ec;
        case 0x2915f0u: goto label_2915f0;
        case 0x2915f4u: goto label_2915f4;
        case 0x2915f8u: goto label_2915f8;
        case 0x2915fcu: goto label_2915fc;
        case 0x291600u: goto label_291600;
        case 0x291604u: goto label_291604;
        case 0x291608u: goto label_291608;
        case 0x29160cu: goto label_29160c;
        case 0x291610u: goto label_291610;
        case 0x291614u: goto label_291614;
        case 0x291618u: goto label_291618;
        case 0x29161cu: goto label_29161c;
        case 0x291620u: goto label_291620;
        case 0x291624u: goto label_291624;
        case 0x291628u: goto label_291628;
        case 0x29162cu: goto label_29162c;
        case 0x291630u: goto label_291630;
        case 0x291634u: goto label_291634;
        case 0x291638u: goto label_291638;
        case 0x29163cu: goto label_29163c;
        case 0x291640u: goto label_291640;
        case 0x291644u: goto label_291644;
        case 0x291648u: goto label_291648;
        case 0x29164cu: goto label_29164c;
        case 0x291650u: goto label_291650;
        case 0x291654u: goto label_291654;
        case 0x291658u: goto label_291658;
        case 0x29165cu: goto label_29165c;
        case 0x291660u: goto label_291660;
        case 0x291664u: goto label_291664;
        case 0x291668u: goto label_291668;
        case 0x29166cu: goto label_29166c;
        case 0x291670u: goto label_291670;
        case 0x291674u: goto label_291674;
        case 0x291678u: goto label_291678;
        case 0x29167cu: goto label_29167c;
        case 0x291680u: goto label_291680;
        case 0x291684u: goto label_291684;
        case 0x291688u: goto label_291688;
        case 0x29168cu: goto label_29168c;
        case 0x291690u: goto label_291690;
        case 0x291694u: goto label_291694;
        case 0x291698u: goto label_291698;
        case 0x29169cu: goto label_29169c;
        case 0x2916a0u: goto label_2916a0;
        case 0x2916a4u: goto label_2916a4;
        case 0x2916a8u: goto label_2916a8;
        case 0x2916acu: goto label_2916ac;
        case 0x2916b0u: goto label_2916b0;
        case 0x2916b4u: goto label_2916b4;
        case 0x2916b8u: goto label_2916b8;
        case 0x2916bcu: goto label_2916bc;
        case 0x2916c0u: goto label_2916c0;
        case 0x2916c4u: goto label_2916c4;
        case 0x2916c8u: goto label_2916c8;
        case 0x2916ccu: goto label_2916cc;
        case 0x2916d0u: goto label_2916d0;
        case 0x2916d4u: goto label_2916d4;
        case 0x2916d8u: goto label_2916d8;
        case 0x2916dcu: goto label_2916dc;
        case 0x2916e0u: goto label_2916e0;
        case 0x2916e4u: goto label_2916e4;
        case 0x2916e8u: goto label_2916e8;
        case 0x2916ecu: goto label_2916ec;
        case 0x2916f0u: goto label_2916f0;
        case 0x2916f4u: goto label_2916f4;
        case 0x2916f8u: goto label_2916f8;
        case 0x2916fcu: goto label_2916fc;
        case 0x291700u: goto label_291700;
        case 0x291704u: goto label_291704;
        case 0x291708u: goto label_291708;
        case 0x29170cu: goto label_29170c;
        case 0x291710u: goto label_291710;
        case 0x291714u: goto label_291714;
        case 0x291718u: goto label_291718;
        case 0x29171cu: goto label_29171c;
        case 0x291720u: goto label_291720;
        case 0x291724u: goto label_291724;
        case 0x291728u: goto label_291728;
        case 0x29172cu: goto label_29172c;
        case 0x291730u: goto label_291730;
        case 0x291734u: goto label_291734;
        case 0x291738u: goto label_291738;
        case 0x29173cu: goto label_29173c;
        case 0x291740u: goto label_291740;
        case 0x291744u: goto label_291744;
        case 0x291748u: goto label_291748;
        case 0x29174cu: goto label_29174c;
        case 0x291750u: goto label_291750;
        case 0x291754u: goto label_291754;
        default: break;
    }

    ctx->pc = 0x291380u;

label_291380:
    // 0x291380: 0x27bdf230  addiu       $sp, $sp, -0xDD0
    ctx->pc = 0x291380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963760));
label_291384:
    // 0x291384: 0xffb00d50  sd          $s0, 0xD50($sp)
    ctx->pc = 0x291384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3408), GPR_U64(ctx, 16));
label_291388:
    // 0x291388: 0xffb10d58  sd          $s1, 0xD58($sp)
    ctx->pc = 0x291388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3416), GPR_U64(ctx, 17));
label_29138c:
    // 0x29138c: 0xffb20d60  sd          $s2, 0xD60($sp)
    ctx->pc = 0x29138cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3424), GPR_U64(ctx, 18));
label_291390:
    // 0x291390: 0xffb30d68  sd          $s3, 0xD68($sp)
    ctx->pc = 0x291390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3432), GPR_U64(ctx, 19));
label_291394:
    // 0x291394: 0xe7b90dc8  swc1        $f25, 0xDC8($sp)
    ctx->pc = 0x291394u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3528), bits); }
label_291398:
    // 0x291398: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x291398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29139c:
    // 0x29139c: 0xe7b70db8  swc1        $f23, 0xDB8($sp)
    ctx->pc = 0x29139cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3512), bits); }
label_2913a0:
    // 0x2913a0: 0xffb40d70  sd          $s4, 0xD70($sp)
    ctx->pc = 0x2913a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3440), GPR_U64(ctx, 20));
label_2913a4:
    // 0x2913a4: 0xffb50d78  sd          $s5, 0xD78($sp)
    ctx->pc = 0x2913a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3448), GPR_U64(ctx, 21));
label_2913a8:
    // 0x2913a8: 0xffb60d80  sd          $s6, 0xD80($sp)
    ctx->pc = 0x2913a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3456), GPR_U64(ctx, 22));
label_2913ac:
    // 0x2913ac: 0xffb70d88  sd          $s7, 0xD88($sp)
    ctx->pc = 0x2913acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3464), GPR_U64(ctx, 23));
label_2913b0:
    // 0x2913b0: 0xffbe0d90  sd          $fp, 0xD90($sp)
    ctx->pc = 0x2913b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3472), GPR_U64(ctx, 30));
label_2913b4:
    // 0x2913b4: 0xffbf0d98  sd          $ra, 0xD98($sp)
    ctx->pc = 0x2913b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3480), GPR_U64(ctx, 31));
label_2913b8:
    // 0x2913b8: 0xe7b80dc0  swc1        $f24, 0xDC0($sp)
    ctx->pc = 0x2913b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3520), bits); }
label_2913bc:
    // 0x2913bc: 0xe7b60db0  swc1        $f22, 0xDB0($sp)
    ctx->pc = 0x2913bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3504), bits); }
label_2913c0:
    // 0x2913c0: 0xe7b50da8  swc1        $f21, 0xDA8($sp)
    ctx->pc = 0x2913c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3496), bits); }
label_2913c4:
    // 0x2913c4: 0xe7b40da0  swc1        $f20, 0xDA0($sp)
    ctx->pc = 0x2913c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3488), bits); }
label_2913c8:
    // 0x2913c8: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x2913c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2913cc:
    // 0x2913cc: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x2913ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2913d0:
    // 0x2913d0: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x2913d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2913d4:
    // 0x2913d4: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x2913d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2913d8:
    // 0x2913d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2913d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2913dc:
    // 0x2913dc: 0x92670017  lbu         $a3, 0x17($s3)
    ctx->pc = 0x2913dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
label_2913e0:
    // 0x2913e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2913e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2913e4:
    // 0x2913e4: 0x92640014  lbu         $a0, 0x14($s3)
    ctx->pc = 0x2913e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
label_2913e8:
    // 0x2913e8: 0x92650015  lbu         $a1, 0x15($s3)
    ctx->pc = 0x2913e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
label_2913ec:
    // 0x2913ec: 0x92660016  lbu         $a2, 0x16($s3)
    ctx->pc = 0x2913ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
label_2913f0:
    // 0x2913f0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2913f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2913f4:
    // 0x2913f4: 0xc0a17c6  jal         func_285F18
label_2913f8:
    if (ctx->pc == 0x2913F8u) {
        ctx->pc = 0x2913F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913F4u;
        // 0x2913f8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2913FCu;
        goto label_2913fc;
    }
    ctx->pc = 0x2913F4u;
    SET_GPR_U32(ctx, 31, 0x2913FCu);
    ctx->pc = 0x2913F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2913F4u;
    // 0x2913f8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x2913F4u, 0x2913FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2913FCu;
label_2913fc:
    // 0x2913fc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2913fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_291400:
    // 0x291400: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x291400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_291404:
    // 0x291404: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x291404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_291408:
    // 0x291408: 0xc0a4354  jal         func_290D50
label_29140c:
    if (ctx->pc == 0x29140Cu) {
        ctx->pc = 0x29140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291408u;
        // 0x29140c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291410u;
        goto label_291410;
    }
    ctx->pc = 0x291408u;
    SET_GPR_U32(ctx, 31, 0x291410u);
    ctx->pc = 0x29140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291408u;
    // 0x29140c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290D50u, 0x291408u, 0x291410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291410u;
label_291410:
    // 0x291410: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x291410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_291414:
    // 0x291414: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x291414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_291418:
    // 0x291418: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x291418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_29141c:
    // 0x29141c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29141cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291420:
    // 0x291420: 0xc09f60e  jal         func_27D838
label_291424:
    if (ctx->pc == 0x291424u) {
        ctx->pc = 0x291424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291420u;
        // 0x291424: 0x2484a8a0  addiu       $a0, $a0, -0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291428u;
        goto label_291428;
    }
    ctx->pc = 0x291420u;
    SET_GPR_U32(ctx, 31, 0x291428u);
    ctx->pc = 0x291424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291420u;
    // 0x291424: 0x2484a8a0  addiu       $a0, $a0, -0x5760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x291420u, 0x291428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291428u;
label_291428:
    // 0x291428: 0x27b00810  addiu       $s0, $sp, 0x810
    ctx->pc = 0x291428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2064));
label_29142c:
    // 0x29142c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x29142cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_291430:
    // 0x291430: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x291430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291434:
    // 0x291434: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x291434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_291438:
    // 0x291438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x291438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29143c:
    // 0x29143c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x29143cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_291440:
    // 0x291440: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x291440u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_291444:
    // 0x291444: 0xc0a43bc  jal         func_290EF0
label_291448:
    if (ctx->pc == 0x291448u) {
        ctx->pc = 0x291448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291444u;
        // 0x291448: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29144Cu;
        goto label_29144c;
    }
    ctx->pc = 0x291444u;
    SET_GPR_U32(ctx, 31, 0x29144Cu);
    ctx->pc = 0x291448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291444u;
    // 0x291448: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290EF0u, 0x291444u, 0x29144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29144Cu;
label_29144c:
    // 0x29144c: 0xafa20d40  sw          $v0, 0xD40($sp)
    ctx->pc = 0x29144cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3392), GPR_U32(ctx, 2));
label_291450:
    // 0x291450: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x291450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_291454:
    // 0x291454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x291454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291458:
    // 0x291458: 0xc0a441a  jal         func_291068
label_29145c:
    if (ctx->pc == 0x29145Cu) {
        ctx->pc = 0x29145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291458u;
        // 0x29145c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291460u;
        goto label_291460;
    }
    ctx->pc = 0x291458u;
    SET_GPR_U32(ctx, 31, 0x291460u);
    ctx->pc = 0x29145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291458u;
    // 0x29145c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291068u, 0x291458u, 0x291460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291460u;
label_291460:
    // 0x291460: 0x8e6301d8  lw          $v1, 0x1D8($s3)
    ctx->pc = 0x291460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
label_291464:
    // 0x291464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291468:
    // 0x291468: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_29146c:
    if (ctx->pc == 0x29146Cu) {
        ctx->pc = 0x29146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291468u;
        // 0x29146c: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291470u;
        goto label_291470;
    }
    ctx->pc = 0x291468u;
    {
        const bool branch_taken_0x291468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291468u;
        // 0x29146c: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291468) {
            ctx->pc = 0x2914B8u;
            goto label_2914b8;
        }
    }
    ctx->pc = 0x291470u;
label_291470:
    // 0x291470: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x291470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_291474:
    // 0x291474: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_291478:
    if (ctx->pc == 0x291478u) {
        ctx->pc = 0x291478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291474u;
        // 0x291478: 0xc7b50004  lwc1        $f21, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29147Cu;
        goto label_29147c;
    }
    ctx->pc = 0x291474u;
    {
        const bool branch_taken_0x291474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291474u;
        // 0x291478: 0xc7b50004  lwc1        $f21, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291474) {
            ctx->pc = 0x2914DCu;
            goto label_2914dc;
        }
    }
    ctx->pc = 0x29147Cu;
label_29147c:
    // 0x29147c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_291480:
    // 0x291480: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_291484:
    if (ctx->pc == 0x291484u) {
        ctx->pc = 0x291484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291480u;
        // 0x291484: 0x8fa60d40  lw          $a2, 0xD40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291488u;
        goto label_291488;
    }
    ctx->pc = 0x291480u;
    {
        const bool branch_taken_0x291480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291480u;
        // 0x291484: 0x8fa60d40  lw          $a2, 0xD40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291480) {
            ctx->pc = 0x2914DCu;
            goto label_2914dc;
        }
    }
    ctx->pc = 0x291488u;
label_291488:
    // 0x291488: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x291488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29148c:
    // 0x29148c: 0x27a50810  addiu       $a1, $sp, 0x810
    ctx->pc = 0x29148cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2064));
label_291490:
    // 0x291490: 0xc0a444e  jal         func_291138
label_291494:
    if (ctx->pc == 0x291494u) {
        ctx->pc = 0x291494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291490u;
        // 0x291494: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291498u;
        goto label_291498;
    }
    ctx->pc = 0x291490u;
    SET_GPR_U32(ctx, 31, 0x291498u);
    ctx->pc = 0x291494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291490u;
    // 0x291494: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x291138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291138u, 0x291490u, 0x291498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291498u;
label_291498:
    // 0x291498: 0xc661007c  lwc1        $f1, 0x7C($s3)
    ctx->pc = 0x291498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29149c:
    // 0x29149c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29149cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2914a0:
    // 0x2914a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2914a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2914a4:
    // 0x2914a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2914a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2914a8:
    // 0x2914a8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2914a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2914ac:
    // 0x2914ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2914acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2914b0:
    // 0x2914b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2914b4:
    if (ctx->pc == 0x2914B4u) {
        ctx->pc = 0x2914B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914B0u;
        // 0x2914b4: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914B8u;
        goto label_2914b8;
    }
    ctx->pc = 0x2914B0u;
    {
        const bool branch_taken_0x2914b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2914B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914B0u;
        // 0x2914b4: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914b0) {
            ctx->pc = 0x2914DCu;
            goto label_2914dc;
        }
    }
    ctx->pc = 0x2914B8u;
label_2914b8:
    // 0x2914b8: 0x8fa60d40  lw          $a2, 0xD40($sp)
    ctx->pc = 0x2914b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3392)));
label_2914bc:
    // 0x2914bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2914bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2914c0:
    // 0x2914c0: 0x27a50810  addiu       $a1, $sp, 0x810
    ctx->pc = 0x2914c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2064));
label_2914c4:
    // 0x2914c4: 0xc0a444e  jal         func_291138
label_2914c8:
    if (ctx->pc == 0x2914C8u) {
        ctx->pc = 0x2914C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914C4u;
        // 0x2914c8: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914CCu;
        goto label_2914cc;
    }
    ctx->pc = 0x2914C4u;
    SET_GPR_U32(ctx, 31, 0x2914CCu);
    ctx->pc = 0x2914C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2914C4u;
    // 0x2914c8: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x291138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291138u, 0x2914C4u, 0x2914CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2914CCu;
label_2914cc:
    // 0x2914cc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2914ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2914d0:
    // 0x2914d0: 0xc662007c  lwc1        $f2, 0x7C($s3)
    ctx->pc = 0x2914d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2914d4:
    // 0x2914d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2914d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2914d8:
    // 0x2914d8: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x2914d8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2914dc:
    // 0x2914dc: 0x8fa20d40  lw          $v0, 0xD40($sp)
    ctx->pc = 0x2914dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3392)));
label_2914e0:
    // 0x2914e0: 0x1840008b  blez        $v0, . + 4 + (0x8B << 2)
label_2914e4:
    if (ctx->pc == 0x2914E4u) {
        ctx->pc = 0x2914E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914E0u;
        // 0x2914e4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914E8u;
        goto label_2914e8;
    }
    ctx->pc = 0x2914E0u;
    {
        const bool branch_taken_0x2914e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2914E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914E0u;
        // 0x2914e4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914e0) {
            ctx->pc = 0x291710u;
            goto label_291710;
        }
    }
    ctx->pc = 0x2914E8u;
label_2914e8:
    // 0x2914e8: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x2914e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_2914ec:
    // 0x2914ec: 0x8e6501d4  lw          $a1, 0x1D4($s3)
    ctx->pc = 0x2914ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
label_2914f0:
    // 0x2914f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2914f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2914f4:
    // 0x2914f4: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x2914f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2914f8:
    // 0x2914f8: 0x24570810  addiu       $s7, $v0, 0x810
    ctx->pc = 0x2914f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
label_2914fc:
    // 0x2914fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2914fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_291500:
    // 0x291500: 0x54a20016  bnel        $a1, $v0, . + 4 + (0x16 << 2)
label_291504:
    if (ctx->pc == 0x291504u) {
        ctx->pc = 0x291504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291500u;
        // 0x291504: 0x4600be06  mov.s       $f24, $f23 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291508u;
        goto label_291508;
    }
    ctx->pc = 0x291500u;
    {
        const bool branch_taken_0x291500 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x291500) {
            ctx->pc = 0x291504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291500u;
            // 0x291504: 0x4600be06  mov.s       $f24, $f23 (Delay Slot)
            ctx->f[24] = FPU_MOV_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29155Cu;
            goto label_29155c;
        }
    }
    ctx->pc = 0x291508u;
label_291508:
    // 0x291508: 0x8fa30d40  lw          $v1, 0xD40($sp)
    ctx->pc = 0x291508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3392)));
label_29150c:
    // 0x29150c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x29150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_291510:
    // 0x291510: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x291510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_291514:
    // 0x291514: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_291518:
    if (ctx->pc == 0x291518u) {
        ctx->pc = 0x291518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291514u;
        // 0x291518: 0x4600be06  mov.s       $f24, $f23 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29151Cu;
        goto label_29151c;
    }
    ctx->pc = 0x291514u;
    {
        const bool branch_taken_0x291514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291514) {
            ctx->pc = 0x291518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291514u;
            // 0x291518: 0x4600be06  mov.s       $f24, $f23 (Delay Slot)
            ctx->f[24] = FPU_MOV_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29155Cu;
            goto label_29155c;
        }
    }
    ctx->pc = 0x29151Cu;
label_29151c:
    // 0x29151c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x29151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_291520:
    // 0x291520: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x291520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_291524:
    // 0x291524: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x291524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_291528:
    // 0x291528: 0x28440002  slti        $a0, $v0, 0x2
    ctx->pc = 0x291528u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_29152c:
    // 0x29152c: 0x5480000c  bnel        $a0, $zero, . + 4 + (0xC << 2)
label_291530:
    if (ctx->pc == 0x291530u) {
        ctx->pc = 0x291530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29152Cu;
        // 0x291530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291534u;
        goto label_291534;
    }
    ctx->pc = 0x29152Cu;
    {
        const bool branch_taken_0x29152c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29152c) {
            ctx->pc = 0x291530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29152Cu;
            // 0x291530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291560u;
            goto label_291560;
        }
    }
    ctx->pc = 0x291534u;
label_291534:
    // 0x291534: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x291534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_291538:
    // 0x291538: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x291538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29153c:
    // 0x29153c: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x29153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_291540:
    // 0x291540: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x291540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_291544:
    // 0x291544: 0x0  nop
    ctx->pc = 0x291544u;
    // NOP
label_291548:
    // 0x291548: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x291548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_29154c:
    // 0x29154c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29154cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_291550:
    // 0x291550: 0x46020603  div.s       $f24, $f0, $f2
    ctx->pc = 0x291550u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_291554:
    // 0x291554: 0x10000002  b           . + 4 + (0x2 << 2)
label_291558:
    if (ctx->pc == 0x291558u) {
        ctx->pc = 0x291558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291554u;
        // 0x291558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29155Cu;
        goto label_29155c;
    }
    ctx->pc = 0x291554u;
    {
        const bool branch_taken_0x291554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291554u;
        // 0x291558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291554) {
            ctx->pc = 0x291560u;
            goto label_291560;
        }
    }
    ctx->pc = 0x29155Cu;
label_29155c:
    // 0x29155c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291560:
    // 0x291560: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
label_291564:
    if (ctx->pc == 0x291564u) {
        ctx->pc = 0x291564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291560u;
        // 0x291564: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291568u;
        goto label_291568;
    }
    ctx->pc = 0x291560u;
    {
        const bool branch_taken_0x291560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x291564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291560u;
        // 0x291564: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291560) {
            ctx->pc = 0x2915B0u;
            goto label_2915b0;
        }
    }
    ctx->pc = 0x291568u;
label_291568:
    // 0x291568: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_29156c:
    if (ctx->pc == 0x29156Cu) {
        ctx->pc = 0x29156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291568u;
        // 0x29156c: 0xc7b40000  lwc1        $f20, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291570u;
        goto label_291570;
    }
    ctx->pc = 0x291568u;
    {
        const bool branch_taken_0x291568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291568u;
        // 0x29156c: 0xc7b40000  lwc1        $f20, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291568) {
            ctx->pc = 0x2915D8u;
            goto label_2915d8;
        }
    }
    ctx->pc = 0x291570u;
label_291570:
    // 0x291570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x291570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_291574:
    // 0x291574: 0x14a20018  bne         $a1, $v0, . + 4 + (0x18 << 2)
label_291578:
    if (ctx->pc == 0x291578u) {
        ctx->pc = 0x291578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291574u;
        // 0x291578: 0x8fa60d40  lw          $a2, 0xD40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29157Cu;
        goto label_29157c;
    }
    ctx->pc = 0x291574u;
    {
        const bool branch_taken_0x291574 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x291578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291574u;
        // 0x291578: 0x8fa60d40  lw          $a2, 0xD40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291574) {
            ctx->pc = 0x2915D8u;
            goto label_2915d8;
        }
    }
    ctx->pc = 0x29157Cu;
label_29157c:
    // 0x29157c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_291580:
    // 0x291580: 0x27a50810  addiu       $a1, $sp, 0x810
    ctx->pc = 0x291580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2064));
label_291584:
    // 0x291584: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x291584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_291588:
    // 0x291588: 0xc0a43fc  jal         func_290FF0
label_29158c:
    if (ctx->pc == 0x29158Cu) {
        ctx->pc = 0x29158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291588u;
        // 0x29158c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291590u;
        goto label_291590;
    }
    ctx->pc = 0x291588u;
    SET_GPR_U32(ctx, 31, 0x291590u);
    ctx->pc = 0x29158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291588u;
    // 0x29158c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x291588u, 0x291590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291590u;
label_291590:
    // 0x291590: 0xc6610078  lwc1        $f1, 0x78($s3)
    ctx->pc = 0x291590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_291594:
    // 0x291594: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x291594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_291598:
    // 0x291598: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x291598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29159c:
    // 0x29159c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29159cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2915a0:
    // 0x2915a0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2915a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2915a4:
    // 0x2915a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2915a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2915a8:
    // 0x2915a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2915ac:
    if (ctx->pc == 0x2915ACu) {
        ctx->pc = 0x2915ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915A8u;
        // 0x2915ac: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915B0u;
        goto label_2915b0;
    }
    ctx->pc = 0x2915A8u;
    {
        const bool branch_taken_0x2915a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915A8u;
        // 0x2915ac: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915a8) {
            ctx->pc = 0x2915D8u;
            goto label_2915d8;
        }
    }
    ctx->pc = 0x2915B0u;
label_2915b0:
    // 0x2915b0: 0x8fa60d40  lw          $a2, 0xD40($sp)
    ctx->pc = 0x2915b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3392)));
label_2915b4:
    // 0x2915b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2915b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2915b8:
    // 0x2915b8: 0x27a50810  addiu       $a1, $sp, 0x810
    ctx->pc = 0x2915b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2064));
label_2915bc:
    // 0x2915bc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2915bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2915c0:
    // 0x2915c0: 0xc0a43fc  jal         func_290FF0
label_2915c4:
    if (ctx->pc == 0x2915C4u) {
        ctx->pc = 0x2915C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915C0u;
        // 0x2915c4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915C8u;
        goto label_2915c8;
    }
    ctx->pc = 0x2915C0u;
    SET_GPR_U32(ctx, 31, 0x2915C8u);
    ctx->pc = 0x2915C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2915C0u;
    // 0x2915c4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x2915C0u, 0x2915C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2915C8u;
label_2915c8:
    // 0x2915c8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2915c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2915cc:
    // 0x2915cc: 0xc6620078  lwc1        $f2, 0x78($s3)
    ctx->pc = 0x2915ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2915d0:
    // 0x2915d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2915d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2915d4:
    // 0x2915d4: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x2915d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2915d8:
    // 0x2915d8: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x2915d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2915dc:
    // 0x2915dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2915dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2915e0:
    // 0x2915e0: 0xafa20d44  sw          $v0, 0xD44($sp)
    ctx->pc = 0x2915e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3396), GPR_U32(ctx, 2));
label_2915e4:
    // 0x2915e4: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x2915e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2915e8:
    // 0x2915e8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2915e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2915ec:
    // 0x2915ec: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2915ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2915f0:
    // 0x2915f0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_2915f4:
    if (ctx->pc == 0x2915F4u) {
        ctx->pc = 0x2915F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915F0u;
        // 0x2915f4: 0xafa30d48  sw          $v1, 0xD48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915F8u;
        goto label_2915f8;
    }
    ctx->pc = 0x2915F0u;
    {
        const bool branch_taken_0x2915f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915F0u;
        // 0x2915f4: 0xafa30d48  sw          $v1, 0xD48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915f0) {
            ctx->pc = 0x2916E8u;
            goto label_2916e8;
        }
    }
    ctx->pc = 0x2915F8u;
label_2915f8:
    // 0x2915f8: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x2915f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_2915fc:
    // 0x2915fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2915fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_291600:
    // 0x291600: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x291600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_291604:
    // 0x291604: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x291604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
label_291608:
    // 0x291608: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x291608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_29160c:
    // 0x29160c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29160cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_291610:
    // 0x291610: 0x245eaff0  addiu       $fp, $v0, -0x5010
    ctx->pc = 0x291610u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
label_291614:
    // 0x291614: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x291614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_291618:
    // 0x291618: 0x27b50cb0  addiu       $s5, $sp, 0xCB0
    ctx->pc = 0x291618u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 3248));
label_29161c:
    // 0x29161c: 0x0  nop
    ctx->pc = 0x29161cu;
    // NOP
label_291620:
    // 0x291620: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x291620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_291624:
    // 0x291624: 0x8fa20d44  lw          $v0, 0xD44($sp)
    ctx->pc = 0x291624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3396)));
label_291628:
    // 0x291628: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
label_29162c:
    if (ctx->pc == 0x29162Cu) {
        ctx->pc = 0x29162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291628u;
        // 0x29162c: 0x27b108b0  addiu       $s1, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291630u;
        goto label_291630;
    }
    ctx->pc = 0x291628u;
    {
        const bool branch_taken_0x291628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291628u;
        // 0x29162c: 0x27b108b0  addiu       $s1, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291628) {
            ctx->pc = 0x291660u;
            goto label_291660;
        }
    }
    ctx->pc = 0x291630u;
label_291630:
    // 0x291630: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x291630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_291634:
    // 0x291634: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x291634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291638:
    // 0x291638: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x291638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_29163c:
    // 0x29163c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29163cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_291640:
    // 0x291640: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x291640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_291644:
    // 0x291644: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x291644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_291648:
    // 0x291648: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x291648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_29164c:
    // 0x29164c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x29164cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_291650:
    // 0x291650: 0x40f809  jalr        $v0
label_291654:
    if (ctx->pc == 0x291654u) {
        ctx->pc = 0x291654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291650u;
        // 0x291654: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291658u;
        goto label_291658;
    }
    ctx->pc = 0x291650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291658u);
        ctx->pc = 0x291654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291650u;
        // 0x291654: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291650u, 0x291658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291658u;
label_291658:
    // 0x291658: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x291658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29165c:
    // 0x29165c: 0xafa20d44  sw          $v0, 0xD44($sp)
    ctx->pc = 0x29165cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3396), GPR_U32(ctx, 2));
label_291660:
    // 0x291660: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x291660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_291664:
    // 0x291664: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x291664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_291668:
    // 0x291668: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x291668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_29166c:
    // 0x29166c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29166cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_291670:
    // 0x291670: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x291670u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_291674:
    // 0x291674: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x291674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_291678:
    // 0x291678: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x291678u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_29167c:
    // 0x29167c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x29167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_291680:
    // 0x291680: 0x2a020041  slti        $v0, $s0, 0x41
    ctx->pc = 0x291680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
label_291684:
    // 0x291684: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x291684u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_291688:
    // 0x291688: 0xc0b6fb8  jal         func_2DBEE0
label_29168c:
    if (ctx->pc == 0x29168Cu) {
        ctx->pc = 0x29168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291688u;
        // 0x29168c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291690u;
        goto label_291690;
    }
    ctx->pc = 0x291688u;
    SET_GPR_U32(ctx, 31, 0x291690u);
    ctx->pc = 0x29168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291688u;
    // 0x29168c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x291688u, 0x291690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291690u;
label_291690:
    // 0x291690: 0x8e6301dc  lw          $v1, 0x1DC($s3)
    ctx->pc = 0x291690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 476)));
label_291694:
    // 0x291694: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x291694u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_291698:
    // 0x291698: 0xe7d60064  swc1        $f22, 0x64($fp)
    ctx->pc = 0x291698u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 100), bits); }
label_29169c:
    // 0x29169c: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x29169cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_2916a0:
    // 0x2916a0: 0xafc30060  sw          $v1, 0x60($fp)
    ctx->pc = 0x2916a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 3));
label_2916a4:
    // 0x2916a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2916a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2916a8:
    // 0x2916a8: 0xe7d60068  swc1        $f22, 0x68($fp)
    ctx->pc = 0x2916a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 104), bits); }
label_2916ac:
    // 0x2916ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2916acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2916b0:
    // 0x2916b0: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x2916b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_2916b4:
    // 0x2916b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2916b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2916b8:
    // 0x2916b8: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x2916b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_2916bc:
    // 0x2916bc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2916bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2916c0:
    // 0x2916c0: 0x40f809  jalr        $v0
label_2916c4:
    if (ctx->pc == 0x2916C4u) {
        ctx->pc = 0x2916C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916C0u;
        // 0x2916c4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2916C8u;
        goto label_2916c8;
    }
    ctx->pc = 0x2916C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2916C8u);
        ctx->pc = 0x2916C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916C0u;
        // 0x2916c4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2916C0u, 0x2916C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2916C8u;
label_2916c8:
    // 0x2916c8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2916c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2916cc:
    // 0x2916cc: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2916ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2916d0:
    // 0x2916d0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2916d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2916d4:
    // 0x2916d4: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x2916d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_2916d8:
    // 0x2916d8: 0xafc00060  sw          $zero, 0x60($fp)
    ctx->pc = 0x2916d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 0));
label_2916dc:
    // 0x2916dc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2916dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2916e0:
    // 0x2916e0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_2916e4:
    if (ctx->pc == 0x2916E4u) {
        ctx->pc = 0x2916E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916E0u;
        // 0x2916e4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2916E8u;
        goto label_2916e8;
    }
    ctx->pc = 0x2916E0u;
    {
        const bool branch_taken_0x2916e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2916E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916E0u;
        // 0x2916e4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916e0) {
            ctx->pc = 0x291620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291620;
        }
    }
    ctx->pc = 0x2916E8u;
label_2916e8:
    // 0x2916e8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2916e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2916ec:
    // 0x2916ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2916ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2916f0:
    // 0x2916f0: 0x27a50810  addiu       $a1, $sp, 0x810
    ctx->pc = 0x2916f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2064));
label_2916f4:
    // 0x2916f4: 0xc0a4444  jal         func_291110
label_2916f8:
    if (ctx->pc == 0x2916F8u) {
        ctx->pc = 0x2916F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916F4u;
        // 0x2916f8: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2916FCu;
        goto label_2916fc;
    }
    ctx->pc = 0x2916F4u;
    SET_GPR_U32(ctx, 31, 0x2916FCu);
    ctx->pc = 0x2916F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2916F4u;
    // 0x2916f8: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x291110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291110u, 0x2916F4u, 0x2916FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2916FCu;
label_2916fc:
    // 0x2916fc: 0x8fb60d48  lw          $s6, 0xD48($sp)
    ctx->pc = 0x2916fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3400)));
label_291700:
    // 0x291700: 0x8fa30d40  lw          $v1, 0xD40($sp)
    ctx->pc = 0x291700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3392)));
label_291704:
    // 0x291704: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x291704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_291708:
    // 0x291708: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
label_29170c:
    if (ctx->pc == 0x29170Cu) {
        ctx->pc = 0x29170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291708u;
        // 0x29170c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291710u;
        goto label_291710;
    }
    ctx->pc = 0x291708u;
    {
        const bool branch_taken_0x291708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291708u;
        // 0x29170c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291708) {
            ctx->pc = 0x2914E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2914e8;
        }
    }
    ctx->pc = 0x291710u;
label_291710:
    // 0x291710: 0xdfb00d50  ld          $s0, 0xD50($sp)
    ctx->pc = 0x291710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 3408)));
label_291714:
    // 0x291714: 0xdfb10d58  ld          $s1, 0xD58($sp)
    ctx->pc = 0x291714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3416)));
label_291718:
    // 0x291718: 0xdfb20d60  ld          $s2, 0xD60($sp)
    ctx->pc = 0x291718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3424)));
label_29171c:
    // 0x29171c: 0xdfb30d68  ld          $s3, 0xD68($sp)
    ctx->pc = 0x29171cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 3432)));
label_291720:
    // 0x291720: 0xdfb40d70  ld          $s4, 0xD70($sp)
    ctx->pc = 0x291720u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 3440)));
label_291724:
    // 0x291724: 0xdfb50d78  ld          $s5, 0xD78($sp)
    ctx->pc = 0x291724u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 3448)));
label_291728:
    // 0x291728: 0xdfb60d80  ld          $s6, 0xD80($sp)
    ctx->pc = 0x291728u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 3456)));
label_29172c:
    // 0x29172c: 0xdfb70d88  ld          $s7, 0xD88($sp)
    ctx->pc = 0x29172cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 3464)));
label_291730:
    // 0x291730: 0xdfbe0d90  ld          $fp, 0xD90($sp)
    ctx->pc = 0x291730u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 3472)));
label_291734:
    // 0x291734: 0xdfbf0d98  ld          $ra, 0xD98($sp)
    ctx->pc = 0x291734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3480)));
label_291738:
    // 0x291738: 0xc7b90dc8  lwc1        $f25, 0xDC8($sp)
    ctx->pc = 0x291738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_29173c:
    // 0x29173c: 0xc7b80dc0  lwc1        $f24, 0xDC0($sp)
    ctx->pc = 0x29173cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_291740:
    // 0x291740: 0xc7b70db8  lwc1        $f23, 0xDB8($sp)
    ctx->pc = 0x291740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_291744:
    // 0x291744: 0xc7b60db0  lwc1        $f22, 0xDB0($sp)
    ctx->pc = 0x291744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_291748:
    // 0x291748: 0xc7b50da8  lwc1        $f21, 0xDA8($sp)
    ctx->pc = 0x291748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_29174c:
    // 0x29174c: 0xc7b40da0  lwc1        $f20, 0xDA0($sp)
    ctx->pc = 0x29174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_291750:
    // 0x291750: 0x3e00008  jr          $ra
label_291754:
    if (ctx->pc == 0x291754u) {
        ctx->pc = 0x291754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291750u;
        // 0x291754: 0x27bd0dd0  addiu       $sp, $sp, 0xDD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291758u;
        goto label_fallthrough_0x291750;
    }
    ctx->pc = 0x291750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291750u;
        // 0x291754: 0x27bd0dd0  addiu       $sp, $sp, 0xDD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291750:
    ctx->pc = 0x291758u;
}
