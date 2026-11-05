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

// Function: sub_00118FC0
// Address: 0x118fc0 - 0x1190d8
void sub_00118FC0_0x118fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118FC0_0x118fc0");
#endif

    switch (ctx->pc) {
        case 0x118fdcu: goto label_118fdc;
        case 0x118fe8u: goto label_118fe8;
        case 0x119000u: goto label_119000;
        case 0x119034u: goto label_119034;
        case 0x11905cu: goto label_11905c;
        case 0x11909cu: goto label_11909c;
        default: break;
    }

    ctx->pc = 0x118fc0u;

    // 0x118fc0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x118fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118fc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x118fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118fc8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x118fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118fcc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x118fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x118fd0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x118fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x118FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FD4u;
        // 0x118fd8: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118FDCu;
label_118fdc:
    // 0x118fdc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x118fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118fe0: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x118FE0u;
    {
        const bool branch_taken_0x118fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FE0u;
        // 0x118fe4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fe0) {
            ctx->pc = 0x118F88u;
            return;
        }
    }
    ctx->pc = 0x118FE8u;
label_118fe8:
    // 0x118fe8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x118fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118fec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x118fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118ff0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x118ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x118ff4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x118ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118ff8: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x118FF8u;
    {
        const bool branch_taken_0x118ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FF8u;
        // 0x118ffc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ff8) {
            ctx->pc = 0x118F74u;
            return;
        }
    }
    ctx->pc = 0x119000u;
label_119000:
    // 0x119000: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119004: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x119004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x119008: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11900c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x11900cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x119010: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119014: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x119014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x119018: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11901c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x11901cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x119020: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119024: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x119024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x119028: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11902c: 0x3e00008  jr          $ra
    ctx->pc = 0x11902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11902Cu;
        // 0x119030: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11902Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119034u;
label_119034:
    // 0x119034: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119038: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x119038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11903c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11903cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x119040: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119044: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x119044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x119048: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11904c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x11904cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x119050: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119054: 0x3e00008  jr          $ra
    ctx->pc = 0x119054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119054u;
        // 0x119058: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11905Cu;
label_11905c:
    // 0x11905c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119060: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x119060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x119064: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x119064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x119068: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x119068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x11906c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x11906cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x119070: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119074: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x119074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x119078: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11907c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x11907cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x119080: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119084: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x119084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x119088: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11908c: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x11908cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x119090: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119094: 0x3e00008  jr          $ra
    ctx->pc = 0x119094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119094u;
        // 0x119098: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11909Cu;
label_11909c:
    // 0x11909c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1190a0: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x1190a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1190a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1190a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1190a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1190a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1190ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1190acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1190b0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1190b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1190b4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1190b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1190b8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1190b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1190bc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1190bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1190c0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1190c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1190c4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1190c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1190c8: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1190c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1190cc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1190ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1190d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1190D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1190D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190D0u;
        // 0x1190d4: 0xa0660010  sb          $a2, 0x10($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1190D8u;
}
