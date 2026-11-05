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

// Function: sub_001FDFA0
// Address: 0x1fdfa0 - 0x1fe130
void sub_001FDFA0_0x1fdfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDFA0_0x1fdfa0");
#endif

    switch (ctx->pc) {
        case 0x1fdfa0u: goto label_1fdfa0;
        case 0x1fdfa4u: goto label_1fdfa4;
        case 0x1fdfa8u: goto label_1fdfa8;
        case 0x1fdfacu: goto label_1fdfac;
        case 0x1fdfb0u: goto label_1fdfb0;
        case 0x1fdfb4u: goto label_1fdfb4;
        case 0x1fdfb8u: goto label_1fdfb8;
        case 0x1fdfbcu: goto label_1fdfbc;
        case 0x1fdfc0u: goto label_1fdfc0;
        case 0x1fdfc4u: goto label_1fdfc4;
        case 0x1fdfc8u: goto label_1fdfc8;
        case 0x1fdfccu: goto label_1fdfcc;
        case 0x1fdfd0u: goto label_1fdfd0;
        case 0x1fdfd4u: goto label_1fdfd4;
        case 0x1fdfd8u: goto label_1fdfd8;
        case 0x1fdfdcu: goto label_1fdfdc;
        case 0x1fdfe0u: goto label_1fdfe0;
        case 0x1fdfe4u: goto label_1fdfe4;
        case 0x1fdfe8u: goto label_1fdfe8;
        case 0x1fdfecu: goto label_1fdfec;
        case 0x1fdff0u: goto label_1fdff0;
        case 0x1fdff4u: goto label_1fdff4;
        case 0x1fdff8u: goto label_1fdff8;
        case 0x1fdffcu: goto label_1fdffc;
        case 0x1fe000u: goto label_1fe000;
        case 0x1fe004u: goto label_1fe004;
        case 0x1fe008u: goto label_1fe008;
        case 0x1fe00cu: goto label_1fe00c;
        case 0x1fe010u: goto label_1fe010;
        case 0x1fe014u: goto label_1fe014;
        case 0x1fe018u: goto label_1fe018;
        case 0x1fe01cu: goto label_1fe01c;
        case 0x1fe020u: goto label_1fe020;
        case 0x1fe024u: goto label_1fe024;
        case 0x1fe028u: goto label_1fe028;
        case 0x1fe02cu: goto label_1fe02c;
        case 0x1fe030u: goto label_1fe030;
        case 0x1fe034u: goto label_1fe034;
        case 0x1fe038u: goto label_1fe038;
        case 0x1fe03cu: goto label_1fe03c;
        case 0x1fe040u: goto label_1fe040;
        case 0x1fe044u: goto label_1fe044;
        case 0x1fe048u: goto label_1fe048;
        case 0x1fe04cu: goto label_1fe04c;
        case 0x1fe050u: goto label_1fe050;
        case 0x1fe054u: goto label_1fe054;
        case 0x1fe058u: goto label_1fe058;
        case 0x1fe05cu: goto label_1fe05c;
        case 0x1fe060u: goto label_1fe060;
        case 0x1fe064u: goto label_1fe064;
        case 0x1fe068u: goto label_1fe068;
        case 0x1fe06cu: goto label_1fe06c;
        case 0x1fe070u: goto label_1fe070;
        case 0x1fe074u: goto label_1fe074;
        case 0x1fe078u: goto label_1fe078;
        case 0x1fe07cu: goto label_1fe07c;
        case 0x1fe080u: goto label_1fe080;
        case 0x1fe084u: goto label_1fe084;
        case 0x1fe088u: goto label_1fe088;
        case 0x1fe08cu: goto label_1fe08c;
        case 0x1fe090u: goto label_1fe090;
        case 0x1fe094u: goto label_1fe094;
        case 0x1fe098u: goto label_1fe098;
        case 0x1fe09cu: goto label_1fe09c;
        case 0x1fe0a0u: goto label_1fe0a0;
        case 0x1fe0a4u: goto label_1fe0a4;
        case 0x1fe0a8u: goto label_1fe0a8;
        case 0x1fe0acu: goto label_1fe0ac;
        case 0x1fe0b0u: goto label_1fe0b0;
        case 0x1fe0b4u: goto label_1fe0b4;
        case 0x1fe0b8u: goto label_1fe0b8;
        case 0x1fe0bcu: goto label_1fe0bc;
        case 0x1fe0c0u: goto label_1fe0c0;
        case 0x1fe0c4u: goto label_1fe0c4;
        case 0x1fe0c8u: goto label_1fe0c8;
        case 0x1fe0ccu: goto label_1fe0cc;
        case 0x1fe0d0u: goto label_1fe0d0;
        case 0x1fe0d4u: goto label_1fe0d4;
        case 0x1fe0d8u: goto label_1fe0d8;
        case 0x1fe0dcu: goto label_1fe0dc;
        case 0x1fe0e0u: goto label_1fe0e0;
        case 0x1fe0e4u: goto label_1fe0e4;
        case 0x1fe0e8u: goto label_1fe0e8;
        case 0x1fe0ecu: goto label_1fe0ec;
        case 0x1fe0f0u: goto label_1fe0f0;
        case 0x1fe0f4u: goto label_1fe0f4;
        case 0x1fe0f8u: goto label_1fe0f8;
        case 0x1fe0fcu: goto label_1fe0fc;
        case 0x1fe100u: goto label_1fe100;
        case 0x1fe104u: goto label_1fe104;
        case 0x1fe108u: goto label_1fe108;
        case 0x1fe10cu: goto label_1fe10c;
        case 0x1fe110u: goto label_1fe110;
        case 0x1fe114u: goto label_1fe114;
        case 0x1fe118u: goto label_1fe118;
        case 0x1fe11cu: goto label_1fe11c;
        case 0x1fe120u: goto label_1fe120;
        case 0x1fe124u: goto label_1fe124;
        case 0x1fe128u: goto label_1fe128;
        case 0x1fe12cu: goto label_1fe12c;
        default: break;
    }

    ctx->pc = 0x1fdfa0u;

label_1fdfa0:
    // 0x1fdfa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fdfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fdfa4:
    // 0x1fdfa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fdfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fdfa8:
    // 0x1fdfa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fdfa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdfac:
    // 0x1fdfac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fdfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fdfb0:
    // 0x1fdfb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fdfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fdfb4:
    // 0x1fdfb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fdfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1fdfb8:
    // 0x1fdfb8: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1fdfb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fdfbc:
    // 0x1fdfbc: 0xc07fae6  jal         func_1FEB98
label_1fdfc0:
    if (ctx->pc == 0x1FDFC0u) {
        ctx->pc = 0x1FDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFBCu;
        // 0x1fdfc0: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFC4u;
        goto label_1fdfc4;
    }
    ctx->pc = 0x1FDFBCu;
    SET_GPR_U32(ctx, 31, 0x1FDFC4u);
    ctx->pc = 0x1FDFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDFBCu;
    // 0x1fdfc0: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB98u, 0x1FDFBCu, 0x1FDFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDFC4u;
label_1fdfc4:
    // 0x1fdfc4: 0x0  nop
    ctx->pc = 0x1fdfc4u;
    // NOP
label_1fdfc8:
    // 0x1fdfc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fdfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fdfcc:
    // 0x1fdfcc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1fdfd0:
    if (ctx->pc == 0x1FDFD0u) {
        ctx->pc = 0x1FDFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFCCu;
        // 0x1fdfd0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFD4u;
        goto label_1fdfd4;
    }
    ctx->pc = 0x1FDFCCu;
    {
        const bool branch_taken_0x1fdfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfcc) {
            ctx->pc = 0x1FDFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDFCCu;
            // 0x1fdfd0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDFE4u;
            goto label_1fdfe4;
        }
    }
    ctx->pc = 0x1FDFD4u;
label_1fdfd4:
    // 0x1fdfd4: 0xc082464  jal         func_209190
label_1fdfd8:
    if (ctx->pc == 0x1FDFD8u) {
        ctx->pc = 0x1FDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFD4u;
        // 0x1fdfd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFDCu;
        goto label_1fdfdc;
    }
    ctx->pc = 0x1FDFD4u;
    SET_GPR_U32(ctx, 31, 0x1FDFDCu);
    ctx->pc = 0x1FDFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDFD4u;
    // 0x1fdfd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209190u, 0x1FDFD4u, 0x1FDFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDFDCu;
label_1fdfdc:
    // 0x1fdfdc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fdfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1fdfe0:
    // 0x1fdfe0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1fdfe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1fdfe4:
    // 0x1fdfe4: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
label_1fdfe8:
    if (ctx->pc == 0x1FDFE8u) {
        ctx->pc = 0x1FDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFE4u;
        // 0x1fdfe8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFECu;
        goto label_1fdfec;
    }
    ctx->pc = 0x1FDFE4u;
    {
        const bool branch_taken_0x1fdfe4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1FDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFE4u;
        // 0x1fdfe8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfe4) {
            ctx->pc = 0x1FDFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdfc8;
        }
    }
    ctx->pc = 0x1FDFECu;
label_1fdfec:
    // 0x1fdfec: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1fdfecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1fdff0:
    // 0x1fdff0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1fdff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fdff4:
    // 0x1fdff4: 0x0  nop
    ctx->pc = 0x1fdff4u;
    // NOP
label_1fdff8:
    // 0x1fdff8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fdff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fdffc:
    // 0x1fdffc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1fe000:
    if (ctx->pc == 0x1FE000u) {
        ctx->pc = 0x1FE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFFCu;
        // 0x1fe000: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE004u;
        goto label_1fe004;
    }
    ctx->pc = 0x1FDFFCu;
    {
        const bool branch_taken_0x1fdffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdffc) {
            ctx->pc = 0x1FE000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDFFCu;
            // 0x1fe000: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE014u;
            goto label_1fe014;
        }
    }
    ctx->pc = 0x1FE004u;
label_1fe004:
    // 0x1fe004: 0xc082464  jal         func_209190
label_1fe008:
    if (ctx->pc == 0x1FE008u) {
        ctx->pc = 0x1FE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE004u;
        // 0x1fe008: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE00Cu;
        goto label_1fe00c;
    }
    ctx->pc = 0x1FE004u;
    SET_GPR_U32(ctx, 31, 0x1FE00Cu);
    ctx->pc = 0x1FE008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE004u;
    // 0x1fe008: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209190u, 0x1FE004u, 0x1FE00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE00Cu;
label_1fe00c:
    // 0x1fe00c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fe00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1fe010:
    // 0x1fe010: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1fe010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1fe014:
    // 0x1fe014: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
label_1fe018:
    if (ctx->pc == 0x1FE018u) {
        ctx->pc = 0x1FE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE014u;
        // 0x1fe018: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE01Cu;
        goto label_1fe01c;
    }
    ctx->pc = 0x1FE014u;
    {
        const bool branch_taken_0x1fe014 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1FE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE014u;
        // 0x1fe018: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe014) {
            ctx->pc = 0x1FDFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdff8;
        }
    }
    ctx->pc = 0x1FE01Cu;
label_1fe01c:
    // 0x1fe01c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1fe01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1fe020:
    // 0x1fe020: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1fe024:
    if (ctx->pc == 0x1FE024u) {
        ctx->pc = 0x1FE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE020u;
        // 0x1fe024: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE028u;
        goto label_1fe028;
    }
    ctx->pc = 0x1FE020u;
    {
        const bool branch_taken_0x1fe020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe020) {
            ctx->pc = 0x1FE024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE020u;
            // 0x1fe024: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE038u;
            goto label_1fe038;
        }
    }
    ctx->pc = 0x1FE028u;
label_1fe028:
    // 0x1fe028: 0xc082464  jal         func_209190
label_1fe02c:
    if (ctx->pc == 0x1FE02Cu) {
        ctx->pc = 0x1FE02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE028u;
        // 0x1fe02c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE030u;
        goto label_1fe030;
    }
    ctx->pc = 0x1FE028u;
    SET_GPR_U32(ctx, 31, 0x1FE030u);
    ctx->pc = 0x1FE02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE028u;
    // 0x1fe02c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209190u, 0x1FE028u, 0x1FE030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE030u;
label_1fe030:
    // 0x1fe030: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1fe030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_1fe034:
    // 0x1fe034: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1fe034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1fe038:
    // 0x1fe038: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1fe03c:
    if (ctx->pc == 0x1FE03Cu) {
        ctx->pc = 0x1FE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE038u;
        // 0x1fe03c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE040u;
        goto label_1fe040;
    }
    ctx->pc = 0x1FE038u;
    {
        const bool branch_taken_0x1fe038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe038) {
            ctx->pc = 0x1FE03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE038u;
            // 0x1fe03c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE050u;
            goto label_1fe050;
        }
    }
    ctx->pc = 0x1FE040u;
label_1fe040:
    // 0x1fe040: 0xc082464  jal         func_209190
label_1fe044:
    if (ctx->pc == 0x1FE044u) {
        ctx->pc = 0x1FE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE040u;
        // 0x1fe044: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE048u;
        goto label_1fe048;
    }
    ctx->pc = 0x1FE040u;
    SET_GPR_U32(ctx, 31, 0x1FE048u);
    ctx->pc = 0x1FE044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE040u;
    // 0x1fe044: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209190u, 0x1FE040u, 0x1FE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE048u;
label_1fe048:
    // 0x1fe048: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1fe048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_1fe04c:
    // 0x1fe04c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1fe04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fe050:
    // 0x1fe050: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1fe054:
    if (ctx->pc == 0x1FE054u) {
        ctx->pc = 0x1FE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE050u;
        // 0x1fe054: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE058u;
        goto label_1fe058;
    }
    ctx->pc = 0x1FE050u;
    {
        const bool branch_taken_0x1fe050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe050) {
            ctx->pc = 0x1FE054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE050u;
            // 0x1fe054: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE070u;
            goto label_1fe070;
        }
    }
    ctx->pc = 0x1FE058u;
label_1fe058:
    // 0x1fe058: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe05c:
    // 0x1fe05c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fe05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1fe060:
    // 0x1fe060: 0x40f809  jalr        $v0
label_1fe064:
    if (ctx->pc == 0x1FE064u) {
        ctx->pc = 0x1FE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE060u;
        // 0x1fe064: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE068u;
        goto label_1fe068;
    }
    ctx->pc = 0x1FE060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE068u);
        ctx->pc = 0x1FE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE060u;
        // 0x1fe064: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE060u, 0x1FE068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE068u;
label_1fe068:
    // 0x1fe068: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1fe068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1fe06c:
    // 0x1fe06c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1fe06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fe070:
    // 0x1fe070: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1fe074:
    if (ctx->pc == 0x1FE074u) {
        ctx->pc = 0x1FE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE070u;
        // 0x1fe074: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE078u;
        goto label_1fe078;
    }
    ctx->pc = 0x1FE070u;
    {
        const bool branch_taken_0x1fe070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE070u;
        // 0x1fe074: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe070) {
            ctx->pc = 0x1FE090u;
            goto label_1fe090;
        }
    }
    ctx->pc = 0x1FE078u;
label_1fe078:
    // 0x1fe078: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe07c:
    // 0x1fe07c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fe07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1fe080:
    // 0x1fe080: 0x40f809  jalr        $v0
label_1fe084:
    if (ctx->pc == 0x1FE084u) {
        ctx->pc = 0x1FE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE080u;
        // 0x1fe084: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE088u;
        goto label_1fe088;
    }
    ctx->pc = 0x1FE080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE088u);
        ctx->pc = 0x1FE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE080u;
        // 0x1fe084: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE080u, 0x1FE088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE088u;
label_1fe088:
    // 0x1fe088: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1fe088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1fe08c:
    // 0x1fe08c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1fe08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe090:
    // 0x1fe090: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fe090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe094:
    // 0x1fe094: 0x0  nop
    ctx->pc = 0x1fe094u;
    // NOP
label_1fe098:
    // 0x1fe098: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fe098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fe09c:
    // 0x1fe09c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1fe0a0:
    if (ctx->pc == 0x1FE0A0u) {
        ctx->pc = 0x1FE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE09Cu;
        // 0x1fe0a0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0A4u;
        goto label_1fe0a4;
    }
    ctx->pc = 0x1FE09Cu;
    {
        const bool branch_taken_0x1fe09c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe09c) {
            ctx->pc = 0x1FE0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE09Cu;
            // 0x1fe0a0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE0B8u;
            goto label_1fe0b8;
        }
    }
    ctx->pc = 0x1FE0A4u;
label_1fe0a4:
    // 0x1fe0a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe0a8:
    // 0x1fe0a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fe0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1fe0ac:
    // 0x1fe0ac: 0x40f809  jalr        $v0
label_1fe0b0:
    if (ctx->pc == 0x1FE0B0u) {
        ctx->pc = 0x1FE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0ACu;
        // 0x1fe0b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0B4u;
        goto label_1fe0b4;
    }
    ctx->pc = 0x1FE0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE0B4u);
        ctx->pc = 0x1FE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0ACu;
        // 0x1fe0b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE0ACu, 0x1FE0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE0B4u;
label_1fe0b4:
    // 0x1fe0b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fe0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1fe0b8:
    // 0x1fe0b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1fe0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1fe0bc:
    // 0x1fe0bc: 0x641fff6  bgez        $s2, . + 4 + (-0xA << 2)
label_1fe0c0:
    if (ctx->pc == 0x1FE0C0u) {
        ctx->pc = 0x1FE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0BCu;
        // 0x1fe0c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0C4u;
        goto label_1fe0c4;
    }
    ctx->pc = 0x1FE0BCu;
    {
        const bool branch_taken_0x1fe0bc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1FE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0BCu;
        // 0x1fe0c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0bc) {
            ctx->pc = 0x1FE098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe098;
        }
    }
    ctx->pc = 0x1FE0C4u;
label_1fe0c4:
    // 0x1fe0c4: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x1fe0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1fe0c8:
    // 0x1fe0c8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1fe0cc:
    if (ctx->pc == 0x1FE0CCu) {
        ctx->pc = 0x1FE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0C8u;
        // 0x1fe0cc: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0D0u;
        goto label_1fe0d0;
    }
    ctx->pc = 0x1FE0C8u;
    {
        const bool branch_taken_0x1fe0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0c8) {
            ctx->pc = 0x1FE0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE0C8u;
            // 0x1fe0cc: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE0E0u;
            goto label_1fe0e0;
        }
    }
    ctx->pc = 0x1FE0D0u;
label_1fe0d0:
    // 0x1fe0d0: 0xc08189e  jal         func_206278
label_1fe0d4:
    if (ctx->pc == 0x1FE0D4u) {
        ctx->pc = 0x1FE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0D0u;
        // 0x1fe0d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0D8u;
        goto label_1fe0d8;
    }
    ctx->pc = 0x1FE0D0u;
    SET_GPR_U32(ctx, 31, 0x1FE0D8u);
    ctx->pc = 0x1FE0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0D0u;
    // 0x1fe0d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206278u, 0x1FE0D0u, 0x1FE0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0D8u;
label_1fe0d8:
    // 0x1fe0d8: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1fe0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_1fe0dc:
    // 0x1fe0dc: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x1fe0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1fe0e0:
    // 0x1fe0e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1fe0e4:
    if (ctx->pc == 0x1FE0E4u) {
        ctx->pc = 0x1FE0E8u;
        goto label_1fe0e8;
    }
    ctx->pc = 0x1FE0E0u;
    {
        const bool branch_taken_0x1fe0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0e0) {
            ctx->pc = 0x1FE0F4u;
            goto label_1fe0f4;
        }
    }
    ctx->pc = 0x1FE0E8u;
label_1fe0e8:
    // 0x1fe0e8: 0xc08189e  jal         func_206278
label_1fe0ec:
    if (ctx->pc == 0x1FE0ECu) {
        ctx->pc = 0x1FE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0E8u;
        // 0x1fe0ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0F0u;
        goto label_1fe0f0;
    }
    ctx->pc = 0x1FE0E8u;
    SET_GPR_U32(ctx, 31, 0x1FE0F0u);
    ctx->pc = 0x1FE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0E8u;
    // 0x1fe0ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206278u, 0x1FE0E8u, 0x1FE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0F0u;
label_1fe0f0:
    // 0x1fe0f0: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1fe0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_1fe0f4:
    // 0x1fe0f4: 0xc081d3a  jal         func_2074E8
label_1fe0f8:
    if (ctx->pc == 0x1FE0F8u) {
        ctx->pc = 0x1FE0FCu;
        goto label_1fe0fc;
    }
    ctx->pc = 0x1FE0F4u;
    SET_GPR_U32(ctx, 31, 0x1FE0FCu);
    ctx->pc = 0x2074E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074E8u, 0x1FE0F4u, 0x1FE0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0FCu;
label_1fe0fc:
    // 0x1fe0fc: 0xc081710  jal         func_205C40
label_1fe100:
    if (ctx->pc == 0x1FE100u) {
        ctx->pc = 0x1FE104u;
        goto label_1fe104;
    }
    ctx->pc = 0x1FE0FCu;
    SET_GPR_U32(ctx, 31, 0x1FE104u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FE0FCu, 0x1FE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE104u;
label_1fe104:
    // 0x1fe104: 0xc0817a4  jal         func_205E90
label_1fe108:
    if (ctx->pc == 0x1FE108u) {
        ctx->pc = 0x1FE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE104u;
        // 0x1fe108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE10Cu;
        goto label_1fe10c;
    }
    ctx->pc = 0x1FE104u;
    SET_GPR_U32(ctx, 31, 0x1FE10Cu);
    ctx->pc = 0x1FE108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE104u;
    // 0x1fe108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205E90u, 0x1FE104u, 0x1FE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE10Cu;
label_1fe10c:
    // 0x1fe10c: 0xc081714  jal         func_205C50
label_1fe110:
    if (ctx->pc == 0x1FE110u) {
        ctx->pc = 0x1FE114u;
        goto label_1fe114;
    }
    ctx->pc = 0x1FE10Cu;
    SET_GPR_U32(ctx, 31, 0x1FE114u);
    ctx->pc = 0x205C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C50u, 0x1FE10Cu, 0x1FE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE114u;
label_1fe114:
    // 0x1fe114: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x1fe114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_1fe118:
    // 0x1fe118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe11c:
    // 0x1fe11c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fe120:
    // 0x1fe120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe124:
    // 0x1fe124: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fe124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fe128:
    // 0x1fe128: 0x3e00008  jr          $ra
label_1fe12c:
    if (ctx->pc == 0x1FE12Cu) {
        ctx->pc = 0x1FE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE128u;
        // 0x1fe12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE130u;
        goto label_fallthrough_0x1fe128;
    }
    ctx->pc = 0x1FE128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE128u;
        // 0x1fe12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe128:
    ctx->pc = 0x1FE130u;
}
