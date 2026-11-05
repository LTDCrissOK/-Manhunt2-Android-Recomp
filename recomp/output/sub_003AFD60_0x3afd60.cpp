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

// Function: sub_003AFD60
// Address: 0x3afd60 - 0x3afe98
void sub_003AFD60_0x3afd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFD60_0x3afd60");
#endif

    switch (ctx->pc) {
        case 0x3afd94u: goto label_3afd94;
        default: break;
    }

    ctx->pc = 0x3afd60u;

    // 0x3afd60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3afd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3afd64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3afd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3afd68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3afd68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd6c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3afd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3afd70: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3afd70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd74: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3afd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd78: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x3afd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x3afd7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3afd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3afd80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3afd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3afd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3afd88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3afd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3afd8c: 0xc0ebf3a  jal         func_3AFCE8
    ctx->pc = 0x3AFD8Cu;
    SET_GPR_U32(ctx, 31, 0x3AFD94u);
    ctx->pc = 0x3AFD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD8Cu;
    // 0x3afd90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE8u, 0x3AFD8Cu, 0x3AFD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD94u;
label_3afd94:
    // 0x3afd94: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3AFD94u;
    {
        const bool branch_taken_0x3afd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD94u;
        // 0x3afd98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afd94) {
            ctx->pc = 0x3AFE78u;
            goto label_3afe78;
        }
    }
    ctx->pc = 0x3AFD9Cu;
    // 0x3afd9c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x3afd9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3afda0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x3afda0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3afda4: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x3AFDA4u;
    {
        const bool branch_taken_0x3afda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3afda4) {
            ctx->pc = 0x3AFDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFDA4u;
            // 0x3afda8: 0xa6600002  sh          $zero, 0x2($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFE68u;
            goto label_3afe68;
        }
    }
    ctx->pc = 0x3AFDACu;
    // 0x3afdac: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x3afdacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3afdb0: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3AFDB0u;
    {
        const bool branch_taken_0x3afdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFDB0u;
        // 0x3afdb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afdb0) {
            ctx->pc = 0x3AFE78u;
            goto label_3afe78;
        }
    }
    ctx->pc = 0x3AFDB8u;
    // 0x3afdb8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x3afdb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3afdbc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3afdbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3afdc0: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x3afdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3afdc4: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x3afdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3afdc8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3afdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3afdcc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3afdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3afdd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3afdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3afdd4: 0x14650028  bne         $v1, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3AFDD4u;
    {
        const bool branch_taken_0x3afdd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFDD4u;
        // 0x3afdd8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afdd4) {
            ctx->pc = 0x3AFE78u;
            goto label_3afe78;
        }
    }
    ctx->pc = 0x3AFDDCu;
    // 0x3afddc: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x3afddcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3afde0: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x3afde0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3afde4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3afde4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3afde8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x3afde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x3afdec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3afdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3afdf0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3afdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3afdf4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3afdf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3afdf8: 0x2863001c  slti        $v1, $v1, 0x1C
    ctx->pc = 0x3afdf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x3afdfc: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3AFDFCu;
    {
        const bool branch_taken_0x3afdfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFDFCu;
        // 0x3afe00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afdfc) {
            ctx->pc = 0x3AFE78u;
            goto label_3afe78;
        }
    }
    ctx->pc = 0x3AFE04u;
    // 0x3afe04: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x3afe04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3afe08: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3afe08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3afe0c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3afe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3afe10: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3afe10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3afe14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3afe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3afe18: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x3afe18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3afe1c: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x3afe1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x3afe20: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x3afe20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3afe24: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3afe24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3afe28: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3afe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3afe2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3afe2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3afe30: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x3afe30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3afe34: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x3afe34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3afe38: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3afe38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3afe3c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3afe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3afe40: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3afe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3afe44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3afe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3afe48: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x3afe48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3afe4c: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x3afe4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x3afe50: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x3afe50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3afe54: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3afe54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3afe58: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3afe58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3afe5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3afe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3afe60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFE60u;
    {
        const bool branch_taken_0x3afe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE60u;
        // 0x3afe64: 0xa6630002  sh          $v1, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afe60) {
            ctx->pc = 0x3AFE74u;
            goto label_3afe74;
        }
    }
    ctx->pc = 0x3AFE68u;
label_3afe68:
    // 0x3afe68: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x3afe68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x3afe6c: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x3afe6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3afe70: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x3afe70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_3afe74:
    // 0x3afe74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3afe74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3afe78:
    // 0x3afe78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3afe78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3afe7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3afe7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3afe80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3afe80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3afe84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3afe84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3afe88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3afe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3afe8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE8Cu;
        // 0x3afe90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFE94u;
    // 0x3afe94: 0x0  nop
    ctx->pc = 0x3afe94u;
    // NOP
    ctx->pc = 0x3afe98u;
}
