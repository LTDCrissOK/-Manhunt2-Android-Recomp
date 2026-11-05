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

// Function: sub_0036C5C0
// Address: 0x36c5c0 - 0x36c600
void sub_0036C5C0_0x36c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C5C0_0x36c5c0");
#endif

    switch (ctx->pc) {
        case 0x36c5dcu: goto label_36c5dc;
        case 0x36c5e8u: goto label_36c5e8;
        default: break;
    }

    ctx->pc = 0x36c5c0u;

    // 0x36c5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c5c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c5c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36c5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c5cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36c5d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36c5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c5d4: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C5D4u;
    SET_GPR_U32(ctx, 31, 0x36C5DCu);
    ctx->pc = 0x36C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5D4u;
    // 0x36c5d8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C5D4u, 0x36C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5DCu;
label_36c5dc:
    // 0x36c5dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36c5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c5e0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C5E0u;
    SET_GPR_U32(ctx, 31, 0x36C5E8u);
    ctx->pc = 0x36C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5E0u;
    // 0x36c5e4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C5E0u, 0x36C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5E8u;
label_36c5e8:
    // 0x36c5e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c5ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c5f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x36C5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C5F4u;
        // 0x36c5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C5FCu;
    // 0x36c5fc: 0x0  nop
    ctx->pc = 0x36c5fcu;
    // NOP
    ctx->pc = 0x36c600u;
}
