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

// Function: sub_001359B0
// Address: 0x1359b0 - 0x135a08
void sub_001359B0_0x1359b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001359B0_0x1359b0");
#endif

    switch (ctx->pc) {
        case 0x1359c8u: goto label_1359c8;
        case 0x1359d8u: goto label_1359d8;
        default: break;
    }

    ctx->pc = 0x1359b0u;

    // 0x1359b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1359b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1359b4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1359b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1359b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1359b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1359bc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1359c0: 0xc07d6b8  jal         func_1F5AE0
    ctx->pc = 0x1359C0u;
    SET_GPR_U32(ctx, 31, 0x1359C8u);
    ctx->pc = 0x1359C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359C0u;
    // 0x1359c4: 0x24440480  addiu       $a0, $v0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5AE0u, 0x1359C0u, 0x1359C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359C8u;
label_1359c8:
    // 0x1359c8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1359C8u;
    {
        const bool branch_taken_0x1359c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1359c8) {
            ctx->pc = 0x1359CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1359C8u;
            // 0x1359cc: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1359FCu;
            goto label_1359fc;
        }
    }
    ctx->pc = 0x1359D0u;
    // 0x1359d0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x1359D0u;
    SET_GPR_U32(ctx, 31, 0x1359D8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x1359D0u, 0x1359D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359D8u;
label_1359d8:
    // 0x1359d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1359d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1359dc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1359dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1359e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1359e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1359e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1359E4u;
    {
        const bool branch_taken_0x1359e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1359e4) {
            ctx->pc = 0x1359E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1359E4u;
            // 0x1359e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1359ECu;
            goto label_1359ec;
        }
    }
    ctx->pc = 0x1359ECu;
label_1359ec:
    // 0x1359ec: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1359ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1359f0: 0x2010  mfhi        $a0
    ctx->pc = 0x1359f0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1359f4: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x1359f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1359f8: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1359f8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1359fc:
    // 0x1359fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1359fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135a00: 0x3e00008  jr          $ra
    ctx->pc = 0x135A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A00u;
        // 0x135a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135A08u;
}
