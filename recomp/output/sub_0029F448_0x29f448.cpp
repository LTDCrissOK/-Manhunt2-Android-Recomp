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

// Function: sub_0029F448
// Address: 0x29f448 - 0x29f478
void sub_0029F448_0x29f448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F448_0x29f448");
#endif

    switch (ctx->pc) {
        case 0x29f460u: goto label_29f460;
        default: break;
    }

    ctx->pc = 0x29f448u;

    // 0x29f448: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29f448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f44c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f44cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f450: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f458: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F458u;
    SET_GPR_U32(ctx, 31, 0x29F460u);
    ctx->pc = 0x29F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F458u;
    // 0x29f45c: 0x24a5c570  addiu       $a1, $a1, -0x3A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F458u, 0x29F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F460u;
label_29f460:
    // 0x29f460: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f468: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29f468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29f46c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F46Cu;
        // 0x29f470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F474u;
    // 0x29f474: 0x0  nop
    ctx->pc = 0x29f474u;
    // NOP
    ctx->pc = 0x29f478u;
}
