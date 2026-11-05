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

// Function: sub_003EE348
// Address: 0x3ee348 - 0x3ee3a0
void sub_003EE348_0x3ee348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE348_0x3ee348");
#endif

    switch (ctx->pc) {
        case 0x3ee364u: goto label_3ee364;
        case 0x3ee384u: goto label_3ee384;
        default: break;
    }

    ctx->pc = 0x3ee348u;

    // 0x3ee348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ee34c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ee34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ee350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ee350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ee354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ee354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ee358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ee35c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x3EE35Cu;
    SET_GPR_U32(ctx, 31, 0x3EE364u);
    ctx->pc = 0x3EE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE35Cu;
    // 0x3ee360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x3EE35Cu, 0x3EE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE364u;
label_3ee364:
    // 0x3ee364: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x3ee364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x3ee368: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x3ee368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x3ee36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee370: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x3ee370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x3ee374: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ee374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ee378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ee378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee37c: 0xc0fb8e8  jal         func_3EE3A0
    ctx->pc = 0x3EE37Cu;
    SET_GPR_U32(ctx, 31, 0x3EE384u);
    ctx->pc = 0x3EE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE37Cu;
    // 0x3ee380: 0xae020370  sw          $v0, 0x370($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE3A0u, 0x3EE37Cu, 0x3EE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE384u;
label_3ee384:
    // 0x3ee384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ee384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ee388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ee38c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE38Cu;
        // 0x3ee390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE394u;
    // 0x3ee394: 0x0  nop
    ctx->pc = 0x3ee394u;
    // NOP
    // 0x3ee398: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ee39c: 0x0  nop
    ctx->pc = 0x3ee39cu;
    // NOP
    ctx->pc = 0x3ee3a0u;
}
