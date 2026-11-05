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

// Function: sub_003E1C28
// Address: 0x3e1c28 - 0x3e1d10
void sub_003E1C28_0x3e1c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1C28_0x3e1c28");
#endif

    switch (ctx->pc) {
        case 0x3e1c50u: goto label_3e1c50;
        case 0x3e1c88u: goto label_3e1c88;
        case 0x3e1cb8u: goto label_3e1cb8;
        case 0x3e1ce8u: goto label_3e1ce8;
        default: break;
    }

    ctx->pc = 0x3e1c28u;

    // 0x3e1c28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e1c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1c2c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e1c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e1c30: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x3e1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x3e1c34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e1c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e1c38: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x3e1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x3e1c3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3e1c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e1c40: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x3e1c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x3e1c44: 0x24430084  addiu       $v1, $v0, 0x84
    ctx->pc = 0x3e1c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x3e1c48: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x3e1c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x3e1c4c: 0x0  nop
    ctx->pc = 0x3e1c4cu;
    // NOP
label_3e1c50:
    // 0x3e1c50: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e1c50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e1c54: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e1c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e1c58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3e1c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3e1c5c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3e1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3e1c60: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3e1c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3e1c64: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x3e1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x3e1c68: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E1C68u;
    {
        const bool branch_taken_0x3e1c68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3E1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C68u;
        // 0x3e1c6c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1c68) {
            ctx->pc = 0x3E1C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1c50;
        }
    }
    ctx->pc = 0x3E1C70u;
    // 0x3e1c70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e1c74: 0x244500e4  addiu       $a1, $v0, 0xE4
    ctx->pc = 0x3e1c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x3e1c78: 0x24470114  addiu       $a3, $v0, 0x114
    ctx->pc = 0x3e1c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
    // 0x3e1c7c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3e1c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e1c80: 0x244300b4  addiu       $v1, $v0, 0xB4
    ctx->pc = 0x3e1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x3e1c84: 0x0  nop
    ctx->pc = 0x3e1c84u;
    // NOP
label_3e1c88:
    // 0x3e1c88: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e1c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e1c8c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e1c90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3e1c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3e1c94: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3e1c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3e1c98: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3e1c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3e1c9c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x3e1c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x3e1ca0: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E1CA0u;
    {
        const bool branch_taken_0x3e1ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3E1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CA0u;
        // 0x3e1ca4: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ca0) {
            ctx->pc = 0x3E1C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1c88;
        }
    }
    ctx->pc = 0x3E1CA8u;
    // 0x3e1ca8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3e1ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1cac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3e1cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e1cb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e1cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e1cb4: 0x0  nop
    ctx->pc = 0x3e1cb4u;
    // NOP
label_3e1cb8:
    // 0x3e1cb8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e1cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e1cbc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e1cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e1cc0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3e1cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3e1cc4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3e1cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3e1cc8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3e1cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3e1ccc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x3e1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x3e1cd0: 0x14a4fff9  bne         $a1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E1CD0u;
    {
        const bool branch_taken_0x3e1cd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3E1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CD0u;
        // 0x3e1cd4: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1cd0) {
            ctx->pc = 0x3E1CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1cb8;
        }
    }
    ctx->pc = 0x3E1CD8u;
    // 0x3e1cd8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3e1cd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e1ce0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3e1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e1ce4: 0x0  nop
    ctx->pc = 0x3e1ce4u;
    // NOP
label_3e1ce8:
    // 0x3e1ce8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e1ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e1cec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e1cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e1cf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3e1cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3e1cf4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3e1cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3e1cf8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3e1cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3e1cfc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x3e1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x3e1d00: 0x14a4fff9  bne         $a1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E1D00u;
    {
        const bool branch_taken_0x3e1d00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3E1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D00u;
        // 0x3e1d04: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d00) {
            ctx->pc = 0x3E1CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1ce8;
        }
    }
    ctx->pc = 0x3E1D08u;
    // 0x3e1d08: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D08u;
        // 0x3e1d0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1D10u;
}
