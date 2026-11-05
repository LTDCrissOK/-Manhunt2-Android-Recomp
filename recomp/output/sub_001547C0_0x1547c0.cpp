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

// Function: sub_001547C0
// Address: 0x1547c0 - 0x154820
void sub_001547C0_0x1547c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001547C0_0x1547c0");
#endif

    switch (ctx->pc) {
        case 0x1547e0u: goto label_1547e0;
        case 0x1547ecu: goto label_1547ec;
        case 0x154808u: goto label_154808;
        default: break;
    }

    ctx->pc = 0x1547c0u;

    // 0x1547c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1547c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1547c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1547c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1547c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1547c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1547cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1547ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1547d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1547d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1547d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547d8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1547D8u;
    SET_GPR_U32(ctx, 31, 0x1547E0u);
    ctx->pc = 0x1547DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547D8u;
    // 0x1547dc: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1547D8u, 0x1547E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547E0u;
label_1547e0:
    // 0x1547e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1547e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547e4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1547E4u;
    SET_GPR_U32(ctx, 31, 0x1547ECu);
    ctx->pc = 0x1547E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547E4u;
    // 0x1547e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1547E4u, 0x1547ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547ECu;
label_1547ec:
    // 0x1547ec: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1547ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1547f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1547f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547f4: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x1547f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1547f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1547f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1547fc: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x1547fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x154800: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x154800u;
    SET_GPR_U32(ctx, 31, 0x154808u);
    ctx->pc = 0x154804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154800u;
    // 0x154804: 0xae2204e4  sw          $v0, 0x4E4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x154800u, 0x154808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154808u;
label_154808:
    // 0x154808: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x154808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15480c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15480cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154814: 0x3e00008  jr          $ra
    ctx->pc = 0x154814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154814u;
        // 0x154818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15481Cu;
    // 0x15481c: 0x0  nop
    ctx->pc = 0x15481cu;
    // NOP
    ctx->pc = 0x154820u;
}
