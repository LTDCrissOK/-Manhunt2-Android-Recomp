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

// Function: sub_00207368
// Address: 0x207368 - 0x2073a8
void sub_00207368_0x207368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207368_0x207368");
#endif

    switch (ctx->pc) {
        case 0x207398u: goto label_207398;
        default: break;
    }

    ctx->pc = 0x207368u;

    // 0x207368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20736c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x20736Cu;
    {
        const bool branch_taken_0x20736c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x207370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20736Cu;
        // 0x207370: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20736c) {
            ctx->pc = 0x207398u;
            goto label_207398;
        }
    }
    ctx->pc = 0x207374u;
    // 0x207374: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x207374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x207378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20737c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20737Cu;
    {
        const bool branch_taken_0x20737c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x207380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20737Cu;
        // 0x207380: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20737c) {
            ctx->pc = 0x20739Cu;
            goto label_20739c;
        }
    }
    ctx->pc = 0x207384u;
    // 0x207384: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x207384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x207388: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x207388u;
    {
        const bool branch_taken_0x207388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x207388) {
            ctx->pc = 0x20739Cu;
            goto label_20739c;
        }
    }
    ctx->pc = 0x207390u;
    // 0x207390: 0xc0819e8  jal         func_2067A0
    ctx->pc = 0x207390u;
    SET_GPR_U32(ctx, 31, 0x207398u);
    ctx->pc = 0x2067A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067A0u, 0x207390u, 0x207398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207398u;
label_207398:
    // 0x207398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20739c:
    // 0x20739c: 0x3e00008  jr          $ra
    ctx->pc = 0x20739Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2073A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20739Cu;
        // 0x2073a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20739Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2073A4u;
    // 0x2073a4: 0x0  nop
    ctx->pc = 0x2073a4u;
    // NOP
    ctx->pc = 0x2073a8u;
}
