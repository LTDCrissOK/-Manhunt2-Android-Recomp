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

// Function: sub_0030CD18
// Address: 0x30cd18 - 0x30cf28
void sub_0030CD18_0x30cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CD18_0x30cd18");
#endif

    switch (ctx->pc) {
        case 0x30cd4cu: goto label_30cd4c;
        case 0x30cd6cu: goto label_30cd6c;
        case 0x30cd84u: goto label_30cd84;
        case 0x30cda8u: goto label_30cda8;
        case 0x30cdc8u: goto label_30cdc8;
        case 0x30cdd0u: goto label_30cdd0;
        case 0x30ce10u: goto label_30ce10;
        case 0x30ce18u: goto label_30ce18;
        case 0x30ce48u: goto label_30ce48;
        case 0x30ce50u: goto label_30ce50;
        case 0x30ce5cu: goto label_30ce5c;
        case 0x30ce7cu: goto label_30ce7c;
        case 0x30cee0u: goto label_30cee0;
        case 0x30cee8u: goto label_30cee8;
        default: break;
    }

    ctx->pc = 0x30cd18u;

    // 0x30cd18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30cd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30cd1c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x30cd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x30cd20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30cd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd24: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x30cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x30cd28: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x30cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x30cd2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30cd2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd30: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x30cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x30cd34: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x30cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x30cd38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x30cd3c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30cd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd40: 0x24a521d0  addiu       $a1, $a1, 0x21D0
    ctx->pc = 0x30cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8656));
    // 0x30cd44: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x30CD44u;
    SET_GPR_U32(ctx, 31, 0x30CD4Cu);
    ctx->pc = 0x30CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD44u;
    // 0x30cd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x30CD44u, 0x30CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD4Cu;
label_30cd4c:
    // 0x30cd4c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CD4Cu;
    {
        const bool branch_taken_0x30cd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD4Cu;
        // 0x30cd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd4c) {
            ctx->pc = 0x30CD64u;
            goto label_30cd64;
        }
    }
    ctx->pc = 0x30CD54u;
    // 0x30cd54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30cd58: 0x8c43be1c  lw          $v1, -0x41E4($v0)
    ctx->pc = 0x30cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE1Cu));
    // 0x30cd5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30CD5Cu;
    {
        const bool branch_taken_0x30cd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD5Cu;
        // 0x30cd60: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd5c) {
            ctx->pc = 0x30CD70u;
            goto label_30cd70;
        }
    }
    ctx->pc = 0x30CD64u;
label_30cd64:
    // 0x30cd64: 0xc0c8684  jal         func_321A10
    ctx->pc = 0x30CD64u;
    SET_GPR_U32(ctx, 31, 0x30CD6Cu);
    ctx->pc = 0x30CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD64u;
    // 0x30cd68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321A10u, 0x30CD64u, 0x30CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD6Cu;
label_30cd6c:
    // 0x30cd6c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x30cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_30cd70:
    // 0x30cd70: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30cd74: 0x10800065  beqz        $a0, . + 4 + (0x65 << 2)
    ctx->pc = 0x30CD74u;
    {
        const bool branch_taken_0x30cd74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD74u;
        // 0x30cd78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd74) {
            ctx->pc = 0x30CF0Cu;
            goto label_30cf0c;
        }
    }
    ctx->pc = 0x30CD7Cu;
    // 0x30cd7c: 0xc0c7a4c  jal         func_31E930
    ctx->pc = 0x30CD7Cu;
    SET_GPR_U32(ctx, 31, 0x30CD84u);
    ctx->pc = 0x31E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E930u, 0x30CD7Cu, 0x30CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD84u;
label_30cd84:
    // 0x30cd84: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x30CD84u;
    {
        const bool branch_taken_0x30cd84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD84u;
        // 0x30cd88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd84) {
            ctx->pc = 0x30CF08u;
            goto label_30cf08;
        }
    }
    ctx->pc = 0x30CD8Cu;
    // 0x30cd8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30cd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30cd94: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x30cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x30cd98: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x30cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x30cd9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30cd9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cda0: 0xc0c864a  jal         func_321928
    ctx->pc = 0x30CDA0u;
    SET_GPR_U32(ctx, 31, 0x30CDA8u);
    ctx->pc = 0x30CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CDA0u;
    // 0x30cda4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321928u, 0x30CDA0u, 0x30CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDA8u;
label_30cda8:
    // 0x30cda8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30CDA8u;
    {
        const bool branch_taken_0x30cda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDA8u;
        // 0x30cdac: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cda8) {
            ctx->pc = 0x30CDE8u;
            goto label_30cde8;
        }
    }
    ctx->pc = 0x30CDB0u;
    // 0x30cdb0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x30cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30cdb4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x30cdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cdb8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30CDB8u;
    {
        const bool branch_taken_0x30cdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDB8u;
        // 0x30cdbc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cdb8) {
            ctx->pc = 0x30CE28u;
            goto label_30ce28;
        }
    }
    ctx->pc = 0x30CDC0u;
    // 0x30cdc0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30cdc4: 0x0  nop
    ctx->pc = 0x30cdc4u;
    // NOP
label_30cdc8:
    // 0x30cdc8: 0xc0fb996  jal         func_3EE658
    ctx->pc = 0x30CDC8u;
    SET_GPR_U32(ctx, 31, 0x30CDD0u);
    ctx->pc = 0x30CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CDC8u;
    // 0x30cdcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE658u, 0x30CDC8u, 0x30CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDD0u;
label_30cdd0:
    // 0x30cdd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30cdd4: 0x0  nop
    ctx->pc = 0x30cdd4u;
    // NOP
    // 0x30cdd8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30CDD8u;
    {
        const bool branch_taken_0x30cdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cdd8) {
            ctx->pc = 0x30CDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CDD8u;
            // 0x30cddc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cdc8;
        }
    }
    ctx->pc = 0x30CDE0u;
    // 0x30cde0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30CDE0u;
    {
        const bool branch_taken_0x30cde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDE0u;
        // 0x30cde4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cde0) {
            ctx->pc = 0x30CE2Cu;
            goto label_30ce2c;
        }
    }
    ctx->pc = 0x30CDE8u;
label_30cde8:
    // 0x30cde8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x30cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30cdec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x30cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cdf0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x30cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x30cdf4: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30CDF4u;
    {
        const bool branch_taken_0x30cdf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDF4u;
        // 0x30cdf8: 0xae44000c  sw          $a0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cdf4) {
            ctx->pc = 0x30CE40u;
            goto label_30ce40;
        }
    }
    ctx->pc = 0x30CDFCu;
    // 0x30cdfc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x30cdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CE00u;
    {
        const bool branch_taken_0x30ce00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE00u;
        // 0x30ce04: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce00) {
            ctx->pc = 0x30CE28u;
            goto label_30ce28;
        }
    }
    ctx->pc = 0x30CE08u;
    // 0x30ce08: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ce0c: 0x0  nop
    ctx->pc = 0x30ce0cu;
    // NOP
label_30ce10:
    // 0x30ce10: 0xc0fb996  jal         func_3EE658
    ctx->pc = 0x30CE10u;
    SET_GPR_U32(ctx, 31, 0x30CE18u);
    ctx->pc = 0x30CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE10u;
    // 0x30ce14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE658u, 0x30CE10u, 0x30CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE18u;
label_30ce18:
    // 0x30ce18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ce1c: 0x0  nop
    ctx->pc = 0x30ce1cu;
    // NOP
    // 0x30ce20: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30CE20u;
    {
        const bool branch_taken_0x30ce20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ce20) {
            ctx->pc = 0x30CE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CE20u;
            // 0x30ce24: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ce10;
        }
    }
    ctx->pc = 0x30CE28u;
label_30ce28:
    // 0x30ce28: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_30ce2c:
    // 0x30ce2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30ce2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce30: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x30ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x30ce34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30ce38: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x30CE38u;
    {
        const bool branch_taken_0x30ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE38u;
        // 0x30ce3c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce38) {
            ctx->pc = 0x30CF0Cu;
            goto label_30cf0c;
        }
    }
    ctx->pc = 0x30CE40u;
label_30ce40:
    // 0x30ce40: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x30CE40u;
    SET_GPR_U32(ctx, 31, 0x30CE48u);
    ctx->pc = 0x30CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE40u;
    // 0x30ce44: 0x42180  sll         $a0, $a0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x30CE40u, 0x30CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE48u;
label_30ce48:
    // 0x30ce48: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x30CE48u;
    {
        const bool branch_taken_0x30ce48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE48u;
        // 0x30ce4c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce48) {
            ctx->pc = 0x30CEB0u;
            goto label_30ceb0;
        }
    }
    ctx->pc = 0x30CE50u;
label_30ce50:
    // 0x30ce50: 0x138980  sll         $s1, $s3, 6
    ctx->pc = 0x30ce50u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x30ce54: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x30CE54u;
    SET_GPR_U32(ctx, 31, 0x30CE5Cu);
    ctx->pc = 0x30CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE54u;
    // 0x30ce58: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x30CE54u, 0x30CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE5Cu;
label_30ce5c:
    // 0x30ce5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x30ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30ce60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30ce60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30ce68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x30ce6c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x30ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x30ce70: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x30ce70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30ce74: 0xc0c30d4  jal         func_30C350
    ctx->pc = 0x30CE74u;
    SET_GPR_U32(ctx, 31, 0x30CE7Cu);
    ctx->pc = 0x30CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE74u;
    // 0x30ce78: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C350u, 0x30CE74u, 0x30CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE7Cu;
label_30ce7c:
    // 0x30ce7c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x30ce7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ce80: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x30ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30ce84: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x30ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x30ce88: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x30ce88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ce8c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x30ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x30ce90: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x30ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30ce94: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x30ce94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x30ce98: 0xa2200030  sb          $zero, 0x30($s1)
    ctx->pc = 0x30ce98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ce9c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x30ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30cea0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CEA0u;
    {
        const bool branch_taken_0x30cea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEA0u;
        // 0x30cea4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cea0) {
            ctx->pc = 0x30CEB4u;
            goto label_30ceb4;
        }
    }
    ctx->pc = 0x30CEA8u;
    // 0x30cea8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x30cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30ceac: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x30ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_30ceb0:
    // 0x30ceb0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x30ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_30ceb4:
    // 0x30ceb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30CEB4u;
    {
        const bool branch_taken_0x30ceb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEB4u;
        // 0x30ceb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ceb4) {
            ctx->pc = 0x30CEC0u;
            goto label_30cec0;
        }
    }
    ctx->pc = 0x30CEBCu;
    // 0x30cebc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x30cebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30cec0:
    // 0x30cec0: 0x5600ffe3  bnel        $s0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x30CEC0u;
    {
        const bool branch_taken_0x30cec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cec0) {
            ctx->pc = 0x30CEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CEC0u;
            // 0x30cec4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ce50;
        }
    }
    ctx->pc = 0x30CEC8u;
    // 0x30cec8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x30cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30cecc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x30ceccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ced0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CED0u;
    {
        const bool branch_taken_0x30ced0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CED0u;
        // 0x30ced4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ced0) {
            ctx->pc = 0x30CEF8u;
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CED8u;
    // 0x30ced8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30cedc: 0x0  nop
    ctx->pc = 0x30cedcu;
    // NOP
label_30cee0:
    // 0x30cee0: 0xc0fb996  jal         func_3EE658
    ctx->pc = 0x30CEE0u;
    SET_GPR_U32(ctx, 31, 0x30CEE8u);
    ctx->pc = 0x30CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CEE0u;
    // 0x30cee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE658u, 0x30CEE0u, 0x30CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CEE8u;
label_30cee8:
    // 0x30cee8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ceec: 0x0  nop
    ctx->pc = 0x30ceecu;
    // NOP
    // 0x30cef0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30CEF0u;
    {
        const bool branch_taken_0x30cef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cef0) {
            ctx->pc = 0x30CEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CEF0u;
            // 0x30cef4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cee0;
        }
    }
    ctx->pc = 0x30CEF8u;
label_30cef8:
    // 0x30cef8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x30cefc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x30cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x30cf00: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30cf04: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x30cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_30cf08:
    // 0x30cf08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30cf0c:
    // 0x30cf0c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x30cf0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30cf10: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x30cf10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30cf14: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x30cf14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30cf18: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x30cf18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30cf1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30cf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30cf20: 0x3e00008  jr          $ra
    ctx->pc = 0x30CF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF20u;
        // 0x30cf24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CF28u;
}
