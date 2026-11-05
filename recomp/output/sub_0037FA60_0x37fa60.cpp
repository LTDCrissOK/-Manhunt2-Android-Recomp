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

// Function: sub_0037FA60
// Address: 0x37fa60 - 0x37fa90
void sub_0037FA60_0x37fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FA60_0x37fa60");
#endif

    switch (ctx->pc) {
        case 0x37fa80u: goto label_37fa80;
        default: break;
    }

    ctx->pc = 0x37fa60u;

    // 0x37fa60: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x37fa60u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x37fa64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37fa64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37fa68: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x37fa68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fa6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37fa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37fa70: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x37fa70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fa74: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x37fa74u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x37fa78: 0xc0dfea4  jal         func_37FA90
    ctx->pc = 0x37FA78u;
    SET_GPR_U32(ctx, 31, 0x37FA80u);
    ctx->pc = 0x37FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FA78u;
    // 0x37fa7c: 0x160502d  daddu       $t2, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA90u, 0x37FA78u, 0x37FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA80u;
label_37fa80:
    // 0x37fa80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37fa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fa84: 0x3e00008  jr          $ra
    ctx->pc = 0x37FA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA84u;
        // 0x37fa88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FA8Cu;
    // 0x37fa8c: 0x0  nop
    ctx->pc = 0x37fa8cu;
    // NOP
    ctx->pc = 0x37fa90u;
}
