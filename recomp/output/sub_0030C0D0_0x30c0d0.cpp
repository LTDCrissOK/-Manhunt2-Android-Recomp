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

// Function: sub_0030C0D0
// Address: 0x30c0d0 - 0x30c110
void sub_0030C0D0_0x30c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C0D0_0x30c0d0");
#endif

    switch (ctx->pc) {
        case 0x30c0e4u: goto label_30c0e4;
        case 0x30c100u: goto label_30c100;
        default: break;
    }

    ctx->pc = 0x30c0d0u;

    // 0x30c0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c0d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c0d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30c0dc: 0xc0c3028  jal         func_30C0A0
    ctx->pc = 0x30C0DCu;
    SET_GPR_U32(ctx, 31, 0x30C0E4u);
    ctx->pc = 0x30C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C0DCu;
    // 0x30c0e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C0A0u, 0x30C0DCu, 0x30C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C0E4u;
label_30c0e4:
    // 0x30c0e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C0E4u;
    {
        const bool branch_taken_0x30c0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0E4u;
        // 0x30c0e8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0e4) {
            ctx->pc = 0x30C100u;
            goto label_30c100;
        }
    }
    ctx->pc = 0x30C0ECu;
    // 0x30c0ec: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c0f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0f4: 0x24a5c078  addiu       $a1, $a1, -0x3F88
    ctx->pc = 0x30c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951032));
    // 0x30c0f8: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30C0F8u;
    SET_GPR_U32(ctx, 31, 0x30C100u);
    ctx->pc = 0x30C0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C0F8u;
    // 0x30c0fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30C0F8u, 0x30C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C100u;
label_30c100:
    // 0x30c100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c104: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30c104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c108: 0x3e00008  jr          $ra
    ctx->pc = 0x30C108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C108u;
        // 0x30c10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C110u;
}
