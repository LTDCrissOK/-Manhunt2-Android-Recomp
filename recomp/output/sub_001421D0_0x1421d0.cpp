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

// Function: sub_001421D0
// Address: 0x1421d0 - 0x142230
void sub_001421D0_0x1421d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001421D0_0x1421d0");
#endif

    switch (ctx->pc) {
        case 0x1421f0u: goto label_1421f0;
        case 0x1421fcu: goto label_1421fc;
        case 0x142218u: goto label_142218;
        default: break;
    }

    ctx->pc = 0x1421d0u;

    // 0x1421d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1421d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1421d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1421d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1421d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1421d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1421dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1421dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1421e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1421e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1421e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1421e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1421e8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1421E8u;
    SET_GPR_U32(ctx, 31, 0x1421F0u);
    ctx->pc = 0x1421ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421E8u;
    // 0x1421ec: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1421E8u, 0x1421F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1421F0u;
label_1421f0:
    // 0x1421f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1421f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1421f4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1421F4u;
    SET_GPR_U32(ctx, 31, 0x1421FCu);
    ctx->pc = 0x1421F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421F4u;
    // 0x1421f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1421F4u, 0x1421FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1421FCu;
label_1421fc:
    // 0x1421fc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1421fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x142200: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x142200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142204: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x142204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x142208: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x142208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14220c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14220cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x142210: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x142210u;
    SET_GPR_U32(ctx, 31, 0x142218u);
    ctx->pc = 0x142214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142210u;
    // 0x142214: 0xae220b18  sw          $v0, 0xB18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x142210u, 0x142218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142218u;
label_142218:
    // 0x142218: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x142218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14221c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14221cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142220: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x142220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142224: 0x3e00008  jr          $ra
    ctx->pc = 0x142224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142224u;
        // 0x142228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14222Cu;
    // 0x14222c: 0x0  nop
    ctx->pc = 0x14222cu;
    // NOP
    ctx->pc = 0x142230u;
}
