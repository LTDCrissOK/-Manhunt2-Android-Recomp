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

// Function: sub_001FD270
// Address: 0x1fd270 - 0x1fd2a8
void sub_001FD270_0x1fd270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD270_0x1fd270");
#endif

    switch (ctx->pc) {
        case 0x1fd28cu: goto label_1fd28c;
        case 0x1fd294u: goto label_1fd294;
        default: break;
    }

    ctx->pc = 0x1fd270u;

    // 0x1fd270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd27c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fd27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fd280: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd284: 0xc07da4a  jal         func_1F6928
    ctx->pc = 0x1FD284u;
    SET_GPR_U32(ctx, 31, 0x1FD28Cu);
    ctx->pc = 0x1FD288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD284u;
    // 0x1fd288: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6928u, 0x1FD284u, 0x1FD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD28Cu;
label_1fd28c:
    // 0x1fd28c: 0xc07f6b0  jal         func_1FDAC0
    ctx->pc = 0x1FD28Cu;
    SET_GPR_U32(ctx, 31, 0x1FD294u);
    ctx->pc = 0x1FD290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD28Cu;
    // 0x1fd290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAC0u, 0x1FD28Cu, 0x1FD294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD294u;
label_1fd294:
    // 0x1fd294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd298: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fd298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd29c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD29Cu;
        // 0x1fd2a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD2A4u;
    // 0x1fd2a4: 0x0  nop
    ctx->pc = 0x1fd2a4u;
    // NOP
    ctx->pc = 0x1fd2a8u;
}
