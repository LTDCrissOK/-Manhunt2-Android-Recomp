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

// Function: sub_00327000
// Address: 0x327000 - 0x327040
void sub_00327000_0x327000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327000_0x327000");
#endif

    switch (ctx->pc) {
        case 0x327024u: goto label_327024;
        default: break;
    }

    ctx->pc = 0x327000u;

    // 0x327000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327004: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x327004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32700c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327010: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x327010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x327014: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x327014u;
    {
        const bool branch_taken_0x327014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x327018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327014u;
        // 0x327018: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327014) {
            ctx->pc = 0x327030u;
            goto label_327030;
        }
    }
    ctx->pc = 0x32701Cu;
    // 0x32701c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x32701Cu;
    SET_GPR_U32(ctx, 31, 0x327024u);
    ctx->pc = 0x327020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32701Cu;
    // 0x327020: 0x24c50004  addiu       $a1, $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x32701Cu, 0x327024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327024u;
label_327024:
    // 0x327024: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x327024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327028: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x327028u;
    {
        const bool branch_taken_0x327028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327028u;
        // 0x32702c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327028) {
            ctx->pc = 0x327034u;
            goto label_327034;
        }
    }
    ctx->pc = 0x327030u;
label_327030:
    // 0x327030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327034:
    // 0x327034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327038: 0x3e00008  jr          $ra
    ctx->pc = 0x327038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327038u;
        // 0x32703c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327040u;
}
