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

// Function: sub_002D7350
// Address: 0x2d7350 - 0x2d73b8
void sub_002D7350_0x2d7350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7350_0x2d7350");
#endif

    switch (ctx->pc) {
        case 0x2d7370u: goto label_2d7370;
        case 0x2d7390u: goto label_2d7390;
        default: break;
    }

    ctx->pc = 0x2d7350u;

    // 0x2d7350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7354: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2d7354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d735c: 0x24ca01d6  addiu       $t2, $a2, 0x1D6
    ctx->pc = 0x2d735cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 470));
    // 0x2d7360: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x2d7360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2d7364: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D7364u;
    {
        const bool branch_taken_0x2d7364 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7364u;
        // 0x2d7368: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7364) {
            ctx->pc = 0x2D73A8u;
            goto label_2d73a8;
        }
    }
    ctx->pc = 0x2D736Cu;
    // 0x2d736c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x2d736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2d7370:
    // 0x2d7370: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x2d7370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2d7374: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2d7374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d7378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d7378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d737c: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x2d737cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2d7380: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7380u;
    {
        const bool branch_taken_0x2d7380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7380) {
            ctx->pc = 0x2D7384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7380u;
            // 0x2d7384: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7398u;
            goto label_2d7398;
        }
    }
    ctx->pc = 0x2D7388u;
    // 0x2d7388: 0xc0b5c9e  jal         func_2D7278
    ctx->pc = 0x2D7388u;
    SET_GPR_U32(ctx, 31, 0x2D7390u);
    ctx->pc = 0x2D7278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7278u, 0x2D7388u, 0x2D7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7390u;
label_2d7390:
    // 0x2d7390: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7390u;
    {
        const bool branch_taken_0x2d7390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7390u;
        // 0x2d7394: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7390) {
            ctx->pc = 0x2D73B0u;
            goto label_2d73b0;
        }
    }
    ctx->pc = 0x2D7398u;
label_2d7398:
    // 0x2d7398: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2d7398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2d739c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2d739cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d73a0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D73A0u;
    {
        const bool branch_taken_0x2d73a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d73a0) {
            ctx->pc = 0x2D73A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D73A0u;
            // 0x2d73a4: 0x8d240000  lw          $a0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7370;
        }
    }
    ctx->pc = 0x2D73A8u;
label_2d73a8:
    // 0x2d73a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d73a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d73acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d73b0:
    // 0x2d73b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D73B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73B0u;
        // 0x2d73b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D73B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D73B8u;
}
