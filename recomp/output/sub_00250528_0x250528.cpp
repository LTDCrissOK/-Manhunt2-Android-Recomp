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

// Function: sub_00250528
// Address: 0x250528 - 0x250600
void sub_00250528_0x250528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250528_0x250528");
#endif

    switch (ctx->pc) {
        case 0x250528u: goto label_250528;
        case 0x25052cu: goto label_25052c;
        case 0x250530u: goto label_250530;
        case 0x250534u: goto label_250534;
        case 0x250538u: goto label_250538;
        case 0x25053cu: goto label_25053c;
        case 0x250540u: goto label_250540;
        case 0x250544u: goto label_250544;
        case 0x250548u: goto label_250548;
        case 0x25054cu: goto label_25054c;
        case 0x250550u: goto label_250550;
        case 0x250554u: goto label_250554;
        case 0x250558u: goto label_250558;
        case 0x25055cu: goto label_25055c;
        case 0x250560u: goto label_250560;
        case 0x250564u: goto label_250564;
        case 0x250568u: goto label_250568;
        case 0x25056cu: goto label_25056c;
        case 0x250570u: goto label_250570;
        case 0x250574u: goto label_250574;
        case 0x250578u: goto label_250578;
        case 0x25057cu: goto label_25057c;
        case 0x250580u: goto label_250580;
        case 0x250584u: goto label_250584;
        case 0x250588u: goto label_250588;
        case 0x25058cu: goto label_25058c;
        case 0x250590u: goto label_250590;
        case 0x250594u: goto label_250594;
        case 0x250598u: goto label_250598;
        case 0x25059cu: goto label_25059c;
        case 0x2505a0u: goto label_2505a0;
        case 0x2505a4u: goto label_2505a4;
        case 0x2505a8u: goto label_2505a8;
        case 0x2505acu: goto label_2505ac;
        case 0x2505b0u: goto label_2505b0;
        case 0x2505b4u: goto label_2505b4;
        case 0x2505b8u: goto label_2505b8;
        case 0x2505bcu: goto label_2505bc;
        case 0x2505c0u: goto label_2505c0;
        case 0x2505c4u: goto label_2505c4;
        case 0x2505c8u: goto label_2505c8;
        case 0x2505ccu: goto label_2505cc;
        case 0x2505d0u: goto label_2505d0;
        case 0x2505d4u: goto label_2505d4;
        case 0x2505d8u: goto label_2505d8;
        case 0x2505dcu: goto label_2505dc;
        case 0x2505e0u: goto label_2505e0;
        case 0x2505e4u: goto label_2505e4;
        case 0x2505e8u: goto label_2505e8;
        case 0x2505ecu: goto label_2505ec;
        case 0x2505f0u: goto label_2505f0;
        case 0x2505f4u: goto label_2505f4;
        case 0x2505f8u: goto label_2505f8;
        case 0x2505fcu: goto label_2505fc;
        default: break;
    }

    ctx->pc = 0x250528u;

label_250528:
    // 0x250528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25052c:
    // 0x25052c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_250530:
    // 0x250530: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x250530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_250534:
    // 0x250534: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x250534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_250538:
    // 0x250538: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x250538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25053c:
    // 0x25053c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_250540:
    // 0x250540: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x250540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_250544:
    // 0x250544: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x250544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_250548:
    // 0x250548: 0xc07682a  jal         func_1DA0A8
label_25054c:
    if (ctx->pc == 0x25054Cu) {
        ctx->pc = 0x25054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250548u;
        // 0x25054c: 0x8c52010c  lw          $s2, 0x10C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250550u;
        goto label_250550;
    }
    ctx->pc = 0x250548u;
    SET_GPR_U32(ctx, 31, 0x250550u);
    ctx->pc = 0x25054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250548u;
    // 0x25054c: 0x8c52010c  lw          $s2, 0x10C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x250548u, 0x250550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250550u;
label_250550:
    // 0x250550: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x250550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_250554:
    // 0x250554: 0xc07682a  jal         func_1DA0A8
label_250558:
    if (ctx->pc == 0x250558u) {
        ctx->pc = 0x250558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250554u;
        // 0x250558: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25055Cu;
        goto label_25055c;
    }
    ctx->pc = 0x250554u;
    SET_GPR_U32(ctx, 31, 0x25055Cu);
    ctx->pc = 0x250558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250554u;
    // 0x250558: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x250554u, 0x25055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25055Cu;
label_25055c:
    // 0x25055c: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x25055cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
label_250560:
    // 0x250560: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x250560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_250564:
    // 0x250564: 0xc0767f2  jal         func_1D9FC8
label_250568:
    if (ctx->pc == 0x250568u) {
        ctx->pc = 0x250568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250564u;
        // 0x250568: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25056Cu;
        goto label_25056c;
    }
    ctx->pc = 0x250564u;
    SET_GPR_U32(ctx, 31, 0x25056Cu);
    ctx->pc = 0x250568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250564u;
    // 0x250568: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x250564u, 0x25056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25056Cu;
label_25056c:
    // 0x25056c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_250570:
    // 0x250570: 0x240203fd  addiu       $v0, $zero, 0x3FD
    ctx->pc = 0x250570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
label_250574:
    // 0x250574: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x250574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_250578:
    // 0x250578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x250578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25057c:
    // 0x25057c: 0xac620324  sw          $v0, 0x324($v1)
    ctx->pc = 0x25057cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 804), GPR_U32(ctx, 2));
label_250580:
    // 0x250580: 0xa0600321  sb          $zero, 0x321($v1)
    ctx->pc = 0x250580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 801), (uint8_t)GPR_U32(ctx, 0));
label_250584:
    // 0x250584: 0xa24000a8  sb          $zero, 0xA8($s2)
    ctx->pc = 0x250584u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 168), (uint8_t)GPR_U32(ctx, 0));
label_250588:
    // 0x250588: 0xc08fed2  jal         func_23FB48
label_25058c:
    if (ctx->pc == 0x25058Cu) {
        ctx->pc = 0x25058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250588u;
        // 0x25058c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250590u;
        goto label_250590;
    }
    ctx->pc = 0x250588u;
    SET_GPR_U32(ctx, 31, 0x250590u);
    ctx->pc = 0x25058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250588u;
    // 0x25058c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x250588u, 0x250590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250590u;
label_250590:
    // 0x250590: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x250590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_250594:
    // 0x250594: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x250594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_250598:
    // 0x250598: 0xc08fed2  jal         func_23FB48
label_25059c:
    if (ctx->pc == 0x25059Cu) {
        ctx->pc = 0x25059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250598u;
        // 0x25059c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505A0u;
        goto label_2505a0;
    }
    ctx->pc = 0x250598u;
    SET_GPR_U32(ctx, 31, 0x2505A0u);
    ctx->pc = 0x25059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250598u;
    // 0x25059c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x250598u, 0x2505A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2505A0u;
label_2505a0:
    // 0x2505a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2505a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2505a4:
    // 0x2505a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2505a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2505a8:
    // 0x2505a8: 0xc08fed2  jal         func_23FB48
label_2505ac:
    if (ctx->pc == 0x2505ACu) {
        ctx->pc = 0x2505ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505A8u;
        // 0x2505ac: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505B0u;
        goto label_2505b0;
    }
    ctx->pc = 0x2505A8u;
    SET_GPR_U32(ctx, 31, 0x2505B0u);
    ctx->pc = 0x2505ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2505A8u;
    // 0x2505ac: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2505A8u, 0x2505B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2505B0u;
label_2505b0:
    // 0x2505b0: 0xc08fcf8  jal         func_23F3E0
label_2505b4:
    if (ctx->pc == 0x2505B4u) {
        ctx->pc = 0x2505B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505B0u;
        // 0x2505b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505B8u;
        goto label_2505b8;
    }
    ctx->pc = 0x2505B0u;
    SET_GPR_U32(ctx, 31, 0x2505B8u);
    ctx->pc = 0x2505B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2505B0u;
    // 0x2505b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3E0u, 0x2505B0u, 0x2505B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2505B8u;
label_2505b8:
    // 0x2505b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2505b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2505bc:
    // 0x2505bc: 0xc08bd96  jal         func_22F658
label_2505c0:
    if (ctx->pc == 0x2505C0u) {
        ctx->pc = 0x2505C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505BCu;
        // 0x2505c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505C4u;
        goto label_2505c4;
    }
    ctx->pc = 0x2505BCu;
    SET_GPR_U32(ctx, 31, 0x2505C4u);
    ctx->pc = 0x2505C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2505BCu;
    // 0x2505c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2505BCu, 0x2505C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2505C4u;
label_2505c4:
    // 0x2505c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2505c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2505c8:
    // 0x2505c8: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x2505c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
label_2505cc:
    // 0x2505cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2505ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2505d0:
    // 0x2505d0: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2505d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2505d4:
    // 0x2505d4: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x2505d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_2505d8:
    // 0x2505d8: 0x40f809  jalr        $v0
label_2505dc:
    if (ctx->pc == 0x2505DCu) {
        ctx->pc = 0x2505E0u;
        goto label_2505e0;
    }
    ctx->pc = 0x2505D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2505E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2505D8u, 0x2505E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2505E0u;
label_2505e0:
    // 0x2505e0: 0xc094224  jal         func_250890
label_2505e4:
    if (ctx->pc == 0x2505E4u) {
        ctx->pc = 0x2505E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505E0u;
        // 0x2505e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505E8u;
        goto label_2505e8;
    }
    ctx->pc = 0x2505E0u;
    SET_GPR_U32(ctx, 31, 0x2505E8u);
    ctx->pc = 0x2505E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2505E0u;
    // 0x2505e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x2505E0u, 0x2505E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2505E8u;
label_2505e8:
    // 0x2505e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2505e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2505ec:
    // 0x2505ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2505ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2505f0:
    // 0x2505f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2505f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2505f4:
    // 0x2505f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2505f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2505f8:
    // 0x2505f8: 0x3e00008  jr          $ra
label_2505fc:
    if (ctx->pc == 0x2505FCu) {
        ctx->pc = 0x2505FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505F8u;
        // 0x2505fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250600u;
        goto label_fallthrough_0x2505f8;
    }
    ctx->pc = 0x2505F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2505FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505F8u;
        // 0x2505fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2505F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2505f8:
    ctx->pc = 0x250600u;
}
