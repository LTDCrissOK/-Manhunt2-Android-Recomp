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

// Function: sub_002D6E90
// Address: 0x2d6e90 - 0x2d6ee0
void sub_002D6E90_0x2d6e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6E90_0x2d6e90");
#endif

    switch (ctx->pc) {
        case 0x2d6eb4u: goto label_2d6eb4;
        case 0x2d6ec0u: goto label_2d6ec0;
        case 0x2d6ed0u: goto label_2d6ed0;
        default: break;
    }

    ctx->pc = 0x2d6e90u;

    // 0x2d6e90: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2d6e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2d6e94: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2d6e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2d6e98: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2d6e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2d6e9c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2d6e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d6ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ea4: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x2d6ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x2d6ea8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d6ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6eac: 0xc0c680c  jal         func_31A030
    ctx->pc = 0x2D6EACu;
    SET_GPR_U32(ctx, 31, 0x2D6EB4u);
    ctx->pc = 0x2D6EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EACu;
    // 0x2d6eb0: 0x24c60fb0  addiu       $a2, $a2, 0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A030u, 0x2D6EACu, 0x2D6EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6EB4u;
label_2d6eb4:
    // 0x2d6eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6eb8: 0xc0b5afc  jal         func_2D6BF0
    ctx->pc = 0x2D6EB8u;
    SET_GPR_U32(ctx, 31, 0x2D6EC0u);
    ctx->pc = 0x2D6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EB8u;
    // 0x2d6ebc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6BF0u, 0x2D6EB8u, 0x2D6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6EC0u;
label_2d6ec0:
    // 0x2d6ec0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6EC0u;
    {
        const bool branch_taken_0x2d6ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EC0u;
        // 0x2d6ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ec0) {
            ctx->pc = 0x2D6ED0u;
            goto label_2d6ed0;
        }
    }
    ctx->pc = 0x2D6EC8u;
    // 0x2d6ec8: 0xc0b5ae6  jal         func_2D6B98
    ctx->pc = 0x2D6EC8u;
    SET_GPR_U32(ctx, 31, 0x2D6ED0u);
    ctx->pc = 0x2D6ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EC8u;
    // 0x2d6ecc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B98u, 0x2D6EC8u, 0x2D6ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6ED0u;
label_2d6ed0:
    // 0x2d6ed0: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2d6ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d6ed4: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x2d6ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2d6ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6ED8u;
        // 0x2d6edc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6EE0u;
}
