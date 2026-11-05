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

// Function: sub_0012EB18
// Address: 0x12eb18 - 0x12eba8
void sub_0012EB18_0x12eb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EB18_0x12eb18");
#endif

    switch (ctx->pc) {
        case 0x12eb40u: goto label_12eb40;
        case 0x12eb48u: goto label_12eb48;
        case 0x12eb58u: goto label_12eb58;
        case 0x12eb64u: goto label_12eb64;
        case 0x12eb78u: goto label_12eb78;
        case 0x12eb84u: goto label_12eb84;
        default: break;
    }

    ctx->pc = 0x12eb18u;

    // 0x12eb18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12eb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12eb1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12eb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12eb20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12eb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12eb24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12eb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12eb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12eb2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12eb2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb30: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12eb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12eb34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12EB34u;
    {
        const bool branch_taken_0x12eb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB34u;
        // 0x12eb38: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb34) {
            ctx->pc = 0x12EB78u;
            goto label_12eb78;
        }
    }
    ctx->pc = 0x12EB3Cu;
    // 0x12eb3c: 0x0  nop
    ctx->pc = 0x12eb3cu;
    // NOP
label_12eb40:
    // 0x12eb40: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12EB40u;
    SET_GPR_U32(ctx, 31, 0x12EB48u);
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12EB40u, 0x12EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB48u;
label_12eb48:
    // 0x12eb48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12eb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb4c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x12eb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12eb50: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12EB50u;
    SET_GPR_U32(ctx, 31, 0x12EB58u);
    ctx->pc = 0x12EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB50u;
    // 0x12eb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12EB50u, 0x12EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB58u;
label_12eb58:
    // 0x12eb58: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12eb5c: 0xc0461d0  jal         func_118740
    ctx->pc = 0x12EB5Cu;
    SET_GPR_U32(ctx, 31, 0x12EB64u);
    ctx->pc = 0x12EB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB5Cu;
    // 0x12eb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118740u, 0x12EB5Cu, 0x12EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB64u;
label_12eb64:
    // 0x12eb64: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x12eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12eb68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12eb68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb6c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x12eb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12eb70: 0xc04c662  jal         func_131988
    ctx->pc = 0x12EB70u;
    SET_GPR_U32(ctx, 31, 0x12EB78u);
    ctx->pc = 0x12EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB70u;
    // 0x12eb74: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12EB70u, 0x12EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB78u;
label_12eb78:
    // 0x12eb78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12eb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb7c: 0xc045632  jal         func_1158C8
    ctx->pc = 0x12EB7Cu;
    SET_GPR_U32(ctx, 31, 0x12EB84u);
    ctx->pc = 0x12EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB7Cu;
    // 0x12eb80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1158C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C8u, 0x12EB7Cu, 0x12EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB84u;
label_12eb84:
    // 0x12eb84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12eb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb88: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12EB88u;
    {
        const bool branch_taken_0x12eb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB88u;
        // 0x12eb8c: 0x2405059e  addiu       $a1, $zero, 0x59E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1438));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb88) {
            ctx->pc = 0x12EB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eb40;
        }
    }
    ctx->pc = 0x12EB90u;
    // 0x12eb90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12eb90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eb94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12eb94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eb98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12eb98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12eb9c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12eb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12eba0: 0x3e00008  jr          $ra
    ctx->pc = 0x12EBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBA0u;
        // 0x12eba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EBA8u;
}
