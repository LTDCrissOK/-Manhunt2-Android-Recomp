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

// Function: sub_00108070
// Address: 0x108070 - 0x1080a0
void sub_00108070_0x108070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108070_0x108070");
#endif

    switch (ctx->pc) {
        case 0x108070u: goto label_108070;
        case 0x108074u: goto label_108074;
        case 0x108078u: goto label_108078;
        case 0x10807cu: goto label_10807c;
        case 0x108080u: goto label_108080;
        case 0x108084u: goto label_108084;
        case 0x108088u: goto label_108088;
        case 0x10808cu: goto label_10808c;
        case 0x108090u: goto label_108090;
        case 0x108094u: goto label_108094;
        case 0x108098u: goto label_108098;
        case 0x10809cu: goto label_10809c;
        default: break;
    }

    ctx->pc = 0x108070u;

label_108070:
    // 0x108070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_108074:
    // 0x108074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108078:
    // 0x108078: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_10807c:
    if (ctx->pc == 0x10807Cu) {
        ctx->pc = 0x10807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108078u;
        // 0x10807c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108080u;
        goto label_108080;
    }
    ctx->pc = 0x108078u;
    {
        const bool branch_taken_0x108078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108078u;
        // 0x10807c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108078) {
            ctx->pc = 0x108090u;
            goto label_108090;
        }
    }
    ctx->pc = 0x108080u;
label_108080:
    // 0x108080: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x108080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_108084:
    // 0x108084: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x108084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_108088:
    // 0x108088: 0x40f809  jalr        $v0
label_10808c:
    if (ctx->pc == 0x10808Cu) {
        ctx->pc = 0x10808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108088u;
        // 0x10808c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108090u;
        goto label_108090;
    }
    ctx->pc = 0x108088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108090u);
        ctx->pc = 0x10808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108088u;
        // 0x10808c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108088u, 0x108090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108090u;
label_108090:
    // 0x108090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108094:
    // 0x108094: 0x3e00008  jr          $ra
label_108098:
    if (ctx->pc == 0x108098u) {
        ctx->pc = 0x108098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108094u;
        // 0x108098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10809Cu;
        goto label_10809c;
    }
    ctx->pc = 0x108094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108094u;
        // 0x108098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10809Cu;
label_10809c:
    // 0x10809c: 0x0  nop
    ctx->pc = 0x10809cu;
    // NOP
    ctx->pc = 0x1080a0u;
}
