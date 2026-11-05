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

// Function: sub_0012D778
// Address: 0x12d778 - 0x12d7b8
void sub_0012D778_0x12d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D778_0x12d778");
#endif

    switch (ctx->pc) {
        case 0x12d794u: goto label_12d794;
        case 0x12d7a0u: goto label_12d7a0;
        default: break;
    }

    ctx->pc = 0x12d778u;

    // 0x12d778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12d778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d77c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d780: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12d788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12d78c: 0xc04b6e2  jal         func_12DB88
    ctx->pc = 0x12D78Cu;
    SET_GPR_U32(ctx, 31, 0x12D794u);
    ctx->pc = 0x12D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D78Cu;
    // 0x12d790: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DB88u, 0x12D78Cu, 0x12D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D794u;
label_12d794:
    // 0x12d794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d798: 0xc04b6c0  jal         func_12DB00
    ctx->pc = 0x12D798u;
    SET_GPR_U32(ctx, 31, 0x12D7A0u);
    ctx->pc = 0x12D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D798u;
    // 0x12d79c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DB00u, 0x12D798u, 0x12D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7A0u;
label_12d7a0:
    // 0x12d7a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d7a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d7a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12d7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x12D7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D7ACu;
        // 0x12d7b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D7B4u;
    // 0x12d7b4: 0x0  nop
    ctx->pc = 0x12d7b4u;
    // NOP
    ctx->pc = 0x12d7b8u;
}
