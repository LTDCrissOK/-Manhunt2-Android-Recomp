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

// Function: sub_003DB1F8
// Address: 0x3db1f8 - 0x3db220
void sub_003DB1F8_0x3db1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB1F8_0x3db1f8");
#endif

    switch (ctx->pc) {
        case 0x3db208u: goto label_3db208;
        case 0x3db210u: goto label_3db210;
        default: break;
    }

    ctx->pc = 0x3db1f8u;

    // 0x3db1f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db200: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB200u;
    SET_GPR_U32(ctx, 31, 0x3DB208u);
    ctx->pc = 0x3DB204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB200u;
    // 0x3db204: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB200u, 0x3DB208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB208u;
label_3db208:
    // 0x3db208: 0xc05a66a  jal         func_1699A8
    ctx->pc = 0x3DB208u;
    SET_GPR_U32(ctx, 31, 0x3DB210u);
    ctx->pc = 0x3DB20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB208u;
    // 0x3db20c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1699A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699A8u, 0x3DB208u, 0x3DB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB210u;
label_3db210:
    // 0x3db210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db214: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB214u;
        // 0x3db218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB21Cu;
    // 0x3db21c: 0x0  nop
    ctx->pc = 0x3db21cu;
    // NOP
    ctx->pc = 0x3db220u;
}
