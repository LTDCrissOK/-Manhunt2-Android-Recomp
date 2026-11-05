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

// Function: sub_00135368
// Address: 0x135368 - 0x1353a0
void sub_00135368_0x135368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135368_0x135368");
#endif

    switch (ctx->pc) {
        case 0x135390u: goto label_135390;
        default: break;
    }

    ctx->pc = 0x135368u;

    // 0x135368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13536c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x13536cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135374: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x135374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135378: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135378u;
    {
        const bool branch_taken_0x135378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135378u;
        // 0x13537c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135378) {
            ctx->pc = 0x135394u;
            goto label_135394;
        }
    }
    ctx->pc = 0x135380u;
    // 0x135380: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x135380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x135384: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x135384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x135388: 0xc04d4e8  jal         func_1353A0
    ctx->pc = 0x135388u;
    SET_GPR_U32(ctx, 31, 0x135390u);
    ctx->pc = 0x13538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135388u;
    // 0x13538c: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1353A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1353A0u, 0x135388u, 0x135390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135390u;
label_135390:
    // 0x135390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135394:
    // 0x135394: 0x3e00008  jr          $ra
    ctx->pc = 0x135394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135394u;
        // 0x135398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13539Cu;
    // 0x13539c: 0x0  nop
    ctx->pc = 0x13539cu;
    // NOP
    ctx->pc = 0x1353a0u;
}
