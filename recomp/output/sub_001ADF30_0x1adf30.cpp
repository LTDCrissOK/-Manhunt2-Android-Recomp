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

// Function: sub_001ADF30
// Address: 0x1adf30 - 0x1ae020
void sub_001ADF30_0x1adf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADF30_0x1adf30");
#endif

    switch (ctx->pc) {
        case 0x1adf6cu: goto label_1adf6c;
        case 0x1adf7cu: goto label_1adf7c;
        case 0x1adf8cu: goto label_1adf8c;
        case 0x1adfa8u: goto label_1adfa8;
        case 0x1adfd0u: goto label_1adfd0;
        case 0x1adfe4u: goto label_1adfe4;
        default: break;
    }

    ctx->pc = 0x1adf30u;

    // 0x1adf30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1adf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1adf34: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1adf38: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1adf38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1adf3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1adf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1adf40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1adf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1adf44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1adf44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1adf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1adf4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1adf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1adf50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1adf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1adf54: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1ADF54u;
    {
        const bool branch_taken_0x1adf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF54u;
        // 0x1adf58: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf54) {
            ctx->pc = 0x1ADFFCu;
            goto label_1adffc;
        }
    }
    ctx->pc = 0x1ADF5Cu;
    // 0x1adf5c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1adf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1adf60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1adf60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf64: 0xc07524a  jal         func_1D4928
    ctx->pc = 0x1ADF64u;
    SET_GPR_U32(ctx, 31, 0x1ADF6Cu);
    ctx->pc = 0x1ADF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF64u;
    // 0x1adf68: 0x2484aea0  addiu       $a0, $a0, -0x5160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4928u, 0x1ADF64u, 0x1ADF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF6Cu;
label_1adf6c:
    // 0x1adf6c: 0x8e300274  lw          $s0, 0x274($s1)
    ctx->pc = 0x1adf6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x1adf70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1adf70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf74: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1ADF74u;
    SET_GPR_U32(ctx, 31, 0x1ADF7Cu);
    ctx->pc = 0x1ADF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF74u;
    // 0x1adf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1ADF74u, 0x1ADF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF7Cu;
label_1adf7c:
    // 0x1adf7c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADF7Cu;
    {
        const bool branch_taken_0x1adf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adf7c) {
            ctx->pc = 0x1ADF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADF7Cu;
            // 0x1adf80: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF98u;
            goto label_1adf98;
        }
    }
    ctx->pc = 0x1ADF84u;
    // 0x1adf84: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1ADF84u;
    SET_GPR_U32(ctx, 31, 0x1ADF8Cu);
    ctx->pc = 0x1ADF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF84u;
    // 0x1adf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1ADF84u, 0x1ADF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF8Cu;
label_1adf8c:
    // 0x1adf8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1adf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adf90: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ADF90u;
    {
        const bool branch_taken_0x1adf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1adf90) {
            ctx->pc = 0x1ADF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADF90u;
            // 0x1adf94: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF98u;
            goto label_1adf98;
        }
    }
    ctx->pc = 0x1ADF98u;
label_1adf98:
    // 0x1adf98: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1ADF98u;
    {
        const bool branch_taken_0x1adf98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adf98) {
            ctx->pc = 0x1ADFC8u;
            goto label_1adfc8;
        }
    }
    ctx->pc = 0x1ADFA0u;
    // 0x1adfa0: 0xc098750  jal         func_261D40
    ctx->pc = 0x1ADFA0u;
    SET_GPR_U32(ctx, 31, 0x1ADFA8u);
    ctx->pc = 0x1ADFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFA0u;
    // 0x1adfa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261D40u, 0x1ADFA0u, 0x1ADFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFA8u;
label_1adfa8:
    // 0x1adfa8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1adfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1adfac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1adfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1adfb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1adfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adfb4: 0x8c440194  lw          $a0, 0x194($v0)
    ctx->pc = 0x1adfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x1adfb8: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ADFB8u;
    {
        const bool branch_taken_0x1adfb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFB8u;
        // 0x1adfbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfb8) {
            ctx->pc = 0x1AE000u;
            goto label_1ae000;
        }
    }
    ctx->pc = 0x1ADFC0u;
    // 0x1adfc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1ADFC0u;
    {
        const bool branch_taken_0x1adfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFC0u;
        // 0x1adfc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfc0) {
            ctx->pc = 0x1AE000u;
            goto label_1ae000;
        }
    }
    ctx->pc = 0x1ADFC8u;
label_1adfc8:
    // 0x1adfc8: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1ADFC8u;
    SET_GPR_U32(ctx, 31, 0x1ADFD0u);
    ctx->pc = 0x1ADFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFC8u;
    // 0x1adfcc: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1ADFC8u, 0x1ADFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFD0u;
label_1adfd0:
    // 0x1adfd0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1adfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1adfd4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADFD4u;
    {
        const bool branch_taken_0x1adfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adfd4) {
            ctx->pc = 0x1ADFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADFD4u;
            // 0x1adfd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE000u;
            goto label_1ae000;
        }
    }
    ctx->pc = 0x1ADFDCu;
    // 0x1adfdc: 0xc0987d2  jal         func_261F48
    ctx->pc = 0x1ADFDCu;
    SET_GPR_U32(ctx, 31, 0x1ADFE4u);
    ctx->pc = 0x1ADFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFDCu;
    // 0x1adfe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261F48u, 0x1ADFDCu, 0x1ADFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFE4u;
label_1adfe4:
    // 0x1adfe4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1adfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1adfe8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1adfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1adfec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1adfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1adff0: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x1adff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1adff4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADFF4u;
    {
        const bool branch_taken_0x1adff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFF4u;
        // 0x1adff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adff4) {
            ctx->pc = 0x1AE000u;
            goto label_1ae000;
        }
    }
    ctx->pc = 0x1ADFFCu;
label_1adffc:
    // 0x1adffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1adffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae000:
    // 0x1ae000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae008: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ae008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae00c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ae00cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae014: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE014u;
        // 0x1ae018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE01Cu;
    // 0x1ae01c: 0x0  nop
    ctx->pc = 0x1ae01cu;
    // NOP
    ctx->pc = 0x1ae020u;
}
