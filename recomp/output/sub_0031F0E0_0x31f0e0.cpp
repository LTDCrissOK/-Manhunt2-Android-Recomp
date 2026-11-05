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

// Function: sub_0031F0E0
// Address: 0x31f0e0 - 0x31f118
void sub_0031F0E0_0x31f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F0E0_0x31f0e0");
#endif

    switch (ctx->pc) {
        case 0x31f108u: goto label_31f108;
        default: break;
    }

    ctx->pc = 0x31f0e0u;

    // 0x31f0e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31f0e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31f0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f0ec: 0x8c44bdb8  lw          $a0, -0x4248($v0)
    ctx->pc = 0x31f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBDB8u));
    // 0x31f0f0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F0F0u;
    {
        const bool branch_taken_0x31f0f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0F0u;
        // 0x31f0f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0f0) {
            ctx->pc = 0x31F100u;
            goto label_31f100;
        }
    }
    ctx->pc = 0x31F0F8u;
    // 0x31f0f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31F0F8u;
    {
        const bool branch_taken_0x31f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0F8u;
        // 0x31f0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0f8) {
            ctx->pc = 0x31F108u;
            goto label_31f108;
        }
    }
    ctx->pc = 0x31F100u;
label_31f100:
    // 0x31f100: 0xc0c7a76  jal         func_31E9D8
    ctx->pc = 0x31F100u;
    SET_GPR_U32(ctx, 31, 0x31F108u);
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x31F100u, 0x31F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F108u;
label_31f108:
    // 0x31f108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f10c: 0x3e00008  jr          $ra
    ctx->pc = 0x31F10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F10Cu;
        // 0x31f110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F114u;
    // 0x31f114: 0x0  nop
    ctx->pc = 0x31f114u;
    // NOP
    ctx->pc = 0x31f118u;
}
