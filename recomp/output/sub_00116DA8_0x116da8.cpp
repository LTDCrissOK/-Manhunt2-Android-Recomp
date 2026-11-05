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

// Function: sub_00116DA8
// Address: 0x116da8 - 0x116e48
void sub_00116DA8_0x116da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116DA8_0x116da8");
#endif

    switch (ctx->pc) {
        case 0x116dd0u: goto label_116dd0;
        case 0x116e00u: goto label_116e00;
        default: break;
    }

    ctx->pc = 0x116da8u;

    // 0x116da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116dac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116db0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x116db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x116db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116db8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x116db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116dbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x116dc0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x116DC0u;
    {
        const bool branch_taken_0x116dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116dc0) {
            ctx->pc = 0x116DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116DC0u;
            // 0x116dc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E3Cu;
            goto label_116e3c;
        }
    }
    ctx->pc = 0x116DC8u;
    // 0x116dc8: 0xc0423f6  jal         func_108FD8
    ctx->pc = 0x116DC8u;
    SET_GPR_U32(ctx, 31, 0x116DD0u);
    ctx->pc = 0x108FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108FD8u, 0x116DC8u, 0x116DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DD0u;
label_116dd0:
    // 0x116dd0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x116dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x116dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dd8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x116dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x116ddc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x116ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x116de0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x116de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x116de4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x116de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x116de8: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x116de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x116dec: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x116decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x116df0: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x116df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x116df4: 0xa2000023  sb          $zero, 0x23($s0)
    ctx->pc = 0x116df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x116df8: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x116df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x116dfc: 0x0  nop
    ctx->pc = 0x116dfcu;
    // NOP
label_116e00:
    // 0x116e00: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x116e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x116e04: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x116e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x116e08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x116e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x116e0c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x116e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x116e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x116e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e18: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x116e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x116e1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116e1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e20: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x116e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x116e24: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x116e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x116e28: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x116e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x116e2c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x116E2Cu;
    {
        const bool branch_taken_0x116e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E2Cu;
        // 0x116e30: 0xac600070  sw          $zero, 0x70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e2c) {
            ctx->pc = 0x116E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116e00;
        }
    }
    ctx->pc = 0x116E34u;
    // 0x116e34: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x116e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x116e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_116e3c:
    // 0x116e3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x116e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116e40: 0x3e00008  jr          $ra
    ctx->pc = 0x116E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E40u;
        // 0x116e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116E48u;
}
