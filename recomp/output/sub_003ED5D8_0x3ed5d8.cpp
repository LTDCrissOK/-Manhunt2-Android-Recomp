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

// Function: sub_003ED5D8
// Address: 0x3ed5d8 - 0x3ed600
void sub_003ED5D8_0x3ed5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED5D8_0x3ed5d8");
#endif

    switch (ctx->pc) {
        case 0x3ed5ecu: goto label_3ed5ec;
        default: break;
    }

    ctx->pc = 0x3ed5d8u;

    // 0x3ed5d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ed5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ed5dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ed5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ed5e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ed5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ed5e4: 0xc0fb568  jal         func_3ED5A0
    ctx->pc = 0x3ED5E4u;
    SET_GPR_U32(ctx, 31, 0x3ED5ECu);
    ctx->pc = 0x3ED5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED5E4u;
    // 0x3ed5e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED5A0u, 0x3ED5E4u, 0x3ED5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED5ECu;
label_3ed5ec:
    // 0x3ed5ec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3ed5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3ed5f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ed5f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed5f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ed5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ed5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5F8u;
        // 0x3ed5fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED600u;
}
