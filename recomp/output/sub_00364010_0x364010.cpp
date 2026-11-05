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

// Function: sub_00364010
// Address: 0x364010 - 0x364118
void sub_00364010_0x364010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364010_0x364010");
#endif

    switch (ctx->pc) {
        case 0x364010u: goto label_364010;
        case 0x364014u: goto label_364014;
        case 0x364018u: goto label_364018;
        case 0x36401cu: goto label_36401c;
        case 0x364020u: goto label_364020;
        case 0x364024u: goto label_364024;
        case 0x364028u: goto label_364028;
        case 0x36402cu: goto label_36402c;
        case 0x364030u: goto label_364030;
        case 0x364034u: goto label_364034;
        case 0x364038u: goto label_364038;
        case 0x36403cu: goto label_36403c;
        case 0x364040u: goto label_364040;
        case 0x364044u: goto label_364044;
        case 0x364048u: goto label_364048;
        case 0x36404cu: goto label_36404c;
        case 0x364050u: goto label_364050;
        case 0x364054u: goto label_364054;
        case 0x364058u: goto label_364058;
        case 0x36405cu: goto label_36405c;
        case 0x364060u: goto label_364060;
        case 0x364064u: goto label_364064;
        case 0x364068u: goto label_364068;
        case 0x36406cu: goto label_36406c;
        case 0x364070u: goto label_364070;
        case 0x364074u: goto label_364074;
        case 0x364078u: goto label_364078;
        case 0x36407cu: goto label_36407c;
        case 0x364080u: goto label_364080;
        case 0x364084u: goto label_364084;
        case 0x364088u: goto label_364088;
        case 0x36408cu: goto label_36408c;
        case 0x364090u: goto label_364090;
        case 0x364094u: goto label_364094;
        case 0x364098u: goto label_364098;
        case 0x36409cu: goto label_36409c;
        case 0x3640a0u: goto label_3640a0;
        case 0x3640a4u: goto label_3640a4;
        case 0x3640a8u: goto label_3640a8;
        case 0x3640acu: goto label_3640ac;
        case 0x3640b0u: goto label_3640b0;
        case 0x3640b4u: goto label_3640b4;
        case 0x3640b8u: goto label_3640b8;
        case 0x3640bcu: goto label_3640bc;
        case 0x3640c0u: goto label_3640c0;
        case 0x3640c4u: goto label_3640c4;
        case 0x3640c8u: goto label_3640c8;
        case 0x3640ccu: goto label_3640cc;
        case 0x3640d0u: goto label_3640d0;
        case 0x3640d4u: goto label_3640d4;
        case 0x3640d8u: goto label_3640d8;
        case 0x3640dcu: goto label_3640dc;
        case 0x3640e0u: goto label_3640e0;
        case 0x3640e4u: goto label_3640e4;
        case 0x3640e8u: goto label_3640e8;
        case 0x3640ecu: goto label_3640ec;
        case 0x3640f0u: goto label_3640f0;
        case 0x3640f4u: goto label_3640f4;
        case 0x3640f8u: goto label_3640f8;
        case 0x3640fcu: goto label_3640fc;
        case 0x364100u: goto label_364100;
        case 0x364104u: goto label_364104;
        case 0x364108u: goto label_364108;
        case 0x36410cu: goto label_36410c;
        case 0x364110u: goto label_364110;
        case 0x364114u: goto label_364114;
        default: break;
    }

    ctx->pc = 0x364010u;

label_364010:
    // 0x364010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x364010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_364014:
    // 0x364014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_364018:
    // 0x364018: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x364018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_36401c:
    // 0x36401c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36401cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_364020:
    // 0x364020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x364020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_364024:
    // 0x364024: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x364024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_364028:
    // 0x364028: 0xc0d8d38  jal         func_3634E0
label_36402c:
    if (ctx->pc == 0x36402Cu) {
        ctx->pc = 0x36402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364028u;
        // 0x36402c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364030u;
        goto label_364030;
    }
    ctx->pc = 0x364028u;
    SET_GPR_U32(ctx, 31, 0x364030u);
    ctx->pc = 0x36402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364028u;
    // 0x36402c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3634E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3634E0u, 0x364028u, 0x364030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364030u;
label_364030:
    // 0x364030: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x364030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_364034:
    // 0x364034: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x364034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_364038:
    // 0x364038: 0x246345c0  addiu       $v1, $v1, 0x45C0
    ctx->pc = 0x364038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17856));
label_36403c:
    // 0x36403c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x36403cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_364040:
    // 0x364040: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x364040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_364044:
    // 0x364044: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x364044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_364048:
    // 0x364048: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x364048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_36404c:
    // 0x36404c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x36404cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_364050:
    // 0x364050: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x364050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_364054:
    // 0x364054: 0xc0f6a96  jal         func_3DAA58
label_364058:
    if (ctx->pc == 0x364058u) {
        ctx->pc = 0x364058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364054u;
        // 0x364058: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36405Cu;
        goto label_36405c;
    }
    ctx->pc = 0x364054u;
    SET_GPR_U32(ctx, 31, 0x36405Cu);
    ctx->pc = 0x364058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364054u;
    // 0x364058: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x364054u, 0x36405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36405Cu;
label_36405c:
    // 0x36405c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x36405cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_364060:
    // 0x364060: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x364060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_364064:
    // 0x364064: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x364064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_364068:
    // 0x364068: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x364068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_36406c:
    // 0x36406c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x36406cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_364070:
    // 0x364070: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x364070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_364074:
    // 0x364074: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x364074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_364078:
    // 0x364078: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x364078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_36407c:
    // 0x36407c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x36407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_364080:
    // 0x364080: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x364080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_364084:
    // 0x364084: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x364084u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_364088:
    // 0x364088: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_36408c:
    if (ctx->pc == 0x36408Cu) {
        ctx->pc = 0x36408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364088u;
        // 0x36408c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364090u;
        goto label_364090;
    }
    ctx->pc = 0x364088u;
    {
        const bool branch_taken_0x364088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364088u;
        // 0x36408c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364088) {
            ctx->pc = 0x3640F8u;
            goto label_3640f8;
        }
    }
    ctx->pc = 0x364090u;
label_364090:
    // 0x364090: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x364090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_364094:
    // 0x364094: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x364094u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_364098:
    // 0x364098: 0xc0f52a8  jal         func_3D4AA0
label_36409c:
    if (ctx->pc == 0x36409Cu) {
        ctx->pc = 0x36409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364098u;
        // 0x36409c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3640A0u;
        goto label_3640a0;
    }
    ctx->pc = 0x364098u;
    SET_GPR_U32(ctx, 31, 0x3640A0u);
    ctx->pc = 0x36409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364098u;
    // 0x36409c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x364098u, 0x3640A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640A0u;
label_3640a0:
    // 0x3640a0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3640a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3640a4:
    // 0x3640a4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_3640a8:
    if (ctx->pc == 0x3640A8u) {
        ctx->pc = 0x3640A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640A4u;
        // 0x3640a8: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3640ACu;
        goto label_3640ac;
    }
    ctx->pc = 0x3640A4u;
    {
        const bool branch_taken_0x3640a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3640A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640A4u;
        // 0x3640a8: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3640a4) {
            ctx->pc = 0x3640F8u;
            goto label_3640f8;
        }
    }
    ctx->pc = 0x3640ACu;
label_3640ac:
    // 0x3640ac: 0x0  nop
    ctx->pc = 0x3640acu;
    // NOP
label_3640b0:
    // 0x3640b0: 0xc0d985c  jal         func_366170
label_3640b4:
    if (ctx->pc == 0x3640B4u) {
        ctx->pc = 0x3640B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640B0u;
        // 0x3640b4: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3640B8u;
        goto label_3640b8;
    }
    ctx->pc = 0x3640B0u;
    SET_GPR_U32(ctx, 31, 0x3640B8u);
    ctx->pc = 0x3640B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3640B0u;
    // 0x3640b4: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366170u, 0x3640B0u, 0x3640B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640B8u;
label_3640b8:
    // 0x3640b8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3640b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_3640bc:
    // 0x3640bc: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x3640bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3640c0:
    // 0x3640c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3640c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3640c4:
    // 0x3640c4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3640c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3640c8:
    // 0x3640c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3640c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3640cc:
    // 0x3640cc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3640ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_3640d0:
    // 0x3640d0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3640d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3640d4:
    // 0x3640d4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3640d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3640d8:
    // 0x3640d8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3640d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3640dc:
    // 0x3640dc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3640dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3640e0:
    // 0x3640e0: 0x60f809  jalr        $v1
label_3640e4:
    if (ctx->pc == 0x3640E4u) {
        ctx->pc = 0x3640E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640E0u;
        // 0x3640e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3640E8u;
        goto label_3640e8;
    }
    ctx->pc = 0x3640E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3640E8u);
        ctx->pc = 0x3640E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640E0u;
        // 0x3640e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3640E0u, 0x3640E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3640E8u;
label_3640e8:
    // 0x3640e8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3640e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3640ec:
    // 0x3640ec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3640ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3640f0:
    // 0x3640f0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_3640f4:
    if (ctx->pc == 0x3640F4u) {
        ctx->pc = 0x3640F8u;
        goto label_3640f8;
    }
    ctx->pc = 0x3640F0u;
    {
        const bool branch_taken_0x3640f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3640f0) {
            ctx->pc = 0x3640B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3640b0;
        }
    }
    ctx->pc = 0x3640F8u;
label_3640f8:
    // 0x3640f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3640f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3640fc:
    // 0x3640fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3640fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_364100:
    // 0x364100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x364100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_364104:
    // 0x364104: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x364104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_364108:
    // 0x364108: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x364108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36410c:
    // 0x36410c: 0x3e00008  jr          $ra
label_364110:
    if (ctx->pc == 0x364110u) {
        ctx->pc = 0x364110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36410Cu;
        // 0x364110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364114u;
        goto label_364114;
    }
    ctx->pc = 0x36410Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36410Cu;
        // 0x364110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36410Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364114u;
label_364114:
    // 0x364114: 0x0  nop
    ctx->pc = 0x364114u;
    // NOP
    ctx->pc = 0x364118u;
}
