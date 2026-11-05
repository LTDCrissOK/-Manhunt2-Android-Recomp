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

// Function: sub_0019ECA8
// Address: 0x19eca8 - 0x19ecd0
void sub_0019ECA8_0x19eca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ECA8_0x19eca8");
#endif

    switch (ctx->pc) {
        case 0x19ecb8u: goto label_19ecb8;
        case 0x19ecc0u: goto label_19ecc0;
        default: break;
    }

    ctx->pc = 0x19eca8u;

    // 0x19eca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19eca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ecac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ecb0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19ECB0u;
    SET_GPR_U32(ctx, 31, 0x19ECB8u);
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19ECB0u, 0x19ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECB8u;
label_19ecb8:
    // 0x19ecb8: 0xc06cdb4  jal         func_1B36D0
    ctx->pc = 0x19ECB8u;
    SET_GPR_U32(ctx, 31, 0x19ECC0u);
    ctx->pc = 0x19ECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECB8u;
    // 0x19ecbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x19ECB8u, 0x19ECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECC0u;
label_19ecc0:
    // 0x19ecc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ecc4: 0x3e00008  jr          $ra
    ctx->pc = 0x19ECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECC4u;
        // 0x19ecc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ECCCu;
    // 0x19eccc: 0x0  nop
    ctx->pc = 0x19ecccu;
    // NOP
    ctx->pc = 0x19ecd0u;
}
