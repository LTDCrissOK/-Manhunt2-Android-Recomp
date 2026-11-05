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

// Function: sub_00206980
// Address: 0x206980 - 0x2069a8
void sub_00206980_0x206980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206980_0x206980");
#endif

    switch (ctx->pc) {
        case 0x206980u: goto label_206980;
        case 0x206984u: goto label_206984;
        case 0x206988u: goto label_206988;
        case 0x20698cu: goto label_20698c;
        case 0x206990u: goto label_206990;
        case 0x206994u: goto label_206994;
        case 0x206998u: goto label_206998;
        case 0x20699cu: goto label_20699c;
        case 0x2069a0u: goto label_2069a0;
        case 0x2069a4u: goto label_2069a4;
        default: break;
    }

    ctx->pc = 0x206980u;

label_206980:
    // 0x206980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206984:
    // 0x206984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206988:
    // 0x206988: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x206988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20698c:
    // 0x20698c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_206990:
    // 0x206990: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x206990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_206994:
    // 0x206994: 0x40f809  jalr        $v0
label_206998:
    if (ctx->pc == 0x206998u) {
        ctx->pc = 0x20699Cu;
        goto label_20699c;
    }
    ctx->pc = 0x206994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20699Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206994u, 0x20699Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20699Cu;
label_20699c:
    // 0x20699c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20699cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2069a0:
    // 0x2069a0: 0x3e00008  jr          $ra
label_2069a4:
    if (ctx->pc == 0x2069A4u) {
        ctx->pc = 0x2069A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069A0u;
        // 0x2069a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2069A8u;
        goto label_fallthrough_0x2069a0;
    }
    ctx->pc = 0x2069A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2069A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069A0u;
        // 0x2069a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2069A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2069a0:
    ctx->pc = 0x2069A8u;
}
