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

// Function: sub_002C0CD8
// Address: 0x2c0cd8 - 0x2c0d00
void sub_002C0CD8_0x2c0cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0CD8_0x2c0cd8");
#endif

    switch (ctx->pc) {
        case 0x2c0cf4u: goto label_2c0cf4;
        default: break;
    }

    ctx->pc = 0x2c0cd8u;

    // 0x2c0cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0cdc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2c0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2c0ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0ce4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c0ce4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ce8: 0x24423ce0  addiu       $v0, $v0, 0x3CE0
    ctx->pc = 0x2c0ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15584));
    // 0x2c0cec: 0xc0b0020  jal         func_2C0080
    ctx->pc = 0x2C0CECu;
    SET_GPR_U32(ctx, 31, 0x2C0CF4u);
    ctx->pc = 0x2C0CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0CECu;
    // 0x2c0cf0: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0080u, 0x2C0CECu, 0x2C0CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0CF4u;
label_2c0cf4:
    // 0x2c0cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CF8u;
        // 0x2c0cfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0D00u;
}
