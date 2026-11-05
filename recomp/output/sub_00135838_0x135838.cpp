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

// Function: sub_00135838
// Address: 0x135838 - 0x135888
void sub_00135838_0x135838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135838_0x135838");
#endif

    switch (ctx->pc) {
        case 0x135848u: goto label_135848;
        case 0x135858u: goto label_135858;
        default: break;
    }

    ctx->pc = 0x135838u;

    // 0x135838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13583c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13583cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135840: 0xc04d682  jal         func_135A08
    ctx->pc = 0x135840u;
    SET_GPR_U32(ctx, 31, 0x135848u);
    ctx->pc = 0x135A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135A08u, 0x135840u, 0x135848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135848u;
label_135848:
    // 0x135848: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x135848u;
    {
        const bool branch_taken_0x135848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135848) {
            ctx->pc = 0x13584Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135848u;
            // 0x13584c: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135878u;
            goto label_135878;
        }
    }
    ctx->pc = 0x135850u;
    // 0x135850: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x135850u;
    SET_GPR_U32(ctx, 31, 0x135858u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x135850u, 0x135858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135858u;
label_135858:
    // 0x135858: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x135858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13585c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x13585cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x135860: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x135860u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x135864: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x135864u;
    {
        const bool branch_taken_0x135864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135864) {
            ctx->pc = 0x135868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135864u;
            // 0x135868: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13586Cu;
            goto label_13586c;
        }
    }
    ctx->pc = 0x13586Cu;
label_13586c:
    // 0x13586c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x13586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x135870: 0x2010  mfhi        $a0
    ctx->pc = 0x135870u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x135874: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x135874u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_135878:
    // 0x135878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13587c: 0x3e00008  jr          $ra
    ctx->pc = 0x13587Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13587Cu;
        // 0x135880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13587Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135884u;
    // 0x135884: 0x0  nop
    ctx->pc = 0x135884u;
    // NOP
    ctx->pc = 0x135888u;
}
