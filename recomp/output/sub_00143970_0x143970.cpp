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

// Function: sub_00143970
// Address: 0x143970 - 0x143998
void sub_00143970_0x143970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143970_0x143970");
#endif

    switch (ctx->pc) {
        case 0x143984u: goto label_143984;
        default: break;
    }

    ctx->pc = 0x143970u;

    // 0x143970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143978: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14397c: 0xc04e4fa  jal         func_1393E8
    ctx->pc = 0x14397Cu;
    SET_GPR_U32(ctx, 31, 0x143984u);
    ctx->pc = 0x143980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14397Cu;
    // 0x143980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1393E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393E8u, 0x14397Cu, 0x143984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143984u;
label_143984:
    // 0x143984: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x143984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x143988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14398c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14398cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143990: 0x3e00008  jr          $ra
    ctx->pc = 0x143990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143990u;
        // 0x143994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143998u;
}
