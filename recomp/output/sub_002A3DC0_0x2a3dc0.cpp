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

// Function: sub_002A3DC0
// Address: 0x2a3dc0 - 0x2a3e38
void sub_002A3DC0_0x2a3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3DC0_0x2a3dc0");
#endif

    switch (ctx->pc) {
        case 0x2a3e08u: goto label_2a3e08;
        case 0x2a3e18u: goto label_2a3e18;
        case 0x2a3e28u: goto label_2a3e28;
        default: break;
    }

    ctx->pc = 0x2a3dc0u;

    // 0x2a3dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3dc4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2a3dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3dcc: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x2a3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x2a3dd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a3dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a3dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3dd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ddc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2a3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C259Cu));
    // 0x2a3de0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3DE0u;
    {
        const bool branch_taken_0x2a3de0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2A3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DE0u;
        // 0x2a3de4: 0x8c44008c  lw          $a0, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3de0) {
            ctx->pc = 0x2A3DF0u;
            goto label_2a3df0;
        }
    }
    ctx->pc = 0x2A3DE8u;
    // 0x2a3de8: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3DE8u;
    {
        const bool branch_taken_0x2a3de8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A3DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DE8u;
        // 0x2a3dec: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3de8) {
            ctx->pc = 0x2A3DF8u;
            goto label_2a3df8;
        }
    }
    ctx->pc = 0x2A3DF0u;
label_2a3df0:
    // 0x2a3df0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a3df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3df4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2a3df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3df8:
    // 0x2a3df8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3DF8u;
    {
        const bool branch_taken_0x2a3df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DF8u;
        // 0x2a3dfc: 0xa2050284  sb          $a1, 0x284($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3df8) {
            ctx->pc = 0x2A3E10u;
            goto label_2a3e10;
        }
    }
    ctx->pc = 0x2A3E00u;
    // 0x2a3e00: 0xc0a7adc  jal         func_29EB70
    ctx->pc = 0x2A3E00u;
    SET_GPR_U32(ctx, 31, 0x2A3E08u);
    ctx->pc = 0x2A3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E00u;
    // 0x2a3e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB70u, 0x2A3E00u, 0x2A3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E08u;
label_2a3e08:
    // 0x2a3e08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3E08u;
    {
        const bool branch_taken_0x2a3e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E08u;
        // 0x2a3e0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e08) {
            ctx->pc = 0x2A3E2Cu;
            goto label_2a3e2c;
        }
    }
    ctx->pc = 0x2A3E10u;
label_2a3e10:
    // 0x2a3e10: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2A3E10u;
    SET_GPR_U32(ctx, 31, 0x2A3E18u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2A3E10u, 0x2A3E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E18u;
label_2a3e18:
    // 0x2a3e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e1c: 0x2605027c  addiu       $a1, $s0, 0x27C
    ctx->pc = 0x2a3e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
    // 0x2a3e20: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x2A3E20u;
    SET_GPR_U32(ctx, 31, 0x2A3E28u);
    ctx->pc = 0x2A3E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E20u;
    // 0x2a3e24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x2A3E20u, 0x2A3E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E28u;
label_2a3e28:
    // 0x2a3e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3e2c:
    // 0x2a3e2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a3e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a3e30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E30u;
        // 0x2a3e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3E38u;
}
