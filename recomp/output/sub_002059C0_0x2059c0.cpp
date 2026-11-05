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

// Function: sub_002059C0
// Address: 0x2059c0 - 0x2059f8
void sub_002059C0_0x2059c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002059C0_0x2059c0");
#endif

    switch (ctx->pc) {
        case 0x2059e4u: goto label_2059e4;
        default: break;
    }

    ctx->pc = 0x2059c0u;

    // 0x2059c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2059c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2059c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2059c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2059c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2059c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2059cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2059ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2059d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2059d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2059d4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2059D4u;
    {
        const bool branch_taken_0x2059d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2059d4) {
            ctx->pc = 0x2059D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2059D4u;
            // 0x2059d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2059ECu;
            goto label_2059ec;
        }
    }
    ctx->pc = 0x2059DCu;
    // 0x2059dc: 0xc0e7e52  jal         func_39F948
    ctx->pc = 0x2059DCu;
    SET_GPR_U32(ctx, 31, 0x2059E4u);
    ctx->pc = 0x2059E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2059DCu;
    // 0x2059e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F948u, 0x2059DCu, 0x2059E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059E4u;
label_2059e4:
    // 0x2059e4: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x2059e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2059e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2059e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2059ec:
    // 0x2059ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2059ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2059f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2059F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2059F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059F0u;
        // 0x2059f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2059F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2059F8u;
}
