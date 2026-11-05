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

// Function: sub_002C3C68
// Address: 0x2c3c68 - 0x2c3ca0
void sub_002C3C68_0x2c3c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3C68_0x2c3c68");
#endif

    switch (ctx->pc) {
        case 0x2c3c7cu: goto label_2c3c7c;
        case 0x2c3c84u: goto label_2c3c84;
        default: break;
    }

    ctx->pc = 0x2c3c68u;

    // 0x2c3c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c3c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c3c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3c70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c3c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c3c74: 0xc0b1080  jal         func_2C4200
    ctx->pc = 0x2C3C74u;
    SET_GPR_U32(ctx, 31, 0x2C3C7Cu);
    ctx->pc = 0x2C3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C74u;
    // 0x2c3c78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4200u, 0x2C3C74u, 0x2C3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C7Cu;
label_2c3c7c:
    // 0x2c3c7c: 0xc0b0ed2  jal         func_2C3B48
    ctx->pc = 0x2C3C7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3C84u);
    ctx->pc = 0x2C3C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C7Cu;
    // 0x2c3c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B48u, 0x2C3C7Cu, 0x2C3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C84u;
label_2c3c84:
    // 0x2c3c84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3c88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c3c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3c8c: 0xa2020051  sb          $v0, 0x51($s0)
    ctx->pc = 0x2c3c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c3c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3c94: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C94u;
        // 0x2c3c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3C9Cu;
    // 0x2c3c9c: 0x0  nop
    ctx->pc = 0x2c3c9cu;
    // NOP
    ctx->pc = 0x2c3ca0u;
}
