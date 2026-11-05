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

// Function: sub_003ED5A0
// Address: 0x3ed5a0 - 0x3ed5d8
void sub_003ED5A0_0x3ed5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED5A0_0x3ed5a0");
#endif

    switch (ctx->pc) {
        case 0x3ed5c4u: goto label_3ed5c4;
        default: break;
    }

    ctx->pc = 0x3ed5a0u;

    // 0x3ed5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ed5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ed5a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ed5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ed5a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ed5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ed5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ed5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed5b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3ed5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ed5b4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3ED5B4u;
    {
        const bool branch_taken_0x3ed5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed5b4) {
            ctx->pc = 0x3ED5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED5B4u;
            // 0x3ed5b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED5CCu;
            goto label_3ed5cc;
        }
    }
    ctx->pc = 0x3ED5BCu;
    // 0x3ed5bc: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3ED5BCu;
    SET_GPR_U32(ctx, 31, 0x3ED5C4u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3ED5BCu, 0x3ED5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED5C4u;
label_3ed5c4:
    // 0x3ed5c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3ed5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3ed5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ed5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ed5cc:
    // 0x3ed5cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ed5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ed5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5D0u;
        // 0x3ed5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED5D8u;
}
