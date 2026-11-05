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

// Function: sub_00148E50
// Address: 0x148e50 - 0x148ee0
void sub_00148E50_0x148e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148E50_0x148e50");
#endif

    switch (ctx->pc) {
        case 0x148e74u: goto label_148e74;
        case 0x148e88u: goto label_148e88;
        case 0x148e98u: goto label_148e98;
        case 0x148eacu: goto label_148eac;
        case 0x148ec8u: goto label_148ec8;
        default: break;
    }

    ctx->pc = 0x148e50u;

    // 0x148e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148e54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x148e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x148e58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x148e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x148e5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x148e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e60: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x148e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x148e64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x148e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x148e68: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x148e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x148e6c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x148E6Cu;
    SET_GPR_U32(ctx, 31, 0x148E74u);
    ctx->pc = 0x148E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E6Cu;
    // 0x148e70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x148E6Cu, 0x148E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E74u;
label_148e74:
    // 0x148e74: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x148e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e80: 0xc052660  jal         func_149980
    ctx->pc = 0x148E80u;
    SET_GPR_U32(ctx, 31, 0x148E88u);
    ctx->pc = 0x148E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E80u;
    // 0x148e84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149980u, 0x148E80u, 0x148E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E88u;
label_148e88:
    // 0x148e88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148E88u;
    {
        const bool branch_taken_0x148e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E88u;
        // 0x148e8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e88) {
            ctx->pc = 0x148EA4u;
            goto label_148ea4;
        }
    }
    ctx->pc = 0x148E90u;
    // 0x148e90: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x148E90u;
    SET_GPR_U32(ctx, 31, 0x148E98u);
    ctx->pc = 0x148E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E90u;
    // 0x148e94: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x148E90u, 0x148E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E98u;
label_148e98:
    // 0x148e98: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x148e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x148e9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x148E9Cu;
    {
        const bool branch_taken_0x148e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E9Cu;
        // 0x148ea0: 0x2032018  mult        $a0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e9c) {
            ctx->pc = 0x148EB4u;
            goto label_148eb4;
        }
    }
    ctx->pc = 0x148EA4u;
label_148ea4:
    // 0x148ea4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x148EA4u;
    SET_GPR_U32(ctx, 31, 0x148EACu);
    ctx->pc = 0x148EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148EA4u;
    // 0x148ea8: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x148EA4u, 0x148EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148EACu;
label_148eac:
    // 0x148eac: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x148eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x148eb0: 0x2432018  mult        $a0, $s2, $v1
    ctx->pc = 0x148eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_148eb4:
    // 0x148eb4: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x148eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x148eb8: 0xac6204e4  sw          $v0, 0x4E4($v1)
    ctx->pc = 0x148eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1252), GPR_U32(ctx, 2));
    // 0x148ebc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x148ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ec0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x148EC0u;
    SET_GPR_U32(ctx, 31, 0x148EC8u);
    ctx->pc = 0x148EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148EC0u;
    // 0x148ec4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x148EC0u, 0x148EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148EC8u;
label_148ec8:
    // 0x148ec8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x148ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148ecc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x148eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x148ed0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x148ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148ed4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x148ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x148ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148ED8u;
        // 0x148edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148EE0u;
}
