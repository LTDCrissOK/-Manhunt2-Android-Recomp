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

// Function: sub_00287F98
// Address: 0x287f98 - 0x288048
void sub_00287F98_0x287f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287F98_0x287f98");
#endif

    ctx->pc = 0x287f98u;

    // 0x287f98: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x287f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x287f9c: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x287f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x287fa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287FA0u;
    {
        const bool branch_taken_0x287fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FA0u;
        // 0x287fa4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287fa0) {
            ctx->pc = 0x287FC0u;
            goto label_287fc0;
        }
    }
    ctx->pc = 0x287FA8u;
    // 0x287fa8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x287fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x287fac: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287fb0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2468u));
    // 0x287fb4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x287fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x287fb8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287FB8u;
    {
        const bool branch_taken_0x287fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287fb8) {
            ctx->pc = 0x287FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287FB8u;
            // 0x287fbc: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287FC8u;
            goto label_287fc8;
        }
    }
    ctx->pc = 0x287FC0u;
label_287fc0:
    // 0x287fc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287FC0u;
    {
        const bool branch_taken_0x287fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FC0u;
        // 0x287fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287fc0) {
            ctx->pc = 0x287FCCu;
            goto label_287fcc;
        }
    }
    ctx->pc = 0x287FC8u;
label_287fc8:
    // 0x287fc8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x287fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_287fcc:
    // 0x287fcc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x287FCCu;
    {
        const bool branch_taken_0x287fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FCCu;
        // 0x287fd0: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287fcc) {
            ctx->pc = 0x288034u;
            goto label_288034;
        }
    }
    ctx->pc = 0x287FD4u;
    // 0x287fd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287FD4u;
    {
        const bool branch_taken_0x287fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FD4u;
        // 0x287fd8: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287fd4) {
            ctx->pc = 0x287FF0u;
            goto label_287ff0;
        }
    }
    ctx->pc = 0x287FDCu;
    // 0x287fdc: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287fe0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x287fe4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x287fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x287fe8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287FE8u;
    {
        const bool branch_taken_0x287fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287fe8) {
            ctx->pc = 0x287FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287FE8u;
            // 0x287fec: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287FF8u;
            goto label_287ff8;
        }
    }
    ctx->pc = 0x287FF0u;
label_287ff0:
    // 0x287ff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287FF0u;
    {
        const bool branch_taken_0x287ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FF0u;
        // 0x287ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ff0) {
            ctx->pc = 0x287FFCu;
            goto label_287ffc;
        }
    }
    ctx->pc = 0x287FF8u;
label_287ff8:
    // 0x287ff8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x287ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_287ffc:
    // 0x287ffc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x287FFCu;
    {
        const bool branch_taken_0x287ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FFCu;
        // 0x288000: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ffc) {
            ctx->pc = 0x288034u;
            goto label_288034;
        }
    }
    ctx->pc = 0x288004u;
    // 0x288004: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288004u;
    {
        const bool branch_taken_0x288004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288004u;
        // 0x288008: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288004) {
            ctx->pc = 0x288020u;
            goto label_288020;
        }
    }
    ctx->pc = 0x28800Cu;
    // 0x28800c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x28800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x288010: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x288010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x288014: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x288014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x288018: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x288018u;
    {
        const bool branch_taken_0x288018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288018) {
            ctx->pc = 0x28801Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288018u;
            // 0x28801c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288028u;
            goto label_288028;
        }
    }
    ctx->pc = 0x288020u;
label_288020:
    // 0x288020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288020u;
    {
        const bool branch_taken_0x288020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288020u;
        // 0x288024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288020) {
            ctx->pc = 0x28802Cu;
            goto label_28802c;
        }
    }
    ctx->pc = 0x288028u;
label_288028:
    // 0x288028: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x288028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_28802c:
    // 0x28802c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28802Cu;
    {
        const bool branch_taken_0x28802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28802c) {
            ctx->pc = 0x28803Cu;
            goto label_28803c;
        }
    }
    ctx->pc = 0x288034u;
label_288034:
    // 0x288034: 0x3e00008  jr          $ra
    ctx->pc = 0x288034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288034u;
        // 0x288038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28803Cu;
label_28803c:
    // 0x28803c: 0x3e00008  jr          $ra
    ctx->pc = 0x28803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28803Cu;
        // 0x288040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28803Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288044u;
    // 0x288044: 0x0  nop
    ctx->pc = 0x288044u;
    // NOP
    ctx->pc = 0x288048u;
}
