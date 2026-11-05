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

// Function: sub_0020F278
// Address: 0x20f278 - 0x20f680
void sub_0020F278_0x20f278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F278_0x20f278");
#endif

    switch (ctx->pc) {
        case 0x20f278u: goto label_20f278;
        case 0x20f27cu: goto label_20f27c;
        case 0x20f280u: goto label_20f280;
        case 0x20f284u: goto label_20f284;
        case 0x20f288u: goto label_20f288;
        case 0x20f28cu: goto label_20f28c;
        case 0x20f290u: goto label_20f290;
        case 0x20f294u: goto label_20f294;
        case 0x20f298u: goto label_20f298;
        case 0x20f29cu: goto label_20f29c;
        case 0x20f2a0u: goto label_20f2a0;
        case 0x20f2a4u: goto label_20f2a4;
        case 0x20f2a8u: goto label_20f2a8;
        case 0x20f2acu: goto label_20f2ac;
        case 0x20f2b0u: goto label_20f2b0;
        case 0x20f2b4u: goto label_20f2b4;
        case 0x20f2b8u: goto label_20f2b8;
        case 0x20f2bcu: goto label_20f2bc;
        case 0x20f2c0u: goto label_20f2c0;
        case 0x20f2c4u: goto label_20f2c4;
        case 0x20f2c8u: goto label_20f2c8;
        case 0x20f2ccu: goto label_20f2cc;
        case 0x20f2d0u: goto label_20f2d0;
        case 0x20f2d4u: goto label_20f2d4;
        case 0x20f2d8u: goto label_20f2d8;
        case 0x20f2dcu: goto label_20f2dc;
        case 0x20f2e0u: goto label_20f2e0;
        case 0x20f2e4u: goto label_20f2e4;
        case 0x20f2e8u: goto label_20f2e8;
        case 0x20f2ecu: goto label_20f2ec;
        case 0x20f2f0u: goto label_20f2f0;
        case 0x20f2f4u: goto label_20f2f4;
        case 0x20f2f8u: goto label_20f2f8;
        case 0x20f2fcu: goto label_20f2fc;
        case 0x20f300u: goto label_20f300;
        case 0x20f304u: goto label_20f304;
        case 0x20f308u: goto label_20f308;
        case 0x20f30cu: goto label_20f30c;
        case 0x20f310u: goto label_20f310;
        case 0x20f314u: goto label_20f314;
        case 0x20f318u: goto label_20f318;
        case 0x20f31cu: goto label_20f31c;
        case 0x20f320u: goto label_20f320;
        case 0x20f324u: goto label_20f324;
        case 0x20f328u: goto label_20f328;
        case 0x20f32cu: goto label_20f32c;
        case 0x20f330u: goto label_20f330;
        case 0x20f334u: goto label_20f334;
        case 0x20f338u: goto label_20f338;
        case 0x20f33cu: goto label_20f33c;
        case 0x20f340u: goto label_20f340;
        case 0x20f344u: goto label_20f344;
        case 0x20f348u: goto label_20f348;
        case 0x20f34cu: goto label_20f34c;
        case 0x20f350u: goto label_20f350;
        case 0x20f354u: goto label_20f354;
        case 0x20f358u: goto label_20f358;
        case 0x20f35cu: goto label_20f35c;
        case 0x20f360u: goto label_20f360;
        case 0x20f364u: goto label_20f364;
        case 0x20f368u: goto label_20f368;
        case 0x20f36cu: goto label_20f36c;
        case 0x20f370u: goto label_20f370;
        case 0x20f374u: goto label_20f374;
        case 0x20f378u: goto label_20f378;
        case 0x20f37cu: goto label_20f37c;
        case 0x20f380u: goto label_20f380;
        case 0x20f384u: goto label_20f384;
        case 0x20f388u: goto label_20f388;
        case 0x20f38cu: goto label_20f38c;
        case 0x20f390u: goto label_20f390;
        case 0x20f394u: goto label_20f394;
        case 0x20f398u: goto label_20f398;
        case 0x20f39cu: goto label_20f39c;
        case 0x20f3a0u: goto label_20f3a0;
        case 0x20f3a4u: goto label_20f3a4;
        case 0x20f3a8u: goto label_20f3a8;
        case 0x20f3acu: goto label_20f3ac;
        case 0x20f3b0u: goto label_20f3b0;
        case 0x20f3b4u: goto label_20f3b4;
        case 0x20f3b8u: goto label_20f3b8;
        case 0x20f3bcu: goto label_20f3bc;
        case 0x20f3c0u: goto label_20f3c0;
        case 0x20f3c4u: goto label_20f3c4;
        case 0x20f3c8u: goto label_20f3c8;
        case 0x20f3ccu: goto label_20f3cc;
        case 0x20f3d0u: goto label_20f3d0;
        case 0x20f3d4u: goto label_20f3d4;
        case 0x20f3d8u: goto label_20f3d8;
        case 0x20f3dcu: goto label_20f3dc;
        case 0x20f3e0u: goto label_20f3e0;
        case 0x20f3e4u: goto label_20f3e4;
        case 0x20f3e8u: goto label_20f3e8;
        case 0x20f3ecu: goto label_20f3ec;
        case 0x20f3f0u: goto label_20f3f0;
        case 0x20f3f4u: goto label_20f3f4;
        case 0x20f3f8u: goto label_20f3f8;
        case 0x20f3fcu: goto label_20f3fc;
        case 0x20f400u: goto label_20f400;
        case 0x20f404u: goto label_20f404;
        case 0x20f408u: goto label_20f408;
        case 0x20f40cu: goto label_20f40c;
        case 0x20f410u: goto label_20f410;
        case 0x20f414u: goto label_20f414;
        case 0x20f418u: goto label_20f418;
        case 0x20f41cu: goto label_20f41c;
        case 0x20f420u: goto label_20f420;
        case 0x20f424u: goto label_20f424;
        case 0x20f428u: goto label_20f428;
        case 0x20f42cu: goto label_20f42c;
        case 0x20f430u: goto label_20f430;
        case 0x20f434u: goto label_20f434;
        case 0x20f438u: goto label_20f438;
        case 0x20f43cu: goto label_20f43c;
        case 0x20f440u: goto label_20f440;
        case 0x20f444u: goto label_20f444;
        case 0x20f448u: goto label_20f448;
        case 0x20f44cu: goto label_20f44c;
        case 0x20f450u: goto label_20f450;
        case 0x20f454u: goto label_20f454;
        case 0x20f458u: goto label_20f458;
        case 0x20f45cu: goto label_20f45c;
        case 0x20f460u: goto label_20f460;
        case 0x20f464u: goto label_20f464;
        case 0x20f468u: goto label_20f468;
        case 0x20f46cu: goto label_20f46c;
        case 0x20f470u: goto label_20f470;
        case 0x20f474u: goto label_20f474;
        case 0x20f478u: goto label_20f478;
        case 0x20f47cu: goto label_20f47c;
        case 0x20f480u: goto label_20f480;
        case 0x20f484u: goto label_20f484;
        case 0x20f488u: goto label_20f488;
        case 0x20f48cu: goto label_20f48c;
        case 0x20f490u: goto label_20f490;
        case 0x20f494u: goto label_20f494;
        case 0x20f498u: goto label_20f498;
        case 0x20f49cu: goto label_20f49c;
        case 0x20f4a0u: goto label_20f4a0;
        case 0x20f4a4u: goto label_20f4a4;
        case 0x20f4a8u: goto label_20f4a8;
        case 0x20f4acu: goto label_20f4ac;
        case 0x20f4b0u: goto label_20f4b0;
        case 0x20f4b4u: goto label_20f4b4;
        case 0x20f4b8u: goto label_20f4b8;
        case 0x20f4bcu: goto label_20f4bc;
        case 0x20f4c0u: goto label_20f4c0;
        case 0x20f4c4u: goto label_20f4c4;
        case 0x20f4c8u: goto label_20f4c8;
        case 0x20f4ccu: goto label_20f4cc;
        case 0x20f4d0u: goto label_20f4d0;
        case 0x20f4d4u: goto label_20f4d4;
        case 0x20f4d8u: goto label_20f4d8;
        case 0x20f4dcu: goto label_20f4dc;
        case 0x20f4e0u: goto label_20f4e0;
        case 0x20f4e4u: goto label_20f4e4;
        case 0x20f4e8u: goto label_20f4e8;
        case 0x20f4ecu: goto label_20f4ec;
        case 0x20f4f0u: goto label_20f4f0;
        case 0x20f4f4u: goto label_20f4f4;
        case 0x20f4f8u: goto label_20f4f8;
        case 0x20f4fcu: goto label_20f4fc;
        case 0x20f500u: goto label_20f500;
        case 0x20f504u: goto label_20f504;
        case 0x20f508u: goto label_20f508;
        case 0x20f50cu: goto label_20f50c;
        case 0x20f510u: goto label_20f510;
        case 0x20f514u: goto label_20f514;
        case 0x20f518u: goto label_20f518;
        case 0x20f51cu: goto label_20f51c;
        case 0x20f520u: goto label_20f520;
        case 0x20f524u: goto label_20f524;
        case 0x20f528u: goto label_20f528;
        case 0x20f52cu: goto label_20f52c;
        case 0x20f530u: goto label_20f530;
        case 0x20f534u: goto label_20f534;
        case 0x20f538u: goto label_20f538;
        case 0x20f53cu: goto label_20f53c;
        case 0x20f540u: goto label_20f540;
        case 0x20f544u: goto label_20f544;
        case 0x20f548u: goto label_20f548;
        case 0x20f54cu: goto label_20f54c;
        case 0x20f550u: goto label_20f550;
        case 0x20f554u: goto label_20f554;
        case 0x20f558u: goto label_20f558;
        case 0x20f55cu: goto label_20f55c;
        case 0x20f560u: goto label_20f560;
        case 0x20f564u: goto label_20f564;
        case 0x20f568u: goto label_20f568;
        case 0x20f56cu: goto label_20f56c;
        case 0x20f570u: goto label_20f570;
        case 0x20f574u: goto label_20f574;
        case 0x20f578u: goto label_20f578;
        case 0x20f57cu: goto label_20f57c;
        case 0x20f580u: goto label_20f580;
        case 0x20f584u: goto label_20f584;
        case 0x20f588u: goto label_20f588;
        case 0x20f58cu: goto label_20f58c;
        case 0x20f590u: goto label_20f590;
        case 0x20f594u: goto label_20f594;
        case 0x20f598u: goto label_20f598;
        case 0x20f59cu: goto label_20f59c;
        case 0x20f5a0u: goto label_20f5a0;
        case 0x20f5a4u: goto label_20f5a4;
        case 0x20f5a8u: goto label_20f5a8;
        case 0x20f5acu: goto label_20f5ac;
        case 0x20f5b0u: goto label_20f5b0;
        case 0x20f5b4u: goto label_20f5b4;
        case 0x20f5b8u: goto label_20f5b8;
        case 0x20f5bcu: goto label_20f5bc;
        case 0x20f5c0u: goto label_20f5c0;
        case 0x20f5c4u: goto label_20f5c4;
        case 0x20f5c8u: goto label_20f5c8;
        case 0x20f5ccu: goto label_20f5cc;
        case 0x20f5d0u: goto label_20f5d0;
        case 0x20f5d4u: goto label_20f5d4;
        case 0x20f5d8u: goto label_20f5d8;
        case 0x20f5dcu: goto label_20f5dc;
        case 0x20f5e0u: goto label_20f5e0;
        case 0x20f5e4u: goto label_20f5e4;
        case 0x20f5e8u: goto label_20f5e8;
        case 0x20f5ecu: goto label_20f5ec;
        case 0x20f5f0u: goto label_20f5f0;
        case 0x20f5f4u: goto label_20f5f4;
        case 0x20f5f8u: goto label_20f5f8;
        case 0x20f5fcu: goto label_20f5fc;
        case 0x20f600u: goto label_20f600;
        case 0x20f604u: goto label_20f604;
        case 0x20f608u: goto label_20f608;
        case 0x20f60cu: goto label_20f60c;
        case 0x20f610u: goto label_20f610;
        case 0x20f614u: goto label_20f614;
        case 0x20f618u: goto label_20f618;
        case 0x20f61cu: goto label_20f61c;
        case 0x20f620u: goto label_20f620;
        case 0x20f624u: goto label_20f624;
        case 0x20f628u: goto label_20f628;
        case 0x20f62cu: goto label_20f62c;
        case 0x20f630u: goto label_20f630;
        case 0x20f634u: goto label_20f634;
        case 0x20f638u: goto label_20f638;
        case 0x20f63cu: goto label_20f63c;
        case 0x20f640u: goto label_20f640;
        case 0x20f644u: goto label_20f644;
        case 0x20f648u: goto label_20f648;
        case 0x20f64cu: goto label_20f64c;
        case 0x20f650u: goto label_20f650;
        case 0x20f654u: goto label_20f654;
        case 0x20f658u: goto label_20f658;
        case 0x20f65cu: goto label_20f65c;
        case 0x20f660u: goto label_20f660;
        case 0x20f664u: goto label_20f664;
        case 0x20f668u: goto label_20f668;
        case 0x20f66cu: goto label_20f66c;
        case 0x20f670u: goto label_20f670;
        case 0x20f674u: goto label_20f674;
        case 0x20f678u: goto label_20f678;
        case 0x20f67cu: goto label_20f67c;
        default: break;
    }

    ctx->pc = 0x20f278u;

label_20f278:
    // 0x20f278: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20f27c:
    // 0x20f27c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x20f27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_20f280:
    // 0x20f280: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x20f280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_20f284:
    // 0x20f284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20f284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f288:
    // 0x20f288: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x20f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_20f28c:
    // 0x20f28c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20f28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20f290:
    // 0x20f290: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x20f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_20f294:
    // 0x20f294: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x20f294u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f298:
    // 0x20f298: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x20f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_20f29c:
    // 0x20f29c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x20f29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_20f2a0:
    // 0x20f2a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x20f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_20f2a4:
    // 0x20f2a4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x20f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_20f2a8:
    // 0x20f2a8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x20f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_20f2ac:
    // 0x20f2ac: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x20f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_20f2b0:
    // 0x20f2b0: 0xc0f6a96  jal         func_3DAA58
label_20f2b4:
    if (ctx->pc == 0x20F2B4u) {
        ctx->pc = 0x20F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2B0u;
        // 0x20f2b4: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2B8u;
        goto label_20f2b8;
    }
    ctx->pc = 0x20F2B0u;
    SET_GPR_U32(ctx, 31, 0x20F2B8u);
    ctx->pc = 0x20F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2B0u;
    // 0x20f2b4: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20F2B0u, 0x20F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2B8u;
label_20f2b8:
    // 0x20f2b8: 0xc0f6a96  jal         func_3DAA58
label_20f2bc:
    if (ctx->pc == 0x20F2BCu) {
        ctx->pc = 0x20F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2B8u;
        // 0x20f2bc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2C0u;
        goto label_20f2c0;
    }
    ctx->pc = 0x20F2B8u;
    SET_GPR_U32(ctx, 31, 0x20F2C0u);
    ctx->pc = 0x20F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2B8u;
    // 0x20f2bc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20F2B8u, 0x20F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2C0u;
label_20f2c0:
    // 0x20f2c0: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x20f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_20f2c4:
    // 0x20f2c4: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x20f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_20f2c8:
    // 0x20f2c8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x20f2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_20f2cc:
    // 0x20f2cc: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x20f2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20f2d0:
    // 0x20f2d0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x20f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_20f2d4:
    // 0x20f2d4: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x20f2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_20f2d8:
    // 0x20f2d8: 0x2c560001  sltiu       $s6, $v0, 0x1
    ctx->pc = 0x20f2d8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20f2dc:
    // 0x20f2dc: 0xc0797fe  jal         func_1E5FF8
label_20f2e0:
    if (ctx->pc == 0x20F2E0u) {
        ctx->pc = 0x20F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2DCu;
        // 0x20f2e0: 0x4f02b  sltu        $fp, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2E4u;
        goto label_20f2e4;
    }
    ctx->pc = 0x20F2DCu;
    SET_GPR_U32(ctx, 31, 0x20F2E4u);
    ctx->pc = 0x20F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2DCu;
    // 0x20f2e0: 0x4f02b  sltu        $fp, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x20F2DCu, 0x20F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2E4u;
label_20f2e4:
    // 0x20f2e4: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
label_20f2e8:
    if (ctx->pc == 0x20F2E8u) {
        ctx->pc = 0x20F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2E4u;
        // 0x20f2e8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2ECu;
        goto label_20f2ec;
    }
    ctx->pc = 0x20F2E4u;
    {
        const bool branch_taken_0x20f2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2E4u;
        // 0x20f2e8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2e4) {
            ctx->pc = 0x20F650u;
            goto label_20f650;
        }
    }
    ctx->pc = 0x20F2ECu;
label_20f2ec:
    // 0x20f2ec: 0x13c00044  beqz        $fp, . + 4 + (0x44 << 2)
label_20f2f0:
    if (ctx->pc == 0x20F2F0u) {
        ctx->pc = 0x20F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2ECu;
        // 0x20f2f0: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2F4u;
        goto label_20f2f4;
    }
    ctx->pc = 0x20F2ECu;
    {
        const bool branch_taken_0x20f2ec = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2ECu;
        // 0x20f2f0: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2ec) {
            ctx->pc = 0x20F400u;
            goto label_20f400;
        }
    }
    ctx->pc = 0x20F2F4u;
label_20f2f4:
    // 0x20f2f4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x20f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_20f2f8:
    // 0x20f2f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f2fc:
    // 0x20f2fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f300:
    // 0x20f300: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x20f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20f304:
    // 0x20f304: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20f304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20f308:
    // 0x20f308: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_20f30c:
    if (ctx->pc == 0x20F30Cu) {
        ctx->pc = 0x20F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F308u;
        // 0x20f30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F310u;
        goto label_20f310;
    }
    ctx->pc = 0x20F308u;
    {
        const bool branch_taken_0x20f308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F308u;
        // 0x20f30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f308) {
            ctx->pc = 0x20F328u;
            goto label_20f328;
        }
    }
    ctx->pc = 0x20F310u;
label_20f310:
    // 0x20f310: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20f310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20f314:
    // 0x20f314: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_20f318:
    if (ctx->pc == 0x20F318u) {
        ctx->pc = 0x20F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F314u;
        // 0x20f318: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F31Cu;
        goto label_20f31c;
    }
    ctx->pc = 0x20F314u;
    {
        const bool branch_taken_0x20f314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F314u;
        // 0x20f318: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f314) {
            ctx->pc = 0x20F324u;
            goto label_20f324;
        }
    }
    ctx->pc = 0x20F31Cu;
label_20f31c:
    // 0x20f31c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_20f320:
    if (ctx->pc == 0x20F320u) {
        ctx->pc = 0x20F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F31Cu;
        // 0x20f320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F324u;
        goto label_20f324;
    }
    ctx->pc = 0x20F31Cu;
    {
        const bool branch_taken_0x20f31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F31Cu;
        // 0x20f320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f31c) {
            ctx->pc = 0x20F328u;
            goto label_20f328;
        }
    }
    ctx->pc = 0x20F324u;
label_20f324:
    // 0x20f324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f328:
    // 0x20f328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20f32c:
    // 0x20f32c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_20f330:
    if (ctx->pc == 0x20F330u) {
        ctx->pc = 0x20F334u;
        goto label_20f334;
    }
    ctx->pc = 0x20F32Cu;
    {
        const bool branch_taken_0x20f32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f32c) {
            ctx->pc = 0x20F37Cu;
            goto label_20f37c;
        }
    }
    ctx->pc = 0x20F334u;
label_20f334:
    // 0x20f334: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x20f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_20f338:
    // 0x20f338: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x20f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_20f33c:
    // 0x20f33c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_20f340:
    if (ctx->pc == 0x20F340u) {
        ctx->pc = 0x20F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F33Cu;
        // 0x20f340: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F344u;
        goto label_20f344;
    }
    ctx->pc = 0x20F33Cu;
    {
        const bool branch_taken_0x20f33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f33c) {
            ctx->pc = 0x20F340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F33Cu;
            // 0x20f340: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F37Cu;
            goto label_20f37c;
        }
    }
    ctx->pc = 0x20F344u;
label_20f344:
    // 0x20f344: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x20f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f348:
    // 0x20f348: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x20f348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_20f34c:
    // 0x20f34c: 0x60f809  jalr        $v1
label_20f350:
    if (ctx->pc == 0x20F350u) {
        ctx->pc = 0x20F354u;
        goto label_20f354;
    }
    ctx->pc = 0x20F34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20F354u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F34Cu, 0x20F354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F354u;
label_20f354:
    // 0x20f354: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x20f354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_20f358:
    // 0x20f358: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f35c:
    // 0x20f35c: 0x0  nop
    ctx->pc = 0x20f35cu;
    // NOP
label_20f360:
    // 0x20f360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f364:
    // 0x20f364: 0x0  nop
    ctx->pc = 0x20f364u;
    // NOP
label_20f368:
    // 0x20f368: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_20f36c:
    if (ctx->pc == 0x20F36Cu) {
        ctx->pc = 0x20F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F368u;
        // 0x20f36c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F370u;
        goto label_20f370;
    }
    ctx->pc = 0x20F368u;
    {
        const bool branch_taken_0x20f368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f368) {
            ctx->pc = 0x20F36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F368u;
            // 0x20f36c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F37Cu;
            goto label_20f37c;
        }
    }
    ctx->pc = 0x20F370u;
label_20f370:
    // 0x20f370: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x20f370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20f374:
    // 0x20f374: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_20f378:
    if (ctx->pc == 0x20F378u) {
        ctx->pc = 0x20F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F374u;
        // 0x20f378: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F37Cu;
        goto label_20f37c;
    }
    ctx->pc = 0x20F374u;
    {
        const bool branch_taken_0x20f374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f374) {
            ctx->pc = 0x20F378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F374u;
            // 0x20f378: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F37Cu;
            goto label_20f37c;
        }
    }
    ctx->pc = 0x20F37Cu;
label_20f37c:
    // 0x20f37c: 0x12c00065  beqz        $s6, . + 4 + (0x65 << 2)
label_20f380:
    if (ctx->pc == 0x20F380u) {
        ctx->pc = 0x20F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F37Cu;
        // 0x20f380: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F384u;
        goto label_20f384;
    }
    ctx->pc = 0x20F37Cu;
    {
        const bool branch_taken_0x20f37c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F37Cu;
        // 0x20f380: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f37c) {
            ctx->pc = 0x20F514u;
            goto label_20f514;
        }
    }
    ctx->pc = 0x20F384u;
label_20f384:
    // 0x20f384: 0x8e0291e4  lw          $v0, -0x6E1C($s0)
    ctx->pc = 0x20f384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939108)));
label_20f388:
    // 0x20f388: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_20f38c:
    if (ctx->pc == 0x20F38Cu) {
        ctx->pc = 0x20F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F388u;
        // 0x20f38c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F390u;
        goto label_20f390;
    }
    ctx->pc = 0x20F388u;
    {
        const bool branch_taken_0x20f388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F388u;
        // 0x20f38c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f388) {
            ctx->pc = 0x20F3A4u;
            goto label_20f3a4;
        }
    }
    ctx->pc = 0x20F390u;
label_20f390:
    // 0x20f390: 0xc0796d4  jal         func_1E5B50
label_20f394:
    if (ctx->pc == 0x20F394u) {
        ctx->pc = 0x20F398u;
        goto label_20f398;
    }
    ctx->pc = 0x20F390u;
    SET_GPR_U32(ctx, 31, 0x20F398u);
    ctx->pc = 0x1E5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5B50u, 0x20F390u, 0x20F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F398u;
label_20f398:
    // 0x20f398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f39c:
    // 0x20f39c: 0xae0291e4  sw          $v0, -0x6E1C($s0)
    ctx->pc = 0x20f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939108), GPR_U32(ctx, 2));
label_20f3a0:
    // 0x20f3a0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x20f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_20f3a4:
    // 0x20f3a4: 0x245201d0  addiu       $s2, $v0, 0x1D0
    ctx->pc = 0x20f3a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
label_20f3a8:
    // 0x20f3a8: 0x1240005b  beqz        $s2, . + 4 + (0x5B << 2)
label_20f3ac:
    if (ctx->pc == 0x20F3ACu) {
        ctx->pc = 0x20F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3A8u;
        // 0x20f3ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3B0u;
        goto label_20f3b0;
    }
    ctx->pc = 0x20F3A8u;
    {
        const bool branch_taken_0x20f3a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3A8u;
        // 0x20f3ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3a8) {
            ctx->pc = 0x20F518u;
            goto label_20f518;
        }
    }
    ctx->pc = 0x20F3B0u;
label_20f3b0:
    // 0x20f3b0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x20f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_20f3b4:
    // 0x20f3b4: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
label_20f3b8:
    if (ctx->pc == 0x20F3B8u) {
        ctx->pc = 0x20F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3B4u;
        // 0x20f3b8: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3BCu;
        goto label_20f3bc;
    }
    ctx->pc = 0x20F3B4u;
    {
        const bool branch_taken_0x20f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3B4u;
        // 0x20f3b8: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3b4) {
            ctx->pc = 0x20F638u;
            goto label_20f638;
        }
    }
    ctx->pc = 0x20F3BCu;
label_20f3bc:
    // 0x20f3bc: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x20f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_20f3c0:
    // 0x20f3c0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x20f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_20f3c4:
    // 0x20f3c4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_20f3c8:
    if (ctx->pc == 0x20F3C8u) {
        ctx->pc = 0x20F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3C4u;
        // 0x20f3c8: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3CCu;
        goto label_20f3cc;
    }
    ctx->pc = 0x20F3C4u;
    {
        const bool branch_taken_0x20f3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f3c4) {
            ctx->pc = 0x20F3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F3C4u;
            // 0x20f3c8: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F3E4u;
            goto label_20f3e4;
        }
    }
    ctx->pc = 0x20F3CCu;
label_20f3cc:
    // 0x20f3cc: 0xc08fde2  jal         func_23F788
label_20f3d0:
    if (ctx->pc == 0x20F3D0u) {
        ctx->pc = 0x20F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3CCu;
        // 0x20f3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3D4u;
        goto label_20f3d4;
    }
    ctx->pc = 0x20F3CCu;
    SET_GPR_U32(ctx, 31, 0x20F3D4u);
    ctx->pc = 0x20F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3CCu;
    // 0x20f3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x20F3CCu, 0x20F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3D4u;
label_20f3d4:
    // 0x20f3d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f3d8:
    // 0x20f3d8: 0xc094236  jal         func_2508D8
label_20f3dc:
    if (ctx->pc == 0x20F3DCu) {
        ctx->pc = 0x20F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3D8u;
        // 0x20f3dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3E0u;
        goto label_20f3e0;
    }
    ctx->pc = 0x20F3D8u;
    SET_GPR_U32(ctx, 31, 0x20F3E0u);
    ctx->pc = 0x20F3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3D8u;
    // 0x20f3dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508D8u, 0x20F3D8u, 0x20F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3E0u;
label_20f3e0:
    // 0x20f3e0: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x20f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_20f3e4:
    // 0x20f3e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f3e8:
    // 0x20f3e8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f3ec:
    // 0x20f3ec: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x20f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_20f3f0:
    // 0x20f3f0: 0x40f809  jalr        $v0
label_20f3f4:
    if (ctx->pc == 0x20F3F4u) {
        ctx->pc = 0x20F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3F0u;
        // 0x20f3f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3F8u;
        goto label_20f3f8;
    }
    ctx->pc = 0x20F3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F3F8u);
        ctx->pc = 0x20F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3F0u;
        // 0x20f3f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F3F0u, 0x20F3F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F3F8u;
label_20f3f8:
    // 0x20f3f8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_20f3fc:
    if (ctx->pc == 0x20F3FCu) {
        ctx->pc = 0x20F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3F8u;
        // 0x20f3fc: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F400u;
        goto label_20f400;
    }
    ctx->pc = 0x20F3F8u;
    {
        const bool branch_taken_0x20f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3F8u;
        // 0x20f3fc: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3f8) {
            ctx->pc = 0x20F4F8u;
            goto label_20f4f8;
        }
    }
    ctx->pc = 0x20F400u;
label_20f400:
    // 0x20f400: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x20f400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_20f404:
    // 0x20f404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f408:
    // 0x20f408: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20f408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f40c:
    // 0x20f40c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x20f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20f410:
    // 0x20f410: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20f410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20f414:
    // 0x20f414: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_20f418:
    if (ctx->pc == 0x20F418u) {
        ctx->pc = 0x20F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F414u;
        // 0x20f418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F41Cu;
        goto label_20f41c;
    }
    ctx->pc = 0x20F414u;
    {
        const bool branch_taken_0x20f414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F414u;
        // 0x20f418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f414) {
            ctx->pc = 0x20F434u;
            goto label_20f434;
        }
    }
    ctx->pc = 0x20F41Cu;
label_20f41c:
    // 0x20f41c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20f420:
    // 0x20f420: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_20f424:
    if (ctx->pc == 0x20F424u) {
        ctx->pc = 0x20F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F420u;
        // 0x20f424: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F428u;
        goto label_20f428;
    }
    ctx->pc = 0x20F420u;
    {
        const bool branch_taken_0x20f420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F420u;
        // 0x20f424: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f420) {
            ctx->pc = 0x20F430u;
            goto label_20f430;
        }
    }
    ctx->pc = 0x20F428u;
label_20f428:
    // 0x20f428: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_20f42c:
    if (ctx->pc == 0x20F42Cu) {
        ctx->pc = 0x20F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F428u;
        // 0x20f42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F430u;
        goto label_20f430;
    }
    ctx->pc = 0x20F428u;
    {
        const bool branch_taken_0x20f428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F428u;
        // 0x20f42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f428) {
            ctx->pc = 0x20F434u;
            goto label_20f434;
        }
    }
    ctx->pc = 0x20F430u;
label_20f430:
    // 0x20f430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f434:
    // 0x20f434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20f434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20f438:
    // 0x20f438: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_20f43c:
    if (ctx->pc == 0x20F43Cu) {
        ctx->pc = 0x20F440u;
        goto label_20f440;
    }
    ctx->pc = 0x20F438u;
    {
        const bool branch_taken_0x20f438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f438) {
            ctx->pc = 0x20F470u;
            goto label_20f470;
        }
    }
    ctx->pc = 0x20F440u;
label_20f440:
    // 0x20f440: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x20f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_20f444:
    // 0x20f444: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20f444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20f448:
    // 0x20f448: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f44c:
    // 0x20f44c: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_20f450:
    if (ctx->pc == 0x20F450u) {
        ctx->pc = 0x20F454u;
        goto label_20f454;
    }
    ctx->pc = 0x20F44Cu;
    {
        const bool branch_taken_0x20f44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x20f44c) {
            ctx->pc = 0x20F470u;
            goto label_20f470;
        }
    }
    ctx->pc = 0x20F454u;
label_20f454:
    // 0x20f454: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x20f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_20f458:
    // 0x20f458: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x20f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_20f45c:
    // 0x20f45c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_20f460:
    if (ctx->pc == 0x20F460u) {
        ctx->pc = 0x20F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F45Cu;
        // 0x20f460: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F464u;
        goto label_20f464;
    }
    ctx->pc = 0x20F45Cu;
    {
        const bool branch_taken_0x20f45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f45c) {
            ctx->pc = 0x20F460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F45Cu;
            // 0x20f460: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F470u;
            goto label_20f470;
        }
    }
    ctx->pc = 0x20F464u;
label_20f464:
    // 0x20f464: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x20f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20f468:
    // 0x20f468: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_20f46c:
    if (ctx->pc == 0x20F46Cu) {
        ctx->pc = 0x20F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F468u;
        // 0x20f46c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F470u;
        goto label_20f470;
    }
    ctx->pc = 0x20F468u;
    {
        const bool branch_taken_0x20f468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f468) {
            ctx->pc = 0x20F46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F468u;
            // 0x20f46c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F470u;
            goto label_20f470;
        }
    }
    ctx->pc = 0x20F470u;
label_20f470:
    // 0x20f470: 0x12c00028  beqz        $s6, . + 4 + (0x28 << 2)
label_20f474:
    if (ctx->pc == 0x20F474u) {
        ctx->pc = 0x20F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F470u;
        // 0x20f474: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F478u;
        goto label_20f478;
    }
    ctx->pc = 0x20F470u;
    {
        const bool branch_taken_0x20f470 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F470u;
        // 0x20f474: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f470) {
            ctx->pc = 0x20F514u;
            goto label_20f514;
        }
    }
    ctx->pc = 0x20F478u;
label_20f478:
    // 0x20f478: 0x8e0291e4  lw          $v0, -0x6E1C($s0)
    ctx->pc = 0x20f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939108)));
label_20f47c:
    // 0x20f47c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_20f480:
    if (ctx->pc == 0x20F480u) {
        ctx->pc = 0x20F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F47Cu;
        // 0x20f480: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F484u;
        goto label_20f484;
    }
    ctx->pc = 0x20F47Cu;
    {
        const bool branch_taken_0x20f47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F47Cu;
        // 0x20f480: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f47c) {
            ctx->pc = 0x20F498u;
            goto label_20f498;
        }
    }
    ctx->pc = 0x20F484u;
label_20f484:
    // 0x20f484: 0xc0796d4  jal         func_1E5B50
label_20f488:
    if (ctx->pc == 0x20F488u) {
        ctx->pc = 0x20F48Cu;
        goto label_20f48c;
    }
    ctx->pc = 0x20F484u;
    SET_GPR_U32(ctx, 31, 0x20F48Cu);
    ctx->pc = 0x1E5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5B50u, 0x20F484u, 0x20F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F48Cu;
label_20f48c:
    // 0x20f48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f490:
    // 0x20f490: 0xae0291e4  sw          $v0, -0x6E1C($s0)
    ctx->pc = 0x20f490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939108), GPR_U32(ctx, 2));
label_20f494:
    // 0x20f494: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x20f494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_20f498:
    // 0x20f498: 0x245201d0  addiu       $s2, $v0, 0x1D0
    ctx->pc = 0x20f498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
label_20f49c:
    // 0x20f49c: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
label_20f4a0:
    if (ctx->pc == 0x20F4A0u) {
        ctx->pc = 0x20F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F49Cu;
        // 0x20f4a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4A4u;
        goto label_20f4a4;
    }
    ctx->pc = 0x20F49Cu;
    {
        const bool branch_taken_0x20f49c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F49Cu;
        // 0x20f4a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f49c) {
            ctx->pc = 0x20F518u;
            goto label_20f518;
        }
    }
    ctx->pc = 0x20F4A4u;
label_20f4a4:
    // 0x20f4a4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x20f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_20f4a8:
    // 0x20f4a8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_20f4ac:
    if (ctx->pc == 0x20F4ACu) {
        ctx->pc = 0x20F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4A8u;
        // 0x20f4ac: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4B0u;
        goto label_20f4b0;
    }
    ctx->pc = 0x20F4A8u;
    {
        const bool branch_taken_0x20f4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4A8u;
        // 0x20f4ac: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4a8) {
            ctx->pc = 0x20F638u;
            goto label_20f638;
        }
    }
    ctx->pc = 0x20F4B0u;
label_20f4b0:
    // 0x20f4b0: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x20f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_20f4b4:
    // 0x20f4b4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x20f4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_20f4b8:
    // 0x20f4b8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_20f4bc:
    if (ctx->pc == 0x20F4BCu) {
        ctx->pc = 0x20F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4B8u;
        // 0x20f4bc: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4C0u;
        goto label_20f4c0;
    }
    ctx->pc = 0x20F4B8u;
    {
        const bool branch_taken_0x20f4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f4b8) {
            ctx->pc = 0x20F4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F4B8u;
            // 0x20f4bc: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F4D8u;
            goto label_20f4d8;
        }
    }
    ctx->pc = 0x20F4C0u;
label_20f4c0:
    // 0x20f4c0: 0xc08fde2  jal         func_23F788
label_20f4c4:
    if (ctx->pc == 0x20F4C4u) {
        ctx->pc = 0x20F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4C0u;
        // 0x20f4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4C8u;
        goto label_20f4c8;
    }
    ctx->pc = 0x20F4C0u;
    SET_GPR_U32(ctx, 31, 0x20F4C8u);
    ctx->pc = 0x20F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F4C0u;
    // 0x20f4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x20F4C0u, 0x20F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F4C8u;
label_20f4c8:
    // 0x20f4c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f4cc:
    // 0x20f4cc: 0xc094236  jal         func_2508D8
label_20f4d0:
    if (ctx->pc == 0x20F4D0u) {
        ctx->pc = 0x20F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4CCu;
        // 0x20f4d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4D4u;
        goto label_20f4d4;
    }
    ctx->pc = 0x20F4CCu;
    SET_GPR_U32(ctx, 31, 0x20F4D4u);
    ctx->pc = 0x20F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F4CCu;
    // 0x20f4d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508D8u, 0x20F4CCu, 0x20F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F4D4u;
label_20f4d4:
    // 0x20f4d4: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x20f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_20f4d8:
    // 0x20f4d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f4dc:
    // 0x20f4dc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f4e0:
    // 0x20f4e0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x20f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_20f4e4:
    // 0x20f4e4: 0x40f809  jalr        $v0
label_20f4e8:
    if (ctx->pc == 0x20F4E8u) {
        ctx->pc = 0x20F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4E4u;
        // 0x20f4e8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4ECu;
        goto label_20f4ec;
    }
    ctx->pc = 0x20F4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F4ECu);
        ctx->pc = 0x20F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4E4u;
        // 0x20f4e8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F4E4u, 0x20F4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F4ECu;
label_20f4ec:
    // 0x20f4ec: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_20f4f0:
    if (ctx->pc == 0x20F4F0u) {
        ctx->pc = 0x20F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4ECu;
        // 0x20f4f0: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4F4u;
        goto label_20f4f4;
    }
    ctx->pc = 0x20F4ECu;
    {
        const bool branch_taken_0x20f4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f4ec) {
            ctx->pc = 0x20F4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F4ECu;
            // 0x20f4f0: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F514u;
            goto label_20f514;
        }
    }
    ctx->pc = 0x20F4F4u;
label_20f4f4:
    // 0x20f4f4: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x20f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_20f4f8:
    // 0x20f4f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f4fc:
    // 0x20f4fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f500:
    // 0x20f500: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x20f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_20f504:
    // 0x20f504: 0x40f809  jalr        $v0
label_20f508:
    if (ctx->pc == 0x20F508u) {
        ctx->pc = 0x20F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F504u;
        // 0x20f508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F50Cu;
        goto label_20f50c;
    }
    ctx->pc = 0x20F504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F50Cu);
        ctx->pc = 0x20F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F504u;
        // 0x20f508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F504u, 0x20F50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F50Cu;
label_20f50c:
    // 0x20f50c: 0x10000002  b           . + 4 + (0x2 << 2)
label_20f510:
    if (ctx->pc == 0x20F510u) {
        ctx->pc = 0x20F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F50Cu;
        // 0x20f510: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F514u;
        goto label_20f514;
    }
    ctx->pc = 0x20F50Cu;
    {
        const bool branch_taken_0x20f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F50Cu;
        // 0x20f510: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f50c) {
            ctx->pc = 0x20F518u;
            goto label_20f518;
        }
    }
    ctx->pc = 0x20F514u;
label_20f514:
    // 0x20f514: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20f514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f518:
    // 0x20f518: 0x10000047  b           . + 4 + (0x47 << 2)
label_20f51c:
    if (ctx->pc == 0x20F51Cu) {
        ctx->pc = 0x20F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F518u;
        // 0x20f51c: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F520u;
        goto label_20f520;
    }
    ctx->pc = 0x20F518u;
    {
        const bool branch_taken_0x20f518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F518u;
        // 0x20f51c: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f518) {
            ctx->pc = 0x20F638u;
            goto label_20f638;
        }
    }
    ctx->pc = 0x20F520u;
label_20f520:
    // 0x20f520: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x20f520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_20f524:
    // 0x20f524: 0x8c8291dc  lw          $v0, -0x6E24($a0)
    ctx->pc = 0x20f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939100)));
label_20f528:
    // 0x20f528: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f52c:
    // 0x20f52c: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x20f52cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f530:
    // 0x20f530: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x20f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_20f534:
    // 0x20f534: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x20f534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_20f538:
    // 0x20f538: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_20f53c:
    if (ctx->pc == 0x20F53Cu) {
        ctx->pc = 0x20F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F538u;
        // 0x20f53c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F540u;
        goto label_20f540;
    }
    ctx->pc = 0x20F538u;
    {
        const bool branch_taken_0x20f538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f538) {
            ctx->pc = 0x20F53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F538u;
            // 0x20f53c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F638u;
            goto label_20f638;
        }
    }
    ctx->pc = 0x20F540u;
label_20f540:
    // 0x20f540: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x20f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_20f544:
    // 0x20f544: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_20f548:
    if (ctx->pc == 0x20F548u) {
        ctx->pc = 0x20F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F544u;
        // 0x20f548: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F54Cu;
        goto label_20f54c;
    }
    ctx->pc = 0x20F544u;
    {
        const bool branch_taken_0x20f544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f544) {
            ctx->pc = 0x20F548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F544u;
            // 0x20f548: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F59Cu;
            goto label_20f59c;
        }
    }
    ctx->pc = 0x20F54Cu;
label_20f54c:
    // 0x20f54c: 0x56c0003a  bnel        $s6, $zero, . + 4 + (0x3A << 2)
label_20f550:
    if (ctx->pc == 0x20F550u) {
        ctx->pc = 0x20F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F54Cu;
        // 0x20f550: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F554u;
        goto label_20f554;
    }
    ctx->pc = 0x20F54Cu;
    {
        const bool branch_taken_0x20f54c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f54c) {
            ctx->pc = 0x20F550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F54Cu;
            // 0x20f550: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F638u;
            goto label_20f638;
        }
    }
    ctx->pc = 0x20F554u;
label_20f554:
    // 0x20f554: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x20f554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_20f558:
    // 0x20f558: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f55c:
    // 0x20f55c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f560:
    // 0x20f560: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x20f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_20f564:
    // 0x20f564: 0x40f809  jalr        $v0
label_20f568:
    if (ctx->pc == 0x20F568u) {
        ctx->pc = 0x20F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F564u;
        // 0x20f568: 0x8ea60000  lw          $a2, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F56Cu;
        goto label_20f56c;
    }
    ctx->pc = 0x20F564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F56Cu);
        ctx->pc = 0x20F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F564u;
        // 0x20f568: 0x8ea60000  lw          $a2, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F564u, 0x20F56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F56Cu;
label_20f56c:
    // 0x20f56c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20f570:
    if (ctx->pc == 0x20F570u) {
        ctx->pc = 0x20F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F56Cu;
        // 0x20f570: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F574u;
        goto label_20f574;
    }
    ctx->pc = 0x20F56Cu;
    {
        const bool branch_taken_0x20f56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F56Cu;
        // 0x20f570: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f56c) {
            ctx->pc = 0x20F584u;
            goto label_20f584;
        }
    }
    ctx->pc = 0x20F574u;
label_20f574:
    // 0x20f574: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x20f574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_20f578:
    // 0x20f578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f57c:
    // 0x20f57c: 0x10000025  b           . + 4 + (0x25 << 2)
label_20f580:
    if (ctx->pc == 0x20F580u) {
        ctx->pc = 0x20F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F57Cu;
        // 0x20f580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F584u;
        goto label_20f584;
    }
    ctx->pc = 0x20F57Cu;
    {
        const bool branch_taken_0x20f57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F57Cu;
        // 0x20f580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f57c) {
            ctx->pc = 0x20F614u;
            goto label_20f614;
        }
    }
    ctx->pc = 0x20F584u;
label_20f584:
    // 0x20f584: 0x57c0002c  bnel        $fp, $zero, . + 4 + (0x2C << 2)
label_20f588:
    if (ctx->pc == 0x20F588u) {
        ctx->pc = 0x20F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F584u;
        // 0x20f588: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F58Cu;
        goto label_20f58c;
    }
    ctx->pc = 0x20F584u;
    {
        const bool branch_taken_0x20f584 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f584) {
            ctx->pc = 0x20F588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F584u;
            // 0x20f588: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F638u;
            goto label_20f638;
        }
    }
    ctx->pc = 0x20F58Cu;
label_20f58c:
    // 0x20f58c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x20f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_20f590:
    // 0x20f590: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20f590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20f594:
    // 0x20f594: 0x10000027  b           . + 4 + (0x27 << 2)
label_20f598:
    if (ctx->pc == 0x20F598u) {
        ctx->pc = 0x20F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F594u;
        // 0x20f598: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F59Cu;
        goto label_20f59c;
    }
    ctx->pc = 0x20F594u;
    {
        const bool branch_taken_0x20f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F594u;
        // 0x20f598: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f594) {
            ctx->pc = 0x20F634u;
            goto label_20f634;
        }
    }
    ctx->pc = 0x20F59Cu;
label_20f59c:
    // 0x20f59c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x20f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_20f5a0:
    // 0x20f5a0: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_20f5a4:
    if (ctx->pc == 0x20F5A4u) {
        ctx->pc = 0x20F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5A0u;
        // 0x20f5a4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5A8u;
        goto label_20f5a8;
    }
    ctx->pc = 0x20F5A0u;
    {
        const bool branch_taken_0x20f5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f5a0) {
            ctx->pc = 0x20F5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F5A0u;
            // 0x20f5a4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F638u;
            goto label_20f638;
        }
    }
    ctx->pc = 0x20F5A8u;
label_20f5a8:
    // 0x20f5a8: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x20f5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_20f5ac:
    // 0x20f5ac: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x20f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_20f5b0:
    // 0x20f5b0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_20f5b4:
    if (ctx->pc == 0x20F5B4u) {
        ctx->pc = 0x20F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5B0u;
        // 0x20f5b4: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5B8u;
        goto label_20f5b8;
    }
    ctx->pc = 0x20F5B0u;
    {
        const bool branch_taken_0x20f5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f5b0) {
            ctx->pc = 0x20F5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F5B0u;
            // 0x20f5b4: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F5D4u;
            goto label_20f5d4;
        }
    }
    ctx->pc = 0x20F5B8u;
label_20f5b8:
    // 0x20f5b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20f5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20f5bc:
    // 0x20f5bc: 0xc0d7394  jal         func_35CE50
label_20f5c0:
    if (ctx->pc == 0x20F5C0u) {
        ctx->pc = 0x20F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5BCu;
        // 0x20f5c0: 0x260500f8  addiu       $a1, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5C4u;
        goto label_20f5c4;
    }
    ctx->pc = 0x20F5BCu;
    SET_GPR_U32(ctx, 31, 0x20F5C4u);
    ctx->pc = 0x20F5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F5BCu;
    // 0x20f5c0: 0x260500f8  addiu       $a1, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x20F5BCu, 0x20F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5C4u;
label_20f5c4:
    // 0x20f5c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20f5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20f5c8:
    // 0x20f5c8: 0xc0d7412  jal         func_35D048
label_20f5cc:
    if (ctx->pc == 0x20F5CCu) {
        ctx->pc = 0x20F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5C8u;
        // 0x20f5cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5D0u;
        goto label_20f5d0;
    }
    ctx->pc = 0x20F5C8u;
    SET_GPR_U32(ctx, 31, 0x20F5D0u);
    ctx->pc = 0x20F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F5C8u;
    // 0x20f5cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20F5C8u, 0x20F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5D0u;
label_20f5d0:
    // 0x20f5d0: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x20f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_20f5d4:
    // 0x20f5d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f5d8:
    // 0x20f5d8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f5dc:
    // 0x20f5dc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x20f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_20f5e0:
    // 0x20f5e0: 0x40f809  jalr        $v0
label_20f5e4:
    if (ctx->pc == 0x20F5E4u) {
        ctx->pc = 0x20F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5E0u;
        // 0x20f5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5E8u;
        goto label_20f5e8;
    }
    ctx->pc = 0x20F5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F5E8u);
        ctx->pc = 0x20F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5E0u;
        // 0x20f5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F5E0u, 0x20F5E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F5E8u;
label_20f5e8:
    // 0x20f5e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_20f5ec:
    if (ctx->pc == 0x20F5ECu) {
        ctx->pc = 0x20F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5E8u;
        // 0x20f5ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5F0u;
        goto label_20f5f0;
    }
    ctx->pc = 0x20F5E8u;
    {
        const bool branch_taken_0x20f5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5E8u;
        // 0x20f5ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5e8) {
            ctx->pc = 0x20F628u;
            goto label_20f628;
        }
    }
    ctx->pc = 0x20F5F0u;
label_20f5f0:
    // 0x20f5f0: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x20f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_20f5f4:
    // 0x20f5f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f5f8:
    // 0x20f5f8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x20f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_20f5fc:
    // 0x20f5fc: 0x40f809  jalr        $v0
label_20f600:
    if (ctx->pc == 0x20F600u) {
        ctx->pc = 0x20F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5FCu;
        // 0x20f600: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F604u;
        goto label_20f604;
    }
    ctx->pc = 0x20F5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F604u);
        ctx->pc = 0x20F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5FCu;
        // 0x20f600: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F5FCu, 0x20F604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F604u;
label_20f604:
    // 0x20f604: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x20f604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_20f608:
    // 0x20f608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f60c:
    // 0x20f60c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f610:
    // 0x20f610: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f614:
    // 0x20f614: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x20f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_20f618:
    // 0x20f618: 0x40f809  jalr        $v0
label_20f61c:
    if (ctx->pc == 0x20F61Cu) {
        ctx->pc = 0x20F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F618u;
        // 0x20f61c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F620u;
        goto label_20f620;
    }
    ctx->pc = 0x20F618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F620u);
        ctx->pc = 0x20F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F618u;
        // 0x20f61c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F618u, 0x20F620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F620u;
label_20f620:
    // 0x20f620: 0x10000005  b           . + 4 + (0x5 << 2)
label_20f624:
    if (ctx->pc == 0x20F624u) {
        ctx->pc = 0x20F628u;
        goto label_20f628;
    }
    ctx->pc = 0x20F620u;
    {
        const bool branch_taken_0x20f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f620) {
            ctx->pc = 0x20F638u;
            goto label_20f638;
        }
    }
    ctx->pc = 0x20F628u;
label_20f628:
    // 0x20f628: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x20f628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20f62c:
    // 0x20f62c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20f630:
    // 0x20f630: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x20f630u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_20f634:
    // 0x20f634: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20f634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20f638:
    // 0x20f638: 0xc0796ac  jal         func_1E5AB0
label_20f63c:
    if (ctx->pc == 0x20F63Cu) {
        ctx->pc = 0x20F640u;
        goto label_20f640;
    }
    ctx->pc = 0x20F638u;
    SET_GPR_U32(ctx, 31, 0x20F640u);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x20F638u, 0x20F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F640u;
label_20f640:
    // 0x20f640: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x20f640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20f644:
    // 0x20f644: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_20f648:
    if (ctx->pc == 0x20F648u) {
        ctx->pc = 0x20F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F644u;
        // 0x20f648: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F64Cu;
        goto label_20f64c;
    }
    ctx->pc = 0x20F644u;
    {
        const bool branch_taken_0x20f644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F644u;
        // 0x20f648: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f644) {
            ctx->pc = 0x20F520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f520;
        }
    }
    ctx->pc = 0x20F64Cu;
label_20f64c:
    // 0x20f64c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x20f64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20f650:
    // 0x20f650: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x20f650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_20f654:
    // 0x20f654: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x20f654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20f658:
    // 0x20f658: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x20f658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_20f65c:
    // 0x20f65c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x20f65cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20f660:
    // 0x20f660: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x20f660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_20f664:
    // 0x20f664: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x20f664u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20f668:
    // 0x20f668: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x20f668u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_20f66c:
    // 0x20f66c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x20f66cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_20f670:
    // 0x20f670: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x20f670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_20f674:
    // 0x20f674: 0x3e00008  jr          $ra
label_20f678:
    if (ctx->pc == 0x20F678u) {
        ctx->pc = 0x20F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F674u;
        // 0x20f678: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F67Cu;
        goto label_20f67c;
    }
    ctx->pc = 0x20F674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F674u;
        // 0x20f678: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F67Cu;
label_20f67c:
    // 0x20f67c: 0x0  nop
    ctx->pc = 0x20f67cu;
    // NOP
    ctx->pc = 0x20f680u;
}
