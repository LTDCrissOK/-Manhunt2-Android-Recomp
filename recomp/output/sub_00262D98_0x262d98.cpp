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

// Function: sub_00262D98
// Address: 0x262d98 - 0x262dc8
void sub_00262D98_0x262d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262D98_0x262d98");
#endif

    switch (ctx->pc) {
        case 0x262d98u: goto label_262d98;
        case 0x262d9cu: goto label_262d9c;
        case 0x262da0u: goto label_262da0;
        case 0x262da4u: goto label_262da4;
        case 0x262da8u: goto label_262da8;
        case 0x262dacu: goto label_262dac;
        case 0x262db0u: goto label_262db0;
        case 0x262db4u: goto label_262db4;
        case 0x262db8u: goto label_262db8;
        case 0x262dbcu: goto label_262dbc;
        case 0x262dc0u: goto label_262dc0;
        case 0x262dc4u: goto label_262dc4;
        default: break;
    }

    ctx->pc = 0x262d98u;

label_262d98:
    // 0x262d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_262d9c:
    // 0x262d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_262da0:
    // 0x262da0: 0x8c82027c  lw          $v0, 0x27C($a0)
    ctx->pc = 0x262da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 636)));
label_262da4:
    // 0x262da4: 0xac820280  sw          $v0, 0x280($a0)
    ctx->pc = 0x262da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 2));
label_262da8:
    // 0x262da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x262da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262dac:
    // 0x262dac: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x262dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_262db0:
    // 0x262db0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x262db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_262db4:
    // 0x262db4: 0x40f809  jalr        $v0
label_262db8:
    if (ctx->pc == 0x262DB8u) {
        ctx->pc = 0x262DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DB4u;
        // 0x262db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262DBCu;
        goto label_262dbc;
    }
    ctx->pc = 0x262DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262DBCu);
        ctx->pc = 0x262DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DB4u;
        // 0x262db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262DB4u, 0x262DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262DBCu;
label_262dbc:
    // 0x262dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_262dc0:
    // 0x262dc0: 0x3e00008  jr          $ra
label_262dc4:
    if (ctx->pc == 0x262DC4u) {
        ctx->pc = 0x262DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DC0u;
        // 0x262dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262DC8u;
        goto label_fallthrough_0x262dc0;
    }
    ctx->pc = 0x262DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DC0u;
        // 0x262dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x262dc0:
    ctx->pc = 0x262DC8u;
}
