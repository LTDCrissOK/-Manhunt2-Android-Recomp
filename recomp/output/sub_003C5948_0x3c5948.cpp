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

// Function: sub_003C5948
// Address: 0x3c5948 - 0x3c5980
void sub_003C5948_0x3c5948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5948_0x3c5948");
#endif

    switch (ctx->pc) {
        case 0x3c5970u: goto label_3c5970;
        default: break;
    }

    ctx->pc = 0x3c5948u;

    // 0x3c5948: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3c5948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c594c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c594cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c5950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c5950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c5954: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3c5954u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5958: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3c5958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c595c: 0x8c44cddc  lw          $a0, -0x3224($v0)
    ctx->pc = 0x3c595cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3c5960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5964: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3c5964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5968: 0xc0f15c6  jal         func_3C5718
    ctx->pc = 0x3C5968u;
    SET_GPR_U32(ctx, 31, 0x3C5970u);
    ctx->pc = 0x3C596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5968u;
    // 0x3c596c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5718u, 0x3C5968u, 0x3C5970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5970u;
label_3c5970:
    // 0x3c5970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5974: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5974u;
        // 0x3c5978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C597Cu;
    // 0x3c597c: 0x0  nop
    ctx->pc = 0x3c597cu;
    // NOP
    ctx->pc = 0x3c5980u;
}
