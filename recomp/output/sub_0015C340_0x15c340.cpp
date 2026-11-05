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

// Function: sub_0015C340
// Address: 0x15c340 - 0x15c540
void sub_0015C340_0x15c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C340_0x15c340");
#endif

    switch (ctx->pc) {
        case 0x15c340u: goto label_15c340;
        case 0x15c344u: goto label_15c344;
        case 0x15c348u: goto label_15c348;
        case 0x15c34cu: goto label_15c34c;
        case 0x15c350u: goto label_15c350;
        case 0x15c354u: goto label_15c354;
        case 0x15c358u: goto label_15c358;
        case 0x15c35cu: goto label_15c35c;
        case 0x15c360u: goto label_15c360;
        case 0x15c364u: goto label_15c364;
        case 0x15c368u: goto label_15c368;
        case 0x15c36cu: goto label_15c36c;
        case 0x15c370u: goto label_15c370;
        case 0x15c374u: goto label_15c374;
        case 0x15c378u: goto label_15c378;
        case 0x15c37cu: goto label_15c37c;
        case 0x15c380u: goto label_15c380;
        case 0x15c384u: goto label_15c384;
        case 0x15c388u: goto label_15c388;
        case 0x15c38cu: goto label_15c38c;
        case 0x15c390u: goto label_15c390;
        case 0x15c394u: goto label_15c394;
        case 0x15c398u: goto label_15c398;
        case 0x15c39cu: goto label_15c39c;
        case 0x15c3a0u: goto label_15c3a0;
        case 0x15c3a4u: goto label_15c3a4;
        case 0x15c3a8u: goto label_15c3a8;
        case 0x15c3acu: goto label_15c3ac;
        case 0x15c3b0u: goto label_15c3b0;
        case 0x15c3b4u: goto label_15c3b4;
        case 0x15c3b8u: goto label_15c3b8;
        case 0x15c3bcu: goto label_15c3bc;
        case 0x15c3c0u: goto label_15c3c0;
        case 0x15c3c4u: goto label_15c3c4;
        case 0x15c3c8u: goto label_15c3c8;
        case 0x15c3ccu: goto label_15c3cc;
        case 0x15c3d0u: goto label_15c3d0;
        case 0x15c3d4u: goto label_15c3d4;
        case 0x15c3d8u: goto label_15c3d8;
        case 0x15c3dcu: goto label_15c3dc;
        case 0x15c3e0u: goto label_15c3e0;
        case 0x15c3e4u: goto label_15c3e4;
        case 0x15c3e8u: goto label_15c3e8;
        case 0x15c3ecu: goto label_15c3ec;
        case 0x15c3f0u: goto label_15c3f0;
        case 0x15c3f4u: goto label_15c3f4;
        case 0x15c3f8u: goto label_15c3f8;
        case 0x15c3fcu: goto label_15c3fc;
        case 0x15c400u: goto label_15c400;
        case 0x15c404u: goto label_15c404;
        case 0x15c408u: goto label_15c408;
        case 0x15c40cu: goto label_15c40c;
        case 0x15c410u: goto label_15c410;
        case 0x15c414u: goto label_15c414;
        case 0x15c418u: goto label_15c418;
        case 0x15c41cu: goto label_15c41c;
        case 0x15c420u: goto label_15c420;
        case 0x15c424u: goto label_15c424;
        case 0x15c428u: goto label_15c428;
        case 0x15c42cu: goto label_15c42c;
        case 0x15c430u: goto label_15c430;
        case 0x15c434u: goto label_15c434;
        case 0x15c438u: goto label_15c438;
        case 0x15c43cu: goto label_15c43c;
        case 0x15c440u: goto label_15c440;
        case 0x15c444u: goto label_15c444;
        case 0x15c448u: goto label_15c448;
        case 0x15c44cu: goto label_15c44c;
        case 0x15c450u: goto label_15c450;
        case 0x15c454u: goto label_15c454;
        case 0x15c458u: goto label_15c458;
        case 0x15c45cu: goto label_15c45c;
        case 0x15c460u: goto label_15c460;
        case 0x15c464u: goto label_15c464;
        case 0x15c468u: goto label_15c468;
        case 0x15c46cu: goto label_15c46c;
        case 0x15c470u: goto label_15c470;
        case 0x15c474u: goto label_15c474;
        case 0x15c478u: goto label_15c478;
        case 0x15c47cu: goto label_15c47c;
        case 0x15c480u: goto label_15c480;
        case 0x15c484u: goto label_15c484;
        case 0x15c488u: goto label_15c488;
        case 0x15c48cu: goto label_15c48c;
        case 0x15c490u: goto label_15c490;
        case 0x15c494u: goto label_15c494;
        case 0x15c498u: goto label_15c498;
        case 0x15c49cu: goto label_15c49c;
        case 0x15c4a0u: goto label_15c4a0;
        case 0x15c4a4u: goto label_15c4a4;
        case 0x15c4a8u: goto label_15c4a8;
        case 0x15c4acu: goto label_15c4ac;
        case 0x15c4b0u: goto label_15c4b0;
        case 0x15c4b4u: goto label_15c4b4;
        case 0x15c4b8u: goto label_15c4b8;
        case 0x15c4bcu: goto label_15c4bc;
        case 0x15c4c0u: goto label_15c4c0;
        case 0x15c4c4u: goto label_15c4c4;
        case 0x15c4c8u: goto label_15c4c8;
        case 0x15c4ccu: goto label_15c4cc;
        case 0x15c4d0u: goto label_15c4d0;
        case 0x15c4d4u: goto label_15c4d4;
        case 0x15c4d8u: goto label_15c4d8;
        case 0x15c4dcu: goto label_15c4dc;
        case 0x15c4e0u: goto label_15c4e0;
        case 0x15c4e4u: goto label_15c4e4;
        case 0x15c4e8u: goto label_15c4e8;
        case 0x15c4ecu: goto label_15c4ec;
        case 0x15c4f0u: goto label_15c4f0;
        case 0x15c4f4u: goto label_15c4f4;
        case 0x15c4f8u: goto label_15c4f8;
        case 0x15c4fcu: goto label_15c4fc;
        case 0x15c500u: goto label_15c500;
        case 0x15c504u: goto label_15c504;
        case 0x15c508u: goto label_15c508;
        case 0x15c50cu: goto label_15c50c;
        case 0x15c510u: goto label_15c510;
        case 0x15c514u: goto label_15c514;
        case 0x15c518u: goto label_15c518;
        case 0x15c51cu: goto label_15c51c;
        case 0x15c520u: goto label_15c520;
        case 0x15c524u: goto label_15c524;
        case 0x15c528u: goto label_15c528;
        case 0x15c52cu: goto label_15c52c;
        case 0x15c530u: goto label_15c530;
        case 0x15c534u: goto label_15c534;
        case 0x15c538u: goto label_15c538;
        case 0x15c53cu: goto label_15c53c;
        default: break;
    }

    ctx->pc = 0x15c340u;

label_15c340:
    // 0x15c340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15c344:
    // 0x15c344: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15c348:
    // 0x15c348: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15c348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15c34c:
    // 0x15c34c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_15c350:
    // 0x15c350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15c350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c354:
    // 0x15c354: 0x30b600ff  andi        $s6, $a1, 0xFF
    ctx->pc = 0x15c354u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_15c358:
    // 0x15c358: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15c35c:
    // 0x15c35c: 0x2c22018  mult        $a0, $s6, $v0
    ctx->pc = 0x15c35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_15c360:
    // 0x15c360: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15c364:
    // 0x15c364: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15c368:
    // 0x15c368: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15c368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c36c:
    // 0x15c36c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15c370:
    // 0x15c370: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15c370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c374:
    // 0x15c374: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15c374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_15c378:
    // 0x15c378: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x15c378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_15c37c:
    // 0x15c37c: 0x91a021  addu        $s4, $a0, $s1
    ctx->pc = 0x15c37cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_15c380:
    // 0x15c380: 0x8e23031c  lw          $v1, 0x31C($s1)
    ctx->pc = 0x15c380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_15c384:
    // 0x15c384: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_15c388:
    if (ctx->pc == 0x15C388u) {
        ctx->pc = 0x15C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C384u;
        // 0x15c388: 0x8e950320  lw          $s5, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C38Cu;
        goto label_15c38c;
    }
    ctx->pc = 0x15C384u;
    {
        const bool branch_taken_0x15c384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C384u;
        // 0x15c388: 0x8e950320  lw          $s5, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c384) {
            ctx->pc = 0x15C3CCu;
            goto label_15c3cc;
        }
    }
    ctx->pc = 0x15C38Cu;
label_15c38c:
    // 0x15c38c: 0xc04f230  jal         func_13C8C0
label_15c390:
    if (ctx->pc == 0x15C390u) {
        ctx->pc = 0x15C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C38Cu;
        // 0x15c390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C394u;
        goto label_15c394;
    }
    ctx->pc = 0x15C38Cu;
    SET_GPR_U32(ctx, 31, 0x15C394u);
    ctx->pc = 0x15C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C38Cu;
    // 0x15c390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C8C0u, 0x15C38Cu, 0x15C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C394u;
label_15c394:
    // 0x15c394: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15c394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c398:
    // 0x15c398: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x15c398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15c39c:
    // 0x15c39c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c3a0:
    // 0x15c3a0: 0xc04f33e  jal         func_13CCF8
label_15c3a4:
    if (ctx->pc == 0x15C3A4u) {
        ctx->pc = 0x15C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3A0u;
        // 0x15c3a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3A8u;
        goto label_15c3a8;
    }
    ctx->pc = 0x15C3A0u;
    SET_GPR_U32(ctx, 31, 0x15C3A8u);
    ctx->pc = 0x15C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3A0u;
    // 0x15c3a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15C3A0u, 0x15C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3A8u;
label_15c3a8:
    // 0x15c3a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c3ac:
    // 0x15c3ac: 0xc04f0b6  jal         func_13C2D8
label_15c3b0:
    if (ctx->pc == 0x15C3B0u) {
        ctx->pc = 0x15C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3ACu;
        // 0x15c3b0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3B4u;
        goto label_15c3b4;
    }
    ctx->pc = 0x15C3ACu;
    SET_GPR_U32(ctx, 31, 0x15C3B4u);
    ctx->pc = 0x15C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3ACu;
    // 0x15c3b0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15C3ACu, 0x15C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3B4u;
label_15c3b4:
    // 0x15c3b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c3b8:
    // 0x15c3b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15c3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c3bc:
    // 0x15c3bc: 0xc0461e8  jal         func_1187A0
label_15c3c0:
    if (ctx->pc == 0x15C3C0u) {
        ctx->pc = 0x15C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3BCu;
        // 0x15c3c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3C4u;
        goto label_15c3c4;
    }
    ctx->pc = 0x15C3BCu;
    SET_GPR_U32(ctx, 31, 0x15C3C4u);
    ctx->pc = 0x15C3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3BCu;
    // 0x15c3c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x15C3BCu, 0x15C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3C4u;
label_15c3c4:
    // 0x15c3c4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_15c3c8:
    if (ctx->pc == 0x15C3C8u) {
        ctx->pc = 0x15C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3C4u;
        // 0x15c3c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3CCu;
        goto label_15c3cc;
    }
    ctx->pc = 0x15C3C4u;
    {
        const bool branch_taken_0x15c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3C4u;
        // 0x15c3c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3c4) {
            ctx->pc = 0x15C4B4u;
            goto label_15c4b4;
        }
    }
    ctx->pc = 0x15C3CCu;
label_15c3cc:
    // 0x15c3cc: 0xc04f02a  jal         func_13C0A8
label_15c3d0:
    if (ctx->pc == 0x15C3D0u) {
        ctx->pc = 0x15C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3CCu;
        // 0x15c3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3D4u;
        goto label_15c3d4;
    }
    ctx->pc = 0x15C3CCu;
    SET_GPR_U32(ctx, 31, 0x15C3D4u);
    ctx->pc = 0x15C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3CCu;
    // 0x15c3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x15C3CCu, 0x15C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3D4u;
label_15c3d4:
    // 0x15c3d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c3d8:
    // 0x15c3d8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x15c3d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_15c3dc:
    // 0x15c3dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_15c3e0:
    if (ctx->pc == 0x15C3E0u) {
        ctx->pc = 0x15C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3DCu;
        // 0x15c3e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3E4u;
        goto label_15c3e4;
    }
    ctx->pc = 0x15C3DCu;
    {
        const bool branch_taken_0x15c3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c3dc) {
            ctx->pc = 0x15C3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C3DCu;
            // 0x15c3e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C3FCu;
            goto label_15c3fc;
        }
    }
    ctx->pc = 0x15C3E4u;
label_15c3e4:
    // 0x15c3e4: 0x1e000021  bgtz        $s0, . + 4 + (0x21 << 2)
label_15c3e8:
    if (ctx->pc == 0x15C3E8u) {
        ctx->pc = 0x15C3ECu;
        goto label_15c3ec;
    }
    ctx->pc = 0x15C3E4u;
    {
        const bool branch_taken_0x15c3e4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x15c3e4) {
            ctx->pc = 0x15C46Cu;
            goto label_15c46c;
        }
    }
    ctx->pc = 0x15C3ECu;
label_15c3ec:
    // 0x15c3ec: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_15c3f0:
    if (ctx->pc == 0x15C3F0u) {
        ctx->pc = 0x15C3F4u;
        goto label_15c3f4;
    }
    ctx->pc = 0x15C3ECu;
    {
        const bool branch_taken_0x15c3ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c3ec) {
            ctx->pc = 0x15C404u;
            goto label_15c404;
        }
    }
    ctx->pc = 0x15C3F4u;
label_15c3f4:
    // 0x15c3f4: 0x10000031  b           . + 4 + (0x31 << 2)
label_15c3f8:
    if (ctx->pc == 0x15C3F8u) {
        ctx->pc = 0x15C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3F4u;
        // 0x15c3f8: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3FCu;
        goto label_15c3fc;
    }
    ctx->pc = 0x15C3F4u;
    {
        const bool branch_taken_0x15c3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3F4u;
        // 0x15c3f8: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3f4) {
            ctx->pc = 0x15C4BCu;
            goto label_15c4bc;
        }
    }
    ctx->pc = 0x15C3FCu;
label_15c3fc:
    // 0x15c3fc: 0x5602002f  bnel        $s0, $v0, . + 4 + (0x2F << 2)
label_15c400:
    if (ctx->pc == 0x15C400u) {
        ctx->pc = 0x15C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3FCu;
        // 0x15c400: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C404u;
        goto label_15c404;
    }
    ctx->pc = 0x15C3FCu;
    {
        const bool branch_taken_0x15c3fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x15c3fc) {
            ctx->pc = 0x15C400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C3FCu;
            // 0x15c400: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C4BCu;
            goto label_15c4bc;
        }
    }
    ctx->pc = 0x15C404u;
label_15c404:
    // 0x15c404: 0xc04f21c  jal         func_13C870
label_15c408:
    if (ctx->pc == 0x15C408u) {
        ctx->pc = 0x15C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C404u;
        // 0x15c408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C40Cu;
        goto label_15c40c;
    }
    ctx->pc = 0x15C404u;
    SET_GPR_U32(ctx, 31, 0x15C40Cu);
    ctx->pc = 0x15C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C404u;
    // 0x15c408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C870u, 0x15C404u, 0x15C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C40Cu;
label_15c40c:
    // 0x15c40c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15c40cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c410:
    // 0x15c410: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15c410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c414:
    // 0x15c414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c418:
    // 0x15c418: 0xc04f33e  jal         func_13CCF8
label_15c41c:
    if (ctx->pc == 0x15C41Cu) {
        ctx->pc = 0x15C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C418u;
        // 0x15c41c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C420u;
        goto label_15c420;
    }
    ctx->pc = 0x15C418u;
    SET_GPR_U32(ctx, 31, 0x15C420u);
    ctx->pc = 0x15C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C418u;
    // 0x15c41c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15C418u, 0x15C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C420u;
label_15c420:
    // 0x15c420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c424:
    // 0x15c424: 0xc04f0b6  jal         func_13C2D8
label_15c428:
    if (ctx->pc == 0x15C428u) {
        ctx->pc = 0x15C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C424u;
        // 0x15c428: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C42Cu;
        goto label_15c42c;
    }
    ctx->pc = 0x15C424u;
    SET_GPR_U32(ctx, 31, 0x15C42Cu);
    ctx->pc = 0x15C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C424u;
    // 0x15c428: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15C424u, 0x15C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C42Cu;
label_15c42c:
    // 0x15c42c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c430:
    // 0x15c430: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15c430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c434:
    // 0x15c434: 0xc0461e8  jal         func_1187A0
label_15c438:
    if (ctx->pc == 0x15C438u) {
        ctx->pc = 0x15C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C434u;
        // 0x15c438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C43Cu;
        goto label_15c43c;
    }
    ctx->pc = 0x15C434u;
    SET_GPR_U32(ctx, 31, 0x15C43Cu);
    ctx->pc = 0x15C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C434u;
    // 0x15c438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x15C434u, 0x15C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C43Cu;
label_15c43c:
    // 0x15c43c: 0x2e050001  sltiu       $a1, $s0, 0x1
    ctx->pc = 0x15c43cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15c440:
    // 0x15c440: 0xc0460c4  jal         func_118310
label_15c444:
    if (ctx->pc == 0x15C444u) {
        ctx->pc = 0x15C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C440u;
        // 0x15c444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C448u;
        goto label_15c448;
    }
    ctx->pc = 0x15C440u;
    SET_GPR_U32(ctx, 31, 0x15C448u);
    ctx->pc = 0x15C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C440u;
    // 0x15c444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x15C440u, 0x15C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C448u;
label_15c448:
    // 0x15c448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c44c:
    // 0x15c44c: 0xc046226  jal         func_118898
label_15c450:
    if (ctx->pc == 0x15C450u) {
        ctx->pc = 0x15C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C44Cu;
        // 0x15c450: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C454u;
        goto label_15c454;
    }
    ctx->pc = 0x15C44Cu;
    SET_GPR_U32(ctx, 31, 0x15C454u);
    ctx->pc = 0x15C450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C44Cu;
    // 0x15c450: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x15C44Cu, 0x15C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C454u;
label_15c454:
    // 0x15c454: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15c458:
    // 0x15c458: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15c458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c45c:
    // 0x15c45c: 0x2c22018  mult        $a0, $s6, $v0
    ctx->pc = 0x15c45cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_15c460:
    // 0x15c460: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x15c460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_15c464:
    // 0x15c464: 0x10000014  b           . + 4 + (0x14 << 2)
label_15c468:
    if (ctx->pc == 0x15C468u) {
        ctx->pc = 0x15C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C464u;
        // 0x15c468: 0xac430324  sw          $v1, 0x324($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C46Cu;
        goto label_15c46c;
    }
    ctx->pc = 0x15C464u;
    {
        const bool branch_taken_0x15c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C464u;
        // 0x15c468: 0xac430324  sw          $v1, 0x324($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c464) {
            ctx->pc = 0x15C4B8u;
            goto label_15c4b8;
        }
    }
    ctx->pc = 0x15C46Cu;
label_15c46c:
    // 0x15c46c: 0xc04f244  jal         func_13C910
label_15c470:
    if (ctx->pc == 0x15C470u) {
        ctx->pc = 0x15C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C46Cu;
        // 0x15c470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C474u;
        goto label_15c474;
    }
    ctx->pc = 0x15C46Cu;
    SET_GPR_U32(ctx, 31, 0x15C474u);
    ctx->pc = 0x15C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C46Cu;
    // 0x15c470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C910u, 0x15C46Cu, 0x15C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C474u;
label_15c474:
    // 0x15c474: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15c474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c478:
    // 0x15c478: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15c478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15c47c:
    // 0x15c47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c480:
    // 0x15c480: 0xc04f33e  jal         func_13CCF8
label_15c484:
    if (ctx->pc == 0x15C484u) {
        ctx->pc = 0x15C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C480u;
        // 0x15c484: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C488u;
        goto label_15c488;
    }
    ctx->pc = 0x15C480u;
    SET_GPR_U32(ctx, 31, 0x15C488u);
    ctx->pc = 0x15C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C480u;
    // 0x15c484: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15C480u, 0x15C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C488u;
label_15c488:
    // 0x15c488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c48c:
    // 0x15c48c: 0xc04f0b6  jal         func_13C2D8
label_15c490:
    if (ctx->pc == 0x15C490u) {
        ctx->pc = 0x15C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C48Cu;
        // 0x15c490: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C494u;
        goto label_15c494;
    }
    ctx->pc = 0x15C48Cu;
    SET_GPR_U32(ctx, 31, 0x15C494u);
    ctx->pc = 0x15C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C48Cu;
    // 0x15c490: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15C48Cu, 0x15C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C494u;
label_15c494:
    // 0x15c494: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c498:
    // 0x15c498: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15c498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c49c:
    // 0x15c49c: 0xc0461e8  jal         func_1187A0
label_15c4a0:
    if (ctx->pc == 0x15C4A0u) {
        ctx->pc = 0x15C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C49Cu;
        // 0x15c4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4A4u;
        goto label_15c4a4;
    }
    ctx->pc = 0x15C49Cu;
    SET_GPR_U32(ctx, 31, 0x15C4A4u);
    ctx->pc = 0x15C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C49Cu;
    // 0x15c4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x15C49Cu, 0x15C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C4A4u;
label_15c4a4:
    // 0x15c4a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c4a8:
    // 0x15c4a8: 0xc046226  jal         func_118898
label_15c4ac:
    if (ctx->pc == 0x15C4ACu) {
        ctx->pc = 0x15C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4A8u;
        // 0x15c4ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4B0u;
        goto label_15c4b0;
    }
    ctx->pc = 0x15C4A8u;
    SET_GPR_U32(ctx, 31, 0x15C4B0u);
    ctx->pc = 0x15C4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C4A8u;
    // 0x15c4ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x15C4A8u, 0x15C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C4B0u;
label_15c4b0:
    // 0x15c4b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15c4b4:
    // 0x15c4b4: 0xae820324  sw          $v0, 0x324($s4)
    ctx->pc = 0x15c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 2));
label_15c4b8:
    // 0x15c4b8: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x15c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_15c4bc:
    // 0x15c4bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15c4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c4c0:
    // 0x15c4c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15c4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c4c4:
    // 0x15c4c4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15c4c8:
    // 0x15c4c8: 0x40f809  jalr        $v0
label_15c4cc:
    if (ctx->pc == 0x15C4CCu) {
        ctx->pc = 0x15C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4C8u;
        // 0x15c4cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4D0u;
        goto label_15c4d0;
    }
    ctx->pc = 0x15C4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C4D0u);
        ctx->pc = 0x15C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4C8u;
        // 0x15c4cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C4C8u, 0x15C4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C4D0u;
label_15c4d0:
    // 0x15c4d0: 0x24100070  addiu       $s0, $zero, 0x70
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15c4d4:
    // 0x15c4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c4d8:
    // 0x15c4d8: 0x2d01818  mult        $v1, $s6, $s0
    ctx->pc = 0x15c4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15c4dc:
    // 0x15c4dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c4e0:
    // 0x15c4e0: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_15c4e4:
    // 0x15c4e4: 0xae13032c  sw          $s3, 0x32C($s0)
    ctx->pc = 0x15c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 19));
label_15c4e8:
    // 0x15c4e8: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x15c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
label_15c4ec:
    // 0x15c4ec: 0xc0aafa6  jal         func_2ABE98
label_15c4f0:
    if (ctx->pc == 0x15C4F0u) {
        ctx->pc = 0x15C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4ECu;
        // 0x15c4f0: 0xae020330  sw          $v0, 0x330($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4F4u;
        goto label_15c4f4;
    }
    ctx->pc = 0x15C4ECu;
    SET_GPR_U32(ctx, 31, 0x15C4F4u);
    ctx->pc = 0x15C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C4ECu;
    // 0x15c4f0: 0xae020330  sw          $v0, 0x330($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15C4ECu, 0x15C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C4F4u;
label_15c4f4:
    // 0x15c4f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c4f8:
    // 0x15c4f8: 0xc0aafc8  jal         func_2ABF20
label_15c4fc:
    if (ctx->pc == 0x15C4FCu) {
        ctx->pc = 0x15C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F8u;
        // 0x15c4fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C500u;
        goto label_15c500;
    }
    ctx->pc = 0x15C4F8u;
    SET_GPR_U32(ctx, 31, 0x15C500u);
    ctx->pc = 0x15C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C4F8u;
    // 0x15c4fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15C4F8u, 0x15C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C500u;
label_15c500:
    // 0x15c500: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x15c500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
label_15c504:
    // 0x15c504: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c508:
    // 0x15c508: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x15c508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
label_15c50c:
    // 0x15c50c: 0xc0aafac  jal         func_2ABEB0
label_15c510:
    if (ctx->pc == 0x15C510u) {
        ctx->pc = 0x15C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C50Cu;
        // 0x15c510: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C514u;
        goto label_15c514;
    }
    ctx->pc = 0x15C50Cu;
    SET_GPR_U32(ctx, 31, 0x15C514u);
    ctx->pc = 0x15C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C50Cu;
    // 0x15c510: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15C50Cu, 0x15C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C514u;
label_15c514:
    // 0x15c514: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15c514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15c518:
    // 0x15c518: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15c518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15c51c:
    // 0x15c51c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15c51cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15c520:
    // 0x15c520: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15c520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15c524:
    // 0x15c524: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15c524u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15c528:
    // 0x15c528: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15c528u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15c52c:
    // 0x15c52c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15c52cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15c530:
    // 0x15c530: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15c530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15c534:
    // 0x15c534: 0x3e00008  jr          $ra
label_15c538:
    if (ctx->pc == 0x15C538u) {
        ctx->pc = 0x15C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C534u;
        // 0x15c538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C53Cu;
        goto label_15c53c;
    }
    ctx->pc = 0x15C534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C534u;
        // 0x15c538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C53Cu;
label_15c53c:
    // 0x15c53c: 0x0  nop
    ctx->pc = 0x15c53cu;
    // NOP
    ctx->pc = 0x15c540u;
}
