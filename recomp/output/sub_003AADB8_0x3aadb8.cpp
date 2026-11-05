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

// Function: sub_003AADB8
// Address: 0x3aadb8 - 0x3aae08
void sub_003AADB8_0x3aadb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AADB8_0x3aadb8");
#endif

    switch (ctx->pc) {
        case 0x3aadb8u: goto label_3aadb8;
        case 0x3aadbcu: goto label_3aadbc;
        case 0x3aadc0u: goto label_3aadc0;
        case 0x3aadc4u: goto label_3aadc4;
        case 0x3aadc8u: goto label_3aadc8;
        case 0x3aadccu: goto label_3aadcc;
        case 0x3aadd0u: goto label_3aadd0;
        case 0x3aadd4u: goto label_3aadd4;
        case 0x3aadd8u: goto label_3aadd8;
        case 0x3aaddcu: goto label_3aaddc;
        case 0x3aade0u: goto label_3aade0;
        case 0x3aade4u: goto label_3aade4;
        case 0x3aade8u: goto label_3aade8;
        case 0x3aadecu: goto label_3aadec;
        case 0x3aadf0u: goto label_3aadf0;
        case 0x3aadf4u: goto label_3aadf4;
        case 0x3aadf8u: goto label_3aadf8;
        case 0x3aadfcu: goto label_3aadfc;
        case 0x3aae00u: goto label_3aae00;
        case 0x3aae04u: goto label_3aae04;
        default: break;
    }

    ctx->pc = 0x3aadb8u;

label_3aadb8:
    // 0x3aadb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aadb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3aadbc:
    // 0x3aadbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aadc0:
    // 0x3aadc0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_3aadc4:
    if (ctx->pc == 0x3AADC4u) {
        ctx->pc = 0x3AADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADC0u;
        // 0x3aadc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADC8u;
        goto label_3aadc8;
    }
    ctx->pc = 0x3AADC0u;
    {
        const bool branch_taken_0x3aadc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADC0u;
        // 0x3aadc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadc0) {
            ctx->pc = 0x3AADD0u;
            goto label_3aadd0;
        }
    }
    ctx->pc = 0x3AADC8u;
label_3aadc8:
    // 0x3aadc8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3aadcc:
    if (ctx->pc == 0x3AADCCu) {
        ctx->pc = 0x3AADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADC8u;
        // 0x3aadcc: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADD0u;
        goto label_3aadd0;
    }
    ctx->pc = 0x3AADC8u;
    {
        const bool branch_taken_0x3aadc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADC8u;
        // 0x3aadcc: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadc8) {
            ctx->pc = 0x3AADF8u;
            goto label_3aadf8;
        }
    }
    ctx->pc = 0x3AADD0u;
label_3aadd0:
    // 0x3aadd0: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_3aadd4:
    if (ctx->pc == 0x3AADD4u) {
        ctx->pc = 0x3AADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADD0u;
        // 0x3aadd4: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADD8u;
        goto label_3aadd8;
    }
    ctx->pc = 0x3AADD0u;
    {
        const bool branch_taken_0x3aadd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aadd0) {
            ctx->pc = 0x3AADD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AADD0u;
            // 0x3aadd4: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AADE0u;
            goto label_3aade0;
        }
    }
    ctx->pc = 0x3AADD8u;
label_3aadd8:
    // 0x3aadd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3aaddc:
    if (ctx->pc == 0x3AADDCu) {
        ctx->pc = 0x3AADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADD8u;
        // 0x3aaddc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADE0u;
        goto label_3aade0;
    }
    ctx->pc = 0x3AADD8u;
    {
        const bool branch_taken_0x3aadd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADD8u;
        // 0x3aaddc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadd8) {
            ctx->pc = 0x3AADF8u;
            goto label_3aadf8;
        }
    }
    ctx->pc = 0x3AADE0u;
label_3aade0:
    // 0x3aade0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3aade4:
    if (ctx->pc == 0x3AADE4u) {
        ctx->pc = 0x3AADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADE0u;
        // 0x3aade4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADE8u;
        goto label_3aade8;
    }
    ctx->pc = 0x3AADE0u;
    {
        const bool branch_taken_0x3aade0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aade0) {
            ctx->pc = 0x3AADE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AADE0u;
            // 0x3aade4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AADF8u;
            goto label_3aadf8;
        }
    }
    ctx->pc = 0x3AADE8u;
label_3aade8:
    // 0x3aade8: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x3aade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3aadec:
    // 0x3aadec: 0x40f809  jalr        $v0
label_3aadf0:
    if (ctx->pc == 0x3AADF0u) {
        ctx->pc = 0x3AADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADECu;
        // 0x3aadf0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADF4u;
        goto label_3aadf4;
    }
    ctx->pc = 0x3AADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AADF4u);
        ctx->pc = 0x3AADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADECu;
        // 0x3aadf0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AADECu, 0x3AADF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AADF4u;
label_3aadf4:
    // 0x3aadf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aadf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aadf8:
    // 0x3aadf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aadf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aadfc:
    // 0x3aadfc: 0x3e00008  jr          $ra
label_3aae00:
    if (ctx->pc == 0x3AAE00u) {
        ctx->pc = 0x3AAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADFCu;
        // 0x3aae00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE04u;
        goto label_3aae04;
    }
    ctx->pc = 0x3AADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADFCu;
        // 0x3aae00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AADFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AAE04u;
label_3aae04:
    // 0x3aae04: 0x0  nop
    ctx->pc = 0x3aae04u;
    // NOP
    ctx->pc = 0x3aae08u;
}
