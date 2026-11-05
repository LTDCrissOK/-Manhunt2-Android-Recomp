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

// Function: sub_003BEACC
// Address: 0x3beacc - 0x3beb84
void sub_003BEACC_0x3beacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BEACC_0x3beacc");
#endif

    switch (ctx->pc) {
        case 0x3beb08u: goto label_3beb08;
        case 0x3beb2cu: goto label_3beb2c;
        case 0x3beb64u: goto label_3beb64;
        default: break;
    }

    ctx->pc = 0x3beaccu;

    // 0x3beacc: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3beaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3bead0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3BEAD0u;
    {
        const bool branch_taken_0x3bead0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEAD0u;
        // 0x3bead4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bead0) {
            ctx->pc = 0x3BEB48u;
            goto label_3beb48;
        }
    }
    ctx->pc = 0x3BEAD8u;
    // 0x3bead8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x3bead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x3beadc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3BEADCu;
    {
        const bool branch_taken_0x3beadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEADCu;
        // 0x3beae0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beadc) {
            ctx->pc = 0x3BEB48u;
            goto label_3beb48;
        }
    }
    ctx->pc = 0x3BEAE4u;
    // 0x3beae4: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x3beae4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3beae8: 0x2cca0020  sltiu       $t2, $a2, 0x20
    ctx->pc = 0x3beae8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3beaec: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3beaecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beaf0: 0x81a38  dsll        $v1, $t0, 8
    ctx->pc = 0x3beaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
    // 0x3beaf4: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x3beaf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x3beaf8: 0x70081ee9  pcpyh       $v1, $t0
    ctx->pc = 0x3beaf8u;
    { __m128i src = GPR_VEC(ctx, 8); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 3, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x3beafc: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x3BEAFCu;
    {
        const bool branch_taken_0x3beafc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEAFCu;
        // 0x3beb00: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beafc) {
            ctx->pc = 0x3BEB38u;
            goto label_3beb38;
        }
    }
    ctx->pc = 0x3BEB04u;
    // 0x3beb04: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x3beb04u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_3beb08:
    // 0x3beb08: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x3beb08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x3beb0c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3beb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x3beb10: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3beb10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3beb14: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x3beb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3beb18: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x3beb18u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x3beb1c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BEB1Cu;
    {
        const bool branch_taken_0x3beb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB1Cu;
        // 0x3beb20: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beb1c) {
            ctx->pc = 0x3BEB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3beb08;
        }
    }
    ctx->pc = 0x3BEB24u;
    // 0x3beb24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BEB24u;
    {
        const bool branch_taken_0x3beb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB24u;
        // 0x3beb28: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beb24) {
            ctx->pc = 0x3BEB38u;
            goto label_3beb38;
        }
    }
    ctx->pc = 0x3BEB2Cu;
label_3beb2c:
    // 0x3beb2c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3beb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3beb30: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3beb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3beb34: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3beb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3beb38:
    // 0x3beb38: 0x0  nop
    ctx->pc = 0x3beb38u;
    // NOP
    // 0x3beb3c: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BEB3Cu;
    {
        const bool branch_taken_0x3beb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3beb3c) {
            ctx->pc = 0x3BEB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEB3Cu;
            // 0x3beb40: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEB2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3beb2c;
        }
    }
    ctx->pc = 0x3BEB44u;
    // 0x3beb44: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3beb44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3beb48:
    // 0x3beb48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3beb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3beb4c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3beb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3beb50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3beb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3beb54: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BEB54u;
    {
        const bool branch_taken_0x3beb54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3beb54) {
            ctx->pc = 0x3BEB7Cu;
            goto label_3beb7c;
        }
    }
    ctx->pc = 0x3BEB5Cu;
    // 0x3beb5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3beb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3beb60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3beb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3beb64:
    // 0x3beb64: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x3beb64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3beb68: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3beb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3beb6c: 0x0  nop
    ctx->pc = 0x3beb6cu;
    // NOP
    // 0x3beb70: 0x0  nop
    ctx->pc = 0x3beb70u;
    // NOP
    // 0x3beb74: 0x14c2fffb  bne         $a2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BEB74u;
    {
        const bool branch_taken_0x3beb74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB74u;
        // 0x3beb78: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beb74) {
            ctx->pc = 0x3BEB64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3beb64;
        }
    }
    ctx->pc = 0x3BEB7Cu;
label_3beb7c:
    // 0x3beb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB7Cu;
        // 0x3beb80: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEB84u;
}
