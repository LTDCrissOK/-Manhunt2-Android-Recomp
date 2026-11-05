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

// Function: sub_00304768
// Address: 0x304768 - 0x304798
void sub_00304768_0x304768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304768_0x304768");
#endif

    switch (ctx->pc) {
        case 0x30478cu: goto label_30478c;
        default: break;
    }

    ctx->pc = 0x304768u;

    // 0x304768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30476c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x30476cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304774: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x304774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x304778: 0xa0401418  sb          $zero, 0x1418($v0)
    ctx->pc = 0x304778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5144), (uint8_t)GPR_U32(ctx, 0));
    // 0x30477c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304780: 0xac401420  sw          $zero, 0x1420($v0)
    ctx->pc = 0x304780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5152), GPR_U32(ctx, 0));
    // 0x304784: 0xc0a0870  jal         func_2821C0
    ctx->pc = 0x304784u;
    SET_GPR_U32(ctx, 31, 0x30478Cu);
    ctx->pc = 0x304788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304784u;
    // 0x304788: 0xac602b9c  sw          $zero, 0x2B9C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 11164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2821C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2821C0u, 0x304784u, 0x30478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30478Cu;
label_30478c:
    // 0x30478c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30478cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304790: 0x3e00008  jr          $ra
    ctx->pc = 0x304790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304790u;
        // 0x304794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304798u;
}
