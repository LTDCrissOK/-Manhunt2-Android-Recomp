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

// Function: sub_0028F9A0
// Address: 0x28f9a0 - 0x28f9e0
void sub_0028F9A0_0x28f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F9A0_0x28f9a0");
#endif

    switch (ctx->pc) {
        case 0x28f9b4u: goto label_28f9b4;
        default: break;
    }

    ctx->pc = 0x28f9a0u;

    // 0x28f9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f9a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f9a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28f9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28f9ac: 0xc0a3cde  jal         func_28F378
    ctx->pc = 0x28F9ACu;
    SET_GPR_U32(ctx, 31, 0x28F9B4u);
    ctx->pc = 0x28F9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F9ACu;
    // 0x28f9b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F378u, 0x28F9ACu, 0x28F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9B4u;
label_28f9b4:
    // 0x28f9b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28f9b8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x28f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x28f9bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x28f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x28f9c0: 0x24632cf0  addiu       $v1, $v1, 0x2CF0
    ctx->pc = 0x28f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11504));
    // 0x28f9c4: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x28f9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x28f9c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28f9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f9d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28f9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9D4u;
        // 0x28f9d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F9DCu;
    // 0x28f9dc: 0x0  nop
    ctx->pc = 0x28f9dcu;
    // NOP
    ctx->pc = 0x28f9e0u;
}
