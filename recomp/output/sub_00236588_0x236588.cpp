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

// Function: sub_00236588
// Address: 0x236588 - 0x236658
void sub_00236588_0x236588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236588_0x236588");
#endif

    switch (ctx->pc) {
        case 0x2365b0u: goto label_2365b0;
        case 0x2365d8u: goto label_2365d8;
        case 0x2365f4u: goto label_2365f4;
        case 0x236604u: goto label_236604;
        case 0x236620u: goto label_236620;
        case 0x236630u: goto label_236630;
        case 0x23663cu: goto label_23663c;
        default: break;
    }

    ctx->pc = 0x236588u;

    // 0x236588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23658c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236590: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236598: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23659c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23659cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2365a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2365a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2365a8: 0xc08953a  jal         func_2254E8
    ctx->pc = 0x2365A8u;
    SET_GPR_U32(ctx, 31, 0x2365B0u);
    ctx->pc = 0x2365ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365A8u;
    // 0x2365ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2254E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2254E8u, 0x2365A8u, 0x2365B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365B0u;
label_2365b0:
    // 0x2365b0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2365B0u;
    {
        const bool branch_taken_0x2365b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2365B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365B0u;
        // 0x2365b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365b0) {
            ctx->pc = 0x236640u;
            goto label_236640;
        }
    }
    ctx->pc = 0x2365B8u;
    // 0x2365b8: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2365B8u;
    {
        const bool branch_taken_0x2365b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2365b8) {
            ctx->pc = 0x2365BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2365B8u;
            // 0x2365bc: 0xae110424  sw          $s1, 0x424($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2365C0u;
            goto label_2365c0;
        }
    }
    ctx->pc = 0x2365C0u;
label_2365c0:
    // 0x2365c0: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2365c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x2365c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2365c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2365c8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2365C8u;
    {
        const bool branch_taken_0x2365c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2365CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365C8u;
        // 0x2365cc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365c8) {
            ctx->pc = 0x2365E4u;
            goto label_2365e4;
        }
    }
    ctx->pc = 0x2365D0u;
    // 0x2365d0: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x2365D0u;
    SET_GPR_U32(ctx, 31, 0x2365D8u);
    ctx->pc = 0x2365D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365D0u;
    // 0x2365d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2365D0u, 0x2365D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365D8u;
label_2365d8:
    // 0x2365d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2365D8u;
    {
        const bool branch_taken_0x2365d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2365DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365D8u;
        // 0x2365dc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365d8) {
            ctx->pc = 0x2365FCu;
            goto label_2365fc;
        }
    }
    ctx->pc = 0x2365E0u;
    // 0x2365e0: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2365e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2365e4:
    // 0x2365e4: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2365E4u;
    {
        const bool branch_taken_0x2365e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2365e4) {
            ctx->pc = 0x2365E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2365E4u;
            // 0x2365e8: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236608u;
            goto label_236608;
        }
    }
    ctx->pc = 0x2365ECu;
    // 0x2365ec: 0xc08da92  jal         func_236A48
    ctx->pc = 0x2365ECu;
    SET_GPR_U32(ctx, 31, 0x2365F4u);
    ctx->pc = 0x2365F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365ECu;
    // 0x2365f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2365ECu, 0x2365F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365F4u;
label_2365f4:
    // 0x2365f4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2365F4u;
    {
        const bool branch_taken_0x2365f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2365f4) {
            ctx->pc = 0x2365F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2365F4u;
            // 0x2365f8: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236608u;
            goto label_236608;
        }
    }
    ctx->pc = 0x2365FCu;
label_2365fc:
    // 0x2365fc: 0xc08bd98  jal         func_22F660
    ctx->pc = 0x2365FCu;
    SET_GPR_U32(ctx, 31, 0x236604u);
    ctx->pc = 0x236600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365FCu;
    // 0x236600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x2365FCu, 0x236604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236604u;
label_236604:
    // 0x236604: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x236604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_236608:
    // 0x236608: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x236608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x23660c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x236610: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x236610u;
    {
        const bool branch_taken_0x236610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x236614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236610u;
        // 0x236614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236610) {
            ctx->pc = 0x236640u;
            goto label_236640;
        }
    }
    ctx->pc = 0x236618u;
    // 0x236618: 0xc08dada  jal         func_236B68
    ctx->pc = 0x236618u;
    SET_GPR_U32(ctx, 31, 0x236620u);
    ctx->pc = 0x23661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236618u;
    // 0x23661c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x236618u, 0x236620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236620u;
label_236620:
    // 0x236620: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236620u;
    {
        const bool branch_taken_0x236620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236620u;
        // 0x236624: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236620) {
            ctx->pc = 0x236640u;
            goto label_236640;
        }
    }
    ctx->pc = 0x236628u;
    // 0x236628: 0xc069992  jal         func_1A6648
    ctx->pc = 0x236628u;
    SET_GPR_U32(ctx, 31, 0x236630u);
    ctx->pc = 0x23662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236628u;
    // 0x23662c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6648u, 0x236628u, 0x236630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236630u;
label_236630:
    // 0x236630: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x236630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x236634: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x236634u;
    SET_GPR_U32(ctx, 31, 0x23663Cu);
    ctx->pc = 0x236638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236634u;
    // 0x236638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x236634u, 0x23663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23663Cu;
label_23663c:
    // 0x23663c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236640:
    // 0x236640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236648: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23664c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23664cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236650: 0x3e00008  jr          $ra
    ctx->pc = 0x236650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236650u;
        // 0x236654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236658u;
}
