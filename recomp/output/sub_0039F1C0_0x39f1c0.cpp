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

// Function: sub_0039F1C0
// Address: 0x39f1c0 - 0x39f458
void sub_0039F1C0_0x39f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F1C0_0x39f1c0");
#endif

    switch (ctx->pc) {
        case 0x39f1c0u: goto label_39f1c0;
        case 0x39f1c4u: goto label_39f1c4;
        case 0x39f1c8u: goto label_39f1c8;
        case 0x39f1ccu: goto label_39f1cc;
        case 0x39f1d0u: goto label_39f1d0;
        case 0x39f1d4u: goto label_39f1d4;
        case 0x39f1d8u: goto label_39f1d8;
        case 0x39f1dcu: goto label_39f1dc;
        case 0x39f1e0u: goto label_39f1e0;
        case 0x39f1e4u: goto label_39f1e4;
        case 0x39f1e8u: goto label_39f1e8;
        case 0x39f1ecu: goto label_39f1ec;
        case 0x39f1f0u: goto label_39f1f0;
        case 0x39f1f4u: goto label_39f1f4;
        case 0x39f1f8u: goto label_39f1f8;
        case 0x39f1fcu: goto label_39f1fc;
        case 0x39f200u: goto label_39f200;
        case 0x39f204u: goto label_39f204;
        case 0x39f208u: goto label_39f208;
        case 0x39f20cu: goto label_39f20c;
        case 0x39f210u: goto label_39f210;
        case 0x39f214u: goto label_39f214;
        case 0x39f218u: goto label_39f218;
        case 0x39f21cu: goto label_39f21c;
        case 0x39f220u: goto label_39f220;
        case 0x39f224u: goto label_39f224;
        case 0x39f228u: goto label_39f228;
        case 0x39f22cu: goto label_39f22c;
        case 0x39f230u: goto label_39f230;
        case 0x39f234u: goto label_39f234;
        case 0x39f238u: goto label_39f238;
        case 0x39f23cu: goto label_39f23c;
        case 0x39f240u: goto label_39f240;
        case 0x39f244u: goto label_39f244;
        case 0x39f248u: goto label_39f248;
        case 0x39f24cu: goto label_39f24c;
        case 0x39f250u: goto label_39f250;
        case 0x39f254u: goto label_39f254;
        case 0x39f258u: goto label_39f258;
        case 0x39f25cu: goto label_39f25c;
        case 0x39f260u: goto label_39f260;
        case 0x39f264u: goto label_39f264;
        case 0x39f268u: goto label_39f268;
        case 0x39f26cu: goto label_39f26c;
        case 0x39f270u: goto label_39f270;
        case 0x39f274u: goto label_39f274;
        case 0x39f278u: goto label_39f278;
        case 0x39f27cu: goto label_39f27c;
        case 0x39f280u: goto label_39f280;
        case 0x39f284u: goto label_39f284;
        case 0x39f288u: goto label_39f288;
        case 0x39f28cu: goto label_39f28c;
        case 0x39f290u: goto label_39f290;
        case 0x39f294u: goto label_39f294;
        case 0x39f298u: goto label_39f298;
        case 0x39f29cu: goto label_39f29c;
        case 0x39f2a0u: goto label_39f2a0;
        case 0x39f2a4u: goto label_39f2a4;
        case 0x39f2a8u: goto label_39f2a8;
        case 0x39f2acu: goto label_39f2ac;
        case 0x39f2b0u: goto label_39f2b0;
        case 0x39f2b4u: goto label_39f2b4;
        case 0x39f2b8u: goto label_39f2b8;
        case 0x39f2bcu: goto label_39f2bc;
        case 0x39f2c0u: goto label_39f2c0;
        case 0x39f2c4u: goto label_39f2c4;
        case 0x39f2c8u: goto label_39f2c8;
        case 0x39f2ccu: goto label_39f2cc;
        case 0x39f2d0u: goto label_39f2d0;
        case 0x39f2d4u: goto label_39f2d4;
        case 0x39f2d8u: goto label_39f2d8;
        case 0x39f2dcu: goto label_39f2dc;
        case 0x39f2e0u: goto label_39f2e0;
        case 0x39f2e4u: goto label_39f2e4;
        case 0x39f2e8u: goto label_39f2e8;
        case 0x39f2ecu: goto label_39f2ec;
        case 0x39f2f0u: goto label_39f2f0;
        case 0x39f2f4u: goto label_39f2f4;
        case 0x39f2f8u: goto label_39f2f8;
        case 0x39f2fcu: goto label_39f2fc;
        case 0x39f300u: goto label_39f300;
        case 0x39f304u: goto label_39f304;
        case 0x39f308u: goto label_39f308;
        case 0x39f30cu: goto label_39f30c;
        case 0x39f310u: goto label_39f310;
        case 0x39f314u: goto label_39f314;
        case 0x39f318u: goto label_39f318;
        case 0x39f31cu: goto label_39f31c;
        case 0x39f320u: goto label_39f320;
        case 0x39f324u: goto label_39f324;
        case 0x39f328u: goto label_39f328;
        case 0x39f32cu: goto label_39f32c;
        case 0x39f330u: goto label_39f330;
        case 0x39f334u: goto label_39f334;
        case 0x39f338u: goto label_39f338;
        case 0x39f33cu: goto label_39f33c;
        case 0x39f340u: goto label_39f340;
        case 0x39f344u: goto label_39f344;
        case 0x39f348u: goto label_39f348;
        case 0x39f34cu: goto label_39f34c;
        case 0x39f350u: goto label_39f350;
        case 0x39f354u: goto label_39f354;
        case 0x39f358u: goto label_39f358;
        case 0x39f35cu: goto label_39f35c;
        case 0x39f360u: goto label_39f360;
        case 0x39f364u: goto label_39f364;
        case 0x39f368u: goto label_39f368;
        case 0x39f36cu: goto label_39f36c;
        case 0x39f370u: goto label_39f370;
        case 0x39f374u: goto label_39f374;
        case 0x39f378u: goto label_39f378;
        case 0x39f37cu: goto label_39f37c;
        case 0x39f380u: goto label_39f380;
        case 0x39f384u: goto label_39f384;
        case 0x39f388u: goto label_39f388;
        case 0x39f38cu: goto label_39f38c;
        case 0x39f390u: goto label_39f390;
        case 0x39f394u: goto label_39f394;
        case 0x39f398u: goto label_39f398;
        case 0x39f39cu: goto label_39f39c;
        case 0x39f3a0u: goto label_39f3a0;
        case 0x39f3a4u: goto label_39f3a4;
        case 0x39f3a8u: goto label_39f3a8;
        case 0x39f3acu: goto label_39f3ac;
        case 0x39f3b0u: goto label_39f3b0;
        case 0x39f3b4u: goto label_39f3b4;
        case 0x39f3b8u: goto label_39f3b8;
        case 0x39f3bcu: goto label_39f3bc;
        case 0x39f3c0u: goto label_39f3c0;
        case 0x39f3c4u: goto label_39f3c4;
        case 0x39f3c8u: goto label_39f3c8;
        case 0x39f3ccu: goto label_39f3cc;
        case 0x39f3d0u: goto label_39f3d0;
        case 0x39f3d4u: goto label_39f3d4;
        case 0x39f3d8u: goto label_39f3d8;
        case 0x39f3dcu: goto label_39f3dc;
        case 0x39f3e0u: goto label_39f3e0;
        case 0x39f3e4u: goto label_39f3e4;
        case 0x39f3e8u: goto label_39f3e8;
        case 0x39f3ecu: goto label_39f3ec;
        case 0x39f3f0u: goto label_39f3f0;
        case 0x39f3f4u: goto label_39f3f4;
        case 0x39f3f8u: goto label_39f3f8;
        case 0x39f3fcu: goto label_39f3fc;
        case 0x39f400u: goto label_39f400;
        case 0x39f404u: goto label_39f404;
        case 0x39f408u: goto label_39f408;
        case 0x39f40cu: goto label_39f40c;
        case 0x39f410u: goto label_39f410;
        case 0x39f414u: goto label_39f414;
        case 0x39f418u: goto label_39f418;
        case 0x39f41cu: goto label_39f41c;
        case 0x39f420u: goto label_39f420;
        case 0x39f424u: goto label_39f424;
        case 0x39f428u: goto label_39f428;
        case 0x39f42cu: goto label_39f42c;
        case 0x39f430u: goto label_39f430;
        case 0x39f434u: goto label_39f434;
        case 0x39f438u: goto label_39f438;
        case 0x39f43cu: goto label_39f43c;
        case 0x39f440u: goto label_39f440;
        case 0x39f444u: goto label_39f444;
        case 0x39f448u: goto label_39f448;
        case 0x39f44cu: goto label_39f44c;
        case 0x39f450u: goto label_39f450;
        case 0x39f454u: goto label_39f454;
        default: break;
    }

    ctx->pc = 0x39f1c0u;

label_39f1c0:
    // 0x39f1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39f1c4:
    // 0x39f1c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39f1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_39f1c8:
    // 0x39f1c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39f1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39f1cc:
    // 0x39f1cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39f1d0:
    // 0x39f1d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_39f1d4:
    // 0x39f1d4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_39f1d8:
    if (ctx->pc == 0x39F1D8u) {
        ctx->pc = 0x39F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1D4u;
        // 0x39f1d8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F1DCu;
        goto label_39f1dc;
    }
    ctx->pc = 0x39F1D4u;
    {
        const bool branch_taken_0x39f1d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1D4u;
        // 0x39f1d8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f1d4) {
            ctx->pc = 0x39F200u;
            goto label_39f200;
        }
    }
    ctx->pc = 0x39F1DCu;
label_39f1dc:
    // 0x39f1dc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39f1e0:
    // 0x39f1e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39f1e4:
    // 0x39f1e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39f1e8:
    // 0x39f1e8: 0x2484bdf8  addiu       $a0, $a0, -0x4208
    ctx->pc = 0x39f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950392));
label_39f1ec:
    // 0x39f1ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39f1ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39f1f0:
    // 0x39f1f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39f1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39f1f4:
    // 0x39f1f4: 0x80ecbf4  j           func_3B2FD0
label_39f1f8:
    if (ctx->pc == 0x39F1F8u) {
        ctx->pc = 0x39F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1F4u;
        // 0x39f1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F1FCu;
        goto label_39f1fc;
    }
    ctx->pc = 0x39F1F4u;
    ctx->pc = 0x39F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F1F4u;
    // 0x39f1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    sub_003B2FD0_0x3b2fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x39F1FCu;
label_39f1fc:
    // 0x39f1fc: 0x0  nop
    ctx->pc = 0x39f1fcu;
    // NOP
label_39f200:
    // 0x39f200: 0xc0e7d90  jal         func_39F640
label_39f204:
    if (ctx->pc == 0x39F204u) {
        ctx->pc = 0x39F208u;
        goto label_39f208;
    }
    ctx->pc = 0x39F200u;
    SET_GPR_U32(ctx, 31, 0x39F208u);
    ctx->pc = 0x39F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F640u, 0x39F200u, 0x39F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F208u;
label_39f208:
    // 0x39f208: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x39f208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39f20c:
    // 0x39f20c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_39f210:
    if (ctx->pc == 0x39F210u) {
        ctx->pc = 0x39F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F20Cu;
        // 0x39f210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F214u;
        goto label_39f214;
    }
    ctx->pc = 0x39F20Cu;
    {
        const bool branch_taken_0x39f20c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F20Cu;
        // 0x39f210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f20c) {
            ctx->pc = 0x39F22Cu;
            goto label_39f22c;
        }
    }
    ctx->pc = 0x39F214u;
label_39f214:
    // 0x39f214: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x39f214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_39f218:
    // 0x39f218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39f21c:
    // 0x39f21c: 0xc0e6780  jal         func_399E00
label_39f220:
    if (ctx->pc == 0x39F220u) {
        ctx->pc = 0x39F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F21Cu;
        // 0x39f220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F224u;
        goto label_39f224;
    }
    ctx->pc = 0x39F21Cu;
    SET_GPR_U32(ctx, 31, 0x39F224u);
    ctx->pc = 0x39F220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F21Cu;
    // 0x39f220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E00u, 0x39F21Cu, 0x39F224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F224u;
label_39f224:
    // 0x39f224: 0xc0e65d6  jal         func_399758
label_39f228:
    if (ctx->pc == 0x39F228u) {
        ctx->pc = 0x39F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F224u;
        // 0x39f228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F22Cu;
        goto label_39f22c;
    }
    ctx->pc = 0x39F224u;
    SET_GPR_U32(ctx, 31, 0x39F22Cu);
    ctx->pc = 0x39F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F224u;
    // 0x39f228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399758u, 0x39F224u, 0x39F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F22Cu;
label_39f22c:
    // 0x39f22c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x39f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_39f230:
    // 0x39f230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39f234:
    if (ctx->pc == 0x39F234u) {
        ctx->pc = 0x39F238u;
        goto label_39f238;
    }
    ctx->pc = 0x39F230u;
    {
        const bool branch_taken_0x39f230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f230) {
            ctx->pc = 0x39F240u;
            goto label_39f240;
        }
    }
    ctx->pc = 0x39F238u;
label_39f238:
    // 0x39f238: 0xc0e8164  jal         func_3A0590
label_39f23c:
    if (ctx->pc == 0x39F23Cu) {
        ctx->pc = 0x39F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F238u;
        // 0x39f23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F240u;
        goto label_39f240;
    }
    ctx->pc = 0x39F238u;
    SET_GPR_U32(ctx, 31, 0x39F240u);
    ctx->pc = 0x39F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F238u;
    // 0x39f23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0590u, 0x39F238u, 0x39F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F240u;
label_39f240:
    // 0x39f240: 0xc0ecbe4  jal         func_3B2F90
label_39f244:
    if (ctx->pc == 0x39F244u) {
        ctx->pc = 0x39F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F240u;
        // 0x39f244: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F248u;
        goto label_39f248;
    }
    ctx->pc = 0x39F240u;
    SET_GPR_U32(ctx, 31, 0x39F248u);
    ctx->pc = 0x39F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F240u;
    // 0x39f244: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x39F240u, 0x39F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F248u;
label_39f248:
    // 0x39f248: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x39f248u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_39f24c:
    // 0x39f24c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_39f250:
    if (ctx->pc == 0x39F250u) {
        ctx->pc = 0x39F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F24Cu;
        // 0x39f250: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F254u;
        goto label_39f254;
    }
    ctx->pc = 0x39F24Cu;
    {
        const bool branch_taken_0x39f24c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F24Cu;
        // 0x39f250: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f24c) {
            ctx->pc = 0x39F294u;
            goto label_39f294;
        }
    }
    ctx->pc = 0x39F254u;
label_39f254:
    // 0x39f254: 0x26300094  addiu       $s0, $s1, 0x94
    ctx->pc = 0x39f254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_39f258:
    // 0x39f258: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39f25c:
    // 0x39f25c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_39f260:
    if (ctx->pc == 0x39F260u) {
        ctx->pc = 0x39F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F25Cu;
        // 0x39f260: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F264u;
        goto label_39f264;
    }
    ctx->pc = 0x39F25Cu;
    {
        const bool branch_taken_0x39f25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F25Cu;
        // 0x39f260: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f25c) {
            ctx->pc = 0x39F27Cu;
            goto label_39f27c;
        }
    }
    ctx->pc = 0x39F264u;
label_39f264:
    // 0x39f264: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39f268:
    // 0x39f268: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x39f268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_39f26c:
    // 0x39f26c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39f270:
    // 0x39f270: 0x40f809  jalr        $v0
label_39f274:
    if (ctx->pc == 0x39F274u) {
        ctx->pc = 0x39F278u;
        goto label_39f278;
    }
    ctx->pc = 0x39F270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F278u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F270u, 0x39F278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F278u;
label_39f278:
    // 0x39f278: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x39f278u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_39f27c:
    // 0x39f27c: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x39f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_39f280:
    // 0x39f280: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39f280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39f284:
    // 0x39f284: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x39f284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_39f288:
    // 0x39f288: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x39f288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39f28c:
    // 0x39f28c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_39f290:
    if (ctx->pc == 0x39F290u) {
        ctx->pc = 0x39F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F28Cu;
        // 0x39f290: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F294u;
        goto label_39f294;
    }
    ctx->pc = 0x39F28Cu;
    {
        const bool branch_taken_0x39f28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F28Cu;
        // 0x39f290: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f28c) {
            ctx->pc = 0x39F258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f258;
        }
    }
    ctx->pc = 0x39F294u;
label_39f294:
    // 0x39f294: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x39f294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_39f298:
    // 0x39f298: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_39f29c:
    if (ctx->pc == 0x39F29Cu) {
        ctx->pc = 0x39F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F298u;
        // 0x39f29c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2A0u;
        goto label_39f2a0;
    }
    ctx->pc = 0x39F298u;
    {
        const bool branch_taken_0x39f298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f298) {
            ctx->pc = 0x39F29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F298u;
            // 0x39f29c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F2B8u;
            goto label_39f2b8;
        }
    }
    ctx->pc = 0x39F2A0u;
label_39f2a0:
    // 0x39f2a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39f2a4:
    // 0x39f2a4: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x39f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
label_39f2a8:
    // 0x39f2a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39f2ac:
    // 0x39f2ac: 0x40f809  jalr        $v0
label_39f2b0:
    if (ctx->pc == 0x39F2B0u) {
        ctx->pc = 0x39F2B4u;
        goto label_39f2b4;
    }
    ctx->pc = 0x39F2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F2B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F2ACu, 0x39F2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F2B4u;
label_39f2b4:
    // 0x39f2b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x39f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39f2b8:
    // 0x39f2b8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39f2bc:
    if (ctx->pc == 0x39F2BCu) {
        ctx->pc = 0x39F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2B8u;
        // 0x39f2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2C0u;
        goto label_39f2c0;
    }
    ctx->pc = 0x39F2B8u;
    {
        const bool branch_taken_0x39f2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f2b8) {
            ctx->pc = 0x39F2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F2B8u;
            // 0x39f2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F2CCu;
            goto label_39f2cc;
        }
    }
    ctx->pc = 0x39F2C0u;
label_39f2c0:
    // 0x39f2c0: 0xc0e82d0  jal         func_3A0B40
label_39f2c4:
    if (ctx->pc == 0x39F2C4u) {
        ctx->pc = 0x39F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2C0u;
        // 0x39f2c4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2C8u;
        goto label_39f2c8;
    }
    ctx->pc = 0x39F2C0u;
    SET_GPR_U32(ctx, 31, 0x39F2C8u);
    ctx->pc = 0x39F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F2C0u;
    // 0x39f2c4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0B40u, 0x39F2C0u, 0x39F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F2C8u;
label_39f2c8:
    // 0x39f2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39f2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39f2cc:
    // 0x39f2cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39f2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f2d0:
    // 0x39f2d0: 0xc0efab3  jal         func_3BEACC
label_39f2d4:
    if (ctx->pc == 0x39F2D4u) {
        ctx->pc = 0x39F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2D0u;
        // 0x39f2d4: 0x24060278  addiu       $a2, $zero, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2D8u;
        goto label_39f2d8;
    }
    ctx->pc = 0x39F2D0u;
    SET_GPR_U32(ctx, 31, 0x39F2D8u);
    ctx->pc = 0x39F2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F2D0u;
    // 0x39f2d4: 0x24060278  addiu       $a2, $zero, 0x278 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39F2D0u, 0x39F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F2D8u;
label_39f2d8:
    // 0x39f2d8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x39f2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_39f2dc:
    // 0x39f2dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39f2e0:
    // 0x39f2e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39f2e4:
    // 0x39f2e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39f2e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39f2e8:
    // 0x39f2e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39f2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39f2ec:
    // 0x39f2ec: 0x80ecbea  j           func_3B2FA8
label_39f2f0:
    if (ctx->pc == 0x39F2F0u) {
        ctx->pc = 0x39F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2ECu;
        // 0x39f2f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2F4u;
        goto label_39f2f4;
    }
    ctx->pc = 0x39F2ECu;
    ctx->pc = 0x39F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F2ECu;
    // 0x39f2f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    sub_003B2FA8_0x3b2fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x39F2F4u;
label_39f2f4:
    // 0x39f2f4: 0x0  nop
    ctx->pc = 0x39f2f4u;
    // NOP
label_39f2f8:
    // 0x39f2f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39f2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39f2fc:
    // 0x39f2fc: 0x0  nop
    ctx->pc = 0x39f2fcu;
    // NOP
label_39f300:
    // 0x39f300: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x39f300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39f304:
    // 0x39f304: 0x0  nop
    ctx->pc = 0x39f304u;
    // NOP
label_39f308:
    // 0x39f308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39f308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39f30c:
    // 0x39f30c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x39f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_39f310:
    // 0x39f310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39f314:
    // 0x39f314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39f314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39f318:
    // 0x39f318: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39f318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_39f31c:
    // 0x39f31c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39f31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39f320:
    // 0x39f320: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39f320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_39f324:
    // 0x39f324: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x39f324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39f328:
    // 0x39f328: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39f328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_39f32c:
    // 0x39f32c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x39f32cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39f330:
    // 0x39f330: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x39f330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_39f334:
    // 0x39f334: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x39f334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39f338:
    // 0x39f338: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x39f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_39f33c:
    // 0x39f33c: 0x2442ad10  addiu       $v0, $v0, -0x52F0
    ctx->pc = 0x39f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946064));
label_39f340:
    // 0x39f340: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39f344:
    // 0x39f344: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_39f348:
    if (ctx->pc == 0x39F348u) {
        ctx->pc = 0x39F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F344u;
        // 0x39f348: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F34Cu;
        goto label_39f34c;
    }
    ctx->pc = 0x39F344u;
    {
        const bool branch_taken_0x39f344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f344) {
            ctx->pc = 0x39F348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F344u;
            // 0x39f348: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F358u;
            goto label_39f358;
        }
    }
    ctx->pc = 0x39F34Cu;
label_39f34c:
    // 0x39f34c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
label_39f350:
    if (ctx->pc == 0x39F350u) {
        ctx->pc = 0x39F354u;
        goto label_39f354;
    }
    ctx->pc = 0x39F34Cu;
    {
        const bool branch_taken_0x39f34c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f34c) {
            ctx->pc = 0x39F380u;
            goto label_39f380;
        }
    }
    ctx->pc = 0x39F354u;
label_39f354:
    // 0x39f354: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39f358:
    // 0x39f358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39f35c:
    // 0x39f35c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39f360:
    // 0x39f360: 0x2484be20  addiu       $a0, $a0, -0x41E0
    ctx->pc = 0x39f360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950432));
label_39f364:
    // 0x39f364: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39f364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39f368:
    // 0x39f368: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39f368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39f36c:
    // 0x39f36c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39f36cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39f370:
    // 0x39f370: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x39f370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_39f374:
    // 0x39f374: 0x80ecbf4  j           func_3B2FD0
label_39f378:
    if (ctx->pc == 0x39F378u) {
        ctx->pc = 0x39F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F374u;
        // 0x39f378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F37Cu;
        goto label_39f37c;
    }
    ctx->pc = 0x39F374u;
    ctx->pc = 0x39F378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F374u;
    // 0x39f378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    sub_003B2FD0_0x3b2fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x39F37Cu;
label_39f37c:
    // 0x39f37c: 0x0  nop
    ctx->pc = 0x39f37cu;
    // NOP
label_39f380:
    // 0x39f380: 0x641000b  bgez        $s2, . + 4 + (0xB << 2)
label_39f384:
    if (ctx->pc == 0x39F384u) {
        ctx->pc = 0x39F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F380u;
        // 0x39f384: 0xdfbf0028  ld          $ra, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F388u;
        goto label_39f388;
    }
    ctx->pc = 0x39F380u;
    {
        const bool branch_taken_0x39f380 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x39F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F380u;
        // 0x39f384: 0xdfbf0028  ld          $ra, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f380) {
            ctx->pc = 0x39F3B0u;
            goto label_39f3b0;
        }
    }
    ctx->pc = 0x39F388u;
label_39f388:
    // 0x39f388: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39f38c:
    // 0x39f38c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f38cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39f390:
    // 0x39f390: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39f394:
    // 0x39f394: 0x2484be48  addiu       $a0, $a0, -0x41B8
    ctx->pc = 0x39f394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950472));
label_39f398:
    // 0x39f398: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39f398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39f39c:
    // 0x39f39c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39f39cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39f3a0:
    // 0x39f3a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39f3a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39f3a4:
    // 0x39f3a4: 0x80ecbf4  j           func_3B2FD0
label_39f3a8:
    if (ctx->pc == 0x39F3A8u) {
        ctx->pc = 0x39F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3A4u;
        // 0x39f3a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F3ACu;
        goto label_39f3ac;
    }
    ctx->pc = 0x39F3A4u;
    ctx->pc = 0x39F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F3A4u;
    // 0x39f3a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    sub_003B2FD0_0x3b2fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x39F3ACu;
label_39f3ac:
    // 0x39f3ac: 0x0  nop
    ctx->pc = 0x39f3acu;
    // NOP
label_39f3b0:
    // 0x39f3b0: 0x1e60000b  bgtz        $s3, . + 4 + (0xB << 2)
label_39f3b4:
    if (ctx->pc == 0x39F3B4u) {
        ctx->pc = 0x39F3B8u;
        goto label_39f3b8;
    }
    ctx->pc = 0x39F3B0u;
    {
        const bool branch_taken_0x39f3b0 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x39f3b0) {
            ctx->pc = 0x39F3E0u;
            goto label_39f3e0;
        }
    }
    ctx->pc = 0x39F3B8u;
label_39f3b8:
    // 0x39f3b8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39f3bc:
    // 0x39f3bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39f3c0:
    // 0x39f3c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39f3c4:
    // 0x39f3c4: 0x2484be78  addiu       $a0, $a0, -0x4188
    ctx->pc = 0x39f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950520));
label_39f3c8:
    // 0x39f3c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39f3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39f3cc:
    // 0x39f3cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39f3ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39f3d0:
    // 0x39f3d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39f3d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39f3d4:
    // 0x39f3d4: 0x80ecbf4  j           func_3B2FD0
label_39f3d8:
    if (ctx->pc == 0x39F3D8u) {
        ctx->pc = 0x39F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3D4u;
        // 0x39f3d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F3DCu;
        goto label_39f3dc;
    }
    ctx->pc = 0x39F3D4u;
    ctx->pc = 0x39F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F3D4u;
    // 0x39f3d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    sub_003B2FD0_0x3b2fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x39F3DCu;
label_39f3dc:
    // 0x39f3dc: 0x0  nop
    ctx->pc = 0x39f3dcu;
    // NOP
label_39f3e0:
    // 0x39f3e0: 0xc0e7d90  jal         func_39F640
label_39f3e4:
    if (ctx->pc == 0x39F3E4u) {
        ctx->pc = 0x39F3E8u;
        goto label_39f3e8;
    }
    ctx->pc = 0x39F3E0u;
    SET_GPR_U32(ctx, 31, 0x39F3E8u);
    ctx->pc = 0x39F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F640u, 0x39F3E0u, 0x39F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F3E8u;
label_39f3e8:
    // 0x39f3e8: 0xc0ecbe4  jal         func_3B2F90
label_39f3ec:
    if (ctx->pc == 0x39F3ECu) {
        ctx->pc = 0x39F3F0u;
        goto label_39f3f0;
    }
    ctx->pc = 0x39F3E8u;
    SET_GPR_U32(ctx, 31, 0x39F3F0u);
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x39F3E8u, 0x39F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F3F0u;
label_39f3f0:
    // 0x39f3f0: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x39f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_39f3f4:
    // 0x39f3f4: 0xc0efbe8  jal         func_3BEFA0
label_39f3f8:
    if (ctx->pc == 0x39F3F8u) {
        ctx->pc = 0x39F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3F4u;
        // 0x39f3f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F3FCu;
        goto label_39f3fc;
    }
    ctx->pc = 0x39F3F4u;
    SET_GPR_U32(ctx, 31, 0x39F3FCu);
    ctx->pc = 0x39F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F3F4u;
    // 0x39f3f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x39F3F4u, 0x39F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F3FCu;
label_39f3fc:
    // 0x39f3fc: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x39f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_39f400:
    // 0x39f400: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x39f400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_39f404:
    // 0x39f404: 0xae0301d0  sw          $v1, 0x1D0($s0)
    ctx->pc = 0x39f404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
label_39f408:
    // 0x39f408: 0xae1401d4  sw          $s4, 0x1D4($s0)
    ctx->pc = 0x39f408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 20));
label_39f40c:
    // 0x39f40c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39f40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f410:
    // 0x39f410: 0xae1201d8  sw          $s2, 0x1D8($s0)
    ctx->pc = 0x39f410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 18));
label_39f414:
    // 0x39f414: 0xae1301dc  sw          $s3, 0x1DC($s0)
    ctx->pc = 0x39f414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 19));
label_39f418:
    // 0x39f418: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x39f418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_39f41c:
    // 0x39f41c: 0xc0e82f2  jal         func_3A0BC8
label_39f420:
    if (ctx->pc == 0x39F420u) {
        ctx->pc = 0x39F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F41Cu;
        // 0x39f420: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F424u;
        goto label_39f424;
    }
    ctx->pc = 0x39F41Cu;
    SET_GPR_U32(ctx, 31, 0x39F424u);
    ctx->pc = 0x39F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F41Cu;
    // 0x39f420: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BC8u, 0x39F41Cu, 0x39F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F424u;
label_39f424:
    // 0x39f424: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x39f424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_39f428:
    // 0x39f428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39f42c:
    // 0x39f42c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f42cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39f430:
    // 0x39f430: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x39f430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_39f434:
    // 0x39f434: 0xa20201b2  sb          $v0, 0x1B2($s0)
    ctx->pc = 0x39f434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 2));
label_39f438:
    // 0x39f438: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39f438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39f43c:
    // 0x39f43c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39f440:
    // 0x39f440: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39f440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39f444:
    // 0x39f444: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39f444u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39f448:
    // 0x39f448: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x39f448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_39f44c:
    // 0x39f44c: 0x80ecbea  j           func_3B2FA8
label_39f450:
    if (ctx->pc == 0x39F450u) {
        ctx->pc = 0x39F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F44Cu;
        // 0x39f450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F454u;
        goto label_39f454;
    }
    ctx->pc = 0x39F44Cu;
    ctx->pc = 0x39F450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F44Cu;
    // 0x39f450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    sub_003B2FA8_0x3b2fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x39F454u;
label_39f454:
    // 0x39f454: 0x0  nop
    ctx->pc = 0x39f454u;
    // NOP
    ctx->pc = 0x39f458u;
}
