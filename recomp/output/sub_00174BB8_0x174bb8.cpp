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

// Function: sub_00174BB8
// Address: 0x174bb8 - 0x174c10
void sub_00174BB8_0x174bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174BB8_0x174bb8");
#endif

    switch (ctx->pc) {
        case 0x174bd0u: goto label_174bd0;
        case 0x174bf0u: goto label_174bf0;
        case 0x174c00u: goto label_174c00;
        default: break;
    }

    ctx->pc = 0x174bb8u;

    // 0x174bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174bbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174bc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bc4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174bc8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x174BC8u;
    SET_GPR_U32(ctx, 31, 0x174BD0u);
    ctx->pc = 0x174BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BC8u;
    // 0x174bcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x174BC8u, 0x174BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BD0u;
label_174bd0:
    // 0x174bd0: 0x8e0302b0  lw          $v1, 0x2B0($s0)
    ctx->pc = 0x174bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x174bd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174BD4u;
    {
        const bool branch_taken_0x174bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BD4u;
        // 0x174bd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bd4) {
            ctx->pc = 0x174BE4u;
            goto label_174be4;
        }
    }
    ctx->pc = 0x174BDCu;
    // 0x174bdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174BDCu;
    {
        const bool branch_taken_0x174bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BDCu;
        // 0x174be0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bdc) {
            ctx->pc = 0x174BE8u;
            goto label_174be8;
        }
    }
    ctx->pc = 0x174BE4u;
label_174be4:
    // 0x174be4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x174be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_174be8:
    // 0x174be8: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x174BE8u;
    SET_GPR_U32(ctx, 31, 0x174BF0u);
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x174BE8u, 0x174BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BF0u;
label_174bf0:
    // 0x174bf0: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x174bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    // 0x174bf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bf8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174BF8u;
    SET_GPR_U32(ctx, 31, 0x174C00u);
    ctx->pc = 0x174BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BF8u;
    // 0x174bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174BF8u, 0x174C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C00u;
label_174c00:
    // 0x174c00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174c04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174c08: 0x3e00008  jr          $ra
    ctx->pc = 0x174C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C08u;
        // 0x174c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C10u;
}
