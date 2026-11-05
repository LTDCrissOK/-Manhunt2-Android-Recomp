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

// Function: sub_00236BC0
// Address: 0x236bc0 - 0x236c00
void sub_00236BC0_0x236bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236BC0_0x236bc0");
#endif

    switch (ctx->pc) {
        case 0x236bd0u: goto label_236bd0;
        case 0x236be0u: goto label_236be0;
        default: break;
    }

    ctx->pc = 0x236bc0u;

    // 0x236bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236bc8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x236BC8u;
    SET_GPR_U32(ctx, 31, 0x236BD0u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236BC8u, 0x236BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BD0u;
label_236bd0:
    // 0x236bd0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x236BD0u;
    {
        const bool branch_taken_0x236bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236bd0) {
            ctx->pc = 0x236BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236BD0u;
            // 0x236bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236BF4u;
            goto label_236bf4;
        }
    }
    ctx->pc = 0x236BD8u;
    // 0x236bd8: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x236BD8u;
    SET_GPR_U32(ctx, 31, 0x236BE0u);
    ctx->pc = 0x236BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236BD8u;
    // 0x236bdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x236BD8u, 0x236BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BE0u;
label_236be0:
    // 0x236be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x236be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236be4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x236be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x236be8: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x236BE8u;
    {
        const bool branch_taken_0x236be8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x236BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BE8u;
        // 0x236bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236be8) {
            ctx->pc = 0x236BF4u;
            goto label_236bf4;
        }
    }
    ctx->pc = 0x236BF0u;
    // 0x236bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236bf4:
    // 0x236bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x236BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BF8u;
        // 0x236bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236C00u;
}
