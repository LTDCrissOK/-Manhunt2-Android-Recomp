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

// Function: sub_003A8A90
// Address: 0x3a8a90 - 0x3a8b08
void sub_003A8A90_0x3a8a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8A90_0x3a8a90");
#endif

    switch (ctx->pc) {
        case 0x3a8ac0u: goto label_3a8ac0;
        default: break;
    }

    ctx->pc = 0x3a8a90u;

    // 0x3a8a90: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x3a8a90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x3a8a94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8a98: 0x8d05a0c8  lw          $a1, -0x5F38($t0)
    ctx->pc = 0x3a8a98u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x41A0C8u));
    // 0x3a8a9c: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A8A9Cu;
    {
        const bool branch_taken_0x3a8a9c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3A8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A9Cu;
        // 0x3a8aa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8a9c) {
            ctx->pc = 0x3A8AE4u;
            goto label_3a8ae4;
        }
    }
    ctx->pc = 0x3A8AA4u;
    // 0x3a8aa4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a8aa8: 0x2444a128  addiu       $a0, $v0, -0x5ED8
    ctx->pc = 0x3a8aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943016));
    // 0x3a8aac: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x3a8aacu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x41A128u));
    // 0x3a8ab0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A8AB0u;
    {
        const bool branch_taken_0x3a8ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AB0u;
        // 0x3a8ab4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ab0) {
            ctx->pc = 0x3A8AE4u;
            goto label_3a8ae4;
        }
    }
    ctx->pc = 0x3A8AB8u;
    // 0x3a8ab8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3a8ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8abc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a8abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8ac0:
    // 0x3a8ac0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a8ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a8ac4: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x3a8ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x3a8ac8: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x3a8ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3a8acc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8ACCu;
    {
        const bool branch_taken_0x3a8acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8ACCu;
        // 0x3a8ad0: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8acc) {
            ctx->pc = 0x3A8AE4u;
            goto label_3a8ae4;
        }
    }
    ctx->pc = 0x3A8AD4u;
    // 0x3a8ad4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3a8ad4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a8ad8: 0x0  nop
    ctx->pc = 0x3a8ad8u;
    // NOP
    // 0x3a8adc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A8ADCu;
    {
        const bool branch_taken_0x3a8adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8ADCu;
        // 0x3a8ae0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8adc) {
            ctx->pc = 0x3A8AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8ac0;
        }
    }
    ctx->pc = 0x3A8AE4u;
label_3a8ae4:
    // 0x3a8ae4: 0x8d03a0c8  lw          $v1, -0x5F38($t0)
    ctx->pc = 0x3a8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294942920)));
    // 0x3a8ae8: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8AE8u;
    {
        const bool branch_taken_0x3a8ae8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AE8u;
        // 0x3a8aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ae8) {
            ctx->pc = 0x3A8AFCu;
            goto label_3a8afc;
        }
    }
    ctx->pc = 0x3A8AF0u;
    // 0x3a8af0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8af4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a8af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8af8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3a8af8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3a8afc:
    // 0x3a8afc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8B04u;
    // 0x3a8b04: 0x0  nop
    ctx->pc = 0x3a8b04u;
    // NOP
    ctx->pc = 0x3a8b08u;
}
