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

// Function: sub_002D0268
// Address: 0x2d0268 - 0x2d02b8
void sub_002D0268_0x2d0268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0268_0x2d0268");
#endif

    switch (ctx->pc) {
        case 0x2d0294u: goto label_2d0294;
        default: break;
    }

    ctx->pc = 0x2d0268u;

    // 0x2d0268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d026c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d026cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d0270: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d0270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d0274: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2d0274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2d0278: 0x8c43b4a8  lw          $v1, -0x4B58($v0)
    ctx->pc = 0x2d0278u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2d027c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d027cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0280: 0x34842fc8  ori         $a0, $a0, 0x2FC8
    ctx->pc = 0x2d0280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12232);
    // 0x2d0284: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d0284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2d0288: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2d0288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d028c: 0xc0b3e5a  jal         func_2CF968
    ctx->pc = 0x2D028Cu;
    SET_GPR_U32(ctx, 31, 0x2D0294u);
    ctx->pc = 0x2D0290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D028Cu;
    // 0x2d0290: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF968u, 0x2D028Cu, 0x2D0294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0294u;
label_2d0294:
    // 0x2d0294: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x2d0294u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d029c: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x2d029cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d02a0: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x2d02a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x2d02a4: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x2d02a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x2d02a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d02a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d02ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d02acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d02b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D02B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02B0u;
        // 0x2d02b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D02B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D02B8u;
}
