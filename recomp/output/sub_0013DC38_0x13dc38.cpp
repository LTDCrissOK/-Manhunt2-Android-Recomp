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

// Function: sub_0013DC38
// Address: 0x13dc38 - 0x13dc70
void sub_0013DC38_0x13dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DC38_0x13dc38");
#endif

    switch (ctx->pc) {
        case 0x13dc5cu: goto label_13dc5c;
        default: break;
    }

    ctx->pc = 0x13dc38u;

    // 0x13dc38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13dc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13dc3c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x13dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x13dc40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13dc44: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x13dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
    // 0x13dc48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13dc4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13dc4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13dc54: 0xc04f740  jal         func_13DD00
    ctx->pc = 0x13DC54u;
    SET_GPR_U32(ctx, 31, 0x13DC5Cu);
    ctx->pc = 0x13DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC54u;
    // 0x13dc58: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD00u, 0x13DC54u, 0x13DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC5Cu;
label_13dc5c:
    // 0x13dc5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13dc5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13dc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13dc64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13dc64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc68: 0x3e00008  jr          $ra
    ctx->pc = 0x13DC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC68u;
        // 0x13dc6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DC70u;
}
