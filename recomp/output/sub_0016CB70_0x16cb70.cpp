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

// Function: sub_0016CB70
// Address: 0x16cb70 - 0x16cba8
void sub_0016CB70_0x16cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CB70_0x16cb70");
#endif

    switch (ctx->pc) {
        case 0x16cb70u: goto label_16cb70;
        case 0x16cb74u: goto label_16cb74;
        case 0x16cb78u: goto label_16cb78;
        case 0x16cb7cu: goto label_16cb7c;
        case 0x16cb80u: goto label_16cb80;
        case 0x16cb84u: goto label_16cb84;
        case 0x16cb88u: goto label_16cb88;
        case 0x16cb8cu: goto label_16cb8c;
        case 0x16cb90u: goto label_16cb90;
        case 0x16cb94u: goto label_16cb94;
        case 0x16cb98u: goto label_16cb98;
        case 0x16cb9cu: goto label_16cb9c;
        case 0x16cba0u: goto label_16cba0;
        case 0x16cba4u: goto label_16cba4;
        default: break;
    }

    ctx->pc = 0x16cb70u;

label_16cb70:
    // 0x16cb70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16cb74:
    // 0x16cb74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16cb78:
    // 0x16cb78: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x16cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_16cb7c:
    // 0x16cb7c: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x16cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_16cb80:
    // 0x16cb80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16cb84:
    if (ctx->pc == 0x16CB84u) {
        ctx->pc = 0x16CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB80u;
        // 0x16cb84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB88u;
        goto label_16cb88;
    }
    ctx->pc = 0x16CB80u;
    {
        const bool branch_taken_0x16cb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB80u;
        // 0x16cb84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb80) {
            ctx->pc = 0x16CBA0u;
            goto label_16cba0;
        }
    }
    ctx->pc = 0x16CB88u;
label_16cb88:
    // 0x16cb88: 0x8c8400f0  lw          $a0, 0xF0($a0)
    ctx->pc = 0x16cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_16cb8c:
    // 0x16cb8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16cb90:
    // 0x16cb90: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16cb94:
    // 0x16cb94: 0x40f809  jalr        $v0
label_16cb98:
    if (ctx->pc == 0x16CB98u) {
        ctx->pc = 0x16CB9Cu;
        goto label_16cb9c;
    }
    ctx->pc = 0x16CB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16CB9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CB94u, 0x16CB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CB9Cu;
label_16cb9c:
    // 0x16cb9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16cba0:
    // 0x16cba0: 0x3e00008  jr          $ra
label_16cba4:
    if (ctx->pc == 0x16CBA4u) {
        ctx->pc = 0x16CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBA0u;
        // 0x16cba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CBA8u;
        goto label_fallthrough_0x16cba0;
    }
    ctx->pc = 0x16CBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBA0u;
        // 0x16cba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16cba0:
    ctx->pc = 0x16CBA8u;
}
