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

// Function: sub_002DCA48
// Address: 0x2dca48 - 0x2dca80
void sub_002DCA48_0x2dca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCA48_0x2dca48");
#endif

    switch (ctx->pc) {
        case 0x2dca48u: goto label_2dca48;
        case 0x2dca4cu: goto label_2dca4c;
        case 0x2dca50u: goto label_2dca50;
        case 0x2dca54u: goto label_2dca54;
        case 0x2dca58u: goto label_2dca58;
        case 0x2dca5cu: goto label_2dca5c;
        case 0x2dca60u: goto label_2dca60;
        case 0x2dca64u: goto label_2dca64;
        case 0x2dca68u: goto label_2dca68;
        case 0x2dca6cu: goto label_2dca6c;
        case 0x2dca70u: goto label_2dca70;
        case 0x2dca74u: goto label_2dca74;
        case 0x2dca78u: goto label_2dca78;
        case 0x2dca7cu: goto label_2dca7c;
        default: break;
    }

    ctx->pc = 0x2dca48u;

label_2dca48:
    // 0x2dca48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dca48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dca4c:
    // 0x2dca4c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2dca4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dca50:
    // 0x2dca50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dca50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dca54:
    // 0x2dca54: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2dca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2dca58:
    // 0x2dca58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2dca5c:
    if (ctx->pc == 0x2DCA5Cu) {
        ctx->pc = 0x2DCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA58u;
        // 0x2dca5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA60u;
        goto label_2dca60;
    }
    ctx->pc = 0x2DCA58u;
    {
        const bool branch_taken_0x2dca58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA58u;
        // 0x2dca5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca58) {
            ctx->pc = 0x2DCA78u;
            goto label_2dca78;
        }
    }
    ctx->pc = 0x2DCA60u;
label_2dca60:
    // 0x2dca60: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x2dca60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_2dca64:
    // 0x2dca64: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2dca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2dca68:
    // 0x2dca68: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2dca68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2dca6c:
    // 0x2dca6c: 0x60f809  jalr        $v1
label_2dca70:
    if (ctx->pc == 0x2DCA70u) {
        ctx->pc = 0x2DCA74u;
        goto label_2dca74;
    }
    ctx->pc = 0x2DCA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DCA74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCA6Cu, 0x2DCA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCA74u;
label_2dca74:
    // 0x2dca74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dca78:
    // 0x2dca78: 0x3e00008  jr          $ra
label_2dca7c:
    if (ctx->pc == 0x2DCA7Cu) {
        ctx->pc = 0x2DCA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA78u;
        // 0x2dca7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA80u;
        goto label_fallthrough_0x2dca78;
    }
    ctx->pc = 0x2DCA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA78u;
        // 0x2dca7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dca78:
    ctx->pc = 0x2DCA80u;
}
