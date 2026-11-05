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

// Function: sub_00205A88
// Address: 0x205a88 - 0x205af8
void sub_00205A88_0x205a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205A88_0x205a88");
#endif

    switch (ctx->pc) {
        case 0x205a88u: goto label_205a88;
        case 0x205a8cu: goto label_205a8c;
        case 0x205a90u: goto label_205a90;
        case 0x205a94u: goto label_205a94;
        case 0x205a98u: goto label_205a98;
        case 0x205a9cu: goto label_205a9c;
        case 0x205aa0u: goto label_205aa0;
        case 0x205aa4u: goto label_205aa4;
        case 0x205aa8u: goto label_205aa8;
        case 0x205aacu: goto label_205aac;
        case 0x205ab0u: goto label_205ab0;
        case 0x205ab4u: goto label_205ab4;
        case 0x205ab8u: goto label_205ab8;
        case 0x205abcu: goto label_205abc;
        case 0x205ac0u: goto label_205ac0;
        case 0x205ac4u: goto label_205ac4;
        case 0x205ac8u: goto label_205ac8;
        case 0x205accu: goto label_205acc;
        case 0x205ad0u: goto label_205ad0;
        case 0x205ad4u: goto label_205ad4;
        case 0x205ad8u: goto label_205ad8;
        case 0x205adcu: goto label_205adc;
        case 0x205ae0u: goto label_205ae0;
        case 0x205ae4u: goto label_205ae4;
        case 0x205ae8u: goto label_205ae8;
        case 0x205aecu: goto label_205aec;
        case 0x205af0u: goto label_205af0;
        case 0x205af4u: goto label_205af4;
        default: break;
    }

    ctx->pc = 0x205a88u;

label_205a88:
    // 0x205a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_205a8c:
    // 0x205a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_205a90:
    // 0x205a90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_205a94:
    // 0x205a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205a98:
    // 0x205a98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x205a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_205a9c:
    // 0x205a9c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_205aa0:
    if (ctx->pc == 0x205AA0u) {
        ctx->pc = 0x205AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A9Cu;
        // 0x205aa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AA4u;
        goto label_205aa4;
    }
    ctx->pc = 0x205A9Cu;
    {
        const bool branch_taken_0x205a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205a9c) {
            ctx->pc = 0x205AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205A9Cu;
            // 0x205aa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205AE8u;
            goto label_205ae8;
        }
    }
    ctx->pc = 0x205AA4u;
label_205aa4:
    // 0x205aa4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x205aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205aa8:
    // 0x205aa8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x205aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_205aac:
    // 0x205aac: 0x40f809  jalr        $v0
label_205ab0:
    if (ctx->pc == 0x205AB0u) {
        ctx->pc = 0x205AB4u;
        goto label_205ab4;
    }
    ctx->pc = 0x205AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205AB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205AACu, 0x205AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205AB4u;
label_205ab4:
    // 0x205ab4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_205ab8:
    if (ctx->pc == 0x205AB8u) {
        ctx->pc = 0x205AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AB4u;
        // 0x205ab8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205ABCu;
        goto label_205abc;
    }
    ctx->pc = 0x205AB4u;
    {
        const bool branch_taken_0x205ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ab4) {
            ctx->pc = 0x205AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205AB4u;
            // 0x205ab8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205AE8u;
            goto label_205ae8;
        }
    }
    ctx->pc = 0x205ABCu;
label_205abc:
    // 0x205abc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x205abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205ac0:
    // 0x205ac0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x205ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_205ac4:
    // 0x205ac4: 0x40f809  jalr        $v0
label_205ac8:
    if (ctx->pc == 0x205AC8u) {
        ctx->pc = 0x205AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AC4u;
        // 0x205ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205ACCu;
        goto label_205acc;
    }
    ctx->pc = 0x205AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205ACCu);
        ctx->pc = 0x205AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AC4u;
        // 0x205ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205AC4u, 0x205ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205ACCu;
label_205acc:
    // 0x205acc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_205ad0:
    if (ctx->pc == 0x205AD0u) {
        ctx->pc = 0x205AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205ACCu;
        // 0x205ad0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AD4u;
        goto label_205ad4;
    }
    ctx->pc = 0x205ACCu;
    {
        const bool branch_taken_0x205acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205acc) {
            ctx->pc = 0x205AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205ACCu;
            // 0x205ad0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205AE8u;
            goto label_205ae8;
        }
    }
    ctx->pc = 0x205AD4u;
label_205ad4:
    // 0x205ad4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x205ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205ad8:
    // 0x205ad8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x205ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_205adc:
    // 0x205adc: 0x40f809  jalr        $v0
label_205ae0:
    if (ctx->pc == 0x205AE0u) {
        ctx->pc = 0x205AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205ADCu;
        // 0x205ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AE4u;
        goto label_205ae4;
    }
    ctx->pc = 0x205ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205AE4u);
        ctx->pc = 0x205AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205ADCu;
        // 0x205ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205ADCu, 0x205AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205AE4u;
label_205ae4:
    // 0x205ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205ae8:
    // 0x205ae8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_205aec:
    // 0x205aec: 0x3e00008  jr          $ra
label_205af0:
    if (ctx->pc == 0x205AF0u) {
        ctx->pc = 0x205AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AECu;
        // 0x205af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AF4u;
        goto label_205af4;
    }
    ctx->pc = 0x205AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AECu;
        // 0x205af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205AF4u;
label_205af4:
    // 0x205af4: 0x0  nop
    ctx->pc = 0x205af4u;
    // NOP
    ctx->pc = 0x205af8u;
}
