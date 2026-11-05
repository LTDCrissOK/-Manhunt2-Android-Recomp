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

// Function: sub_0017AF80
// Address: 0x17af80 - 0x17b0b8
void sub_0017AF80_0x17af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AF80_0x17af80");
#endif

    switch (ctx->pc) {
        case 0x17af80u: goto label_17af80;
        case 0x17af84u: goto label_17af84;
        case 0x17af88u: goto label_17af88;
        case 0x17af8cu: goto label_17af8c;
        case 0x17af90u: goto label_17af90;
        case 0x17af94u: goto label_17af94;
        case 0x17af98u: goto label_17af98;
        case 0x17af9cu: goto label_17af9c;
        case 0x17afa0u: goto label_17afa0;
        case 0x17afa4u: goto label_17afa4;
        case 0x17afa8u: goto label_17afa8;
        case 0x17afacu: goto label_17afac;
        case 0x17afb0u: goto label_17afb0;
        case 0x17afb4u: goto label_17afb4;
        case 0x17afb8u: goto label_17afb8;
        case 0x17afbcu: goto label_17afbc;
        case 0x17afc0u: goto label_17afc0;
        case 0x17afc4u: goto label_17afc4;
        case 0x17afc8u: goto label_17afc8;
        case 0x17afccu: goto label_17afcc;
        case 0x17afd0u: goto label_17afd0;
        case 0x17afd4u: goto label_17afd4;
        case 0x17afd8u: goto label_17afd8;
        case 0x17afdcu: goto label_17afdc;
        case 0x17afe0u: goto label_17afe0;
        case 0x17afe4u: goto label_17afe4;
        case 0x17afe8u: goto label_17afe8;
        case 0x17afecu: goto label_17afec;
        case 0x17aff0u: goto label_17aff0;
        case 0x17aff4u: goto label_17aff4;
        case 0x17aff8u: goto label_17aff8;
        case 0x17affcu: goto label_17affc;
        case 0x17b000u: goto label_17b000;
        case 0x17b004u: goto label_17b004;
        case 0x17b008u: goto label_17b008;
        case 0x17b00cu: goto label_17b00c;
        case 0x17b010u: goto label_17b010;
        case 0x17b014u: goto label_17b014;
        case 0x17b018u: goto label_17b018;
        case 0x17b01cu: goto label_17b01c;
        case 0x17b020u: goto label_17b020;
        case 0x17b024u: goto label_17b024;
        case 0x17b028u: goto label_17b028;
        case 0x17b02cu: goto label_17b02c;
        case 0x17b030u: goto label_17b030;
        case 0x17b034u: goto label_17b034;
        case 0x17b038u: goto label_17b038;
        case 0x17b03cu: goto label_17b03c;
        case 0x17b040u: goto label_17b040;
        case 0x17b044u: goto label_17b044;
        case 0x17b048u: goto label_17b048;
        case 0x17b04cu: goto label_17b04c;
        case 0x17b050u: goto label_17b050;
        case 0x17b054u: goto label_17b054;
        case 0x17b058u: goto label_17b058;
        case 0x17b05cu: goto label_17b05c;
        case 0x17b060u: goto label_17b060;
        case 0x17b064u: goto label_17b064;
        case 0x17b068u: goto label_17b068;
        case 0x17b06cu: goto label_17b06c;
        case 0x17b070u: goto label_17b070;
        case 0x17b074u: goto label_17b074;
        case 0x17b078u: goto label_17b078;
        case 0x17b07cu: goto label_17b07c;
        case 0x17b080u: goto label_17b080;
        case 0x17b084u: goto label_17b084;
        case 0x17b088u: goto label_17b088;
        case 0x17b08cu: goto label_17b08c;
        case 0x17b090u: goto label_17b090;
        case 0x17b094u: goto label_17b094;
        case 0x17b098u: goto label_17b098;
        case 0x17b09cu: goto label_17b09c;
        case 0x17b0a0u: goto label_17b0a0;
        case 0x17b0a4u: goto label_17b0a4;
        case 0x17b0a8u: goto label_17b0a8;
        case 0x17b0acu: goto label_17b0ac;
        case 0x17b0b0u: goto label_17b0b0;
        case 0x17b0b4u: goto label_17b0b4;
        default: break;
    }

    ctx->pc = 0x17af80u;

label_17af80:
    // 0x17af80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17af84:
    // 0x17af84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17af88:
    // 0x17af88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_17af8c:
    // 0x17af8c: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x17af8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_17af90:
    // 0x17af90: 0x30b500ff  andi        $s5, $a1, 0xFF
    ctx->pc = 0x17af90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_17af94:
    // 0x17af94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_17af98:
    // 0x17af98: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x17af98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_17af9c:
    // 0x17af9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_17afa0:
    // 0x17afa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17afa4:
    // 0x17afa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17afa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17afa8:
    // 0x17afa8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17afac:
    // 0x17afac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17afacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17afb0:
    // 0x17afb0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x17afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_17afb4:
    // 0x17afb4: 0x8c510214  lw          $s1, 0x214($v0)
    ctx->pc = 0x17afb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_17afb8:
    // 0x17afb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17afb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17afbc:
    // 0x17afbc: 0x8c720210  lw          $s2, 0x210($v1)
    ctx->pc = 0x17afbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
label_17afc0:
    // 0x17afc0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x17afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17afc4:
    // 0x17afc4: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x17afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_17afc8:
    // 0x17afc8: 0x40f809  jalr        $v0
label_17afcc:
    if (ctx->pc == 0x17AFCCu) {
        ctx->pc = 0x17AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFC8u;
        // 0x17afcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AFD0u;
        goto label_17afd0;
    }
    ctx->pc = 0x17AFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17AFD0u);
        ctx->pc = 0x17AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFC8u;
        // 0x17afcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AFC8u, 0x17AFD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17AFD0u;
label_17afd0:
    // 0x17afd0: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x17afd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_17afd4:
    // 0x17afd4: 0x8e140218  lw          $s4, 0x218($s0)
    ctx->pc = 0x17afd4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_17afd8:
    // 0x17afd8: 0xc05a5f4  jal         func_1697D0
label_17afdc:
    if (ctx->pc == 0x17AFDCu) {
        ctx->pc = 0x17AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFD8u;
        // 0x17afdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AFE0u;
        goto label_17afe0;
    }
    ctx->pc = 0x17AFD8u;
    SET_GPR_U32(ctx, 31, 0x17AFE0u);
    ctx->pc = 0x17AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AFD8u;
    // 0x17afdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697D0u, 0x17AFD8u, 0x17AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFE0u;
label_17afe0:
    // 0x17afe0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_17afe4:
    if (ctx->pc == 0x17AFE4u) {
        ctx->pc = 0x17AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFE0u;
        // 0x17afe4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AFE8u;
        goto label_17afe8;
    }
    ctx->pc = 0x17AFE0u;
    {
        const bool branch_taken_0x17afe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFE0u;
        // 0x17afe4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afe0) {
            ctx->pc = 0x17B030u;
            goto label_17b030;
        }
    }
    ctx->pc = 0x17AFE8u;
label_17afe8:
    // 0x17afe8: 0x2e420012  sltiu       $v0, $s2, 0x12
    ctx->pc = 0x17afe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_17afec:
    // 0x17afec: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_17aff0:
    if (ctx->pc == 0x17AFF0u) {
        ctx->pc = 0x17AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFECu;
        // 0x17aff0: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AFF4u;
        goto label_17aff4;
    }
    ctx->pc = 0x17AFECu;
    {
        const bool branch_taken_0x17afec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFECu;
        // 0x17aff0: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afec) {
            ctx->pc = 0x17B074u;
            goto label_17b074;
        }
    }
    ctx->pc = 0x17AFF4u;
label_17aff4:
    // 0x17aff4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x17aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_17aff8:
    // 0x17aff8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x17aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_17affc:
    // 0x17affc: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x17affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
label_17b000:
    // 0x17b000: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17b000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17b004:
    // 0x17b004: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17b004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17b008:
    // 0x17b008: 0x800008  jr          $a0
label_17b00c:
    if (ctx->pc == 0x17B00Cu) {
        ctx->pc = 0x17B010u;
        goto label_17b010;
    }
    ctx->pc = 0x17B008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B010u: goto label_17b010;
            case 0x17B02Cu: goto label_17b02c;
            case 0x17B048u: goto label_17b048;
            case 0x17B064u: goto label_17b064;
            case 0x17B074u: goto label_17b074;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B008u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17B010u;
label_17b010:
    // 0x17b010: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17b010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_17b014:
    // 0x17b014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b018:
    // 0x17b018: 0x24448758  addiu       $a0, $v0, -0x78A8
    ctx->pc = 0x17b018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936408));
label_17b01c:
    // 0x17b01c: 0xc042096  jal         func_108258
label_17b020:
    if (ctx->pc == 0x17B020u) {
        ctx->pc = 0x17B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B01Cu;
        // 0x17b020: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B024u;
        goto label_17b024;
    }
    ctx->pc = 0x17B01Cu;
    SET_GPR_U32(ctx, 31, 0x17B024u);
    ctx->pc = 0x17B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B01Cu;
    // 0x17b020: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108258u, 0x17B01Cu, 0x17B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B024u;
label_17b024:
    // 0x17b024: 0x10000013  b           . + 4 + (0x13 << 2)
label_17b028:
    if (ctx->pc == 0x17B028u) {
        ctx->pc = 0x17B02Cu;
        goto label_17b02c;
    }
    ctx->pc = 0x17B024u;
    {
        const bool branch_taken_0x17b024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b024) {
            ctx->pc = 0x17B074u;
            goto label_17b074;
        }
    }
    ctx->pc = 0x17B02Cu;
label_17b02c:
    // 0x17b02c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_17b030:
    // 0x17b030: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b034:
    // 0x17b034: 0x24448758  addiu       $a0, $v0, -0x78A8
    ctx->pc = 0x17b034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936408));
label_17b038:
    // 0x17b038: 0xc0420ae  jal         func_1082B8
label_17b03c:
    if (ctx->pc == 0x17B03Cu) {
        ctx->pc = 0x17B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B038u;
        // 0x17b03c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B040u;
        goto label_17b040;
    }
    ctx->pc = 0x17B038u;
    SET_GPR_U32(ctx, 31, 0x17B040u);
    ctx->pc = 0x17B03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B038u;
    // 0x17b03c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1082B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1082B8u, 0x17B038u, 0x17B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B040u;
label_17b040:
    // 0x17b040: 0x1000000c  b           . + 4 + (0xC << 2)
label_17b044:
    if (ctx->pc == 0x17B044u) {
        ctx->pc = 0x17B048u;
        goto label_17b048;
    }
    ctx->pc = 0x17B040u;
    {
        const bool branch_taken_0x17b040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b040) {
            ctx->pc = 0x17B074u;
            goto label_17b074;
        }
    }
    ctx->pc = 0x17B048u;
label_17b048:
    // 0x17b048: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17b048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_17b04c:
    // 0x17b04c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b050:
    // 0x17b050: 0x24448758  addiu       $a0, $v0, -0x78A8
    ctx->pc = 0x17b050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936408));
label_17b054:
    // 0x17b054: 0xc04208a  jal         func_108228
label_17b058:
    if (ctx->pc == 0x17B058u) {
        ctx->pc = 0x17B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B054u;
        // 0x17b058: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B05Cu;
        goto label_17b05c;
    }
    ctx->pc = 0x17B054u;
    SET_GPR_U32(ctx, 31, 0x17B05Cu);
    ctx->pc = 0x17B058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B054u;
    // 0x17b058: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108228u, 0x17B054u, 0x17B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B05Cu;
label_17b05c:
    // 0x17b05c: 0x10000005  b           . + 4 + (0x5 << 2)
label_17b060:
    if (ctx->pc == 0x17B060u) {
        ctx->pc = 0x17B064u;
        goto label_17b064;
    }
    ctx->pc = 0x17B05Cu;
    {
        const bool branch_taken_0x17b05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b05c) {
            ctx->pc = 0x17B074u;
            goto label_17b074;
        }
    }
    ctx->pc = 0x17B064u;
label_17b064:
    // 0x17b064: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x17b064u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
label_17b068:
    // 0x17b068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b06c:
    // 0x17b06c: 0xc0420a2  jal         func_108288
label_17b070:
    if (ctx->pc == 0x17B070u) {
        ctx->pc = 0x17B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B06Cu;
        // 0x17b070: 0x26048758  addiu       $a0, $s0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B074u;
        goto label_17b074;
    }
    ctx->pc = 0x17B06Cu;
    SET_GPR_U32(ctx, 31, 0x17B074u);
    ctx->pc = 0x17B070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B06Cu;
    // 0x17b070: 0x26048758  addiu       $a0, $s0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108288u, 0x17B06Cu, 0x17B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B074u;
label_17b074:
    // 0x17b074: 0xc05a5ee  jal         func_1697B8
label_17b078:
    if (ctx->pc == 0x17B078u) {
        ctx->pc = 0x17B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B074u;
        // 0x17b078: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B07Cu;
        goto label_17b07c;
    }
    ctx->pc = 0x17B074u;
    SET_GPR_U32(ctx, 31, 0x17B07Cu);
    ctx->pc = 0x17B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B074u;
    // 0x17b078: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697B8u, 0x17B074u, 0x17B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B07Cu;
label_17b07c:
    // 0x17b07c: 0x26048758  addiu       $a0, $s0, -0x78A8
    ctx->pc = 0x17b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936408));
label_17b080:
    // 0x17b080: 0xc042058  jal         func_108160
label_17b084:
    if (ctx->pc == 0x17B084u) {
        ctx->pc = 0x17B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B080u;
        // 0x17b084: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B088u;
        goto label_17b088;
    }
    ctx->pc = 0x17B080u;
    SET_GPR_U32(ctx, 31, 0x17B088u);
    ctx->pc = 0x17B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B080u;
    // 0x17b084: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108160u, 0x17B080u, 0x17B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B088u;
label_17b088:
    // 0x17b088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17b08c:
    // 0x17b08c: 0xc05eb98  jal         func_17AE60
label_17b090:
    if (ctx->pc == 0x17B090u) {
        ctx->pc = 0x17B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B08Cu;
        // 0x17b090: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B094u;
        goto label_17b094;
    }
    ctx->pc = 0x17B08Cu;
    SET_GPR_U32(ctx, 31, 0x17B094u);
    ctx->pc = 0x17B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B08Cu;
    // 0x17b090: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AE60u, 0x17B08Cu, 0x17B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B094u;
label_17b094:
    // 0x17b094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b098:
    // 0x17b098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17b09c:
    // 0x17b09c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b09cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b0a0:
    // 0x17b0a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17b0a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17b0a4:
    // 0x17b0a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17b0a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17b0a8:
    // 0x17b0a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17b0a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_17b0ac:
    // 0x17b0ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17b0b0:
    // 0x17b0b0: 0x3e00008  jr          $ra
label_17b0b4:
    if (ctx->pc == 0x17B0B4u) {
        ctx->pc = 0x17B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0B0u;
        // 0x17b0b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B0B8u;
        goto label_fallthrough_0x17b0b0;
    }
    ctx->pc = 0x17B0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0B0u;
        // 0x17b0b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17b0b0:
    ctx->pc = 0x17B0B8u;
}
