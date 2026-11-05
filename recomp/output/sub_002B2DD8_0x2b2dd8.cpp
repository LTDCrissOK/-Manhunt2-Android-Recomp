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

// Function: sub_002B2DD8
// Address: 0x2b2dd8 - 0x2b2e58
void sub_002B2DD8_0x2b2dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2DD8_0x2b2dd8");
#endif

    switch (ctx->pc) {
        case 0x2b2e10u: goto label_2b2e10;
        case 0x2b2e38u: goto label_2b2e38;
        default: break;
    }

    ctx->pc = 0x2b2dd8u;

    // 0x2b2dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2ddc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b2de0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2de4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2b2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b2de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2dec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b2decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b2df0: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x2b2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x2b2df4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b2df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2df8: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x2b2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
    // 0x2b2dfc: 0x2602010c  addiu       $v0, $s0, 0x10C
    ctx->pc = 0x2b2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x2b2e00: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2b2e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2e04: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2b2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b2e08: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x2b2e08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b2e0c: 0x0  nop
    ctx->pc = 0x2b2e0cu;
    // NOP
label_2b2e10:
    // 0x2b2e10: 0xa040ffe0  sb          $zero, -0x20($v0)
    ctx->pc = 0x2b2e10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2e14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b2e18: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b2e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b2e1c: 0x0  nop
    ctx->pc = 0x2b2e1cu;
    // NOP
    // 0x2b2e20: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B2E20u;
    {
        const bool branch_taken_0x2b2e20 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2B2E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E20u;
        // 0x2b2e24: 0x244200b0  addiu       $v0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e20) {
            ctx->pc = 0x2B2E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2e10;
        }
    }
    ctx->pc = 0x2B2E28u;
    // 0x2b2e28: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2E28u;
    {
        const bool branch_taken_0x2b2e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E28u;
        // 0x2b2e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e28) {
            ctx->pc = 0x2B2E38u;
            goto label_2b2e38;
        }
    }
    ctx->pc = 0x2B2E30u;
    // 0x2b2e30: 0xc0acb96  jal         func_2B2E58
    ctx->pc = 0x2B2E30u;
    SET_GPR_U32(ctx, 31, 0x2B2E38u);
    ctx->pc = 0x2B2E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E30u;
    // 0x2b2e34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2E58u, 0x2B2E30u, 0x2B2E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E38u;
label_2b2e38:
    // 0x2b2e38: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2b2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2b2e3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b2e40: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b2e44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b2e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2e4c: 0xac432e3c  sw          $v1, 0x2E3C($v0)
    ctx->pc = 0x2b2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11836), GPR_U32(ctx, 3));
    // 0x2b2e50: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E50u;
        // 0x2b2e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2E58u;
}
