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

// Function: sub_003AEC60
// Address: 0x3aec60 - 0x3aee78
void sub_003AEC60_0x3aec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEC60_0x3aec60");
#endif

    switch (ctx->pc) {
        case 0x3aed80u: goto label_3aed80;
        case 0x3aede8u: goto label_3aede8;
        default: break;
    }

    ctx->pc = 0x3aec60u;

label_3aec60:
    // 0x3aec60: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3aec60u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aec64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x3aec64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aec68: 0x91820007  lbu         $v0, 0x7($t4)
    ctx->pc = 0x3aec68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x3aec6c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x3aec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aec70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3aec70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3aec74: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x3aec74u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aec78: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3aec78u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aec7c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x3aec7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aec80: 0x91820009  lbu         $v0, 0x9($t4)
    ctx->pc = 0x3aec80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x3aec84: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3aec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3aec88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aec8c: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x3aec8cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aec90: 0x9583002a  lhu         $v1, 0x2A($t4)
    ctx->pc = 0x3aec90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 42)));
    // 0x3aec94: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x3aec94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x3aec98: 0x91840008  lbu         $a0, 0x8($t4)
    ctx->pc = 0x3aec98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x3aec9c: 0x108f0018  beq         $a0, $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AEC9Cu;
    {
        const bool branch_taken_0x3aec9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x3AECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC9Cu;
        // 0x3aeca0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec9c) {
            ctx->pc = 0x3AED00u;
            goto label_3aed00;
        }
    }
    ctx->pc = 0x3AECA4u;
    // 0x3aeca4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AECA4u;
    {
        const bool branch_taken_0x3aeca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aeca4) {
            ctx->pc = 0x3AECA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AECA4u;
            // 0x3aeca8: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AECC0u;
            goto label_3aecc0;
        }
    }
    ctx->pc = 0x3AECACu;
    // 0x3aecac: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AECACu;
    {
        const bool branch_taken_0x3aecac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aecac) {
            ctx->pc = 0x3AECB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AECACu;
            // 0x3aecb0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AECD0u;
            goto label_3aecd0;
        }
    }
    ctx->pc = 0x3AECB4u;
    // 0x3aecb4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3AECB4u;
    {
        const bool branch_taken_0x3aecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECB4u;
        // 0x3aecb8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aecb4) {
            ctx->pc = 0x3AED48u;
            goto label_3aed48;
        }
    }
    ctx->pc = 0x3AECBCu;
    // 0x3aecbc: 0x0  nop
    ctx->pc = 0x3aecbcu;
    // NOP
label_3aecc0:
    // 0x3aecc0: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3AECC0u;
    {
        const bool branch_taken_0x3aecc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aecc0) {
            ctx->pc = 0x3AECC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AECC0u;
            // 0x3aecc4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AED48u;
            goto label_3aed48;
        }
    }
    ctx->pc = 0x3AECC8u;
    // 0x3aecc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3AECC8u;
    {
        const bool branch_taken_0x3aecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECC8u;
        // 0x3aeccc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aecc8) {
            ctx->pc = 0x3AED20u;
            goto label_3aed20;
        }
    }
    ctx->pc = 0x3AECD0u;
label_3aecd0:
    // 0x3aecd0: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3aecd0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aecd4: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x3aecd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3aecd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3aecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3aecdc: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3aecdcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aece0: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x3aece0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x3aece4: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x3aece4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3aece8: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x3aece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x3aecec: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3aececu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3aecf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3aecf4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3AECF4u;
    {
        const bool branch_taken_0x3aecf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECF4u;
        // 0x3aecf8: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aecf4) {
            ctx->pc = 0x3AED40u;
            goto label_3aed40;
        }
    }
    ctx->pc = 0x3AECFCu;
    // 0x3aecfc: 0x0  nop
    ctx->pc = 0x3aecfcu;
    // NOP
label_3aed00:
    // 0x3aed00: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3aed00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3aed04: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3aed04u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aed08: 0x81430000  lb          $v1, 0x0($t2)
    ctx->pc = 0x3aed08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3aed0c: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x3aed0cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aed10: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x3aed10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x3aed14: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x3aed14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3aed18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3AED18u;
    {
        const bool branch_taken_0x3aed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED18u;
        // 0x3aed1c: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aed18) {
            ctx->pc = 0x3AED40u;
            goto label_3aed40;
        }
    }
    ctx->pc = 0x3AED20u;
label_3aed20:
    // 0x3aed20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3aed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aed24: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3aed24u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aed28: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x3aed28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3aed2c: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3aed2cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aed30: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x3aed30u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x3aed34: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x3aed34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3aed38: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x3aed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x3aed3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3aed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3aed40:
    // 0x3aed40: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x3aed40u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x3aed44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3aed44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aed48:
    // 0x3aed48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3aed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aed4c: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x3aed4cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aed50: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3aed50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3aed54: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x3aed54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x3aed58: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3aed58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aed5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aed5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed60: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x3aed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x3aed64: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x3aed64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3aed68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3aed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3aed6c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3aed6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3aed70: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x3aed70u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x3aed74: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x3aed74u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3aed78: 0x3e00008  jr          $ra
    ctx->pc = 0x3AED78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED78u;
        // 0x3aed7c: 0xa0e60000  sb          $a2, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AED78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AED80u;
label_3aed80:
    // 0x3aed80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3aed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3aed84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aed88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3aed88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3aed8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aed8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed90: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3aed90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3aed94: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x3aed94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x3aed98: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3aed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3aed9c: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x3aed9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3aeda0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3aeda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x3aeda4: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x3aeda4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x3aeda8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3aeda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3aedac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3aedacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aedb0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3aedb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aedb4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x3aedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3aedb8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3aedb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aedbc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3aedbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3aedc0: 0x2603009c  addiu       $v1, $s0, 0x9C
    ctx->pc = 0x3aedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x3aedc4: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x3aedc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3aedc8: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x3aedc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x3aedcc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3aedccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aedd0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3aedd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aedd4: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x3aedd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3aedd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3aedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3aeddc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3aeddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3aede0: 0xc0ebb18  jal         func_3AEC60
    ctx->pc = 0x3AEDE0u;
    SET_GPR_U32(ctx, 31, 0x3AEDE8u);
    ctx->pc = 0x3AEDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEDE0u;
    // 0x3aede4: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEC60u;
    goto label_3aec60;
    ctx->pc = 0x3AEDE8u;
label_3aede8:
    // 0x3aede8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AEDE8u;
    {
        const bool branch_taken_0x3aede8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3aede8) {
            ctx->pc = 0x3AEDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEDE8u;
            // 0x3aedec: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEDF8u;
            goto label_3aedf8;
        }
    }
    ctx->pc = 0x3AEDF0u;
    // 0x3aedf0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3AEDF0u;
    {
        const bool branch_taken_0x3aedf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDF0u;
        // 0x3aedf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aedf0) {
            ctx->pc = 0x3AEE58u;
            goto label_3aee58;
        }
    }
    ctx->pc = 0x3AEDF8u;
label_3aedf8:
    // 0x3aedf8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3aedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x3aedfc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3aedfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x3aee00: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3aee00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x3aee04: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3aee04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x3aee08: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x3aee08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x3aee0c: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x3aee0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x3aee10: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x3aee10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x3aee14: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x3aee14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3aee18: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3aee18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aee1c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x3aee1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3aee20: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3aee20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x3aee24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3aee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aee28: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x3aee28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3aee2c: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x3aee2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3aee30: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x3aee30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aee34: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3aee34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x3aee38: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x3aee38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x3aee3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3aee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3aee40: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x3aee40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x3aee44: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x3aee44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x3aee48: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x3aee48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x3aee4c: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x3aee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x3aee50: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x3aee50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x3aee54: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3aee54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_3aee58:
    // 0x3aee58: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3aee58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aee5c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3aee5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3aee60: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3aee60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aee64: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3aee64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3aee68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3aee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3aee6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEE6Cu;
        // 0x3aee70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEE74u;
    // 0x3aee74: 0x0  nop
    ctx->pc = 0x3aee74u;
    // NOP
    ctx->pc = 0x3aee78u;
}
