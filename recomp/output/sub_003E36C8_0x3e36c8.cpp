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

// Function: sub_003E36C8
// Address: 0x3e36c8 - 0x3e3700
void sub_003E36C8_0x3e36c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E36C8_0x3e36c8");
#endif

    switch (ctx->pc) {
        case 0x3e36ecu: goto label_3e36ec;
        default: break;
    }

    ctx->pc = 0x3e36c8u;

    // 0x3e36c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e36c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e36cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e36d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e36d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e36d4: 0x24423848  addiu       $v0, $v0, 0x3848
    ctx->pc = 0x3e36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14408));
    // 0x3e36d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3e36d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3e36dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e36dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e36e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3e36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3e36e4: 0xc0f8dae  jal         func_3E36B8
    ctx->pc = 0x3E36E4u;
    SET_GPR_U32(ctx, 31, 0x3E36ECu);
    ctx->pc = 0x3E36E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E36E4u;
    // 0x3e36e8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E36B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E36B8u, 0x3E36E4u, 0x3E36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E36ECu;
label_3e36ec:
    // 0x3e36ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e36ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e36f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3e36f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e36f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e36f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e36f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E36F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36F8u;
        // 0x3e36fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E36F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3700u;
}
