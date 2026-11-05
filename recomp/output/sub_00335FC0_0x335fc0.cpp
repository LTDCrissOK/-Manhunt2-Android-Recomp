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

// Function: sub_00335FC0
// Address: 0x335fc0 - 0x3360c0
void sub_00335FC0_0x335fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335FC0_0x335fc0");
#endif

    switch (ctx->pc) {
        case 0x335fc0u: goto label_335fc0;
        case 0x335fc4u: goto label_335fc4;
        case 0x335fc8u: goto label_335fc8;
        case 0x335fccu: goto label_335fcc;
        case 0x335fd0u: goto label_335fd0;
        case 0x335fd4u: goto label_335fd4;
        case 0x335fd8u: goto label_335fd8;
        case 0x335fdcu: goto label_335fdc;
        case 0x335fe0u: goto label_335fe0;
        case 0x335fe4u: goto label_335fe4;
        case 0x335fe8u: goto label_335fe8;
        case 0x335fecu: goto label_335fec;
        case 0x335ff0u: goto label_335ff0;
        case 0x335ff4u: goto label_335ff4;
        case 0x335ff8u: goto label_335ff8;
        case 0x335ffcu: goto label_335ffc;
        case 0x336000u: goto label_336000;
        case 0x336004u: goto label_336004;
        case 0x336008u: goto label_336008;
        case 0x33600cu: goto label_33600c;
        case 0x336010u: goto label_336010;
        case 0x336014u: goto label_336014;
        case 0x336018u: goto label_336018;
        case 0x33601cu: goto label_33601c;
        case 0x336020u: goto label_336020;
        case 0x336024u: goto label_336024;
        case 0x336028u: goto label_336028;
        case 0x33602cu: goto label_33602c;
        case 0x336030u: goto label_336030;
        case 0x336034u: goto label_336034;
        case 0x336038u: goto label_336038;
        case 0x33603cu: goto label_33603c;
        case 0x336040u: goto label_336040;
        case 0x336044u: goto label_336044;
        case 0x336048u: goto label_336048;
        case 0x33604cu: goto label_33604c;
        case 0x336050u: goto label_336050;
        case 0x336054u: goto label_336054;
        case 0x336058u: goto label_336058;
        case 0x33605cu: goto label_33605c;
        case 0x336060u: goto label_336060;
        case 0x336064u: goto label_336064;
        case 0x336068u: goto label_336068;
        case 0x33606cu: goto label_33606c;
        case 0x336070u: goto label_336070;
        case 0x336074u: goto label_336074;
        case 0x336078u: goto label_336078;
        case 0x33607cu: goto label_33607c;
        case 0x336080u: goto label_336080;
        case 0x336084u: goto label_336084;
        case 0x336088u: goto label_336088;
        case 0x33608cu: goto label_33608c;
        case 0x336090u: goto label_336090;
        case 0x336094u: goto label_336094;
        case 0x336098u: goto label_336098;
        case 0x33609cu: goto label_33609c;
        case 0x3360a0u: goto label_3360a0;
        case 0x3360a4u: goto label_3360a4;
        case 0x3360a8u: goto label_3360a8;
        case 0x3360acu: goto label_3360ac;
        case 0x3360b0u: goto label_3360b0;
        case 0x3360b4u: goto label_3360b4;
        case 0x3360b8u: goto label_3360b8;
        case 0x3360bcu: goto label_3360bc;
        default: break;
    }

    ctx->pc = 0x335fc0u;

label_335fc0:
    // 0x335fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_335fc4:
    // 0x335fc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_335fc8:
    // 0x335fc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_335fcc:
    // 0x335fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_335fd0:
    // 0x335fd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x335fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_335fd4:
    // 0x335fd4: 0xc0d75e8  jal         func_35D7A0
label_335fd8:
    if (ctx->pc == 0x335FD8u) {
        ctx->pc = 0x335FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FD4u;
        // 0x335fd8: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335FDCu;
        goto label_335fdc;
    }
    ctx->pc = 0x335FD4u;
    SET_GPR_U32(ctx, 31, 0x335FDCu);
    ctx->pc = 0x335FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335FD4u;
    // 0x335fd8: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7A0u, 0x335FD4u, 0x335FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335FDCu;
label_335fdc:
    // 0x335fdc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x335fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_335fe0:
    // 0x335fe0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x335fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_335fe4:
    // 0x335fe4: 0x8c66caf4  lw          $a2, -0x350C($v1)
    ctx->pc = 0x335fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953716)));
label_335fe8:
    // 0x335fe8: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x335fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_335fec:
    // 0x335fec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x335fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_335ff0:
    // 0x335ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_335ff4:
    // 0x335ff4: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x335ff4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_335ff8:
    // 0x335ff8: 0xac832c84  sw          $v1, 0x2C84($a0)
    ctx->pc = 0x335ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11396), GPR_U32(ctx, 3));
label_335ffc:
    // 0x335ffc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_336000:
    if (ctx->pc == 0x336000u) {
        ctx->pc = 0x336000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FFCu;
        // 0x336000: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x336004u;
        goto label_336004;
    }
    ctx->pc = 0x335FFCu;
    {
        const bool branch_taken_0x335ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335ffc) {
            ctx->pc = 0x336000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335FFCu;
            // 0x336000: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x336004u;
            goto label_336004;
        }
    }
    ctx->pc = 0x336004u;
label_336004:
    // 0x336004: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x336004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_336008:
    // 0x336008: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x336008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33600c:
    // 0x33600c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x33600cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_336010:
    // 0x336010: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x336010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_336014:
    // 0x336014: 0x24846e80  addiu       $a0, $a0, 0x6E80
    ctx->pc = 0x336014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28288));
label_336018:
    // 0x336018: 0x3012  mflo        $a2
    ctx->pc = 0x336018u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_33601c:
    // 0x33601c: 0xc73818  mult        $a3, $a2, $a3
    ctx->pc = 0x33601cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_336020:
    // 0x336020: 0xac662c88  sw          $a2, 0x2C88($v1)
    ctx->pc = 0x336020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11400), GPR_U32(ctx, 6));
label_336024:
    // 0x336024: 0xc0b2af0  jal         func_2CABC0
label_336028:
    if (ctx->pc == 0x336028u) {
        ctx->pc = 0x336028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336024u;
        // 0x336028: 0xac472c8c  sw          $a3, 0x2C8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11404), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33602Cu;
        goto label_33602c;
    }
    ctx->pc = 0x336024u;
    SET_GPR_U32(ctx, 31, 0x33602Cu);
    ctx->pc = 0x336028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336024u;
    // 0x336028: 0xac472c8c  sw          $a3, 0x2C8C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 11404), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x336024u, 0x33602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33602Cu;
label_33602c:
    // 0x33602c: 0xc0cd4b8  jal         func_3352E0
label_336030:
    if (ctx->pc == 0x336030u) {
        ctx->pc = 0x336030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33602Cu;
        // 0x336030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336034u;
        goto label_336034;
    }
    ctx->pc = 0x33602Cu;
    SET_GPR_U32(ctx, 31, 0x336034u);
    ctx->pc = 0x336030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33602Cu;
    // 0x336030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3352E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3352E0u, 0x33602Cu, 0x336034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336034u;
label_336034:
    // 0x336034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x336034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336038:
    // 0x336038: 0xc0cd51c  jal         func_335470
label_33603c:
    if (ctx->pc == 0x33603Cu) {
        ctx->pc = 0x33603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336038u;
        // 0x33603c: 0xae422c80  sw          $v0, 0x2C80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336040u;
        goto label_336040;
    }
    ctx->pc = 0x336038u;
    SET_GPR_U32(ctx, 31, 0x336040u);
    ctx->pc = 0x33603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336038u;
    // 0x33603c: 0xae422c80  sw          $v0, 0x2C80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 11392), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335470u, 0x336038u, 0x336040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336040u;
label_336040:
    // 0x336040: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x336040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336044:
    // 0x336044: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_336048:
    if (ctx->pc == 0x336048u) {
        ctx->pc = 0x336048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336044u;
        // 0x336048: 0x8e422c80  lw          $v0, 0x2C80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33604Cu;
        goto label_33604c;
    }
    ctx->pc = 0x336044u;
    {
        const bool branch_taken_0x336044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x336048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336044u;
        // 0x336048: 0x8e422c80  lw          $v0, 0x2C80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336044) {
            ctx->pc = 0x336084u;
            goto label_336084;
        }
    }
    ctx->pc = 0x33604Cu;
label_33604c:
    // 0x33604c: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x33604cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_336050:
    // 0x336050: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_336054:
    if (ctx->pc == 0x336054u) {
        ctx->pc = 0x336054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336050u;
        // 0x336054: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336058u;
        goto label_336058;
    }
    ctx->pc = 0x336050u;
    {
        const bool branch_taken_0x336050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336050u;
        // 0x336054: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336050) {
            ctx->pc = 0x3360A4u;
            goto label_3360a4;
        }
    }
    ctx->pc = 0x336058u;
label_336058:
    // 0x336058: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x336058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_33605c:
    // 0x33605c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33605cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_336060:
    // 0x336060: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x336060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_336064:
    // 0x336064: 0xc0cdd6e  jal         func_3375B8
label_336068:
    if (ctx->pc == 0x336068u) {
        ctx->pc = 0x336068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336064u;
        // 0x336068: 0xae020498  sw          $v0, 0x498($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33606Cu;
        goto label_33606c;
    }
    ctx->pc = 0x336064u;
    SET_GPR_U32(ctx, 31, 0x33606Cu);
    ctx->pc = 0x336068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336064u;
    // 0x336068: 0xae020498  sw          $v0, 0x498($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3375B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3375B8u, 0x336064u, 0x33606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33606Cu;
label_33606c:
    // 0x33606c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x33606cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_336070:
    // 0x336070: 0xc0fba90  jal         func_3EEA40
label_336074:
    if (ctx->pc == 0x336074u) {
        ctx->pc = 0x336074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336070u;
        // 0x336074: 0x8e442c80  lw          $a0, 0x2C80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336078u;
        goto label_336078;
    }
    ctx->pc = 0x336070u;
    SET_GPR_U32(ctx, 31, 0x336078u);
    ctx->pc = 0x336074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336070u;
    // 0x336074: 0x8e442c80  lw          $a0, 0x2C80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEA40u, 0x336070u, 0x336078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336078u;
label_336078:
    // 0x336078: 0x8e422c80  lw          $v0, 0x2C80($s2)
    ctx->pc = 0x336078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11392)));
label_33607c:
    // 0x33607c: 0x10000009  b           . + 4 + (0x9 << 2)
label_336080:
    if (ctx->pc == 0x336080u) {
        ctx->pc = 0x336080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33607Cu;
        // 0x336080: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336084u;
        goto label_336084;
    }
    ctx->pc = 0x33607Cu;
    {
        const bool branch_taken_0x33607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33607Cu;
        // 0x336080: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33607c) {
            ctx->pc = 0x3360A4u;
            goto label_3360a4;
        }
    }
    ctx->pc = 0x336084u;
label_336084:
    // 0x336084: 0x8e442c80  lw          $a0, 0x2C80($s2)
    ctx->pc = 0x336084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11392)));
label_336088:
    // 0x336088: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_33608c:
    if (ctx->pc == 0x33608Cu) {
        ctx->pc = 0x33608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336088u;
        // 0x33608c: 0xae402c80  sw          $zero, 0x2C80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336090u;
        goto label_336090;
    }
    ctx->pc = 0x336088u;
    {
        const bool branch_taken_0x336088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336088) {
            ctx->pc = 0x33608Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336088u;
            // 0x33608c: 0xae402c80  sw          $zero, 0x2C80($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 11392), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3360A4u;
            goto label_3360a4;
        }
    }
    ctx->pc = 0x336090u;
label_336090:
    // 0x336090: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x336090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_336094:
    // 0x336094: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x336094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_336098:
    // 0x336098: 0x40f809  jalr        $v0
label_33609c:
    if (ctx->pc == 0x33609Cu) {
        ctx->pc = 0x33609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336098u;
        // 0x33609c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3360A0u;
        goto label_3360a0;
    }
    ctx->pc = 0x336098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3360A0u);
        ctx->pc = 0x33609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336098u;
        // 0x33609c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336098u, 0x3360A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3360A0u;
label_3360a0:
    // 0x3360a0: 0xae402c80  sw          $zero, 0x2C80($s2)
    ctx->pc = 0x3360a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11392), GPR_U32(ctx, 0));
label_3360a4:
    // 0x3360a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3360a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3360a8:
    // 0x3360a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3360a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3360ac:
    // 0x3360ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3360acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3360b0:
    // 0x3360b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3360b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3360b4:
    // 0x3360b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3360b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3360b8:
    // 0x3360b8: 0x3e00008  jr          $ra
label_3360bc:
    if (ctx->pc == 0x3360BCu) {
        ctx->pc = 0x3360BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360B8u;
        // 0x3360bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3360C0u;
        goto label_fallthrough_0x3360b8;
    }
    ctx->pc = 0x3360B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3360BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360B8u;
        // 0x3360bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3360B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3360b8:
    ctx->pc = 0x3360C0u;
}
