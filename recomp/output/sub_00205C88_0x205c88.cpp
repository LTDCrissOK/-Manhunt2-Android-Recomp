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

// Function: sub_00205C88
// Address: 0x205c88 - 0x205cc8
void sub_00205C88_0x205c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205C88_0x205c88");
#endif

    switch (ctx->pc) {
        case 0x205cb4u: goto label_205cb4;
        default: break;
    }

    ctx->pc = 0x205c88u;

    // 0x205c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205c94: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x205c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x205c98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x205c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ca0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x205ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x205ca4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x205ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x205ca8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x205ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x205cac: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x205CACu;
    SET_GPR_U32(ctx, 31, 0x205CB4u);
    ctx->pc = 0x205CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CACu;
    // 0x205cb0: 0xa2000018  sb          $zero, 0x18($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x205CACu, 0x205CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CB4u;
label_205cb4:
    // 0x205cb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x205cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205cb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x205CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CC0u;
        // 0x205cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205CC8u;
}
