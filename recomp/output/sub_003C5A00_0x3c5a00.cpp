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

// Function: sub_003C5A00
// Address: 0x3c5a00 - 0x3c5af0
void sub_003C5A00_0x3c5a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5A00_0x3c5a00");
#endif

    switch (ctx->pc) {
        case 0x3c5a68u: goto label_3c5a68;
        case 0x3c5ac4u: goto label_3c5ac4;
        default: break;
    }

    ctx->pc = 0x3c5a00u;

    // 0x3c5a00: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x3c5a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c5a04: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3C5A04u;
    {
        const bool branch_taken_0x3c5a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5A04u;
        // 0x3c5a08: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5a04) {
            ctx->pc = 0x3C5AA8u;
            goto label_3c5aa8;
        }
    }
    ctx->pc = 0x3C5A0Cu;
    // 0x3c5a0c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x3c5a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x3c5a10: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3C5A10u;
    {
        const bool branch_taken_0x3c5a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5A10u;
        // 0x3c5a14: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5a10) {
            ctx->pc = 0x3C5AA8u;
            goto label_3c5aa8;
        }
    }
    ctx->pc = 0x3C5A18u;
    // 0x3c5a18: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x3c5a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x3c5a1c: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x3c5a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3c5a20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3c5a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3c5a24: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3c5a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3c5a28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3c5a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3c5a2c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3c5a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3c5a30: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x3c5a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x3c5a34: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x3c5a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x3c5a38: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x3c5a38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3c5a3c: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x3c5a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3c5a40: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3c5a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3c5a44: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3c5a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3c5a48: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3c5a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3c5a4c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3c5a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3c5a50: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3c5a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3c5a54: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3c5a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3c5a58: 0x700a46e9  pcpyh       $t0, $t2
    ctx->pc = 0x3c5a58u;
    { __m128i src = GPR_VEC(ctx, 10); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 8, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x3c5a5c: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x3c5a5cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x3c5a60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c5a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5a64: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x3c5a64u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_3c5a68:
    // 0x3c5a68: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x3c5a68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3c5a6c: 0x704914c9  pxor        $v0, $v0, $t1
    ctx->pc = 0x3c5a6cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3c5a70: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x3c5a70u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3c5a74: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3c5a74u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3c5a78: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x3c5a78u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3c5a7c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3c5a7cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3c5a80: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x3c5a80u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3c5a84: 0x70491ba9  pcpyud      $v1, $v0, $t1
    ctx->pc = 0x3c5a84u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3c5a88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c5a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3c5a8c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C5A8Cu;
    {
        const bool branch_taken_0x3c5a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5a8c) {
            ctx->pc = 0x3C5A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5A8Cu;
            // 0x3c5a90: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5AA8u;
            goto label_3c5aa8;
        }
    }
    ctx->pc = 0x3C5A94u;
    // 0x3c5a94: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x3c5a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3c5a98: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x3c5a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c5a9c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3C5A9Cu;
    {
        const bool branch_taken_0x3c5a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5A9Cu;
        // 0x3c5aa0: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5a9c) {
            ctx->pc = 0x3C5A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5a68;
        }
    }
    ctx->pc = 0x3C5AA4u;
    // 0x3c5aa4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3c5aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c5aa8:
    // 0x3c5aa8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c5aac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3c5aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3c5ab0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5ab4: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C5AB4u;
    {
        const bool branch_taken_0x3c5ab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c5ab4) {
            ctx->pc = 0x3C5ADCu;
            goto label_3c5adc;
        }
    }
    ctx->pc = 0x3C5ABCu;
    // 0x3c5abc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3c5ac0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c5ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3c5ac4:
    // 0x3c5ac4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3c5ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c5ac8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C5AC8u;
    {
        const bool branch_taken_0x3c5ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3C5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5AC8u;
        // 0x3c5acc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ac8) {
            ctx->pc = 0x3C5AE4u;
            goto label_3c5ae4;
        }
    }
    ctx->pc = 0x3C5AD0u;
    // 0x3c5ad0: 0x0  nop
    ctx->pc = 0x3c5ad0u;
    // NOP
    // 0x3c5ad4: 0x14c3fffb  bne         $a2, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C5AD4u;
    {
        const bool branch_taken_0x3c5ad4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5AD4u;
        // 0x3c5ad8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ad4) {
            ctx->pc = 0x3C5AC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5ac4;
        }
    }
    ctx->pc = 0x3C5ADCu;
label_3c5adc:
    // 0x3c5adc: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5ADCu;
        // 0x3c5ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5AE4u;
label_3c5ae4:
    // 0x3c5ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5AE4u;
        // 0x3c5ae8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5AECu;
    // 0x3c5aec: 0x0  nop
    ctx->pc = 0x3c5aecu;
    // NOP
    ctx->pc = 0x3c5af0u;
}
