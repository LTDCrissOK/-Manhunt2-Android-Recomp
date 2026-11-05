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

// Function: sub_002CDB10
// Address: 0x2cdb10 - 0x2cdc50
void sub_002CDB10_0x2cdb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDB10_0x2cdb10");
#endif

    switch (ctx->pc) {
        case 0x2cdb90u: goto label_2cdb90;
        case 0x2cdbd0u: goto label_2cdbd0;
        case 0x2cdbf4u: goto label_2cdbf4;
        case 0x2cdc08u: goto label_2cdc08;
        case 0x2cdc20u: goto label_2cdc20;
        default: break;
    }

    ctx->pc = 0x2cdb10u;

    // 0x2cdb10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cdb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cdb14: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2cdb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2cdb18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cdb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cdb1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cdb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cdb20: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2cdb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2cdb24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cdb24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb28: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2cdb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2cdb2c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2cdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2cdb30: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2cdb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2cdb34: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2cdb34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb38: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cdb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cdb3c: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x2cdb3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
    // 0x2cdb40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2cdb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2cdb44: 0x36942f80  ori         $s4, $s4, 0x2F80
    ctx->pc = 0x2cdb44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)12160);
    // 0x2cdb48: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2cdb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2cdb4c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2cdb4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2cdb50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cdb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cdb54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cdb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb58: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2cdb58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cdb5c: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x2cdb5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2cdb60: 0x8eb30008  lw          $s3, 0x8($s5)
    ctx->pc = 0x2cdb60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2cdb64: 0x37a8000c  ori         $t0, $sp, 0xC
    ctx->pc = 0x2cdb64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x2cdb68: 0x8eb1000c  lw          $s1, 0xC($s5)
    ctx->pc = 0x2cdb68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2cdb6c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x2cdb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2cdb70: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x2cdb70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2cdb74: 0x8c64b4a8  lw          $a0, -0x4B58($v1)
    ctx->pc = 0x2cdb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948008)));
    // 0x2cdb78: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2cdb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2cdb7c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2cdb7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb80: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x2cdb80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x2cdb84: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2cdb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2cdb88: 0xc0b3f0e  jal         func_2CFC38
    ctx->pc = 0x2CDB88u;
    SET_GPR_U32(ctx, 31, 0x2CDB90u);
    ctx->pc = 0x2CDB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB88u;
    // 0x2cdb8c: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC38u, 0x2CDB88u, 0x2CDB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB90u;
label_2cdb90:
    // 0x2cdb90: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2cdb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdb94: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2cdb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2cdb98: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2cdb98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cdb9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cdb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cdba0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2cdba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2cdba4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2cdba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2cdba8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2cdba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2cdbac: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2cdbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cdbb0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2cdbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2cdbb4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2cdbb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdbb8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2cdbb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2cdbbc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cdbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cdbc0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2cdbc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdbc4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2cdbc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdbc8: 0xc0b374e  jal         func_2CDD38
    ctx->pc = 0x2CDBC8u;
    SET_GPR_U32(ctx, 31, 0x2CDBD0u);
    ctx->pc = 0x2CDBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDBC8u;
    // 0x2cdbcc: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD38u, 0x2CDBC8u, 0x2CDBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDBD0u;
label_2cdbd0:
    // 0x2cdbd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cdbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdbd4: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDBD4u;
    {
        const bool branch_taken_0x2cdbd4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2CDBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBD4u;
        // 0x2cdbd8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbd4) {
            ctx->pc = 0x2CDC08u;
            goto label_2cdc08;
        }
    }
    ctx->pc = 0x2CDBDCu;
    // 0x2cdbdc: 0x8ec4b4a8  lw          $a0, -0x4B58($s6)
    ctx->pc = 0x2cdbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948008)));
    // 0x2cdbe0: 0xdea60018  ld          $a2, 0x18($s5)
    ctx->pc = 0x2cdbe0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2cdbe4: 0xdea50010  ld          $a1, 0x10($s5)
    ctx->pc = 0x2cdbe4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2cdbe8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2cdbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2cdbec: 0xc0b3f36  jal         func_2CFCD8
    ctx->pc = 0x2CDBECu;
    SET_GPR_U32(ctx, 31, 0x2CDBF4u);
    ctx->pc = 0x2CDBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDBECu;
    // 0x2cdbf0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCD8u, 0x2CDBECu, 0x2CDBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDBF4u;
label_2cdbf4:
    // 0x2cdbf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDBF4u;
    {
        const bool branch_taken_0x2cdbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBF4u;
        // 0x2cdbf8: 0x8ec2b4a8  lw          $v0, -0x4B58($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbf4) {
            ctx->pc = 0x2CDC0Cu;
            goto label_2cdc0c;
        }
    }
    ctx->pc = 0x2CDBFCu;
    // 0x2cdbfc: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x2cdbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x2cdc00: 0xc0b365e  jal         func_2CD978
    ctx->pc = 0x2CDC00u;
    SET_GPR_U32(ctx, 31, 0x2CDC08u);
    ctx->pc = 0x2CDC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC00u;
    // 0x2cdc04: 0x24840a58  addiu       $a0, $a0, 0xA58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD978u, 0x2CDC00u, 0x2CDC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC08u;
label_2cdc08:
    // 0x2cdc08: 0x8ec2b4a8  lw          $v0, -0x4B58($s6)
    ctx->pc = 0x2cdc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948008)));
label_2cdc0c:
    // 0x2cdc0c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cdc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cdc10: 0x34842f80  ori         $a0, $a0, 0x2F80
    ctx->pc = 0x2cdc10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12160);
    // 0x2cdc14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cdc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc18: 0xc0b3f16  jal         func_2CFC58
    ctx->pc = 0x2CDC18u;
    SET_GPR_U32(ctx, 31, 0x2CDC20u);
    ctx->pc = 0x2CDC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC18u;
    // 0x2cdc1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC58u, 0x2CDC18u, 0x2CDC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC20u;
label_2cdc20:
    // 0x2cdc20: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x2cdc20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2cdc24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cdc24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdc28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cdc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdc2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cdc2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdc30: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2cdc30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cdc34: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2cdc34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cdc38: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2cdc38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cdc3c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2cdc3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cdc40: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2cdc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cdc44: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC44u;
        // 0x2cdc48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDC4Cu;
    // 0x2cdc4c: 0x0  nop
    ctx->pc = 0x2cdc4cu;
    // NOP
    ctx->pc = 0x2cdc50u;
}
