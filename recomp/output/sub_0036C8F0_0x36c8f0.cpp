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

// Function: sub_0036C8F0
// Address: 0x36c8f0 - 0x36c958
void sub_0036C8F0_0x36c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C8F0_0x36c8f0");
#endif

    switch (ctx->pc) {
        case 0x36c908u: goto label_36c908;
        case 0x36c910u: goto label_36c910;
        case 0x36c940u: goto label_36c940;
        case 0x36c948u: goto label_36c948;
        default: break;
    }

    ctx->pc = 0x36c8f0u;

    // 0x36c8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c8f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c8f8: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x36c8f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x36c8fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36c8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36c900: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x36C900u;
    SET_GPR_U32(ctx, 31, 0x36C908u);
    ctx->pc = 0x36C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C900u;
    // 0x36c904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x36C900u, 0x36C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C908u;
label_36c908:
    // 0x36c908: 0xc0db22c  jal         func_36C8B0
    ctx->pc = 0x36C908u;
    SET_GPR_U32(ctx, 31, 0x36C910u);
    ctx->pc = 0x36C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8B0u, 0x36C908u, 0x36C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C910u;
label_36c910:
    // 0x36c910: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36c910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36c914: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36c914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c918: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36c918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36c91c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x36c91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36c920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36c920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36c928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c92c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36c92cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c930: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c934: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x36c934u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x36c938: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x36C938u;
    SET_GPR_U32(ctx, 31, 0x36C940u);
    ctx->pc = 0x36C93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C938u;
    // 0x36c93c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x36C938u, 0x36C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C940u;
label_36c940:
    // 0x36c940: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x36C940u;
    SET_GPR_U32(ctx, 31, 0x36C948u);
    ctx->pc = 0x36C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C940u;
    // 0x36c944: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x36C940u, 0x36C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C948u;
label_36c948:
    // 0x36c948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c94c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c950: 0x3e00008  jr          $ra
    ctx->pc = 0x36C950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C950u;
        // 0x36c954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C958u;
}
