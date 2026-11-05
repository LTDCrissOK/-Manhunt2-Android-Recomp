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

// Function: sub_002A2428
// Address: 0x2a2428 - 0x2a2470
void sub_002A2428_0x2a2428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2428_0x2a2428");
#endif

    switch (ctx->pc) {
        case 0x2a245cu: goto label_2a245c;
        default: break;
    }

    ctx->pc = 0x2a2428u;

    // 0x2a2428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a2428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a242c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a242cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2a2430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a2434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2438: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a2438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a243c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A243Cu;
    {
        const bool branch_taken_0x2a243c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A243Cu;
        // 0x2a2440: 0x2444f250  addiu       $a0, $v0, -0xDB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a243c) {
            ctx->pc = 0x2A2450u;
            goto label_2a2450;
        }
    }
    ctx->pc = 0x2A2444u;
    // 0x2a2444: 0x8c820240  lw          $v0, 0x240($a0)
    ctx->pc = 0x2a2444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 576)));
    // 0x2a2448: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2448u;
    {
        const bool branch_taken_0x2a2448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2448u;
        // 0x2a244c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2448) {
            ctx->pc = 0x2A2454u;
            goto label_2a2454;
        }
    }
    ctx->pc = 0x2A2450u;
label_2a2450:
    // 0x2a2450: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2a2450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_2a2454:
    // 0x2a2454: 0xc0a8de6  jal         func_2A3798
    ctx->pc = 0x2A2454u;
    SET_GPR_U32(ctx, 31, 0x2A245Cu);
    ctx->pc = 0x2A3798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3798u, 0x2A2454u, 0x2A245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A245Cu;
label_2a245c:
    // 0x2a245c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2a245cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2a2460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2464: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a2464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a2468: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2468u;
        // 0x2a246c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2470u;
}
