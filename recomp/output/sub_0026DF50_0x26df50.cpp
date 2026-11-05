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

// Function: sub_0026DF50
// Address: 0x26df50 - 0x26e028
void sub_0026DF50_0x26df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DF50_0x26df50");
#endif

    switch (ctx->pc) {
        case 0x26df78u: goto label_26df78;
        case 0x26df80u: goto label_26df80;
        case 0x26dfc8u: goto label_26dfc8;
        case 0x26dfd0u: goto label_26dfd0;
        default: break;
    }

    ctx->pc = 0x26df50u;

    // 0x26df50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26df50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26df54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26df58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26df5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26df5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26df64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26df64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df68: 0x8e030268  lw          $v1, 0x268($s0)
    ctx->pc = 0x26df68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x26df6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26DF6Cu;
    {
        const bool branch_taken_0x26df6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF6Cu;
        // 0x26df70: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df6c) {
            ctx->pc = 0x26DF9Cu;
            goto label_26df9c;
        }
    }
    ctx->pc = 0x26DF74u;
    // 0x26df74: 0x0  nop
    ctx->pc = 0x26df74u;
    // NOP
label_26df78:
    // 0x26df78: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x26DF78u;
    SET_GPR_U32(ctx, 31, 0x26DF80u);
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x26DF78u, 0x26DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF80u;
label_26df80:
    // 0x26df80: 0x10510023  beq         $v0, $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x26DF80u;
    {
        const bool branch_taken_0x26df80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x26DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF80u;
        // 0x26df84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df80) {
            ctx->pc = 0x26E010u;
            goto label_26e010;
        }
    }
    ctx->pc = 0x26DF88u;
    // 0x26df88: 0x8e030268  lw          $v1, 0x268($s0)
    ctx->pc = 0x26df88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x26df8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26df90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DF90u;
    {
        const bool branch_taken_0x26df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df90) {
            ctx->pc = 0x26DF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DF90u;
            // 0x26df94: 0x8e020268  lw          $v0, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DFA4u;
            goto label_26dfa4;
        }
    }
    ctx->pc = 0x26DF98u;
    // 0x26df98: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26df98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26df9c:
    // 0x26df9c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x26df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x26dfa0: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x26dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_26dfa4:
    // 0x26dfa4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26dfa8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26DFA8u;
    {
        const bool branch_taken_0x26dfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFA8u;
        // 0x26dfac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfa8) {
            ctx->pc = 0x26DFB4u;
            goto label_26dfb4;
        }
    }
    ctx->pc = 0x26DFB0u;
    // 0x26dfb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26dfb4:
    // 0x26dfb4: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x26DFB4u;
    {
        const bool branch_taken_0x26dfb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dfb4) {
            ctx->pc = 0x26DF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26df78;
        }
    }
    ctx->pc = 0x26DFBCu;
    // 0x26dfbc: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x26dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x26dfc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26DFC0u;
    {
        const bool branch_taken_0x26dfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFC0u;
        // 0x26dfc4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfc0) {
            ctx->pc = 0x26DFF0u;
            goto label_26dff0;
        }
    }
    ctx->pc = 0x26DFC8u;
label_26dfc8:
    // 0x26dfc8: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x26DFC8u;
    SET_GPR_U32(ctx, 31, 0x26DFD0u);
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x26DFC8u, 0x26DFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DFD0u;
label_26dfd0:
    // 0x26dfd0: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DFD0u;
    {
        const bool branch_taken_0x26dfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x26dfd0) {
            ctx->pc = 0x26DFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DFD0u;
            // 0x26dfd4: 0x8e030264  lw          $v1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DFE0u;
            goto label_26dfe0;
        }
    }
    ctx->pc = 0x26DFD8u;
    // 0x26dfd8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26DFD8u;
    {
        const bool branch_taken_0x26dfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFD8u;
        // 0x26dfdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfd8) {
            ctx->pc = 0x26E010u;
            goto label_26e010;
        }
    }
    ctx->pc = 0x26DFE0u;
label_26dfe0:
    // 0x26dfe0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26dfe4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DFE4u;
    {
        const bool branch_taken_0x26dfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dfe4) {
            ctx->pc = 0x26DFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DFE4u;
            // 0x26dfe8: 0x8e020264  lw          $v0, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DFF8u;
            goto label_26dff8;
        }
    }
    ctx->pc = 0x26DFECu;
    // 0x26dfec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26dff0:
    // 0x26dff0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x26dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x26dff4: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x26dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_26dff8:
    // 0x26dff8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26dffc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26DFFCu;
    {
        const bool branch_taken_0x26dffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFFCu;
        // 0x26e000: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dffc) {
            ctx->pc = 0x26E008u;
            goto label_26e008;
        }
    }
    ctx->pc = 0x26E004u;
    // 0x26e004: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26e004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e008:
    // 0x26e008: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x26E008u;
    {
        const bool branch_taken_0x26e008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E008u;
        // 0x26e00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e008) {
            ctx->pc = 0x26DFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26dfc8;
        }
    }
    ctx->pc = 0x26E010u;
label_26e010:
    // 0x26e010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26e010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26e014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26e018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e01c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E01Cu;
        // 0x26e020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E024u;
    // 0x26e024: 0x0  nop
    ctx->pc = 0x26e024u;
    // NOP
    ctx->pc = 0x26e028u;
}
