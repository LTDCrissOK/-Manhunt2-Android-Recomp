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

// Function: sub_002865E8
// Address: 0x2865e8 - 0x286620
void sub_002865E8_0x2865e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002865E8_0x2865e8");
#endif

    switch (ctx->pc) {
        case 0x2865fcu: goto label_2865fc;
        case 0x286610u: goto label_286610;
        default: break;
    }

    ctx->pc = 0x2865e8u;

    // 0x2865e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2865e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2865ec: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2865ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2865f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2865f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2865f4: 0xc0a18c4  jal         func_286310
    ctx->pc = 0x2865F4u;
    SET_GPR_U32(ctx, 31, 0x2865FCu);
    ctx->pc = 0x2865F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865F4u;
    // 0x2865f8: 0x2484a4b8  addiu       $a0, $a0, -0x5B48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286310u, 0x2865F4u, 0x2865FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865FCu;
label_2865fc:
    // 0x2865fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2865fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x286604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286608: 0xc0dadb8  jal         func_36B6E0
    ctx->pc = 0x286608u;
    SET_GPR_U32(ctx, 31, 0x286610u);
    ctx->pc = 0x28660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286608u;
    // 0x28660c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B6E0u, 0x286608u, 0x286610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286610u;
label_286610:
    // 0x286610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286614: 0x3e00008  jr          $ra
    ctx->pc = 0x286614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286614u;
        // 0x286618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28661Cu;
    // 0x28661c: 0x0  nop
    ctx->pc = 0x28661cu;
    // NOP
    ctx->pc = 0x286620u;
}
