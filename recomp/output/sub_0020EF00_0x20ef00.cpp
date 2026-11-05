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

// Function: sub_0020EF00
// Address: 0x20ef00 - 0x20f048
void sub_0020EF00_0x20ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EF00_0x20ef00");
#endif

    switch (ctx->pc) {
        case 0x20ef00u: goto label_20ef00;
        case 0x20ef04u: goto label_20ef04;
        case 0x20ef08u: goto label_20ef08;
        case 0x20ef0cu: goto label_20ef0c;
        case 0x20ef10u: goto label_20ef10;
        case 0x20ef14u: goto label_20ef14;
        case 0x20ef18u: goto label_20ef18;
        case 0x20ef1cu: goto label_20ef1c;
        case 0x20ef20u: goto label_20ef20;
        case 0x20ef24u: goto label_20ef24;
        case 0x20ef28u: goto label_20ef28;
        case 0x20ef2cu: goto label_20ef2c;
        case 0x20ef30u: goto label_20ef30;
        case 0x20ef34u: goto label_20ef34;
        case 0x20ef38u: goto label_20ef38;
        case 0x20ef3cu: goto label_20ef3c;
        case 0x20ef40u: goto label_20ef40;
        case 0x20ef44u: goto label_20ef44;
        case 0x20ef48u: goto label_20ef48;
        case 0x20ef4cu: goto label_20ef4c;
        case 0x20ef50u: goto label_20ef50;
        case 0x20ef54u: goto label_20ef54;
        case 0x20ef58u: goto label_20ef58;
        case 0x20ef5cu: goto label_20ef5c;
        case 0x20ef60u: goto label_20ef60;
        case 0x20ef64u: goto label_20ef64;
        case 0x20ef68u: goto label_20ef68;
        case 0x20ef6cu: goto label_20ef6c;
        case 0x20ef70u: goto label_20ef70;
        case 0x20ef74u: goto label_20ef74;
        case 0x20ef78u: goto label_20ef78;
        case 0x20ef7cu: goto label_20ef7c;
        case 0x20ef80u: goto label_20ef80;
        case 0x20ef84u: goto label_20ef84;
        case 0x20ef88u: goto label_20ef88;
        case 0x20ef8cu: goto label_20ef8c;
        case 0x20ef90u: goto label_20ef90;
        case 0x20ef94u: goto label_20ef94;
        case 0x20ef98u: goto label_20ef98;
        case 0x20ef9cu: goto label_20ef9c;
        case 0x20efa0u: goto label_20efa0;
        case 0x20efa4u: goto label_20efa4;
        case 0x20efa8u: goto label_20efa8;
        case 0x20efacu: goto label_20efac;
        case 0x20efb0u: goto label_20efb0;
        case 0x20efb4u: goto label_20efb4;
        case 0x20efb8u: goto label_20efb8;
        case 0x20efbcu: goto label_20efbc;
        case 0x20efc0u: goto label_20efc0;
        case 0x20efc4u: goto label_20efc4;
        case 0x20efc8u: goto label_20efc8;
        case 0x20efccu: goto label_20efcc;
        case 0x20efd0u: goto label_20efd0;
        case 0x20efd4u: goto label_20efd4;
        case 0x20efd8u: goto label_20efd8;
        case 0x20efdcu: goto label_20efdc;
        case 0x20efe0u: goto label_20efe0;
        case 0x20efe4u: goto label_20efe4;
        case 0x20efe8u: goto label_20efe8;
        case 0x20efecu: goto label_20efec;
        case 0x20eff0u: goto label_20eff0;
        case 0x20eff4u: goto label_20eff4;
        case 0x20eff8u: goto label_20eff8;
        case 0x20effcu: goto label_20effc;
        case 0x20f000u: goto label_20f000;
        case 0x20f004u: goto label_20f004;
        case 0x20f008u: goto label_20f008;
        case 0x20f00cu: goto label_20f00c;
        case 0x20f010u: goto label_20f010;
        case 0x20f014u: goto label_20f014;
        case 0x20f018u: goto label_20f018;
        case 0x20f01cu: goto label_20f01c;
        case 0x20f020u: goto label_20f020;
        case 0x20f024u: goto label_20f024;
        case 0x20f028u: goto label_20f028;
        case 0x20f02cu: goto label_20f02c;
        case 0x20f030u: goto label_20f030;
        case 0x20f034u: goto label_20f034;
        case 0x20f038u: goto label_20f038;
        case 0x20f03cu: goto label_20f03c;
        case 0x20f040u: goto label_20f040;
        case 0x20f044u: goto label_20f044;
        default: break;
    }

    ctx->pc = 0x20ef00u;

label_20ef00:
    // 0x20ef00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20ef04:
    // 0x20ef04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_20ef08:
    // 0x20ef08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_20ef0c:
    // 0x20ef0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20ef0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ef10:
    // 0x20ef10: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x20ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_20ef14:
    // 0x20ef14: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x20ef14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_20ef18:
    // 0x20ef18: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_20ef1c:
    if (ctx->pc == 0x20EF1Cu) {
        ctx->pc = 0x20EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF18u;
        // 0x20ef1c: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF20u;
        goto label_20ef20;
    }
    ctx->pc = 0x20EF18u;
    {
        const bool branch_taken_0x20ef18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ef18) {
            ctx->pc = 0x20EF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EF18u;
            // 0x20ef1c: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EFE0u;
            goto label_20efe0;
        }
    }
    ctx->pc = 0x20EF20u;
label_20ef20:
    // 0x20ef20: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x20ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_20ef24:
    // 0x20ef24: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
label_20ef28:
    if (ctx->pc == 0x20EF28u) {
        ctx->pc = 0x20EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF24u;
        // 0x20ef28: 0x8e06011c  lw          $a2, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF2Cu;
        goto label_20ef2c;
    }
    ctx->pc = 0x20EF24u;
    {
        const bool branch_taken_0x20ef24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ef24) {
            ctx->pc = 0x20EF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EF24u;
            // 0x20ef28: 0x8e06011c  lw          $a2, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EF84u;
            goto label_20ef84;
        }
    }
    ctx->pc = 0x20EF2Cu;
label_20ef2c:
    // 0x20ef2c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x20ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_20ef30:
    // 0x20ef30: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_20ef34:
    if (ctx->pc == 0x20EF34u) {
        ctx->pc = 0x20EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF30u;
        // 0x20ef34: 0x8e06011c  lw          $a2, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF38u;
        goto label_20ef38;
    }
    ctx->pc = 0x20EF30u;
    {
        const bool branch_taken_0x20ef30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ef30) {
            ctx->pc = 0x20EF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EF30u;
            // 0x20ef34: 0x8e06011c  lw          $a2, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EF84u;
            goto label_20ef84;
        }
    }
    ctx->pc = 0x20EF38u;
label_20ef38:
    // 0x20ef38: 0x90420032  lbu         $v0, 0x32($v0)
    ctx->pc = 0x20ef38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
label_20ef3c:
    // 0x20ef3c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_20ef40:
    if (ctx->pc == 0x20EF40u) {
        ctx->pc = 0x20EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF3Cu;
        // 0x20ef40: 0x8e06011c  lw          $a2, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF44u;
        goto label_20ef44;
    }
    ctx->pc = 0x20EF3Cu;
    {
        const bool branch_taken_0x20ef3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ef3c) {
            ctx->pc = 0x20EF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EF3Cu;
            // 0x20ef40: 0x8e06011c  lw          $a2, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EF84u;
            goto label_20ef84;
        }
    }
    ctx->pc = 0x20EF44u;
label_20ef44:
    // 0x20ef44: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x20ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_20ef48:
    // 0x20ef48: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x20ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_20ef4c:
    // 0x20ef4c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x20ef4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_20ef50:
    // 0x20ef50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20ef54:
    // 0x20ef54: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_20ef58:
    if (ctx->pc == 0x20EF58u) {
        ctx->pc = 0x20EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF54u;
        // 0x20ef58: 0x8e06011c  lw          $a2, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF5Cu;
        goto label_20ef5c;
    }
    ctx->pc = 0x20EF54u;
    {
        const bool branch_taken_0x20ef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20ef54) {
            ctx->pc = 0x20EF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EF54u;
            // 0x20ef58: 0x8e06011c  lw          $a2, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EF84u;
            goto label_20ef84;
        }
    }
    ctx->pc = 0x20EF5Cu;
label_20ef5c:
    // 0x20ef5c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20ef60:
    // 0x20ef60: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x20ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_20ef64:
    // 0x20ef64: 0x40f809  jalr        $v0
label_20ef68:
    if (ctx->pc == 0x20EF68u) {
        ctx->pc = 0x20EF6Cu;
        goto label_20ef6c;
    }
    ctx->pc = 0x20EF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20EF6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EF64u, 0x20EF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EF6Cu;
label_20ef6c:
    // 0x20ef6c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x20ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_20ef70:
    // 0x20ef70: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20ef74:
    // 0x20ef74: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x20ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_20ef78:
    // 0x20ef78: 0x40f809  jalr        $v0
label_20ef7c:
    if (ctx->pc == 0x20EF7Cu) {
        ctx->pc = 0x20EF80u;
        goto label_20ef80;
    }
    ctx->pc = 0x20EF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20EF80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EF78u, 0x20EF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EF80u;
label_20ef80:
    // 0x20ef80: 0x8e06011c  lw          $a2, 0x11C($s0)
    ctx->pc = 0x20ef80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_20ef84:
    // 0x20ef84: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x20ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_20ef88:
    // 0x20ef88: 0x24443510  addiu       $a0, $v0, 0x3510
    ctx->pc = 0x20ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
label_20ef8c:
    // 0x20ef8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_20ef90:
    // 0x20ef90: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_20ef94:
    // 0x20ef94: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x20ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_20ef98:
    // 0x20ef98: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_20ef9c:
    if (ctx->pc == 0x20EF9Cu) {
        ctx->pc = 0x20EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF98u;
        // 0x20ef9c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFA0u;
        goto label_20efa0;
    }
    ctx->pc = 0x20EF98u;
    {
        const bool branch_taken_0x20ef98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF98u;
        // 0x20ef9c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef98) {
            ctx->pc = 0x20EFBCu;
            goto label_20efbc;
        }
    }
    ctx->pc = 0x20EFA0u;
label_20efa0:
    // 0x20efa0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x20efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_20efa4:
    // 0x20efa4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x20efa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20efa8:
    // 0x20efa8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x20efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_20efac:
    // 0x20efac: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x20efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_20efb0:
    // 0x20efb0: 0xc0f6e9c  jal         func_3DBA70
label_20efb4:
    if (ctx->pc == 0x20EFB4u) {
        ctx->pc = 0x20EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFB0u;
        // 0x20efb4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFB8u;
        goto label_20efb8;
    }
    ctx->pc = 0x20EFB0u;
    SET_GPR_U32(ctx, 31, 0x20EFB8u);
    ctx->pc = 0x20EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EFB0u;
    // 0x20efb4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x20EFB0u, 0x20EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFB8u;
label_20efb8:
    // 0x20efb8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x20efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_20efbc:
    // 0x20efbc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_20efc0:
    // 0x20efc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20efc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20efc4:
    // 0x20efc4: 0xc0f7676  jal         func_3DD9D8
label_20efc8:
    if (ctx->pc == 0x20EFC8u) {
        ctx->pc = 0x20EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFC4u;
        // 0x20efc8: 0x24843500  addiu       $a0, $a0, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFCCu;
        goto label_20efcc;
    }
    ctx->pc = 0x20EFC4u;
    SET_GPR_U32(ctx, 31, 0x20EFCCu);
    ctx->pc = 0x20EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EFC4u;
    // 0x20efc8: 0x24843500  addiu       $a0, $a0, 0x3500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x20EFC4u, 0x20EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFCCu;
label_20efcc:
    // 0x20efcc: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x20efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_20efd0:
    // 0x20efd0: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x20efd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_20efd4:
    // 0x20efd4: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x20efd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_20efd8:
    // 0x20efd8: 0x10000016  b           . + 4 + (0x16 << 2)
label_20efdc:
    if (ctx->pc == 0x20EFDCu) {
        ctx->pc = 0x20EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFD8u;
        // 0x20efdc: 0xae0300c0  sw          $v1, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFE0u;
        goto label_20efe0;
    }
    ctx->pc = 0x20EFD8u;
    {
        const bool branch_taken_0x20efd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFD8u;
        // 0x20efdc: 0xae0300c0  sw          $v1, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efd8) {
            ctx->pc = 0x20F034u;
            goto label_20f034;
        }
    }
    ctx->pc = 0x20EFE0u;
label_20efe0:
    // 0x20efe0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_20efe4:
    if (ctx->pc == 0x20EFE4u) {
        ctx->pc = 0x20EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFE0u;
        // 0x20efe4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFE8u;
        goto label_20efe8;
    }
    ctx->pc = 0x20EFE0u;
    {
        const bool branch_taken_0x20efe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20efe0) {
            ctx->pc = 0x20EFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EFE0u;
            // 0x20efe4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F038u;
            goto label_20f038;
        }
    }
    ctx->pc = 0x20EFE8u;
label_20efe8:
    // 0x20efe8: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x20efe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_20efec:
    // 0x20efec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_20eff0:
    if (ctx->pc == 0x20EFF0u) {
        ctx->pc = 0x20EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFECu;
        // 0x20eff0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFF4u;
        goto label_20eff4;
    }
    ctx->pc = 0x20EFECu;
    {
        const bool branch_taken_0x20efec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20efec) {
            ctx->pc = 0x20EFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EFECu;
            // 0x20eff0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F038u;
            goto label_20f038;
        }
    }
    ctx->pc = 0x20EFF4u;
label_20eff4:
    // 0x20eff4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x20eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_20eff8:
    // 0x20eff8: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x20eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_20effc:
    // 0x20effc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f000:
    // 0x20f000: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x20f000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_20f004:
    // 0x20f004: 0x5483000c  bnel        $a0, $v1, . + 4 + (0xC << 2)
label_20f008:
    if (ctx->pc == 0x20F008u) {
        ctx->pc = 0x20F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F004u;
        // 0x20f008: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F00Cu;
        goto label_20f00c;
    }
    ctx->pc = 0x20F004u;
    {
        const bool branch_taken_0x20f004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20f004) {
            ctx->pc = 0x20F008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F004u;
            // 0x20f008: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F038u;
            goto label_20f038;
        }
    }
    ctx->pc = 0x20F00Cu;
label_20f00c:
    // 0x20f00c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x20f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_20f010:
    // 0x20f010: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_20f014:
    if (ctx->pc == 0x20F014u) {
        ctx->pc = 0x20F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F010u;
        // 0x20f014: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F018u;
        goto label_20f018;
    }
    ctx->pc = 0x20F010u;
    {
        const bool branch_taken_0x20f010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F010u;
        // 0x20f014: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f010) {
            ctx->pc = 0x20F038u;
            goto label_20f038;
        }
    }
    ctx->pc = 0x20F018u;
label_20f018:
    // 0x20f018: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x20f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_20f01c:
    // 0x20f01c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_20f020:
    if (ctx->pc == 0x20F020u) {
        ctx->pc = 0x20F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F01Cu;
        // 0x20f020: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F024u;
        goto label_20f024;
    }
    ctx->pc = 0x20F01Cu;
    {
        const bool branch_taken_0x20f01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F01Cu;
        // 0x20f020: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f01c) {
            ctx->pc = 0x20F03Cu;
            goto label_20f03c;
        }
    }
    ctx->pc = 0x20F024u;
label_20f024:
    // 0x20f024: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f028:
    // 0x20f028: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x20f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_20f02c:
    // 0x20f02c: 0x40f809  jalr        $v0
label_20f030:
    if (ctx->pc == 0x20F030u) {
        ctx->pc = 0x20F034u;
        goto label_20f034;
    }
    ctx->pc = 0x20F02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F034u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F02Cu, 0x20F034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F034u;
label_20f034:
    // 0x20f034: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20f038:
    // 0x20f038: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20f038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20f03c:
    // 0x20f03c: 0x3e00008  jr          $ra
label_20f040:
    if (ctx->pc == 0x20F040u) {
        ctx->pc = 0x20F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F03Cu;
        // 0x20f040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F044u;
        goto label_20f044;
    }
    ctx->pc = 0x20F03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F03Cu;
        // 0x20f040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F044u;
label_20f044:
    // 0x20f044: 0x0  nop
    ctx->pc = 0x20f044u;
    // NOP
    ctx->pc = 0x20f048u;
}
