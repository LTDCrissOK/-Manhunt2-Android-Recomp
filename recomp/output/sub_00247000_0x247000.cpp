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

// Function: sub_00247000
// Address: 0x247000 - 0x247058
void sub_00247000_0x247000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247000_0x247000");
#endif

    switch (ctx->pc) {
        case 0x247004u: goto label_247004;
        case 0x24701cu: goto label_24701c;
        case 0x247020u: goto label_247020;
        case 0x247038u: goto label_247038;
        default: break;
    }

    ctx->pc = 0x247000u;

    // 0x247000: 0x8e220710  lw          $v0, 0x710($s1)
    ctx->pc = 0x247000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1808)));
label_247004:
    // 0x247004: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247004u;
    {
        const bool branch_taken_0x247004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247004u;
        // 0x247008: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247004) {
            ctx->pc = 0x247020u;
            goto label_247020;
        }
    }
    ctx->pc = 0x24700Cu;
    // 0x24700c: 0xae340710  sw          $s4, 0x710($s1)
    ctx->pc = 0x24700cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1808), GPR_U32(ctx, 20));
    // 0x247010: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x247010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247014: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x247014u;
    SET_GPR_U32(ctx, 31, 0x24701Cu);
    ctx->pc = 0x247018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247014u;
    // 0x247018: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x247014u, 0x24701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24701Cu;
label_24701c:
    // 0x24701c: 0xae220714  sw          $v0, 0x714($s1)
    ctx->pc = 0x24701cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1812), GPR_U32(ctx, 2));
label_247020:
    // 0x247020: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x247020u;
    {
        const bool branch_taken_0x247020 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x247024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247020u;
        // 0x247024: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247020) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x247028u;
    // 0x247028: 0xae200714  sw          $zero, 0x714($s1)
    ctx->pc = 0x247028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1812), GPR_U32(ctx, 0));
    // 0x24702c: 0xae200710  sw          $zero, 0x710($s1)
    ctx->pc = 0x24702cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1808), GPR_U32(ctx, 0));
label_247030:
    // 0x247030: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x247030u;
    SET_GPR_U32(ctx, 31, 0x247038u);
    ctx->pc = 0x247034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247030u;
    // 0x247034: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x247030u, 0x247038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247038u;
label_247038:
    // 0x247038: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x247038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24703c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24703cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247040: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x247040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247044: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x247044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247048: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x247048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24704c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x24704cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x247050: 0x3e00008  jr          $ra
    ctx->pc = 0x247050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247050u;
        // 0x247054: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247058u;
}
