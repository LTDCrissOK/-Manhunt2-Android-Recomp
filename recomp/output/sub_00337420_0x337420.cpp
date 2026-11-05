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

// Function: sub_00337420
// Address: 0x337420 - 0x337470
void sub_00337420_0x337420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337420_0x337420");
#endif

    switch (ctx->pc) {
        case 0x33745cu: goto label_33745c;
        default: break;
    }

    ctx->pc = 0x337420u;

    // 0x337420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337424: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337424u;
    {
        const bool branch_taken_0x337424 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x337428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337424u;
        // 0x337428: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337424) {
            ctx->pc = 0x337434u;
            goto label_337434;
        }
    }
    ctx->pc = 0x33742Cu;
    // 0x33742c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33742Cu;
    {
        const bool branch_taken_0x33742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33742Cu;
        // 0x337430: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33742c) {
            ctx->pc = 0x337454u;
            goto label_337454;
        }
    }
    ctx->pc = 0x337434u;
label_337434:
    // 0x337434: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x337434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x337438: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x337438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x33743c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x33743cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x337440: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x337440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337444: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337444u;
    {
        const bool branch_taken_0x337444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x337448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337444u;
        // 0x337448: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337444) {
            ctx->pc = 0x337454u;
            goto label_337454;
        }
    }
    ctx->pc = 0x33744Cu;
    // 0x33744c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33744Cu;
    {
        const bool branch_taken_0x33744c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33744Cu;
        // 0x337450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33744c) {
            ctx->pc = 0x337460u;
            goto label_337460;
        }
    }
    ctx->pc = 0x337454u;
label_337454:
    // 0x337454: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x337454u;
    SET_GPR_U32(ctx, 31, 0x33745Cu);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x337454u, 0x33745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33745Cu;
label_33745c:
    // 0x33745c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33745cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337460:
    // 0x337460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337464: 0x3e00008  jr          $ra
    ctx->pc = 0x337464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337464u;
        // 0x337468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33746Cu;
    // 0x33746c: 0x0  nop
    ctx->pc = 0x33746cu;
    // NOP
    ctx->pc = 0x337470u;
}
