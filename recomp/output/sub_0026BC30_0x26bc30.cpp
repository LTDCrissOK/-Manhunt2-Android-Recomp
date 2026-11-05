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

// Function: sub_0026BC30
// Address: 0x26bc30 - 0x26bcf0
void sub_0026BC30_0x26bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BC30_0x26bc30");
#endif

    switch (ctx->pc) {
        case 0x26bc60u: goto label_26bc60;
        case 0x26bc74u: goto label_26bc74;
        case 0x26bc8cu: goto label_26bc8c;
        case 0x26bca0u: goto label_26bca0;
        case 0x26bcc8u: goto label_26bcc8;
        case 0x26bcd8u: goto label_26bcd8;
        default: break;
    }

    ctx->pc = 0x26bc30u;

    // 0x26bc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bc34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bc38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26bc3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26bc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26bc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26bc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bc44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x26bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x26bc48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26bc48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bc4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26bc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26bc50: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26BC50u;
    {
        const bool branch_taken_0x26bc50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC50u;
        // 0x26bc54: 0x8e1200b8  lw          $s2, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc50) {
            ctx->pc = 0x26BC7Cu;
            goto label_26bc7c;
        }
    }
    ctx->pc = 0x26BC58u;
    // 0x26bc58: 0xc09af3c  jal         func_26BCF0
    ctx->pc = 0x26BC58u;
    SET_GPR_U32(ctx, 31, 0x26BC60u);
    ctx->pc = 0x26BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BCF0u, 0x26BC58u, 0x26BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC60u;
label_26bc60:
    // 0x26bc60: 0x50510011  beql        $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26BC60u;
    {
        const bool branch_taken_0x26bc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x26bc60) {
            ctx->pc = 0x26BC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BC60u;
            // 0x26bc64: 0xae110240  sw          $s1, 0x240($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BCA8u;
            goto label_26bca8;
        }
    }
    ctx->pc = 0x26BC68u;
    // 0x26bc68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26bc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26bc6c: 0xc09bdce  jal         func_26F738
    ctx->pc = 0x26BC6Cu;
    SET_GPR_U32(ctx, 31, 0x26BC74u);
    ctx->pc = 0x26BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC6Cu;
    // 0x26bc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F738u, 0x26BC6Cu, 0x26BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC74u;
label_26bc74:
    // 0x26bc74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26BC74u;
    {
        const bool branch_taken_0x26bc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC74u;
        // 0x26bc78: 0xae110240  sw          $s1, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc74) {
            ctx->pc = 0x26BCA8u;
            goto label_26bca8;
        }
    }
    ctx->pc = 0x26BC7Cu;
label_26bc7c:
    // 0x26bc7c: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x26BC7Cu;
    {
        const bool branch_taken_0x26bc7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bc7c) {
            ctx->pc = 0x26BC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BC7Cu;
            // 0x26bc80: 0x8e42020c  lw          $v0, 0x20C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BCACu;
            goto label_26bcac;
        }
    }
    ctx->pc = 0x26BC84u;
    // 0x26bc84: 0xc09af3c  jal         func_26BCF0
    ctx->pc = 0x26BC84u;
    SET_GPR_U32(ctx, 31, 0x26BC8Cu);
    ctx->pc = 0x26BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC84u;
    // 0x26bc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BCF0u, 0x26BC84u, 0x26BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC8Cu;
label_26bc8c:
    // 0x26bc8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BC8Cu;
    {
        const bool branch_taken_0x26bc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC8Cu;
        // 0x26bc90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc8c) {
            ctx->pc = 0x26BCA4u;
            goto label_26bca4;
        }
    }
    ctx->pc = 0x26BC94u;
    // 0x26bc94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26bc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26bc98: 0xc09bdce  jal         func_26F738
    ctx->pc = 0x26BC98u;
    SET_GPR_U32(ctx, 31, 0x26BCA0u);
    ctx->pc = 0x26BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC98u;
    // 0x26bc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F738u, 0x26BC98u, 0x26BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BCA0u;
label_26bca0:
    // 0x26bca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26bca4:
    // 0x26bca4: 0xae020240  sw          $v0, 0x240($s0)
    ctx->pc = 0x26bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
label_26bca8:
    // 0x26bca8: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x26bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_26bcac:
    // 0x26bcac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26BCACu;
    {
        const bool branch_taken_0x26bcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCACu;
        // 0x26bcb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bcac) {
            ctx->pc = 0x26BCD8u;
            goto label_26bcd8;
        }
    }
    ctx->pc = 0x26BCB4u;
    // 0x26bcb4: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x26bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x26bcb8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BCB8u;
    {
        const bool branch_taken_0x26bcb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCB8u;
        // 0x26bcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bcb8) {
            ctx->pc = 0x26BCD0u;
            goto label_26bcd0;
        }
    }
    ctx->pc = 0x26BCC0u;
    // 0x26bcc0: 0xc0848ba  jal         func_2122E8
    ctx->pc = 0x26BCC0u;
    SET_GPR_U32(ctx, 31, 0x26BCC8u);
    ctx->pc = 0x26BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BCC0u;
    // 0x26bcc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2122E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2122E8u, 0x26BCC0u, 0x26BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BCC8u;
label_26bcc8:
    // 0x26bcc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26BCC8u;
    {
        const bool branch_taken_0x26bcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCC8u;
        // 0x26bccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bcc8) {
            ctx->pc = 0x26BCDCu;
            goto label_26bcdc;
        }
    }
    ctx->pc = 0x26BCD0u;
label_26bcd0:
    // 0x26bcd0: 0xc0848ba  jal         func_2122E8
    ctx->pc = 0x26BCD0u;
    SET_GPR_U32(ctx, 31, 0x26BCD8u);
    ctx->pc = 0x26BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BCD0u;
    // 0x26bcd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2122E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2122E8u, 0x26BCD0u, 0x26BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BCD8u;
label_26bcd8:
    // 0x26bcd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26bcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26bcdc:
    // 0x26bcdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26bcdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26bce0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26bce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bce4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26bce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26bce8: 0x3e00008  jr          $ra
    ctx->pc = 0x26BCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCE8u;
        // 0x26bcec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BCF0u;
}
