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

// Function: sub_001FDAC0
// Address: 0x1fdac0 - 0x1fdb90
void sub_001FDAC0_0x1fdac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDAC0_0x1fdac0");
#endif

    switch (ctx->pc) {
        case 0x1fdac0u: goto label_1fdac0;
        case 0x1fdac4u: goto label_1fdac4;
        case 0x1fdac8u: goto label_1fdac8;
        case 0x1fdaccu: goto label_1fdacc;
        case 0x1fdad0u: goto label_1fdad0;
        case 0x1fdad4u: goto label_1fdad4;
        case 0x1fdad8u: goto label_1fdad8;
        case 0x1fdadcu: goto label_1fdadc;
        case 0x1fdae0u: goto label_1fdae0;
        case 0x1fdae4u: goto label_1fdae4;
        case 0x1fdae8u: goto label_1fdae8;
        case 0x1fdaecu: goto label_1fdaec;
        case 0x1fdaf0u: goto label_1fdaf0;
        case 0x1fdaf4u: goto label_1fdaf4;
        case 0x1fdaf8u: goto label_1fdaf8;
        case 0x1fdafcu: goto label_1fdafc;
        case 0x1fdb00u: goto label_1fdb00;
        case 0x1fdb04u: goto label_1fdb04;
        case 0x1fdb08u: goto label_1fdb08;
        case 0x1fdb0cu: goto label_1fdb0c;
        case 0x1fdb10u: goto label_1fdb10;
        case 0x1fdb14u: goto label_1fdb14;
        case 0x1fdb18u: goto label_1fdb18;
        case 0x1fdb1cu: goto label_1fdb1c;
        case 0x1fdb20u: goto label_1fdb20;
        case 0x1fdb24u: goto label_1fdb24;
        case 0x1fdb28u: goto label_1fdb28;
        case 0x1fdb2cu: goto label_1fdb2c;
        case 0x1fdb30u: goto label_1fdb30;
        case 0x1fdb34u: goto label_1fdb34;
        case 0x1fdb38u: goto label_1fdb38;
        case 0x1fdb3cu: goto label_1fdb3c;
        case 0x1fdb40u: goto label_1fdb40;
        case 0x1fdb44u: goto label_1fdb44;
        case 0x1fdb48u: goto label_1fdb48;
        case 0x1fdb4cu: goto label_1fdb4c;
        case 0x1fdb50u: goto label_1fdb50;
        case 0x1fdb54u: goto label_1fdb54;
        case 0x1fdb58u: goto label_1fdb58;
        case 0x1fdb5cu: goto label_1fdb5c;
        case 0x1fdb60u: goto label_1fdb60;
        case 0x1fdb64u: goto label_1fdb64;
        case 0x1fdb68u: goto label_1fdb68;
        case 0x1fdb6cu: goto label_1fdb6c;
        case 0x1fdb70u: goto label_1fdb70;
        case 0x1fdb74u: goto label_1fdb74;
        case 0x1fdb78u: goto label_1fdb78;
        case 0x1fdb7cu: goto label_1fdb7c;
        case 0x1fdb80u: goto label_1fdb80;
        case 0x1fdb84u: goto label_1fdb84;
        case 0x1fdb88u: goto label_1fdb88;
        case 0x1fdb8cu: goto label_1fdb8c;
        default: break;
    }

    ctx->pc = 0x1fdac0u;

label_1fdac0:
    // 0x1fdac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fdac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fdac4:
    // 0x1fdac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fdac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fdac8:
    // 0x1fdac8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fdac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fdacc:
    // 0x1fdacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdad0:
    // 0x1fdad0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fdad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fdad4:
    // 0x1fdad4: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x1fdad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_1fdad8:
    // 0x1fdad8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1fdadc:
    if (ctx->pc == 0x1FDADCu) {
        ctx->pc = 0x1FDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAD8u;
        // 0x1fdadc: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDAE0u;
        goto label_1fdae0;
    }
    ctx->pc = 0x1FDAD8u;
    {
        const bool branch_taken_0x1fdad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAD8u;
        // 0x1fdadc: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdad8) {
            ctx->pc = 0x1FDB7Cu;
            goto label_1fdb7c;
        }
    }
    ctx->pc = 0x1FDAE0u;
label_1fdae0:
    // 0x1fdae0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1fdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fdae4:
    // 0x1fdae4: 0x50510026  beql        $v0, $s1, . + 4 + (0x26 << 2)
label_1fdae8:
    if (ctx->pc == 0x1FDAE8u) {
        ctx->pc = 0x1FDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAE4u;
        // 0x1fdae8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDAECu;
        goto label_1fdaec;
    }
    ctx->pc = 0x1FDAE4u;
    {
        const bool branch_taken_0x1fdae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1fdae4) {
            ctx->pc = 0x1FDAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDAE4u;
            // 0x1fdae8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB80u;
            goto label_1fdb80;
        }
    }
    ctx->pc = 0x1FDAECu;
label_1fdaec:
    // 0x1fdaec: 0xc081d36  jal         func_2074D8
label_1fdaf0:
    if (ctx->pc == 0x1FDAF0u) {
        ctx->pc = 0x1FDAF4u;
        goto label_1fdaf4;
    }
    ctx->pc = 0x1FDAECu;
    SET_GPR_U32(ctx, 31, 0x1FDAF4u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1FDAECu, 0x1FDAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDAF4u;
label_1fdaf4:
    // 0x1fdaf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fdaf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdaf8:
    // 0x1fdaf8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1fdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fdafc:
    // 0x1fdafc: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_1fdb00:
    if (ctx->pc == 0x1FDB00u) {
        ctx->pc = 0x1FDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAFCu;
        // 0x1fdb00: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB04u;
        goto label_1fdb04;
    }
    ctx->pc = 0x1FDAFCu;
    {
        const bool branch_taken_0x1fdafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1FDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAFCu;
        // 0x1fdb00: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdafc) {
            ctx->pc = 0x1FDB0Cu;
            goto label_1fdb0c;
        }
    }
    ctx->pc = 0x1FDB04u;
label_1fdb04:
    // 0x1fdb04: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fdb08:
    if (ctx->pc == 0x1FDB08u) {
        ctx->pc = 0x1FDB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB04u;
        // 0x1fdb08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB0Cu;
        goto label_1fdb0c;
    }
    ctx->pc = 0x1FDB04u;
    {
        const bool branch_taken_0x1fdb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB04u;
        // 0x1fdb08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb04) {
            ctx->pc = 0x1FDB14u;
            goto label_1fdb14;
        }
    }
    ctx->pc = 0x1FDB0Cu;
label_1fdb0c:
    // 0x1fdb0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fdb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fdb10:
    // 0x1fdb10: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1fdb10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fdb14:
    // 0x1fdb14: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fdb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fdb18:
    // 0x1fdb18: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1fdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1fdb1c:
    // 0x1fdb1c: 0x40f809  jalr        $v0
label_1fdb20:
    if (ctx->pc == 0x1FDB20u) {
        ctx->pc = 0x1FDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB1Cu;
        // 0x1fdb20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB24u;
        goto label_1fdb24;
    }
    ctx->pc = 0x1FDB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDB24u);
        ctx->pc = 0x1FDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB1Cu;
        // 0x1fdb20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB1Cu, 0x1FDB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDB24u;
label_1fdb24:
    // 0x1fdb24: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_1fdb28:
    if (ctx->pc == 0x1FDB28u) {
        ctx->pc = 0x1FDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB24u;
        // 0x1fdb28: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB2Cu;
        goto label_1fdb2c;
    }
    ctx->pc = 0x1FDB24u;
    {
        const bool branch_taken_0x1fdb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb24) {
            ctx->pc = 0x1FDB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB24u;
            // 0x1fdb28: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB7Cu;
            goto label_1fdb7c;
        }
    }
    ctx->pc = 0x1FDB2Cu;
label_1fdb2c:
    // 0x1fdb2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fdb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fdb30:
    // 0x1fdb30: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1fdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1fdb34:
    // 0x1fdb34: 0x40f809  jalr        $v0
label_1fdb38:
    if (ctx->pc == 0x1FDB38u) {
        ctx->pc = 0x1FDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB34u;
        // 0x1fdb38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB3Cu;
        goto label_1fdb3c;
    }
    ctx->pc = 0x1FDB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDB3Cu);
        ctx->pc = 0x1FDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB34u;
        // 0x1fdb38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB34u, 0x1FDB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDB3Cu;
label_1fdb3c:
    // 0x1fdb3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fdb40:
    if (ctx->pc == 0x1FDB40u) {
        ctx->pc = 0x1FDB44u;
        goto label_1fdb44;
    }
    ctx->pc = 0x1FDB3Cu;
    {
        const bool branch_taken_0x1fdb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb3c) {
            ctx->pc = 0x1FDB4Cu;
            goto label_1fdb4c;
        }
    }
    ctx->pc = 0x1FDB44u;
label_1fdb44:
    // 0x1fdb44: 0x1000000d  b           . + 4 + (0xD << 2)
label_1fdb48:
    if (ctx->pc == 0x1FDB48u) {
        ctx->pc = 0x1FDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB44u;
        // 0x1fdb48: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB4Cu;
        goto label_1fdb4c;
    }
    ctx->pc = 0x1FDB44u;
    {
        const bool branch_taken_0x1fdb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB44u;
        // 0x1fdb48: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb44) {
            ctx->pc = 0x1FDB7Cu;
            goto label_1fdb7c;
        }
    }
    ctx->pc = 0x1FDB4Cu;
label_1fdb4c:
    // 0x1fdb4c: 0xc081710  jal         func_205C40
label_1fdb50:
    if (ctx->pc == 0x1FDB50u) {
        ctx->pc = 0x1FDB54u;
        goto label_1fdb54;
    }
    ctx->pc = 0x1FDB4Cu;
    SET_GPR_U32(ctx, 31, 0x1FDB54u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FDB4Cu, 0x1FDB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB54u;
label_1fdb54:
    // 0x1fdb54: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fdb54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1fdb58:
    // 0x1fdb58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fdb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb5c:
    // 0x1fdb5c: 0xc080616  jal         func_201858
label_1fdb60:
    if (ctx->pc == 0x1FDB60u) {
        ctx->pc = 0x1FDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB5Cu;
        // 0x1fdb60: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB64u;
        goto label_1fdb64;
    }
    ctx->pc = 0x1FDB5Cu;
    SET_GPR_U32(ctx, 31, 0x1FDB64u);
    ctx->pc = 0x1FDB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB5Cu;
    // 0x1fdb60: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201858u, 0x1FDB5Cu, 0x1FDB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB64u;
label_1fdb64:
    // 0x1fdb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fdb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb68:
    // 0x1fdb68: 0xc0817d4  jal         func_205F50
label_1fdb6c:
    if (ctx->pc == 0x1FDB6Cu) {
        ctx->pc = 0x1FDB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB68u;
        // 0x1fdb6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB70u;
        goto label_1fdb70;
    }
    ctx->pc = 0x1FDB68u;
    SET_GPR_U32(ctx, 31, 0x1FDB70u);
    ctx->pc = 0x1FDB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB68u;
    // 0x1fdb6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FDB68u, 0x1FDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB70u;
label_1fdb70:
    // 0x1fdb70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb74:
    // 0x1fdb74: 0xc081560  jal         func_205580
label_1fdb78:
    if (ctx->pc == 0x1FDB78u) {
        ctx->pc = 0x1FDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB74u;
        // 0x1fdb78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB7Cu;
        goto label_1fdb7c;
    }
    ctx->pc = 0x1FDB74u;
    SET_GPR_U32(ctx, 31, 0x1FDB7Cu);
    ctx->pc = 0x1FDB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB74u;
    // 0x1fdb78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1FDB74u, 0x1FDB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB7Cu;
label_1fdb7c:
    // 0x1fdb7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdb80:
    // 0x1fdb80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fdb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fdb84:
    // 0x1fdb84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fdb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fdb88:
    // 0x1fdb88: 0x3e00008  jr          $ra
label_1fdb8c:
    if (ctx->pc == 0x1FDB8Cu) {
        ctx->pc = 0x1FDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB88u;
        // 0x1fdb8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB90u;
        goto label_fallthrough_0x1fdb88;
    }
    ctx->pc = 0x1FDB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB88u;
        // 0x1fdb8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fdb88:
    ctx->pc = 0x1FDB90u;
}
