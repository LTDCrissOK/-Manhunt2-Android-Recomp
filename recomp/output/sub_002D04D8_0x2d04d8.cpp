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

// Function: sub_002D04D8
// Address: 0x2d04d8 - 0x2d0520
void sub_002D04D8_0x2d04d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D04D8_0x2d04d8");
#endif

    switch (ctx->pc) {
        case 0x2d04ecu: goto label_2d04ec;
        default: break;
    }

    ctx->pc = 0x2d04d8u;

    // 0x2d04d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d04d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d04dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d04dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d04e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d04e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d04e4: 0xc0b4112  jal         func_2D0448
    ctx->pc = 0x2D04E4u;
    SET_GPR_U32(ctx, 31, 0x2D04ECu);
    ctx->pc = 0x2D04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D04E4u;
    // 0x2d04e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0448u, 0x2D04E4u, 0x2D04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04ECu;
label_2d04ec:
    // 0x2d04ec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D04ECu;
    {
        const bool branch_taken_0x2d04ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d04ec) {
            ctx->pc = 0x2D04F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D04ECu;
            // 0x2d04f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D050Cu;
            goto label_2d050c;
        }
    }
    ctx->pc = 0x2D04F4u;
    // 0x2d04f4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d04f8: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x2d04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x2d04fc: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x2d04fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x2d0500: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d0500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d0504: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2d0504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d0508: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2d0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2d050c:
    // 0x2d050c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d050cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0510: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d0510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0514: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0514u;
        // 0x2d0518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D051Cu;
    // 0x2d051c: 0x0  nop
    ctx->pc = 0x2d051cu;
    // NOP
    ctx->pc = 0x2d0520u;
}
