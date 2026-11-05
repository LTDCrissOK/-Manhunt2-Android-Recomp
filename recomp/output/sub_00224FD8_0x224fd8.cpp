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

// Function: sub_00224FD8
// Address: 0x224fd8 - 0x225020
void sub_00224FD8_0x224fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224FD8_0x224fd8");
#endif

    switch (ctx->pc) {
        case 0x225000u: goto label_225000;
        default: break;
    }

    ctx->pc = 0x224fd8u;

    // 0x224fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224fdc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x224fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x224fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224fe4: 0x24421728  addiu       $v0, $v0, 0x1728
    ctx->pc = 0x224fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5928));
    // 0x224fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x224fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x224ff0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x224ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x224ff4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x224ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x224ff8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x224FF8u;
    SET_GPR_U32(ctx, 31, 0x225000u);
    ctx->pc = 0x224FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FF8u;
    // 0x224ffc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x224FF8u, 0x225000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225000u;
label_225000:
    // 0x225000: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x225000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x225004: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225008: 0x24631710  addiu       $v1, $v1, 0x1710
    ctx->pc = 0x225008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5904));
    // 0x22500c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22500cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225010: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x225010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x225014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225018: 0x3e00008  jr          $ra
    ctx->pc = 0x225018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225018u;
        // 0x22501c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225020u;
}
