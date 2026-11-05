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

// Function: sub_0019BED8
// Address: 0x19bed8 - 0x19bf50
void sub_0019BED8_0x19bed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BED8_0x19bed8");
#endif

    switch (ctx->pc) {
        case 0x19bed8u: goto label_19bed8;
        case 0x19bedcu: goto label_19bedc;
        case 0x19bee0u: goto label_19bee0;
        case 0x19bee4u: goto label_19bee4;
        case 0x19bee8u: goto label_19bee8;
        case 0x19beecu: goto label_19beec;
        case 0x19bef0u: goto label_19bef0;
        case 0x19bef4u: goto label_19bef4;
        case 0x19bef8u: goto label_19bef8;
        case 0x19befcu: goto label_19befc;
        case 0x19bf00u: goto label_19bf00;
        case 0x19bf04u: goto label_19bf04;
        case 0x19bf08u: goto label_19bf08;
        case 0x19bf0cu: goto label_19bf0c;
        case 0x19bf10u: goto label_19bf10;
        case 0x19bf14u: goto label_19bf14;
        case 0x19bf18u: goto label_19bf18;
        case 0x19bf1cu: goto label_19bf1c;
        case 0x19bf20u: goto label_19bf20;
        case 0x19bf24u: goto label_19bf24;
        case 0x19bf28u: goto label_19bf28;
        case 0x19bf2cu: goto label_19bf2c;
        case 0x19bf30u: goto label_19bf30;
        case 0x19bf34u: goto label_19bf34;
        case 0x19bf38u: goto label_19bf38;
        case 0x19bf3cu: goto label_19bf3c;
        case 0x19bf40u: goto label_19bf40;
        case 0x19bf44u: goto label_19bf44;
        case 0x19bf48u: goto label_19bf48;
        case 0x19bf4cu: goto label_19bf4c;
        default: break;
    }

    ctx->pc = 0x19bed8u;

label_19bed8:
    // 0x19bed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19bedc:
    // 0x19bedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19bee0:
    // 0x19bee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19bee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19bee4:
    // 0x19bee4: 0xc06766e  jal         func_19D9B8
label_19bee8:
    if (ctx->pc == 0x19BEE8u) {
        ctx->pc = 0x19BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEE4u;
        // 0x19bee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEECu;
        goto label_19beec;
    }
    ctx->pc = 0x19BEE4u;
    SET_GPR_U32(ctx, 31, 0x19BEECu);
    ctx->pc = 0x19BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEE4u;
    // 0x19bee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B8u, 0x19BEE4u, 0x19BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEECu;
label_19beec:
    // 0x19beec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19bef0:
    if (ctx->pc == 0x19BEF0u) {
        ctx->pc = 0x19BEF4u;
        goto label_19bef4;
    }
    ctx->pc = 0x19BEECu;
    {
        const bool branch_taken_0x19beec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19beec) {
            ctx->pc = 0x19BF04u;
            goto label_19bf04;
        }
    }
    ctx->pc = 0x19BEF4u;
label_19bef4:
    // 0x19bef4: 0xc0676b8  jal         func_19DAE0
label_19bef8:
    if (ctx->pc == 0x19BEF8u) {
        ctx->pc = 0x19BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEF4u;
        // 0x19bef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEFCu;
        goto label_19befc;
    }
    ctx->pc = 0x19BEF4u;
    SET_GPR_U32(ctx, 31, 0x19BEFCu);
    ctx->pc = 0x19BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEF4u;
    // 0x19bef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAE0u, 0x19BEF4u, 0x19BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEFCu;
label_19befc:
    // 0x19befc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19bf00:
    if (ctx->pc == 0x19BF00u) {
        ctx->pc = 0x19BF04u;
        goto label_19bf04;
    }
    ctx->pc = 0x19BEFCu;
    {
        const bool branch_taken_0x19befc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19befc) {
            ctx->pc = 0x19BF14u;
            goto label_19bf14;
        }
    }
    ctx->pc = 0x19BF04u;
label_19bf04:
    // 0x19bf04: 0xc066e96  jal         func_19BA58
label_19bf08:
    if (ctx->pc == 0x19BF08u) {
        ctx->pc = 0x19BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF04u;
        // 0x19bf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF0Cu;
        goto label_19bf0c;
    }
    ctx->pc = 0x19BF04u;
    SET_GPR_U32(ctx, 31, 0x19BF0Cu);
    ctx->pc = 0x19BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF04u;
    // 0x19bf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA58u, 0x19BF04u, 0x19BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF0Cu;
label_19bf0c:
    // 0x19bf0c: 0x1000000d  b           . + 4 + (0xD << 2)
label_19bf10:
    if (ctx->pc == 0x19BF10u) {
        ctx->pc = 0x19BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF0Cu;
        // 0x19bf10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF14u;
        goto label_19bf14;
    }
    ctx->pc = 0x19BF0Cu;
    {
        const bool branch_taken_0x19bf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF0Cu;
        // 0x19bf10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf0c) {
            ctx->pc = 0x19BF44u;
            goto label_19bf44;
        }
    }
    ctx->pc = 0x19BF14u;
label_19bf14:
    // 0x19bf14: 0xc061a12  jal         func_186848
label_19bf18:
    if (ctx->pc == 0x19BF18u) {
        ctx->pc = 0x19BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF14u;
        // 0x19bf18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF1Cu;
        goto label_19bf1c;
    }
    ctx->pc = 0x19BF14u;
    SET_GPR_U32(ctx, 31, 0x19BF1Cu);
    ctx->pc = 0x19BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF14u;
    // 0x19bf18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19BF14u, 0x19BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF1Cu;
label_19bf1c:
    // 0x19bf1c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19bf20:
    // 0x19bf20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19bf24:
    // 0x19bf24: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19bf28:
    // 0x19bf28: 0x40f809  jalr        $v0
label_19bf2c:
    if (ctx->pc == 0x19BF2Cu) {
        ctx->pc = 0x19BF30u;
        goto label_19bf30;
    }
    ctx->pc = 0x19BF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BF30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BF28u, 0x19BF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BF30u;
label_19bf30:
    // 0x19bf30: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_19bf34:
    if (ctx->pc == 0x19BF34u) {
        ctx->pc = 0x19BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF30u;
        // 0x19bf34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF38u;
        goto label_19bf38;
    }
    ctx->pc = 0x19BF30u;
    {
        const bool branch_taken_0x19bf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bf30) {
            ctx->pc = 0x19BF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BF30u;
            // 0x19bf34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BF44u;
            goto label_19bf44;
        }
    }
    ctx->pc = 0x19BF38u;
label_19bf38:
    // 0x19bf38: 0xc067598  jal         func_19D660
label_19bf3c:
    if (ctx->pc == 0x19BF3Cu) {
        ctx->pc = 0x19BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF38u;
        // 0x19bf3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF40u;
        goto label_19bf40;
    }
    ctx->pc = 0x19BF38u;
    SET_GPR_U32(ctx, 31, 0x19BF40u);
    ctx->pc = 0x19BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF38u;
    // 0x19bf3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19BF38u, 0x19BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF40u;
label_19bf40:
    // 0x19bf40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bf40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bf44:
    // 0x19bf44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19bf48:
    // 0x19bf48: 0x3e00008  jr          $ra
label_19bf4c:
    if (ctx->pc == 0x19BF4Cu) {
        ctx->pc = 0x19BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF48u;
        // 0x19bf4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF50u;
        goto label_fallthrough_0x19bf48;
    }
    ctx->pc = 0x19BF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF48u;
        // 0x19bf4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19bf48:
    ctx->pc = 0x19BF50u;
}
