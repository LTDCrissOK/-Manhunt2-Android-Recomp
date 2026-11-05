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

// Function: sub_002D36D0
// Address: 0x2d36d0 - 0x2d3728
void sub_002D36D0_0x2d36d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D36D0_0x2d36d0");
#endif

    switch (ctx->pc) {
        case 0x2d36e8u: goto label_2d36e8;
        case 0x2d36f8u: goto label_2d36f8;
        default: break;
    }

    ctx->pc = 0x2d36d0u;

    // 0x2d36d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d36d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d36d4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2d36d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2d36d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d36d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d36dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d36dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d36e0: 0xc0fb590  jal         func_3ED640
    ctx->pc = 0x2D36E0u;
    SET_GPR_U32(ctx, 31, 0x2D36E8u);
    ctx->pc = 0x2D36E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D36E0u;
    // 0x2d36e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED640u, 0x2D36E0u, 0x2D36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36E8u;
label_2d36e8:
    // 0x2d36e8: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2d36e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2d36ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d36ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d36f0: 0x2610008c  addiu       $s0, $s0, 0x8C
    ctx->pc = 0x2d36f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x2d36f4: 0x0  nop
    ctx->pc = 0x2d36f4u;
    // NOP
label_2d36f8:
    // 0x2d36f8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2d36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d36fc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2d36fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d3700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3704: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d3704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d3708: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2d3708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d370c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D370Cu;
    {
        const bool branch_taken_0x2d370c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D370Cu;
        // 0x2d3710: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d370c) {
            ctx->pc = 0x2D36F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d36f8;
        }
    }
    ctx->pc = 0x2D3714u;
    // 0x2d3714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d3718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d371c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D371Cu;
        // 0x2d3720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D371Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3724u;
    // 0x2d3724: 0x0  nop
    ctx->pc = 0x2d3724u;
    // NOP
    ctx->pc = 0x2d3728u;
}
