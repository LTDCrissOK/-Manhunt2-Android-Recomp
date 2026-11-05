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

// Function: sub_00103FD8
// Address: 0x103fd8 - 0x104030
void sub_00103FD8_0x103fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103FD8_0x103fd8");
#endif

    switch (ctx->pc) {
        case 0x104008u: goto label_104008;
        default: break;
    }

    ctx->pc = 0x103fd8u;

    // 0x103fd8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x103fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x103fdc: 0x8c620700  lw          $v0, 0x700($v1)
    ctx->pc = 0x103fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0700u));
    // 0x103fe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103FE0u;
    {
        const bool branch_taken_0x103fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103fe0) {
            ctx->pc = 0x103FF0u;
            goto label_103ff0;
        }
    }
    ctx->pc = 0x103FE8u;
    // 0x103fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x103FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FE8u;
        // 0x103fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103FF0u;
label_103ff0:
    // 0x103ff0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x103FF0u;
    {
        const bool branch_taken_0x103ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FF0u;
        // 0x103ff4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ff0) {
            ctx->pc = 0x104028u;
            goto label_104028;
        }
    }
    ctx->pc = 0x103FF8u;
    // 0x103ff8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x103ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ffc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x103ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x104000: 0x8ca20708  lw          $v0, 0x708($a1)
    ctx->pc = 0x104000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0708u));
    // 0x104004: 0x0  nop
    ctx->pc = 0x104004u;
    // NOP
label_104008:
    // 0x104008: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x104008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x10400c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x104010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x104010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x104014: 0xa060003a  sb          $zero, 0x3A($v1)
    ctx->pc = 0x104014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x104018: 0x8cc20700  lw          $v0, 0x700($a2)
    ctx->pc = 0x104018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1792)));
    // 0x10401c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x10401cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104020: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x104020u;
    {
        const bool branch_taken_0x104020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104020u;
        // 0x104024: 0x8ca20708  lw          $v0, 0x708($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104020) {
            ctx->pc = 0x104008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104008;
        }
    }
    ctx->pc = 0x104028u;
label_104028:
    // 0x104028: 0x3e00008  jr          $ra
    ctx->pc = 0x104028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104028u;
        // 0x10402c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104030u;
}
