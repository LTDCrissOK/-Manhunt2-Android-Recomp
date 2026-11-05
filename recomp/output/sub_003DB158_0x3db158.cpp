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

// Function: sub_003DB158
// Address: 0x3db158 - 0x3db180
void sub_003DB158_0x3db158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB158_0x3db158");
#endif

    switch (ctx->pc) {
        case 0x3db168u: goto label_3db168;
        case 0x3db170u: goto label_3db170;
        default: break;
    }

    ctx->pc = 0x3db158u;

    // 0x3db158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db15c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db160: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB160u;
    SET_GPR_U32(ctx, 31, 0x3DB168u);
    ctx->pc = 0x3DB164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB160u;
    // 0x3db164: 0x24040360  addiu       $a0, $zero, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB160u, 0x3DB168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB168u;
label_3db168:
    // 0x3db168: 0xc059fa0  jal         func_167E80
    ctx->pc = 0x3DB168u;
    SET_GPR_U32(ctx, 31, 0x3DB170u);
    ctx->pc = 0x3DB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB168u;
    // 0x3db16c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167E80u, 0x3DB168u, 0x3DB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB170u;
label_3db170:
    // 0x3db170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db174: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB174u;
        // 0x3db178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB17Cu;
    // 0x3db17c: 0x0  nop
    ctx->pc = 0x3db17cu;
    // NOP
    ctx->pc = 0x3db180u;
}
