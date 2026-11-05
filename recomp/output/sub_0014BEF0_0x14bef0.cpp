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

// Function: sub_0014BEF0
// Address: 0x14bef0 - 0x14bfc8
void sub_0014BEF0_0x14bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BEF0_0x14bef0");
#endif

    switch (ctx->pc) {
        case 0x14bf08u: goto label_14bf08;
        case 0x14bf20u: goto label_14bf20;
        case 0x14bf30u: goto label_14bf30;
        case 0x14bf40u: goto label_14bf40;
        case 0x14bf50u: goto label_14bf50;
        case 0x14bf70u: goto label_14bf70;
        case 0x14bf7cu: goto label_14bf7c;
        case 0x14bf84u: goto label_14bf84;
        case 0x14bf98u: goto label_14bf98;
        case 0x14bfa4u: goto label_14bfa4;
        case 0x14bfacu: goto label_14bfac;
        case 0x14bfb4u: goto label_14bfb4;
        default: break;
    }

    ctx->pc = 0x14bef0u;

    // 0x14bef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14bef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bef8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14bef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14befc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14befcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf00: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14BF00u;
    SET_GPR_U32(ctx, 31, 0x14BF08u);
    ctx->pc = 0x14BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF00u;
    // 0x14bf04: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14BF00u, 0x14BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF08u;
label_14bf08:
    // 0x14bf08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bf0c: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x14BF0Cu;
    {
        const bool branch_taken_0x14bf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF0Cu;
        // 0x14bf10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf0c) {
            ctx->pc = 0x14BFB8u;
            goto label_14bfb8;
        }
    }
    ctx->pc = 0x14BF14u;
    // 0x14bf14: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14bf14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14bf18: 0xc053152  jal         func_14C548
    ctx->pc = 0x14BF18u;
    SET_GPR_U32(ctx, 31, 0x14BF20u);
    ctx->pc = 0x14BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF18u;
    // 0x14bf1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C548u, 0x14BF18u, 0x14BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF20u;
label_14bf20:
    // 0x14bf20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BF20u;
    {
        const bool branch_taken_0x14bf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf20) {
            ctx->pc = 0x14BF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BF20u;
            // 0x14bf24: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BF38u;
            goto label_14bf38;
        }
    }
    ctx->pc = 0x14BF28u;
    // 0x14bf28: 0xc0531de  jal         func_14C778
    ctx->pc = 0x14BF28u;
    SET_GPR_U32(ctx, 31, 0x14BF30u);
    ctx->pc = 0x14BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF28u;
    // 0x14bf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C778u, 0x14BF28u, 0x14BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF30u;
label_14bf30:
    // 0x14bf30: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14BF30u;
    {
        const bool branch_taken_0x14bf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF30u;
        // 0x14bf34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf30) {
            ctx->pc = 0x14BFB8u;
            goto label_14bfb8;
        }
    }
    ctx->pc = 0x14BF38u;
label_14bf38:
    // 0x14bf38: 0xc053088  jal         func_14C220
    ctx->pc = 0x14BF38u;
    SET_GPR_U32(ctx, 31, 0x14BF40u);
    ctx->pc = 0x14BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF38u;
    // 0x14bf3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C220u, 0x14BF38u, 0x14BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF40u;
label_14bf40:
    // 0x14bf40: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14BF40u;
    {
        const bool branch_taken_0x14bf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF40u;
        // 0x14bf44: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf40) {
            ctx->pc = 0x14BF90u;
            goto label_14bf90;
        }
    }
    ctx->pc = 0x14BF48u;
    // 0x14bf48: 0xc0530d8  jal         func_14C360
    ctx->pc = 0x14BF48u;
    SET_GPR_U32(ctx, 31, 0x14BF50u);
    ctx->pc = 0x14BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF48u;
    // 0x14bf4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C360u, 0x14BF48u, 0x14BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF50u;
label_14bf50:
    // 0x14bf50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BF50u;
    {
        const bool branch_taken_0x14bf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf50) {
            ctx->pc = 0x14BF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BF50u;
            // 0x14bf54: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BF68u;
            goto label_14bf68;
        }
    }
    ctx->pc = 0x14BF58u;
    // 0x14bf58: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14bf5c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14BF5Cu;
    {
        const bool branch_taken_0x14bf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF5Cu;
        // 0x14bf60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf5c) {
            ctx->pc = 0x14BFB8u;
            goto label_14bfb8;
        }
    }
    ctx->pc = 0x14BF64u;
    // 0x14bf64: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14bf64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14bf68:
    // 0x14bf68: 0xc0530ae  jal         func_14C2B8
    ctx->pc = 0x14BF68u;
    SET_GPR_U32(ctx, 31, 0x14BF70u);
    ctx->pc = 0x14BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF68u;
    // 0x14bf6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C2B8u, 0x14BF68u, 0x14BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF70u;
label_14bf70:
    // 0x14bf70: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14bf70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14bf74: 0xc05306e  jal         func_14C1B8
    ctx->pc = 0x14BF74u;
    SET_GPR_U32(ctx, 31, 0x14BF7Cu);
    ctx->pc = 0x14BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF74u;
    // 0x14bf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C1B8u, 0x14BF74u, 0x14BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF7Cu;
label_14bf7c:
    // 0x14bf7c: 0xc053258  jal         func_14C960
    ctx->pc = 0x14BF7Cu;
    SET_GPR_U32(ctx, 31, 0x14BF84u);
    ctx->pc = 0x14BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF7Cu;
    // 0x14bf80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C960u, 0x14BF7Cu, 0x14BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF84u;
label_14bf84:
    // 0x14bf84: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14BF84u;
    {
        const bool branch_taken_0x14bf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF84u;
        // 0x14bf88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf84) {
            ctx->pc = 0x14BFB8u;
            goto label_14bfb8;
        }
    }
    ctx->pc = 0x14BF8Cu;
    // 0x14bf8c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14bf8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14bf90:
    // 0x14bf90: 0xc05308e  jal         func_14C238
    ctx->pc = 0x14BF90u;
    SET_GPR_U32(ctx, 31, 0x14BF98u);
    ctx->pc = 0x14BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF90u;
    // 0x14bf94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C238u, 0x14BF90u, 0x14BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF98u;
label_14bf98:
    // 0x14bf98: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14bf98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14bf9c: 0xc05306e  jal         func_14C1B8
    ctx->pc = 0x14BF9Cu;
    SET_GPR_U32(ctx, 31, 0x14BFA4u);
    ctx->pc = 0x14BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF9Cu;
    // 0x14bfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C1B8u, 0x14BF9Cu, 0x14BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFA4u;
label_14bfa4:
    // 0x14bfa4: 0xc053220  jal         func_14C880
    ctx->pc = 0x14BFA4u;
    SET_GPR_U32(ctx, 31, 0x14BFACu);
    ctx->pc = 0x14BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFA4u;
    // 0x14bfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C880u, 0x14BFA4u, 0x14BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFACu;
label_14bfac:
    // 0x14bfac: 0xc0532a0  jal         func_14CA80
    ctx->pc = 0x14BFACu;
    SET_GPR_U32(ctx, 31, 0x14BFB4u);
    ctx->pc = 0x14BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFACu;
    // 0x14bfb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA80u, 0x14BFACu, 0x14BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFB4u;
label_14bfb4:
    // 0x14bfb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bfb8:
    // 0x14bfb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bfb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bfbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14bfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14bfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x14BFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFC0u;
        // 0x14bfc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BFC8u;
}
