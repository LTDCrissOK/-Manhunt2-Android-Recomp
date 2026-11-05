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

// Function: sub_00237FE8
// Address: 0x237fe8 - 0x238128
void sub_00237FE8_0x237fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237FE8_0x237fe8");
#endif

    switch (ctx->pc) {
        case 0x237fe8u: goto label_237fe8;
        case 0x237fecu: goto label_237fec;
        case 0x237ff0u: goto label_237ff0;
        case 0x237ff4u: goto label_237ff4;
        case 0x237ff8u: goto label_237ff8;
        case 0x237ffcu: goto label_237ffc;
        case 0x238000u: goto label_238000;
        case 0x238004u: goto label_238004;
        case 0x238008u: goto label_238008;
        case 0x23800cu: goto label_23800c;
        case 0x238010u: goto label_238010;
        case 0x238014u: goto label_238014;
        case 0x238018u: goto label_238018;
        case 0x23801cu: goto label_23801c;
        case 0x238020u: goto label_238020;
        case 0x238024u: goto label_238024;
        case 0x238028u: goto label_238028;
        case 0x23802cu: goto label_23802c;
        case 0x238030u: goto label_238030;
        case 0x238034u: goto label_238034;
        case 0x238038u: goto label_238038;
        case 0x23803cu: goto label_23803c;
        case 0x238040u: goto label_238040;
        case 0x238044u: goto label_238044;
        case 0x238048u: goto label_238048;
        case 0x23804cu: goto label_23804c;
        case 0x238050u: goto label_238050;
        case 0x238054u: goto label_238054;
        case 0x238058u: goto label_238058;
        case 0x23805cu: goto label_23805c;
        case 0x238060u: goto label_238060;
        case 0x238064u: goto label_238064;
        case 0x238068u: goto label_238068;
        case 0x23806cu: goto label_23806c;
        case 0x238070u: goto label_238070;
        case 0x238074u: goto label_238074;
        case 0x238078u: goto label_238078;
        case 0x23807cu: goto label_23807c;
        case 0x238080u: goto label_238080;
        case 0x238084u: goto label_238084;
        case 0x238088u: goto label_238088;
        case 0x23808cu: goto label_23808c;
        case 0x238090u: goto label_238090;
        case 0x238094u: goto label_238094;
        case 0x238098u: goto label_238098;
        case 0x23809cu: goto label_23809c;
        case 0x2380a0u: goto label_2380a0;
        case 0x2380a4u: goto label_2380a4;
        case 0x2380a8u: goto label_2380a8;
        case 0x2380acu: goto label_2380ac;
        case 0x2380b0u: goto label_2380b0;
        case 0x2380b4u: goto label_2380b4;
        case 0x2380b8u: goto label_2380b8;
        case 0x2380bcu: goto label_2380bc;
        case 0x2380c0u: goto label_2380c0;
        case 0x2380c4u: goto label_2380c4;
        case 0x2380c8u: goto label_2380c8;
        case 0x2380ccu: goto label_2380cc;
        case 0x2380d0u: goto label_2380d0;
        case 0x2380d4u: goto label_2380d4;
        case 0x2380d8u: goto label_2380d8;
        case 0x2380dcu: goto label_2380dc;
        case 0x2380e0u: goto label_2380e0;
        case 0x2380e4u: goto label_2380e4;
        case 0x2380e8u: goto label_2380e8;
        case 0x2380ecu: goto label_2380ec;
        case 0x2380f0u: goto label_2380f0;
        case 0x2380f4u: goto label_2380f4;
        case 0x2380f8u: goto label_2380f8;
        case 0x2380fcu: goto label_2380fc;
        case 0x238100u: goto label_238100;
        case 0x238104u: goto label_238104;
        case 0x238108u: goto label_238108;
        case 0x23810cu: goto label_23810c;
        case 0x238110u: goto label_238110;
        case 0x238114u: goto label_238114;
        case 0x238118u: goto label_238118;
        case 0x23811cu: goto label_23811c;
        case 0x238120u: goto label_238120;
        case 0x238124u: goto label_238124;
        default: break;
    }

    ctx->pc = 0x237fe8u;

label_237fe8:
    // 0x237fe8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x237fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_237fec:
    // 0x237fec: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_237ff0:
    // 0x237ff0: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x237ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_237ff4:
    // 0x237ff4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x237ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_237ff8:
    // 0x237ff8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x237ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_237ffc:
    // 0x237ffc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x237ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_238000:
    // 0x238000: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x238000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_238004:
    // 0x238004: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x238004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_238008:
    // 0x238008: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x238008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_23800c:
    // 0x23800c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_238010:
    if (ctx->pc == 0x238010u) {
        ctx->pc = 0x238010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23800Cu;
        // 0x238010: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238014u;
        goto label_238014;
    }
    ctx->pc = 0x23800Cu;
    {
        const bool branch_taken_0x23800c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23800Cu;
        // 0x238010: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23800c) {
            ctx->pc = 0x238024u;
            goto label_238024;
        }
    }
    ctx->pc = 0x238014u;
label_238014:
    // 0x238014: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_238018:
    // 0x238018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23801c:
    // 0x23801c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_238020:
    if (ctx->pc == 0x238020u) {
        ctx->pc = 0x238020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23801Cu;
        // 0x238020: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238024u;
        goto label_238024;
    }
    ctx->pc = 0x23801Cu;
    {
        const bool branch_taken_0x23801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23801Cu;
        // 0x238020: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23801c) {
            ctx->pc = 0x238108u;
            goto label_238108;
        }
    }
    ctx->pc = 0x238024u;
label_238024:
    // 0x238024: 0x8c820334  lw          $v0, 0x334($a0)
    ctx->pc = 0x238024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_238028:
    // 0x238028: 0x8c430140  lw          $v1, 0x140($v0)
    ctx->pc = 0x238028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
label_23802c:
    // 0x23802c: 0x8c7400f4  lw          $s4, 0xF4($v1)
    ctx->pc = 0x23802cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_238030:
    // 0x238030: 0xc074920  jal         func_1D2480
label_238034:
    if (ctx->pc == 0x238034u) {
        ctx->pc = 0x238034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238030u;
        // 0x238034: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238038u;
        goto label_238038;
    }
    ctx->pc = 0x238030u;
    SET_GPR_U32(ctx, 31, 0x238038u);
    ctx->pc = 0x238034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238030u;
    // 0x238034: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2480u, 0x238030u, 0x238038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238038u;
label_238038:
    // 0x238038: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x238038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23803c:
    // 0x23803c: 0xc074968  jal         func_1D25A0
label_238040:
    if (ctx->pc == 0x238040u) {
        ctx->pc = 0x238040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23803Cu;
        // 0x238040: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238044u;
        goto label_238044;
    }
    ctx->pc = 0x23803Cu;
    SET_GPR_U32(ctx, 31, 0x238044u);
    ctx->pc = 0x238040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23803Cu;
    // 0x238040: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25A0u, 0x23803Cu, 0x238044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238044u;
label_238044:
    // 0x238044: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x238044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238048:
    // 0x238048: 0xc0f6a96  jal         func_3DAA58
label_23804c:
    if (ctx->pc == 0x23804Cu) {
        ctx->pc = 0x23804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238048u;
        // 0x23804c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238050u;
        goto label_238050;
    }
    ctx->pc = 0x238048u;
    SET_GPR_U32(ctx, 31, 0x238050u);
    ctx->pc = 0x23804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238048u;
    // 0x23804c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x238048u, 0x238050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238050u;
label_238050:
    // 0x238050: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x238050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_238054:
    // 0x238054: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238058:
    // 0x238058: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x238058u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
label_23805c:
    // 0x23805c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x23805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_238060:
    // 0x238060: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_238064:
    if (ctx->pc == 0x238064u) {
        ctx->pc = 0x238064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238060u;
        // 0x238064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238068u;
        goto label_238068;
    }
    ctx->pc = 0x238060u;
    {
        const bool branch_taken_0x238060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x238060) {
            ctx->pc = 0x238064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238060u;
            // 0x238064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238068u;
            goto label_238068;
        }
    }
    ctx->pc = 0x238068u;
label_238068:
    // 0x238068: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x238068u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23806c:
    // 0x23806c: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x23806cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_238070:
    // 0x238070: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x238070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_238074:
    // 0x238074: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x238074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_238078:
    // 0x238078: 0x101742  srl         $v0, $s0, 29
    ctx->pc = 0x238078u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_23807c:
    // 0x23807c: 0x24638e90  addiu       $v1, $v1, -0x7170
    ctx->pc = 0x23807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938256));
label_238080:
    // 0x238080: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x238080u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_238084:
    // 0x238084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x238084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_238088:
    // 0x238088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23808c:
    // 0x23808c: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x23808cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_238090:
    // 0x238090: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x238090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_238094:
    // 0x238094: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x238094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_238098:
    // 0x238098: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x238098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23809c:
    // 0x23809c: 0x2472f290  addiu       $s2, $v1, -0xD70
    ctx->pc = 0x23809cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963856));
label_2380a0:
    // 0x2380a0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2380a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2380a4:
    // 0x2380a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2380a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2380a8:
    // 0x2380a8: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x2380a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_2380ac:
    // 0x2380ac: 0xe0f809  jalr        $a3
label_2380b0:
    if (ctx->pc == 0x2380B0u) {
        ctx->pc = 0x2380B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380ACu;
        // 0x2380b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2380B4u;
        goto label_2380b4;
    }
    ctx->pc = 0x2380ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2380B4u);
        ctx->pc = 0x2380B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380ACu;
        // 0x2380b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2380ACu, 0x2380B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2380B4u;
label_2380b4:
    // 0x2380b4: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x2380b4u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2380b8:
    // 0x2380b8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2380bc:
    if (ctx->pc == 0x2380BCu) {
        ctx->pc = 0x2380C0u;
        goto label_2380c0;
    }
    ctx->pc = 0x2380B8u;
    {
        const bool branch_taken_0x2380b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2380b8) {
            ctx->pc = 0x2380C8u;
            goto label_2380c8;
        }
    }
    ctx->pc = 0x2380C0u;
label_2380c0:
    // 0x2380c0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2380c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2380c4:
    // 0x2380c4: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x2380c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_2380c8:
    // 0x2380c8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2380c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2380cc:
    // 0x2380cc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2380ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2380d0:
    // 0x2380d0: 0xc07493a  jal         func_1D24E8
label_2380d4:
    if (ctx->pc == 0x2380D4u) {
        ctx->pc = 0x2380D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380D0u;
        // 0x2380d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2380D8u;
        goto label_2380d8;
    }
    ctx->pc = 0x2380D0u;
    SET_GPR_U32(ctx, 31, 0x2380D8u);
    ctx->pc = 0x2380D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380D0u;
    // 0x2380d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D24E8u, 0x2380D0u, 0x2380D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380D8u;
label_2380d8:
    // 0x2380d8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2380d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2380dc:
    // 0x2380dc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2380dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2380e0:
    // 0x2380e0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2380e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2380e4:
    // 0x2380e4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2380e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2380e8:
    // 0x2380e8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2380e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2380ec:
    // 0x2380ec: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2380ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2380f0:
    // 0x2380f0: 0x46010044  c1          0x10044
    ctx->pc = 0x2380f0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2380f4:
    // 0x2380f4: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x2380f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2380f8:
    // 0x2380f8: 0x0  nop
    ctx->pc = 0x2380f8u;
    // NOP
label_2380fc:
    // 0x2380fc: 0x0  nop
    ctx->pc = 0x2380fcu;
    // NOP
label_238100:
    // 0x238100: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x238100u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_238104:
    // 0x238104: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x238104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238108:
    // 0x238108: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x238108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23810c:
    // 0x23810c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23810cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_238110:
    // 0x238110: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x238110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_238114:
    // 0x238114: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x238114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_238118:
    // 0x238118: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x238118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23811c:
    // 0x23811c: 0x3e00008  jr          $ra
label_238120:
    if (ctx->pc == 0x238120u) {
        ctx->pc = 0x238120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23811Cu;
        // 0x238120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238124u;
        goto label_238124;
    }
    ctx->pc = 0x23811Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23811Cu;
        // 0x238120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23811Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238124u;
label_238124:
    // 0x238124: 0x0  nop
    ctx->pc = 0x238124u;
    // NOP
    ctx->pc = 0x238128u;
}
