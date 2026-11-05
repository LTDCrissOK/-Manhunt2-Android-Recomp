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

// Function: sub_003E85A0
// Address: 0x3e85a0 - 0x3e85e8
void sub_003E85A0_0x3e85a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E85A0_0x3e85a0");
#endif

    switch (ctx->pc) {
        case 0x3e85c4u: goto label_3e85c4;
        case 0x3e85d0u: goto label_3e85d0;
        default: break;
    }

    ctx->pc = 0x3e85a0u;

    // 0x3e85a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e85a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e85a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e85a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e85a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e85a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e85ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e85acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e85b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e85b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e85b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e85b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e85b8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e85bc: 0xc0b0336  jal         func_2C0CD8
    ctx->pc = 0x3E85BCu;
    SET_GPR_U32(ctx, 31, 0x3E85C4u);
    ctx->pc = 0x3E85C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E85BCu;
    // 0x3e85c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0CD8u, 0x3E85BCu, 0x3E85C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E85C4u;
label_3e85c4:
    // 0x3e85c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e85c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e85c8: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E85C8u;
    SET_GPR_U32(ctx, 31, 0x3E85D0u);
    ctx->pc = 0x3E85CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E85C8u;
    // 0x3e85cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E85C8u, 0x3E85D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E85D0u;
label_3e85d0:
    // 0x3e85d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e85d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e85d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e85d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e85d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e85d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e85dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E85DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85DCu;
        // 0x3e85e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E85DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E85E4u;
    // 0x3e85e4: 0x0  nop
    ctx->pc = 0x3e85e4u;
    // NOP
    ctx->pc = 0x3e85e8u;
}
