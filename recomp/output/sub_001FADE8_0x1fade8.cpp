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

// Function: sub_001FADE8
// Address: 0x1fade8 - 0x1faee8
void sub_001FADE8_0x1fade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FADE8_0x1fade8");
#endif

    switch (ctx->pc) {
        case 0x1fae5cu: goto label_1fae5c;
        case 0x1fae70u: goto label_1fae70;
        case 0x1fae88u: goto label_1fae88;
        case 0x1fae98u: goto label_1fae98;
        case 0x1faeccu: goto label_1faecc;
        default: break;
    }

    ctx->pc = 0x1fade8u;

    // 0x1fade8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fadec: 0x34028de0  ori         $v0, $zero, 0x8DE0
    ctx->pc = 0x1fadecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fadf0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1fadf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1fadf4: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x1fadf4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fadf8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fadf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fadfc: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x1fadfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1fae00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fae04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fae04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fae08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fae0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fae10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fae10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae14: 0x2239021  addu        $s2, $s1, $v1
    ctx->pc = 0x1fae14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fae18: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1fae18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fae1c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1fae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1fae20: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1FAE20u;
    {
        const bool branch_taken_0x1fae20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE20u;
        // 0x1fae24: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae20) {
            ctx->pc = 0x1FAED0u;
            goto label_1faed0;
        }
    }
    ctx->pc = 0x1FAE28u;
    // 0x1fae28: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1fae28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1fae2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAE2Cu;
    {
        const bool branch_taken_0x1fae2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE2Cu;
        // 0x1fae30: 0x34620010  ori         $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae2c) {
            ctx->pc = 0x1FAE48u;
            goto label_1fae48;
        }
    }
    ctx->pc = 0x1FAE34u;
    // 0x1fae34: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1fae34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1fae38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fae3c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1fae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1fae40: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1FAE40u;
    {
        const bool branch_taken_0x1fae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE40u;
        // 0x1fae44: 0xa2430000  sb          $v1, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae40) {
            ctx->pc = 0x1FAED0u;
            goto label_1faed0;
        }
    }
    ctx->pc = 0x1FAE48u;
label_1fae48:
    // 0x1fae48: 0x9250003a  lbu         $s0, 0x3A($s2)
    ctx->pc = 0x1fae48u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
    // 0x1fae4c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1fae4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fae50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fae50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae54: 0xc07eab8  jal         func_1FAAE0
    ctx->pc = 0x1FAE54u;
    SET_GPR_U32(ctx, 31, 0x1FAE5Cu);
    ctx->pc = 0x1FAE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE54u;
    // 0x1fae58: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAAE0u, 0x1FAE54u, 0x1FAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE5Cu;
label_1fae5c:
    // 0x1fae5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fae5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fae64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae68: 0xc07eac6  jal         func_1FAB18
    ctx->pc = 0x1FAE68u;
    SET_GPR_U32(ctx, 31, 0x1FAE70u);
    ctx->pc = 0x1FAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE68u;
    // 0x1fae6c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB18u, 0x1FAE68u, 0x1FAE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE70u;
label_1fae70:
    // 0x1fae70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAE70u;
    {
        const bool branch_taken_0x1fae70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE70u;
        // 0x1fae74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae70) {
            ctx->pc = 0x1FAE90u;
            goto label_1fae90;
        }
    }
    ctx->pc = 0x1FAE78u;
    // 0x1fae78: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1fae78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fae7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fae7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae80: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1FAE80u;
    SET_GPR_U32(ctx, 31, 0x1FAE88u);
    ctx->pc = 0x1FAE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE80u;
    // 0x1fae84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1FAE80u, 0x1FAE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE88u;
label_1fae88:
    // 0x1fae88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FAE88u;
    {
        const bool branch_taken_0x1fae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE88u;
        // 0x1fae8c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae88) {
            ctx->pc = 0x1FAED0u;
            goto label_1faed0;
        }
    }
    ctx->pc = 0x1FAE90u;
label_1fae90:
    // 0x1fae90: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1FAE90u;
    SET_GPR_U32(ctx, 31, 0x1FAE98u);
    ctx->pc = 0x1FAE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE90u;
    // 0x1fae94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1FAE90u, 0x1FAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE98u;
label_1fae98:
    // 0x1fae98: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x1fae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x1fae9c: 0x2442caa0  addiu       $v0, $v0, -0x3560
    ctx->pc = 0x1fae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953632));
    // 0x1faea0: 0x2c420053  sltiu       $v0, $v0, 0x53
    ctx->pc = 0x1faea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)83) ? 1 : 0);
    // 0x1faea4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAEA4u;
    {
        const bool branch_taken_0x1faea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEA4u;
        // 0x1faea8: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faea4) {
            ctx->pc = 0x1FAEB0u;
            goto label_1faeb0;
        }
    }
    ctx->pc = 0x1FAEACu;
    // 0x1faeac: 0xa62200f4  sh          $v0, 0xF4($s1)
    ctx->pc = 0x1faeacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 2));
label_1faeb0:
    // 0x1faeb0: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x1faeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x1faeb4: 0x240235b2  addiu       $v0, $zero, 0x35B2
    ctx->pc = 0x1faeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13746));
    // 0x1faeb8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAEB8u;
    {
        const bool branch_taken_0x1faeb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEB8u;
        // 0x1faebc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faeb8) {
            ctx->pc = 0x1FAEC4u;
            goto label_1faec4;
        }
    }
    ctx->pc = 0x1FAEC0u;
    // 0x1faec0: 0xa2220148  sb          $v0, 0x148($s1)
    ctx->pc = 0x1faec0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 328), (uint8_t)GPR_U32(ctx, 2));
label_1faec4:
    // 0x1faec4: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1FAEC4u;
    SET_GPR_U32(ctx, 31, 0x1FAECCu);
    ctx->pc = 0x1FAEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAEC4u;
    // 0x1faec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1FAEC4u, 0x1FAECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAECCu;
label_1faecc:
    // 0x1faecc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1faeccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1faed0:
    // 0x1faed0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1faed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1faed4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1faed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1faed8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1faed8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1faedc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1faedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEE0u;
        // 0x1faee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAEE8u;
}
