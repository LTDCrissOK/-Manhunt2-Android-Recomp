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

// Function: sub_0028FA50
// Address: 0x28fa50 - 0x28fa90
void sub_0028FA50_0x28fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FA50_0x28fa50");
#endif

    switch (ctx->pc) {
        case 0x28fa64u: goto label_28fa64;
        default: break;
    }

    ctx->pc = 0x28fa50u;

    // 0x28fa50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28fa54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fa58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28fa5c: 0xc0a75d4  jal         func_29D750
    ctx->pc = 0x28FA5Cu;
    SET_GPR_U32(ctx, 31, 0x28FA64u);
    ctx->pc = 0x28FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA5Cu;
    // 0x28fa60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D750u, 0x28FA5Cu, 0x28FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA64u;
label_28fa64:
    // 0x28fa64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28fa68: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x28fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x28fa6c: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x28fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    // 0x28fa70: 0x24632d38  addiu       $v1, $v1, 0x2D38
    ctx->pc = 0x28fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11576));
    // 0x28fa74: 0xae030278  sw          $v1, 0x278($s0)
    ctx->pc = 0x28fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
    // 0x28fa78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28fa78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fa7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fa80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28fa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28fa84: 0x3e00008  jr          $ra
    ctx->pc = 0x28FA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA84u;
        // 0x28fa88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FA8Cu;
    // 0x28fa8c: 0x0  nop
    ctx->pc = 0x28fa8cu;
    // NOP
    ctx->pc = 0x28fa90u;
}
