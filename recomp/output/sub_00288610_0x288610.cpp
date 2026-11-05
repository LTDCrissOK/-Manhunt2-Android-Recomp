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

// Function: sub_00288610
// Address: 0x288610 - 0x288660
void sub_00288610_0x288610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288610_0x288610");
#endif

    switch (ctx->pc) {
        case 0x288648u: goto label_288648;
        default: break;
    }

    ctx->pc = 0x288610u;

    // 0x288610: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288614: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x288614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x288618: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28861c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28861cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x288620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x288620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28862c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28862cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288630: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x288630u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x288634: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x288634u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x288638: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x288638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28863c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28863cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288640: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x288640u;
    SET_GPR_U32(ctx, 31, 0x288648u);
    ctx->pc = 0x288644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288640u;
    // 0x288644: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x288640u, 0x288648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288648u;
label_288648:
    // 0x288648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28864c: 0x3e00008  jr          $ra
    ctx->pc = 0x28864Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28864Cu;
        // 0x288650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28864Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288654u;
    // 0x288654: 0x0  nop
    ctx->pc = 0x288654u;
    // NOP
    // 0x288658: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x288658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28865c: 0x0  nop
    ctx->pc = 0x28865cu;
    // NOP
    ctx->pc = 0x288660u;
}
