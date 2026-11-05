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

// Function: sub_00337190
// Address: 0x337190 - 0x3371d8
void sub_00337190_0x337190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337190_0x337190");
#endif

    switch (ctx->pc) {
        case 0x3371c8u: goto label_3371c8;
        default: break;
    }

    ctx->pc = 0x337190u;

    // 0x337190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337194: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337194u;
    {
        const bool branch_taken_0x337194 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x337198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337194u;
        // 0x337198: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337194) {
            ctx->pc = 0x3371A4u;
            goto label_3371a4;
        }
    }
    ctx->pc = 0x33719Cu;
    // 0x33719c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33719Cu;
    {
        const bool branch_taken_0x33719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3371A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33719Cu;
        // 0x3371a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33719c) {
            ctx->pc = 0x3371C0u;
            goto label_3371c0;
        }
    }
    ctx->pc = 0x3371A4u;
label_3371a4:
    // 0x3371a4: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x3371a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x3371a8: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x3371a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
    // 0x3371ac: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x3371acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
    // 0x3371b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3371B0u;
    {
        const bool branch_taken_0x3371b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3371B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371B0u;
        // 0x3371b4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3371b0) {
            ctx->pc = 0x3371C0u;
            goto label_3371c0;
        }
    }
    ctx->pc = 0x3371B8u;
    // 0x3371b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3371B8u;
    {
        const bool branch_taken_0x3371b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3371BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371B8u;
        // 0x3371bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3371b8) {
            ctx->pc = 0x3371CCu;
            goto label_3371cc;
        }
    }
    ctx->pc = 0x3371C0u;
label_3371c0:
    // 0x3371c0: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x3371C0u;
    SET_GPR_U32(ctx, 31, 0x3371C8u);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3371C0u, 0x3371C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371C8u;
label_3371c8:
    // 0x3371c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3371c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3371cc:
    // 0x3371cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3371ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3371d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3371D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3371D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371D0u;
        // 0x3371d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3371D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3371D8u;
}
