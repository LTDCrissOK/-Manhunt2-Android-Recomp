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

// Function: sub_0039DB88
// Address: 0x39db88 - 0x39dcf8
void sub_0039DB88_0x39db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DB88_0x39db88");
#endif

    switch (ctx->pc) {
        case 0x39db88u: goto label_39db88;
        case 0x39db8cu: goto label_39db8c;
        case 0x39db90u: goto label_39db90;
        case 0x39db94u: goto label_39db94;
        case 0x39db98u: goto label_39db98;
        case 0x39db9cu: goto label_39db9c;
        case 0x39dba0u: goto label_39dba0;
        case 0x39dba4u: goto label_39dba4;
        case 0x39dba8u: goto label_39dba8;
        case 0x39dbacu: goto label_39dbac;
        case 0x39dbb0u: goto label_39dbb0;
        case 0x39dbb4u: goto label_39dbb4;
        case 0x39dbb8u: goto label_39dbb8;
        case 0x39dbbcu: goto label_39dbbc;
        case 0x39dbc0u: goto label_39dbc0;
        case 0x39dbc4u: goto label_39dbc4;
        case 0x39dbc8u: goto label_39dbc8;
        case 0x39dbccu: goto label_39dbcc;
        case 0x39dbd0u: goto label_39dbd0;
        case 0x39dbd4u: goto label_39dbd4;
        case 0x39dbd8u: goto label_39dbd8;
        case 0x39dbdcu: goto label_39dbdc;
        case 0x39dbe0u: goto label_39dbe0;
        case 0x39dbe4u: goto label_39dbe4;
        case 0x39dbe8u: goto label_39dbe8;
        case 0x39dbecu: goto label_39dbec;
        case 0x39dbf0u: goto label_39dbf0;
        case 0x39dbf4u: goto label_39dbf4;
        case 0x39dbf8u: goto label_39dbf8;
        case 0x39dbfcu: goto label_39dbfc;
        case 0x39dc00u: goto label_39dc00;
        case 0x39dc04u: goto label_39dc04;
        case 0x39dc08u: goto label_39dc08;
        case 0x39dc0cu: goto label_39dc0c;
        case 0x39dc10u: goto label_39dc10;
        case 0x39dc14u: goto label_39dc14;
        case 0x39dc18u: goto label_39dc18;
        case 0x39dc1cu: goto label_39dc1c;
        case 0x39dc20u: goto label_39dc20;
        case 0x39dc24u: goto label_39dc24;
        case 0x39dc28u: goto label_39dc28;
        case 0x39dc2cu: goto label_39dc2c;
        case 0x39dc30u: goto label_39dc30;
        case 0x39dc34u: goto label_39dc34;
        case 0x39dc38u: goto label_39dc38;
        case 0x39dc3cu: goto label_39dc3c;
        case 0x39dc40u: goto label_39dc40;
        case 0x39dc44u: goto label_39dc44;
        case 0x39dc48u: goto label_39dc48;
        case 0x39dc4cu: goto label_39dc4c;
        case 0x39dc50u: goto label_39dc50;
        case 0x39dc54u: goto label_39dc54;
        case 0x39dc58u: goto label_39dc58;
        case 0x39dc5cu: goto label_39dc5c;
        case 0x39dc60u: goto label_39dc60;
        case 0x39dc64u: goto label_39dc64;
        case 0x39dc68u: goto label_39dc68;
        case 0x39dc6cu: goto label_39dc6c;
        case 0x39dc70u: goto label_39dc70;
        case 0x39dc74u: goto label_39dc74;
        case 0x39dc78u: goto label_39dc78;
        case 0x39dc7cu: goto label_39dc7c;
        case 0x39dc80u: goto label_39dc80;
        case 0x39dc84u: goto label_39dc84;
        case 0x39dc88u: goto label_39dc88;
        case 0x39dc8cu: goto label_39dc8c;
        case 0x39dc90u: goto label_39dc90;
        case 0x39dc94u: goto label_39dc94;
        case 0x39dc98u: goto label_39dc98;
        case 0x39dc9cu: goto label_39dc9c;
        case 0x39dca0u: goto label_39dca0;
        case 0x39dca4u: goto label_39dca4;
        case 0x39dca8u: goto label_39dca8;
        case 0x39dcacu: goto label_39dcac;
        case 0x39dcb0u: goto label_39dcb0;
        case 0x39dcb4u: goto label_39dcb4;
        case 0x39dcb8u: goto label_39dcb8;
        case 0x39dcbcu: goto label_39dcbc;
        case 0x39dcc0u: goto label_39dcc0;
        case 0x39dcc4u: goto label_39dcc4;
        case 0x39dcc8u: goto label_39dcc8;
        case 0x39dcccu: goto label_39dccc;
        case 0x39dcd0u: goto label_39dcd0;
        case 0x39dcd4u: goto label_39dcd4;
        case 0x39dcd8u: goto label_39dcd8;
        case 0x39dcdcu: goto label_39dcdc;
        case 0x39dce0u: goto label_39dce0;
        case 0x39dce4u: goto label_39dce4;
        case 0x39dce8u: goto label_39dce8;
        case 0x39dcecu: goto label_39dcec;
        case 0x39dcf0u: goto label_39dcf0;
        case 0x39dcf4u: goto label_39dcf4;
        default: break;
    }

    ctx->pc = 0x39db88u;

label_39db88:
    // 0x39db88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39db88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39db8c:
    // 0x39db8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_39db90:
    // 0x39db90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39db90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39db94:
    // 0x39db94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39db94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_39db98:
    // 0x39db98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x39db98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_39db9c:
    // 0x39db9c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x39db9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_39dba0:
    // 0x39dba0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x39dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_39dba4:
    // 0x39dba4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x39dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_39dba8:
    // 0x39dba8: 0x8242006c  lb          $v0, 0x6C($s2)
    ctx->pc = 0x39dba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 108)));
label_39dbac:
    // 0x39dbac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_39dbb0:
    if (ctx->pc == 0x39DBB0u) {
        ctx->pc = 0x39DBB4u;
        goto label_39dbb4;
    }
    ctx->pc = 0x39DBACu;
    {
        const bool branch_taken_0x39dbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39dbac) {
            ctx->pc = 0x39DBE4u;
            goto label_39dbe4;
        }
    }
    ctx->pc = 0x39DBB4u;
label_39dbb4:
    // 0x39dbb4: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x39dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_39dbb8:
    // 0x39dbb8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_39dbbc:
    if (ctx->pc == 0x39DBBCu) {
        ctx->pc = 0x39DBC0u;
        goto label_39dbc0;
    }
    ctx->pc = 0x39DBB8u;
    {
        const bool branch_taken_0x39dbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dbb8) {
            ctx->pc = 0x39DBE4u;
            goto label_39dbe4;
        }
    }
    ctx->pc = 0x39DBC0u;
label_39dbc0:
    // 0x39dbc0: 0xc0e6434  jal         func_3990D0
label_39dbc4:
    if (ctx->pc == 0x39DBC4u) {
        ctx->pc = 0x39DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBC0u;
        // 0x39dbc4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DBC8u;
        goto label_39dbc8;
    }
    ctx->pc = 0x39DBC0u;
    SET_GPR_U32(ctx, 31, 0x39DBC8u);
    ctx->pc = 0x39DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DBC0u;
    // 0x39dbc4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3990D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3990D0u, 0x39DBC0u, 0x39DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DBC8u;
label_39dbc8:
    // 0x39dbc8: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x39dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_39dbcc:
    // 0x39dbcc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39dbccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39dbd0:
    // 0x39dbd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_39dbd4:
    if (ctx->pc == 0x39DBD4u) {
        ctx->pc = 0x39DBD8u;
        goto label_39dbd8;
    }
    ctx->pc = 0x39DBD0u;
    {
        const bool branch_taken_0x39dbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39dbd0) {
            ctx->pc = 0x39DBE4u;
            goto label_39dbe4;
        }
    }
    ctx->pc = 0x39DBD8u;
label_39dbd8:
    // 0x39dbd8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x39dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_39dbdc:
    // 0x39dbdc: 0xc0e6446  jal         func_399118
label_39dbe0:
    if (ctx->pc == 0x39DBE0u) {
        ctx->pc = 0x39DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBDCu;
        // 0x39dbe0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DBE4u;
        goto label_39dbe4;
    }
    ctx->pc = 0x39DBDCu;
    SET_GPR_U32(ctx, 31, 0x39DBE4u);
    ctx->pc = 0x39DBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DBDCu;
    // 0x39dbe0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399118u, 0x39DBDCu, 0x39DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DBE4u;
label_39dbe4:
    // 0x39dbe4: 0xc0e6032  jal         func_3980C8
label_39dbe8:
    if (ctx->pc == 0x39DBE8u) {
        ctx->pc = 0x39DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBE4u;
        // 0x39dbe8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DBECu;
        goto label_39dbec;
    }
    ctx->pc = 0x39DBE4u;
    SET_GPR_U32(ctx, 31, 0x39DBECu);
    ctx->pc = 0x39DBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DBE4u;
    // 0x39dbe8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3980C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3980C8u, 0x39DBE4u, 0x39DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DBECu;
label_39dbec:
    // 0x39dbec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39dbf0:
    // 0x39dbf0: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
label_39dbf4:
    if (ctx->pc == 0x39DBF4u) {
        ctx->pc = 0x39DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBF0u;
        // 0x39dbf4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DBF8u;
        goto label_39dbf8;
    }
    ctx->pc = 0x39DBF0u;
    {
        const bool branch_taken_0x39dbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBF0u;
        // 0x39dbf4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dbf0) {
            ctx->pc = 0x39DCD8u;
            goto label_39dcd8;
        }
    }
    ctx->pc = 0x39DBF8u;
label_39dbf8:
    // 0x39dbf8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x39dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_39dbfc:
    // 0x39dbfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39dbfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dc00:
    // 0x39dc00: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x39dc00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_39dc04:
    // 0x39dc04: 0xc0e6458  jal         func_399160
label_39dc08:
    if (ctx->pc == 0x39DC08u) {
        ctx->pc = 0x39DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC04u;
        // 0x39dc08: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC0Cu;
        goto label_39dc0c;
    }
    ctx->pc = 0x39DC04u;
    SET_GPR_U32(ctx, 31, 0x39DC0Cu);
    ctx->pc = 0x39DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DC04u;
    // 0x39dc08: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399160u, 0x39DC04u, 0x39DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DC0Cu;
label_39dc0c:
    // 0x39dc0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39dc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39dc10:
    // 0x39dc10: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_39dc14:
    // 0x39dc14: 0x10000003  b           . + 4 + (0x3 << 2)
label_39dc18:
    if (ctx->pc == 0x39DC18u) {
        ctx->pc = 0x39DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC14u;
        // 0x39dc18: 0xac50ade0  sw          $s0, -0x5220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946272), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC1Cu;
        goto label_39dc1c;
    }
    ctx->pc = 0x39DC14u;
    {
        const bool branch_taken_0x39dc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC14u;
        // 0x39dc18: 0xac50ade0  sw          $s0, -0x5220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946272), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc14) {
            ctx->pc = 0x39DC24u;
            goto label_39dc24;
        }
    }
    ctx->pc = 0x39DC1Cu;
label_39dc1c:
    // 0x39dc1c: 0x0  nop
    ctx->pc = 0x39dc1cu;
    // NOP
label_39dc20:
    // 0x39dc20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39dc20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39dc24:
    // 0x39dc24: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x39dc24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_39dc28:
    // 0x39dc28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_39dc2c:
    if (ctx->pc == 0x39DC2Cu) {
        ctx->pc = 0x39DC30u;
        goto label_39dc30;
    }
    ctx->pc = 0x39DC28u;
    {
        const bool branch_taken_0x39dc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dc28) {
            ctx->pc = 0x39DC54u;
            goto label_39dc54;
        }
    }
    ctx->pc = 0x39DC30u;
label_39dc30:
    // 0x39dc30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x39dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39dc34:
    // 0x39dc34: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x39dc34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_39dc38:
    // 0x39dc38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39dc3c:
    // 0x39dc3c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_39dc40:
    // 0x39dc40: 0x40f809  jalr        $v0
label_39dc44:
    if (ctx->pc == 0x39DC44u) {
        ctx->pc = 0x39DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC40u;
        // 0x39dc44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC48u;
        goto label_39dc48;
    }
    ctx->pc = 0x39DC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DC48u);
        ctx->pc = 0x39DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC40u;
        // 0x39dc44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DC40u, 0x39DC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DC48u;
label_39dc48:
    // 0x39dc48: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x39dc48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_39dc4c:
    // 0x39dc4c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_39dc50:
    if (ctx->pc == 0x39DC50u) {
        ctx->pc = 0x39DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC4Cu;
        // 0x39dc50: 0xae82ade4  sw          $v0, -0x521C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294946276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC54u;
        goto label_39dc54;
    }
    ctx->pc = 0x39DC4Cu;
    {
        const bool branch_taken_0x39dc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC4Cu;
        // 0x39dc50: 0xae82ade4  sw          $v0, -0x521C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294946276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc4c) {
            ctx->pc = 0x39DC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dc20;
        }
    }
    ctx->pc = 0x39DC54u;
label_39dc54:
    // 0x39dc54: 0x56700020  bnel        $s3, $s0, . + 4 + (0x20 << 2)
label_39dc58:
    if (ctx->pc == 0x39DC58u) {
        ctx->pc = 0x39DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC54u;
        // 0x39dc58: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC5Cu;
        goto label_39dc5c;
    }
    ctx->pc = 0x39DC54u;
    {
        const bool branch_taken_0x39dc54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x39dc54) {
            ctx->pc = 0x39DC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DC54u;
            // 0x39dc58: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DCD8u;
            goto label_39dcd8;
        }
    }
    ctx->pc = 0x39DC5Cu;
label_39dc5c:
    // 0x39dc5c: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_39dc60:
    if (ctx->pc == 0x39DC60u) {
        ctx->pc = 0x39DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC5Cu;
        // 0x39dc60: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC64u;
        goto label_39dc64;
    }
    ctx->pc = 0x39DC5Cu;
    {
        const bool branch_taken_0x39dc5c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x39DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC5Cu;
        // 0x39dc60: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc5c) {
            ctx->pc = 0x39DCD0u;
            goto label_39dcd0;
        }
    }
    ctx->pc = 0x39DC64u;
label_39dc64:
    // 0x39dc64: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x39dc64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39dc68:
    // 0x39dc68: 0x26500018  addiu       $s0, $s2, 0x18
    ctx->pc = 0x39dc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_39dc6c:
    // 0x39dc6c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x39dc6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_39dc70:
    // 0x39dc70: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x39dc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_39dc74:
    // 0x39dc74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39dc78:
    // 0x39dc78: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x39dc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39dc7c:
    // 0x39dc7c: 0x8e86ade4  lw          $a2, -0x521C($s4)
    ctx->pc = 0x39dc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946276)));
label_39dc80:
    // 0x39dc80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39dc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dc84:
    // 0x39dc84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39dc88:
    // 0x39dc88: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x39dc88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_39dc8c:
    // 0x39dc8c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x39dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39dc90:
    // 0x39dc90: 0x40f809  jalr        $v0
label_39dc94:
    if (ctx->pc == 0x39DC94u) {
        ctx->pc = 0x39DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC90u;
        // 0x39dc94: 0x2263023  subu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DC98u;
        goto label_39dc98;
    }
    ctx->pc = 0x39DC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DC98u);
        ctx->pc = 0x39DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC90u;
        // 0x39dc94: 0x2263023  subu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DC90u, 0x39DC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DC98u;
label_39dc98:
    // 0x39dc98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39dc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dc9c:
    // 0x39dc9c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39dc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39dca0:
    // 0x39dca0: 0xc0efab3  jal         func_3BEACC
label_39dca4:
    if (ctx->pc == 0x39DCA4u) {
        ctx->pc = 0x39DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCA0u;
        // 0x39dca4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCA8u;
        goto label_39dca8;
    }
    ctx->pc = 0x39DCA0u;
    SET_GPR_U32(ctx, 31, 0x39DCA8u);
    ctx->pc = 0x39DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DCA0u;
    // 0x39dca4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39DCA0u, 0x39DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DCA8u;
label_39dca8:
    // 0x39dca8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39dcac:
    // 0x39dcac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39dcb0:
    // 0x39dcb0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x39dcb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39dcb4:
    // 0x39dcb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39dcb8:
    // 0x39dcb8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_39dcbc:
    // 0x39dcbc: 0x40f809  jalr        $v0
label_39dcc0:
    if (ctx->pc == 0x39DCC0u) {
        ctx->pc = 0x39DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCBCu;
        // 0x39dcc0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCC4u;
        goto label_39dcc4;
    }
    ctx->pc = 0x39DCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39DCC4u);
        ctx->pc = 0x39DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCBCu;
        // 0x39dcc0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DCBCu, 0x39DCC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39DCC4u;
label_39dcc4:
    // 0x39dcc4: 0x5660ffec  bnel        $s3, $zero, . + 4 + (-0x14 << 2)
label_39dcc8:
    if (ctx->pc == 0x39DCC8u) {
        ctx->pc = 0x39DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCC4u;
        // 0x39dcc8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCCCu;
        goto label_39dccc;
    }
    ctx->pc = 0x39DCC4u;
    {
        const bool branch_taken_0x39dcc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x39dcc4) {
            ctx->pc = 0x39DCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DCC4u;
            // 0x39dcc8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dc78;
        }
    }
    ctx->pc = 0x39DCCCu;
label_39dccc:
    // 0x39dccc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39dcd0:
    // 0x39dcd0: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x39dcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_39dcd4:
    // 0x39dcd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39dcd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39dcd8:
    // 0x39dcd8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x39dcd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39dcdc:
    // 0x39dcdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39dcdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39dce0:
    // 0x39dce0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x39dce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_39dce4:
    // 0x39dce4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x39dce4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39dce8:
    // 0x39dce8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x39dce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_39dcec:
    // 0x39dcec: 0x3e00008  jr          $ra
label_39dcf0:
    if (ctx->pc == 0x39DCF0u) {
        ctx->pc = 0x39DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCECu;
        // 0x39dcf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39DCF4u;
        goto label_39dcf4;
    }
    ctx->pc = 0x39DCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCECu;
        // 0x39dcf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DCF4u;
label_39dcf4:
    // 0x39dcf4: 0x0  nop
    ctx->pc = 0x39dcf4u;
    // NOP
    ctx->pc = 0x39dcf8u;
}
