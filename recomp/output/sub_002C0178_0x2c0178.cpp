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

// Function: sub_002C0178
// Address: 0x2c0178 - 0x2c01a0
void sub_002C0178_0x2c0178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0178_0x2c0178");
#endif

    switch (ctx->pc) {
        case 0x2c0194u: goto label_2c0194;
        default: break;
    }

    ctx->pc = 0x2c0178u;

    // 0x2c0178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c017c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2c017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2c0180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0184: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c0184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0188: 0x24423d10  addiu       $v0, $v0, 0x3D10
    ctx->pc = 0x2c0188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15632));
    // 0x2c018c: 0xc0b0020  jal         func_2C0080
    ctx->pc = 0x2C018Cu;
    SET_GPR_U32(ctx, 31, 0x2C0194u);
    ctx->pc = 0x2C0190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C018Cu;
    // 0x2c0190: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0080u, 0x2C018Cu, 0x2C0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0194u;
label_2c0194:
    // 0x2c0194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0198: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0198u;
        // 0x2c019c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C01A0u;
}
