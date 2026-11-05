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

// Function: sub_00276D80
// Address: 0x276d80 - 0x276da8
void sub_00276D80_0x276d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276D80_0x276d80");
#endif

    switch (ctx->pc) {
        case 0x276d9cu: goto label_276d9c;
        default: break;
    }

    ctx->pc = 0x276d80u;

    // 0x276d80: 0x24860220  addiu       $a2, $a0, 0x220
    ctx->pc = 0x276d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x276d84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276d88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x276d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d8c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x276d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x276d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276d94: 0xc0b5e2c  jal         func_2D78B0
    ctx->pc = 0x276D94u;
    SET_GPR_U32(ctx, 31, 0x276D9Cu);
    ctx->pc = 0x276D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D94u;
    // 0x276d98: 0x24458218  addiu       $a1, $v0, -0x7DE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D78B0u, 0x276D94u, 0x276D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D9Cu;
label_276d9c:
    // 0x276d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276da0: 0x3e00008  jr          $ra
    ctx->pc = 0x276DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DA0u;
        // 0x276da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276DA8u;
}
