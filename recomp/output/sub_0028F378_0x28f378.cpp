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

// Function: sub_0028F378
// Address: 0x28f378 - 0x28f3b0
void sub_0028F378_0x28f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F378_0x28f378");
#endif

    switch (ctx->pc) {
        case 0x28f38cu: goto label_28f38c;
        default: break;
    }

    ctx->pc = 0x28f378u;

    // 0x28f378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f37c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f380: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28f380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28f384: 0xc0a526c  jal         func_2949B0
    ctx->pc = 0x28F384u;
    SET_GPR_U32(ctx, 31, 0x28F38Cu);
    ctx->pc = 0x28F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F384u;
    // 0x28f388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2949B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2949B0u, 0x28F384u, 0x28F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F38Cu;
label_28f38c:
    // 0x28f38c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x28f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x28f390: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28f390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f394: 0x24632d08  addiu       $v1, $v1, 0x2D08
    ctx->pc = 0x28f394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11528));
    // 0x28f398: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x28f398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x28f39c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x28f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x28f3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f3a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28f3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x28F3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3A8u;
        // 0x28f3ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F3B0u;
}
