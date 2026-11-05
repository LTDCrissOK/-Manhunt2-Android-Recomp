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

// Function: sub_00275268
// Address: 0x275268 - 0x275298
void sub_00275268_0x275268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275268_0x275268");
#endif

    switch (ctx->pc) {
        case 0x27527cu: goto label_27527c;
        case 0x275284u: goto label_275284;
        default: break;
    }

    ctx->pc = 0x275268u;

    // 0x275268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27526c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27526cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275270: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x275270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x275274: 0xc084048  jal         func_210120
    ctx->pc = 0x275274u;
    SET_GPR_U32(ctx, 31, 0x27527Cu);
    ctx->pc = 0x275278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275274u;
    // 0x275278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210120u, 0x275274u, 0x27527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27527Cu;
label_27527c:
    // 0x27527c: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x27527Cu;
    SET_GPR_U32(ctx, 31, 0x275284u);
    ctx->pc = 0x275280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27527Cu;
    // 0x275280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x27527Cu, 0x275284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275284u;
label_275284:
    // 0x275284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275288: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x275288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27528c: 0x3e00008  jr          $ra
    ctx->pc = 0x27528Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27528Cu;
        // 0x275290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27528Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275294u;
    // 0x275294: 0x0  nop
    ctx->pc = 0x275294u;
    // NOP
    ctx->pc = 0x275298u;
}
