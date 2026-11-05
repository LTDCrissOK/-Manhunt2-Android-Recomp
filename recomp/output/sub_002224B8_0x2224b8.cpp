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

// Function: sub_002224B8
// Address: 0x2224b8 - 0x2225a8
void sub_002224B8_0x2224b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002224B8_0x2224b8");
#endif

    switch (ctx->pc) {
        case 0x2224ecu: goto label_2224ec;
        case 0x2224fcu: goto label_2224fc;
        case 0x22250cu: goto label_22250c;
        case 0x222510u: goto label_222510;
        case 0x222524u: goto label_222524;
        case 0x222550u: goto label_222550;
        case 0x222560u: goto label_222560;
        case 0x222570u: goto label_222570;
        case 0x222588u: goto label_222588;
        default: break;
    }

    ctx->pc = 0x2224b8u;

    // 0x2224b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2224b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2224bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2224bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2224c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2224c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2224c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2224c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2224c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2224cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2224ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2224d0: 0x26050360  addiu       $a1, $s0, 0x360
    ctx->pc = 0x2224d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x2224d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2224d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2224d8: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x2224d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2224dc: 0x2612038c  addiu       $s2, $s0, 0x38C
    ctx->pc = 0x2224dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
    // 0x2224e0: 0x261103ac  addiu       $s1, $s0, 0x3AC
    ctx->pc = 0x2224e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 940));
    // 0x2224e4: 0xc087996  jal         func_21E658
    ctx->pc = 0x2224E4u;
    SET_GPR_U32(ctx, 31, 0x2224ECu);
    ctx->pc = 0x2224E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2224E4u;
    // 0x2224e8: 0x8e060358  lw          $a2, 0x358($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x2224E4u, 0x2224ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224ECu;
label_2224ec:
    // 0x2224ec: 0x8e0605d0  lw          $a2, 0x5D0($s0)
    ctx->pc = 0x2224ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1488)));
    // 0x2224f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2224f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224f4: 0xc087996  jal         func_21E658
    ctx->pc = 0x2224F4u;
    SET_GPR_U32(ctx, 31, 0x2224FCu);
    ctx->pc = 0x2224F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2224F4u;
    // 0x2224f8: 0x260505d8  addiu       $a1, $s0, 0x5D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x2224F4u, 0x2224FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224FCu;
label_2224fc:
    // 0x2224fc: 0x8e0605d0  lw          $a2, 0x5D0($s0)
    ctx->pc = 0x2224fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1488)));
    // 0x222500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222504: 0xc087996  jal         func_21E658
    ctx->pc = 0x222504u;
    SET_GPR_U32(ctx, 31, 0x22250Cu);
    ctx->pc = 0x222508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222504u;
    // 0x222508: 0x260505e8  addiu       $a1, $s0, 0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x222504u, 0x22250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22250Cu;
label_22250c:
    // 0x22250c: 0x0  nop
    ctx->pc = 0x22250cu;
    // NOP
label_222510:
    // 0x222510: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x222510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x222514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x222514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22251c: 0xc087996  jal         func_21E658
    ctx->pc = 0x22251Cu;
    SET_GPR_U32(ctx, 31, 0x222524u);
    ctx->pc = 0x222520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22251Cu;
    // 0x222520: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x22251Cu, 0x222524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222524u;
label_222524:
    // 0x222524: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x222524u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x222528: 0x661fff9  bgez        $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x222528u;
    {
        const bool branch_taken_0x222528 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x22252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222528u;
        // 0x22252c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222528) {
            ctx->pc = 0x222510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222510;
        }
    }
    ctx->pc = 0x222530u;
    // 0x222530: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x222530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x222534: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x222534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x222538: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x222538u;
    {
        const bool branch_taken_0x222538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222538) {
            ctx->pc = 0x22253Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222538u;
            // 0x22253c: 0xae000674  sw          $zero, 0x674($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222578u;
            goto label_222578;
        }
    }
    ctx->pc = 0x222540u;
    // 0x222540: 0x8e060654  lw          $a2, 0x654($s0)
    ctx->pc = 0x222540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1620)));
    // 0x222544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222548: 0xc087996  jal         func_21E658
    ctx->pc = 0x222548u;
    SET_GPR_U32(ctx, 31, 0x222550u);
    ctx->pc = 0x22254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222548u;
    // 0x22254c: 0x2605065c  addiu       $a1, $s0, 0x65C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x222548u, 0x222550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222550u;
label_222550:
    // 0x222550: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x222550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x222554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222558: 0xc087996  jal         func_21E658
    ctx->pc = 0x222558u;
    SET_GPR_U32(ctx, 31, 0x222560u);
    ctx->pc = 0x22255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222558u;
    // 0x22255c: 0x26050668  addiu       $a1, $s0, 0x668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x222558u, 0x222560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222560u;
label_222560:
    // 0x222560: 0x8e06066c  lw          $a2, 0x66C($s0)
    ctx->pc = 0x222560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
    // 0x222564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222568: 0xc087996  jal         func_21E658
    ctx->pc = 0x222568u;
    SET_GPR_U32(ctx, 31, 0x222570u);
    ctx->pc = 0x22256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222568u;
    // 0x22256c: 0x26050674  addiu       $a1, $s0, 0x674 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x222568u, 0x222570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222570u;
label_222570:
    // 0x222570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x222570u;
    {
        const bool branch_taken_0x222570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222570) {
            ctx->pc = 0x222580u;
            goto label_222580;
        }
    }
    ctx->pc = 0x222578u;
label_222578:
    // 0x222578: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x222578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x22257c: 0xae00065c  sw          $zero, 0x65C($s0)
    ctx->pc = 0x22257cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1628), GPR_U32(ctx, 0));
label_222580:
    // 0x222580: 0xc0883b6  jal         func_220ED8
    ctx->pc = 0x222580u;
    SET_GPR_U32(ctx, 31, 0x222588u);
    ctx->pc = 0x222584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222580u;
    // 0x222584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220ED8u, 0x222580u, 0x222588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222588u;
label_222588:
    // 0x222588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22258c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22258cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222594: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x222594u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x222598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22259c: 0x3e00008  jr          $ra
    ctx->pc = 0x22259Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2225A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22259Cu;
        // 0x2225a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22259Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2225A4u;
    // 0x2225a4: 0x0  nop
    ctx->pc = 0x2225a4u;
    // NOP
    ctx->pc = 0x2225a8u;
}
