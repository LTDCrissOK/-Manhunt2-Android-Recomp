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

// Function: sub_003BE9D0
// Address: 0x3be9d0 - 0x3beacc
void sub_003BE9D0_0x3be9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE9D0_0x3be9d0");
#endif

    switch (ctx->pc) {
        case 0x3bea04u: goto label_3bea04;
        case 0x3bea44u: goto label_3bea44;
        case 0x3bea7cu: goto label_3bea7c;
        case 0x3beaacu: goto label_3beaac;
        default: break;
    }

    ctx->pc = 0x3be9d0u;

    // 0x3be9d0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3be9d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be9d4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x3be9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3be9d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3BE9D8u;
    {
        const bool branch_taken_0x3be9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9D8u;
        // 0x3be9dc: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9d8) {
            ctx->pc = 0x3BEA24u;
            goto label_3bea24;
        }
    }
    ctx->pc = 0x3BE9E0u;
    // 0x3be9e0: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x3be9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3be9e4: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x3be9e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3be9e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3BE9E8u;
    {
        const bool branch_taken_0x3be9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9E8u;
        // 0x3be9ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9e8) {
            ctx->pc = 0x3BEA24u;
            goto label_3bea24;
        }
    }
    ctx->pc = 0x3BE9F0u;
    // 0x3be9f0: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x3be9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3be9f4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3be9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3be9f8: 0x10c20032  beq         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3BE9F8u;
    {
        const bool branch_taken_0x3be9f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9F8u;
        // 0x3be9fc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9f8) {
            ctx->pc = 0x3BEAC4u;
            goto label_3beac4;
        }
    }
    ctx->pc = 0x3BEA00u;
    // 0x3bea00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bea00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bea04:
    // 0x3bea04: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3bea04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3bea08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3bea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3bea0c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bea0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bea10: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3bea10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3bea14: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BEA14u;
    {
        const bool branch_taken_0x3bea14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA14u;
        // 0x3bea18: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bea14) {
            ctx->pc = 0x3BEA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bea04;
        }
    }
    ctx->pc = 0x3BEA1Cu;
    // 0x3bea1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA1Cu;
        // 0x3bea20: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEA24u;
label_3bea24:
    // 0x3bea24: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x3bea24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3bea28: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3BEA28u;
    {
        const bool branch_taken_0x3bea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bea28) {
            ctx->pc = 0x3BEA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEA28u;
            // 0x3bea2c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEAA0u;
            goto label_3beaa0;
        }
    }
    ctx->pc = 0x3BEA30u;
    // 0x3bea30: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x3bea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3bea34: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3bea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3bea38: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BEA38u;
    {
        const bool branch_taken_0x3bea38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bea38) {
            ctx->pc = 0x3BEA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEA38u;
            // 0x3bea3c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEAA0u;
            goto label_3beaa0;
        }
    }
    ctx->pc = 0x3BEA40u;
    // 0x3bea40: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3bea40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bea44:
    // 0x3bea44: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3bea44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bea48: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3bea48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x3bea4c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3bea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3bea50: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x3bea50u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3bea54: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3bea54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3bea58: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3bea58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3bea5c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3bea5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bea60: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3bea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3bea64: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3bea64u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3bea68: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3BEA68u;
    {
        const bool branch_taken_0x3bea68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA68u;
        // 0x3bea6c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bea68) {
            ctx->pc = 0x3BEA44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bea44;
        }
    }
    ctx->pc = 0x3BEA70u;
    // 0x3bea70: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3bea70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3bea74: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BEA74u;
    {
        const bool branch_taken_0x3bea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA74u;
        // 0x3bea78: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bea74) {
            ctx->pc = 0x3BEA9Cu;
            goto label_3bea9c;
        }
    }
    ctx->pc = 0x3BEA7Cu;
label_3bea7c:
    // 0x3bea7c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3bea7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bea80: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3bea80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3bea84: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3bea84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3bea88: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3bea88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3bea8c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3bea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3bea90: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BEA90u;
    {
        const bool branch_taken_0x3bea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA90u;
        // 0x3bea94: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bea90) {
            ctx->pc = 0x3BEA7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bea7c;
        }
    }
    ctx->pc = 0x3BEA98u;
    // 0x3bea98: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3bea98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3bea9c:
    // 0x3bea9c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3bea9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3beaa0:
    // 0x3beaa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3beaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3beaa4: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BEAA4u;
    {
        const bool branch_taken_0x3beaa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEAA4u;
        // 0x3beaa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beaa4) {
            ctx->pc = 0x3BEAC4u;
            goto label_3beac4;
        }
    }
    ctx->pc = 0x3BEAACu;
label_3beaac:
    // 0x3beaac: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3beaacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3beab0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3beab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3beab4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3beab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3beab8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3beab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3beabc: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BEABCu;
    {
        const bool branch_taken_0x3beabc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEABCu;
        // 0x3beac0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beabc) {
            ctx->pc = 0x3BEAACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3beaac;
        }
    }
    ctx->pc = 0x3BEAC4u;
label_3beac4:
    // 0x3beac4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEAC4u;
        // 0x3beac8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEACCu;
}
