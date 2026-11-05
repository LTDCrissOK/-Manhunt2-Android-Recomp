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

// Function: sub_003AFE98
// Address: 0x3afe98 - 0x3b0000
void sub_003AFE98_0x3afe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFE98_0x3afe98");
#endif

    switch (ctx->pc) {
        case 0x3afef0u: goto label_3afef0;
        default: break;
    }

    ctx->pc = 0x3afe98u;

    // 0x3afe98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3afe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3afe9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3afe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3afea0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3afea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afea4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3afea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3afea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3afea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afeac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3afeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3afeb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3afeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afeb4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3afeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3afeb8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3afeb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afebc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3afebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3afec0: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x3afec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afec4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3afec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3afec8: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x3afec8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afecc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3afeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3afed0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3afed0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afed4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3afed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x3afed8: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x3afed8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afedc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3afedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3afee0: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x3afee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x3afee4: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x3afee4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3afee8: 0xc0ebf3a  jal         func_3AFCE8
    ctx->pc = 0x3AFEE8u;
    SET_GPR_U32(ctx, 31, 0x3AFEF0u);
    ctx->pc = 0x3AFEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFEE8u;
    // 0x3afeec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE8u, 0x3AFEE8u, 0x3AFEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFEF0u;
label_3afef0:
    // 0x3afef0: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x3AFEF0u;
    {
        const bool branch_taken_0x3afef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3afef0) {
            ctx->pc = 0x3AFEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFEF0u;
            // 0x3afef4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B00D0u;
            return;
        }
    }
    ctx->pc = 0x3AFEF8u;
    // 0x3afef8: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x3afef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3afefc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3afefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3aff00: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x3aff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3aff04: 0x38670004  xori        $a3, $v1, 0x4
    ctx->pc = 0x3aff04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x3aff08: 0x87300a  movz        $a2, $a0, $a3
    ctx->pc = 0x3aff08u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x3aff0c: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x3aff0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3aff10: 0x5460006e  bnel        $v1, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x3AFF10u;
    {
        const bool branch_taken_0x3aff10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aff10) {
            ctx->pc = 0x3AFF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFF10u;
            // 0x3aff14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B00CCu;
            return;
        }
    }
    ctx->pc = 0x3AFF18u;
    // 0x3aff18: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x3aff18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aff1c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3aff1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3aff20: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x3aff20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3aff24: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3aff24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3aff28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3aff28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3aff2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3aff2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3aff30: 0x14650027  bne         $v1, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3AFF30u;
    {
        const bool branch_taken_0x3aff30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFF30u;
        // 0x3aff34: 0x240eff00  addiu       $t6, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aff30) {
            ctx->pc = 0x3AFFD0u;
            goto label_3affd0;
        }
    }
    ctx->pc = 0x3AFF38u;
    // 0x3aff38: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3aff38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aff3c: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x3aff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x3aff40: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x3aff40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aff44: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3aff44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3aff48: 0x6e1824  and         $v1, $v1, $t6
    ctx->pc = 0x3aff48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x3aff4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3aff4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3aff50: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3aff50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3aff54: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3aff54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3aff58: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x3aff58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3aff5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFF5Cu;
    {
        const bool branch_taken_0x3aff5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFF5Cu;
        // 0x3aff60: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aff5c) {
            ctx->pc = 0x3AFF70u;
            goto label_3aff70;
        }
    }
    ctx->pc = 0x3AFF64u;
    // 0x3aff64: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x3AFF64u;
    {
        const bool branch_taken_0x3aff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFF64u;
        // 0x3aff68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aff64) {
            ctx->pc = 0x3B00CCu;
            return;
        }
    }
    ctx->pc = 0x3AFF6Cu;
    // 0x3aff6c: 0x0  nop
    ctx->pc = 0x3aff6cu;
    // NOP
label_3aff70:
    // 0x3aff70: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x3aff70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3aff74: 0x67680a  movz        $t5, $v1, $a3
    ctx->pc = 0x3aff74u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x3aff78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3aff78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aff7c: 0x20d3021  addu        $a2, $s0, $t5
    ctx->pc = 0x3aff7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x3aff80: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x3aff80u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3aff84: 0x20d3821  addu        $a3, $s0, $t5
    ctx->pc = 0x3aff84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x3aff88: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x3aff88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3aff8c: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x3aff8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3aff90: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x3aff90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3aff94: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3aff94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3aff98: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3aff98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3aff9c: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x3aff9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3affa0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3affa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3affa4: 0x8e2024  and         $a0, $a0, $t6
    ctx->pc = 0x3affa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x3affa8: 0xae2824  and         $a1, $a1, $t6
    ctx->pc = 0x3affa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 14));
    // 0x3affac: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x3affacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3affb0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3affb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3affb4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3affb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3affb8: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x3affb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3affbc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3affbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3affc0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3affc0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3affc4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3affc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x3affc8: 0x10880003  beq         $a0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AFFC8u;
    {
        const bool branch_taken_0x3affc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x3AFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFFC8u;
        // 0x3affcc: 0xa6460000  sh          $a2, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3affc8) {
            ctx->pc = 0x3AFFD8u;
            goto label_3affd8;
        }
    }
    ctx->pc = 0x3AFFD0u;
label_3affd0:
    // 0x3affd0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3AFFD0u;
    {
        const bool branch_taken_0x3affd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFFD0u;
        // 0x3affd4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3affd0) {
            ctx->pc = 0x3B00CCu;
            return;
        }
    }
    ctx->pc = 0x3AFFD8u;
label_3affd8:
    // 0x3affd8: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x3affd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3affdc: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x3affdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
    // 0x3affe0: 0x20d5021  addu        $t2, $s0, $t5
    ctx->pc = 0x3affe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x3affe4: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x3affe4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3affe8: 0x20d1821  addu        $v1, $s0, $t5
    ctx->pc = 0x3affe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x3affec: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x3affecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x3afff0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3afff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3afff4: 0x20d5821  addu        $t3, $s0, $t5
    ctx->pc = 0x3afff4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x3afff8: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x3afff8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x3afffc: 0x95470000  lhu         $a3, 0x0($t2)
    ctx->pc = 0x3afffcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    ctx->pc = 0x3b0000u;
}
