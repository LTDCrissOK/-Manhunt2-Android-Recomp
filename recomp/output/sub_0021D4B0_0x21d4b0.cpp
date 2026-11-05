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

// Function: sub_0021D4B0
// Address: 0x21d4b0 - 0x21d4f0
void sub_0021D4B0_0x21d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D4B0_0x21d4b0");
#endif

    switch (ctx->pc) {
        case 0x21d4ccu: goto label_21d4cc;
        case 0x21d4dcu: goto label_21d4dc;
        default: break;
    }

    ctx->pc = 0x21d4b0u;

    // 0x21d4b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x21d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x21d4b4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x21d4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x21d4b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4bc: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x21d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x21d4c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x21d4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4c4: 0xc09e062  jal         func_278188
    ctx->pc = 0x21D4C4u;
    SET_GPR_U32(ctx, 31, 0x21D4CCu);
    ctx->pc = 0x21D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4C4u;
    // 0x21d4c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x21D4C4u, 0x21D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4CCu;
label_21d4cc:
    // 0x21d4cc: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x21d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x21d4d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21d4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4d4: 0xc0c3650  jal         func_30D940
    ctx->pc = 0x21D4D4u;
    SET_GPR_U32(ctx, 31, 0x21D4DCu);
    ctx->pc = 0x21D4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4D4u;
    // 0x21d4d8: 0x24847ee0  addiu       $a0, $a0, 0x7EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D940u, 0x21D4D4u, 0x21D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4DCu;
label_21d4dc:
    // 0x21d4dc: 0xa6020054  sh          $v0, 0x54($s0)
    ctx->pc = 0x21d4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x21d4e0: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x21d4e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21d4e4: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x21d4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x21d4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x21D4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4E8u;
        // 0x21d4ec: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D4F0u;
}
