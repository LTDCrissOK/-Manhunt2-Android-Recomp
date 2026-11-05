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

// Function: sub_00305F80
// Address: 0x305f80 - 0x305fb0
void sub_00305F80_0x305f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305F80_0x305f80");
#endif

    switch (ctx->pc) {
        case 0x305f94u: goto label_305f94;
        case 0x305f9cu: goto label_305f9c;
        default: break;
    }

    ctx->pc = 0x305f80u;

    // 0x305f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305f88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x305f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x305f8c: 0xc0906d0  jal         func_241B40
    ctx->pc = 0x305F8Cu;
    SET_GPR_U32(ctx, 31, 0x305F94u);
    ctx->pc = 0x305F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F8Cu;
    // 0x305f90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241B40u, 0x305F8Cu, 0x305F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F94u;
label_305f94:
    // 0x305f94: 0xc0bd62c  jal         func_2F58B0
    ctx->pc = 0x305F94u;
    SET_GPR_U32(ctx, 31, 0x305F9Cu);
    ctx->pc = 0x305F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F94u;
    // 0x305f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x305F94u, 0x305F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F9Cu;
label_305f9c:
    // 0x305f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305fa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x305fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x305FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FA4u;
        // 0x305fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305FACu;
    // 0x305fac: 0x0  nop
    ctx->pc = 0x305facu;
    // NOP
    ctx->pc = 0x305fb0u;
}
