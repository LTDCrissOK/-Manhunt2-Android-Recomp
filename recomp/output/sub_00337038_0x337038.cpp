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

// Function: sub_00337038
// Address: 0x337038 - 0x337088
void sub_00337038_0x337038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337038_0x337038");
#endif

    switch (ctx->pc) {
        case 0x337074u: goto label_337074;
        default: break;
    }

    ctx->pc = 0x337038u;

    // 0x337038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33703c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33703Cu;
    {
        const bool branch_taken_0x33703c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x337040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33703Cu;
        // 0x337040: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33703c) {
            ctx->pc = 0x33704Cu;
            goto label_33704c;
        }
    }
    ctx->pc = 0x337044u;
    // 0x337044: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x337044u;
    {
        const bool branch_taken_0x337044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337044u;
        // 0x337048: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337044) {
            ctx->pc = 0x33706Cu;
            goto label_33706c;
        }
    }
    ctx->pc = 0x33704Cu;
label_33704c:
    // 0x33704c: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x33704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x337050: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x337050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x337054: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x337054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x337058: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x337058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33705c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33705Cu;
    {
        const bool branch_taken_0x33705c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x337060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33705Cu;
        // 0x337060: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33705c) {
            ctx->pc = 0x33706Cu;
            goto label_33706c;
        }
    }
    ctx->pc = 0x337064u;
    // 0x337064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x337064u;
    {
        const bool branch_taken_0x337064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337064u;
        // 0x337068: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337064) {
            ctx->pc = 0x337078u;
            goto label_337078;
        }
    }
    ctx->pc = 0x33706Cu;
label_33706c:
    // 0x33706c: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x33706Cu;
    SET_GPR_U32(ctx, 31, 0x337074u);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x33706Cu, 0x337074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337074u;
label_337074:
    // 0x337074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337078:
    // 0x337078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33707c: 0x3e00008  jr          $ra
    ctx->pc = 0x33707Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33707Cu;
        // 0x337080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33707Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337084u;
    // 0x337084: 0x0  nop
    ctx->pc = 0x337084u;
    // NOP
    ctx->pc = 0x337088u;
}
