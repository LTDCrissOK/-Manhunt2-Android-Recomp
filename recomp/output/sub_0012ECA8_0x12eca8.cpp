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

// Function: sub_0012ECA8
// Address: 0x12eca8 - 0x12ecd0
void sub_0012ECA8_0x12eca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ECA8_0x12eca8");
#endif

    switch (ctx->pc) {
        case 0x12ecbcu: goto label_12ecbc;
        default: break;
    }

    ctx->pc = 0x12eca8u;

    // 0x12eca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12eca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12ecac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ecb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12ecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12ecb4: 0xc04bc80  jal         func_12F200
    ctx->pc = 0x12ECB4u;
    SET_GPR_U32(ctx, 31, 0x12ECBCu);
    ctx->pc = 0x12ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ECB4u;
    // 0x12ecb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F200u, 0x12ECB4u, 0x12ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ECBCu;
label_12ecbc:
    // 0x12ecbc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12ecc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ecc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ecc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12ecc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECC8u;
        // 0x12eccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ECD0u;
}
