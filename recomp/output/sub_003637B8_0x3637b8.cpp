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

// Function: sub_003637B8
// Address: 0x3637b8 - 0x363800
void sub_003637B8_0x3637b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003637B8_0x3637b8");
#endif

    switch (ctx->pc) {
        case 0x3637b8u: goto label_3637b8;
        case 0x3637bcu: goto label_3637bc;
        case 0x3637c0u: goto label_3637c0;
        case 0x3637c4u: goto label_3637c4;
        case 0x3637c8u: goto label_3637c8;
        case 0x3637ccu: goto label_3637cc;
        case 0x3637d0u: goto label_3637d0;
        case 0x3637d4u: goto label_3637d4;
        case 0x3637d8u: goto label_3637d8;
        case 0x3637dcu: goto label_3637dc;
        case 0x3637e0u: goto label_3637e0;
        case 0x3637e4u: goto label_3637e4;
        case 0x3637e8u: goto label_3637e8;
        case 0x3637ecu: goto label_3637ec;
        case 0x3637f0u: goto label_3637f0;
        case 0x3637f4u: goto label_3637f4;
        case 0x3637f8u: goto label_3637f8;
        case 0x3637fcu: goto label_3637fc;
        default: break;
    }

    ctx->pc = 0x3637b8u;

label_3637b8:
    // 0x3637b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3637b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3637bc:
    // 0x3637bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3637bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3637c0:
    // 0x3637c0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3637c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3637c4:
    // 0x3637c4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3637c8:
    if (ctx->pc == 0x3637C8u) {
        ctx->pc = 0x3637C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3637C4u;
        // 0x3637c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3637CCu;
        goto label_3637cc;
    }
    ctx->pc = 0x3637C4u;
    {
        const bool branch_taken_0x3637c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3637c4) {
            ctx->pc = 0x3637C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3637C4u;
            // 0x3637c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3637F4u;
            goto label_3637f4;
        }
    }
    ctx->pc = 0x3637CCu;
label_3637cc:
    // 0x3637cc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x3637ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3637d0:
    // 0x3637d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3637d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3637d4:
    // 0x3637d4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x3637d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3637d8:
    // 0x3637d8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3637d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3637dc:
    // 0x3637dc: 0x40f809  jalr        $v0
label_3637e0:
    if (ctx->pc == 0x3637E0u) {
        ctx->pc = 0x3637E4u;
        goto label_3637e4;
    }
    ctx->pc = 0x3637DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3637E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3637DCu, 0x3637E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3637E4u;
label_3637e4:
    // 0x3637e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3637e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3637e8:
    // 0x3637e8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3637ec:
    if (ctx->pc == 0x3637ECu) {
        ctx->pc = 0x3637ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3637E8u;
        // 0x3637ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3637F0u;
        goto label_3637f0;
    }
    ctx->pc = 0x3637E8u;
    {
        const bool branch_taken_0x3637e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3637ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3637E8u;
        // 0x3637ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3637e8) {
            ctx->pc = 0x3637F4u;
            goto label_3637f4;
        }
    }
    ctx->pc = 0x3637F0u;
label_3637f0:
    // 0x3637f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3637f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3637f4:
    // 0x3637f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3637f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3637f8:
    // 0x3637f8: 0x3e00008  jr          $ra
label_3637fc:
    if (ctx->pc == 0x3637FCu) {
        ctx->pc = 0x3637FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3637F8u;
        // 0x3637fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363800u;
        goto label_fallthrough_0x3637f8;
    }
    ctx->pc = 0x3637F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3637FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3637F8u;
        // 0x3637fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3637F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3637f8:
    ctx->pc = 0x363800u;
}
