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

// Function: sub_003ACF98
// Address: 0x3acf98 - 0x3ad080
void sub_003ACF98_0x3acf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACF98_0x3acf98");
#endif

    switch (ctx->pc) {
        case 0x3acf98u: goto label_3acf98;
        case 0x3acf9cu: goto label_3acf9c;
        case 0x3acfa0u: goto label_3acfa0;
        case 0x3acfa4u: goto label_3acfa4;
        case 0x3acfa8u: goto label_3acfa8;
        case 0x3acfacu: goto label_3acfac;
        case 0x3acfb0u: goto label_3acfb0;
        case 0x3acfb4u: goto label_3acfb4;
        case 0x3acfb8u: goto label_3acfb8;
        case 0x3acfbcu: goto label_3acfbc;
        case 0x3acfc0u: goto label_3acfc0;
        case 0x3acfc4u: goto label_3acfc4;
        case 0x3acfc8u: goto label_3acfc8;
        case 0x3acfccu: goto label_3acfcc;
        case 0x3acfd0u: goto label_3acfd0;
        case 0x3acfd4u: goto label_3acfd4;
        case 0x3acfd8u: goto label_3acfd8;
        case 0x3acfdcu: goto label_3acfdc;
        case 0x3acfe0u: goto label_3acfe0;
        case 0x3acfe4u: goto label_3acfe4;
        case 0x3acfe8u: goto label_3acfe8;
        case 0x3acfecu: goto label_3acfec;
        case 0x3acff0u: goto label_3acff0;
        case 0x3acff4u: goto label_3acff4;
        case 0x3acff8u: goto label_3acff8;
        case 0x3acffcu: goto label_3acffc;
        case 0x3ad000u: goto label_3ad000;
        case 0x3ad004u: goto label_3ad004;
        case 0x3ad008u: goto label_3ad008;
        case 0x3ad00cu: goto label_3ad00c;
        case 0x3ad010u: goto label_3ad010;
        case 0x3ad014u: goto label_3ad014;
        case 0x3ad018u: goto label_3ad018;
        case 0x3ad01cu: goto label_3ad01c;
        case 0x3ad020u: goto label_3ad020;
        case 0x3ad024u: goto label_3ad024;
        case 0x3ad028u: goto label_3ad028;
        case 0x3ad02cu: goto label_3ad02c;
        case 0x3ad030u: goto label_3ad030;
        case 0x3ad034u: goto label_3ad034;
        case 0x3ad038u: goto label_3ad038;
        case 0x3ad03cu: goto label_3ad03c;
        case 0x3ad040u: goto label_3ad040;
        case 0x3ad044u: goto label_3ad044;
        case 0x3ad048u: goto label_3ad048;
        case 0x3ad04cu: goto label_3ad04c;
        case 0x3ad050u: goto label_3ad050;
        case 0x3ad054u: goto label_3ad054;
        case 0x3ad058u: goto label_3ad058;
        case 0x3ad05cu: goto label_3ad05c;
        case 0x3ad060u: goto label_3ad060;
        case 0x3ad064u: goto label_3ad064;
        case 0x3ad068u: goto label_3ad068;
        case 0x3ad06cu: goto label_3ad06c;
        case 0x3ad070u: goto label_3ad070;
        case 0x3ad074u: goto label_3ad074;
        case 0x3ad078u: goto label_3ad078;
        case 0x3ad07cu: goto label_3ad07c;
        default: break;
    }

    ctx->pc = 0x3acf98u;

label_3acf98:
    // 0x3acf98: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3acf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3acf9c:
    // 0x3acf9c: 0x244291a8  addiu       $v0, $v0, -0x6E58
    ctx->pc = 0x3acf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939048));
label_3acfa0:
    // 0x3acfa0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3acfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_3acfa4:
    // 0x3acfa4: 0x3e00008  jr          $ra
label_3acfa8:
    if (ctx->pc == 0x3ACFA8u) {
        ctx->pc = 0x3ACFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFA4u;
        // 0x3acfa8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACFACu;
        goto label_3acfac;
    }
    ctx->pc = 0x3ACFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFA4u;
        // 0x3acfa8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACFACu;
label_3acfac:
    // 0x3acfac: 0x0  nop
    ctx->pc = 0x3acfacu;
    // NOP
label_3acfb0:
    // 0x3acfb0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3acfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3acfb4:
    // 0x3acfb4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3acfb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3acfb8:
    // 0x3acfb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3acfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3acfbc:
    // 0x3acfbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3acfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_3acfc0:
    // 0x3acfc0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3acfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3acfc4:
    // 0x3acfc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3acfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3acfc8:
    // 0x3acfc8: 0x4a080  sll         $s4, $a0, 2
    ctx->pc = 0x3acfc8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3acfcc:
    // 0x3acfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3acfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3acfd0:
    // 0x3acfd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3acfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3acfd4:
    // 0x3acfd4: 0x3c110042  lui         $s1, 0x42
    ctx->pc = 0x3acfd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)66 << 16));
label_3acfd8:
    // 0x3acfd8: 0x26313330  addiu       $s1, $s1, 0x3330
    ctx->pc = 0x3acfd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 13104));
label_3acfdc:
    // 0x3acfdc: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x3acfdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_3acfe0:
    // 0x3acfe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3acfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3acfe4:
    // 0x3acfe4: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x3acfe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3acfe8:
    // 0x3acfe8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3acfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3acfec:
    // 0x3acfec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3acfecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acff0:
    // 0x3acff0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3acff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_3acff4:
    // 0x3acff4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3acff4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3acff8:
    // 0x3acff8: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3acff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_3acffc:
    // 0x3acffc: 0x26108f20  addiu       $s0, $s0, -0x70E0
    ctx->pc = 0x3acffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938400));
label_3ad000:
    // 0x3ad000: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ad000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3ad004:
    // 0x3ad004: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ad004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad008:
    // 0x3ad008: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3ad008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ad00c:
    // 0x3ad00c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3ad010:
    if (ctx->pc == 0x3AD010u) {
        ctx->pc = 0x3AD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD00Cu;
        // 0x3ad010: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD014u;
        goto label_3ad014;
    }
    ctx->pc = 0x3AD00Cu;
    {
        const bool branch_taken_0x3ad00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD00Cu;
        // 0x3ad010: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad00c) {
            ctx->pc = 0x3AD028u;
            goto label_3ad028;
        }
    }
    ctx->pc = 0x3AD014u;
label_3ad014:
    // 0x3ad014: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x3ad014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_3ad018:
    // 0x3ad018: 0x40f809  jalr        $v0
label_3ad01c:
    if (ctx->pc == 0x3AD01Cu) {
        ctx->pc = 0x3AD020u;
        goto label_3ad020;
    }
    ctx->pc = 0x3AD018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD020u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD018u, 0x3AD020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD020u;
label_3ad020:
    // 0x3ad020: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3ad020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3ad024:
    // 0x3ad024: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x3ad024u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_3ad028:
    // 0x3ad028: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ad028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ad02c:
    // 0x3ad02c: 0x643fff6  bgezl       $s2, . + 4 + (-0xA << 2)
label_3ad030:
    if (ctx->pc == 0x3AD030u) {
        ctx->pc = 0x3AD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD02Cu;
        // 0x3ad030: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD034u;
        goto label_3ad034;
    }
    ctx->pc = 0x3AD02Cu;
    {
        const bool branch_taken_0x3ad02c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x3ad02c) {
            ctx->pc = 0x3AD030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD02Cu;
            // 0x3ad030: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad008;
        }
    }
    ctx->pc = 0x3AD034u;
label_3ad034:
    // 0x3ad034: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3ad034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
label_3ad038:
    // 0x3ad038: 0x24843310  addiu       $a0, $a0, 0x3310
    ctx->pc = 0x3ad038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13072));
label_3ad03c:
    // 0x3ad03c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x3ad03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_3ad040:
    // 0x3ad040: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3ad040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ad044:
    // 0x3ad044: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ad044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad048:
    // 0x3ad048: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3ad048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad04c:
    // 0x3ad04c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ad04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad050:
    // 0x3ad050: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ad050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ad054:
    // 0x3ad054: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ad054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ad058:
    // 0x3ad058: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ad058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad05c:
    // 0x3ad05c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ad05cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ad060:
    // 0x3ad060: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3ad060u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3ad064:
    // 0x3ad064: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ad064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad068:
    // 0x3ad068: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3ad068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3ad06c:
    // 0x3ad06c: 0x3e00008  jr          $ra
label_3ad070:
    if (ctx->pc == 0x3AD070u) {
        ctx->pc = 0x3AD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD06Cu;
        // 0x3ad070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD074u;
        goto label_3ad074;
    }
    ctx->pc = 0x3AD06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD06Cu;
        // 0x3ad070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD074u;
label_3ad074:
    // 0x3ad074: 0x0  nop
    ctx->pc = 0x3ad074u;
    // NOP
label_3ad078:
    // 0x3ad078: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ad078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ad07c:
    // 0x3ad07c: 0x0  nop
    ctx->pc = 0x3ad07cu;
    // NOP
    ctx->pc = 0x3ad080u;
}
