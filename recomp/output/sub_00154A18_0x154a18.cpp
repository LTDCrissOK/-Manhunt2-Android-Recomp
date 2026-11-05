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

// Function: sub_00154A18
// Address: 0x154a18 - 0x154a88
void sub_00154A18_0x154a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154A18_0x154a18");
#endif

    switch (ctx->pc) {
        case 0x154a40u: goto label_154a40;
        case 0x154a54u: goto label_154a54;
        case 0x154a70u: goto label_154a70;
        default: break;
    }

    ctx->pc = 0x154a18u;

    // 0x154a18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154a1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x154a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x154a20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x154a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x154a24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x154a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x154a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x154a2c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x154a2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x154a30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x154a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a34: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x154a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x154a38: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x154A38u;
    SET_GPR_U32(ctx, 31, 0x154A40u);
    ctx->pc = 0x154A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A38u;
    // 0x154a3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x154A38u, 0x154A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A40u;
label_154a40:
    // 0x154a40: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x154a40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
    // 0x154a44: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x154a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x154a48: 0x242280b  movn        $a1, $s2, $v0
    ctx->pc = 0x154a48u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x154a4c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x154A4Cu;
    SET_GPR_U32(ctx, 31, 0x154A54u);
    ctx->pc = 0x154A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A4Cu;
    // 0x154a50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x154A4Cu, 0x154A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A54u;
label_154a54:
    // 0x154a54: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x154a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x154a58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x154a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a5c: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x154a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x154a60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154a64: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x154a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x154a68: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x154A68u;
    SET_GPR_U32(ctx, 31, 0x154A70u);
    ctx->pc = 0x154A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A68u;
    // 0x154a6c: 0xae2204f0  sw          $v0, 0x4F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1264), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x154A68u, 0x154A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A70u;
label_154a70:
    // 0x154a70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x154a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154a74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x154a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154a78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x154a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154a7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x154a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x154a80: 0x3e00008  jr          $ra
    ctx->pc = 0x154A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A80u;
        // 0x154a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154A88u;
}
