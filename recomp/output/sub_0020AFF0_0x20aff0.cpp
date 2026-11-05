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

// Function: sub_0020AFF0
// Address: 0x20aff0 - 0x20b020
void sub_0020AFF0_0x20aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AFF0_0x20aff0");
#endif

    switch (ctx->pc) {
        case 0x20aff0u: goto label_20aff0;
        case 0x20aff4u: goto label_20aff4;
        case 0x20aff8u: goto label_20aff8;
        case 0x20affcu: goto label_20affc;
        case 0x20b000u: goto label_20b000;
        case 0x20b004u: goto label_20b004;
        case 0x20b008u: goto label_20b008;
        case 0x20b00cu: goto label_20b00c;
        case 0x20b010u: goto label_20b010;
        case 0x20b014u: goto label_20b014;
        case 0x20b018u: goto label_20b018;
        case 0x20b01cu: goto label_20b01c;
        default: break;
    }

    ctx->pc = 0x20aff0u;

label_20aff0:
    // 0x20aff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20aff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20aff4:
    // 0x20aff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20aff8:
    // 0x20aff8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x20aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_20affc:
    // 0x20affc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20b000:
    // 0x20b000: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x20b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_20b004:
    // 0x20b004: 0x40f809  jalr        $v0
label_20b008:
    if (ctx->pc == 0x20B008u) {
        ctx->pc = 0x20B00Cu;
        goto label_20b00c;
    }
    ctx->pc = 0x20B004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B00Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B004u, 0x20B00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B00Cu;
label_20b00c:
    // 0x20b00c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b010:
    // 0x20b010: 0x3e00008  jr          $ra
label_20b014:
    if (ctx->pc == 0x20B014u) {
        ctx->pc = 0x20B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B010u;
        // 0x20b014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B018u;
        goto label_20b018;
    }
    ctx->pc = 0x20B010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B010u;
        // 0x20b014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B018u;
label_20b018:
    // 0x20b018: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20b01c:
    // 0x20b01c: 0x0  nop
    ctx->pc = 0x20b01cu;
    // NOP
    ctx->pc = 0x20b020u;
}
