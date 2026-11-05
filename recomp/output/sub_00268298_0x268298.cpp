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

// Function: sub_00268298
// Address: 0x268298 - 0x2682f8
void sub_00268298_0x268298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268298_0x268298");
#endif

    switch (ctx->pc) {
        case 0x2682dcu: goto label_2682dc;
        case 0x2682e4u: goto label_2682e4;
        default: break;
    }

    ctx->pc = 0x268298u;

    // 0x268298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x268298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26829c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2682a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2682a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2682a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2682a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2682a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2682a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2682ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2682acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2682b0: 0xa2020246  sb          $v0, 0x246($s0)
    ctx->pc = 0x2682b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 582), (uint8_t)GPR_U32(ctx, 2));
    // 0x2682b4: 0xa2000245  sb          $zero, 0x245($s0)
    ctx->pc = 0x2682b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 581), (uint8_t)GPR_U32(ctx, 0));
    // 0x2682b8: 0x9062bd24  lbu         $v0, -0x42DC($v1)
    ctx->pc = 0x2682b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x2682bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2682BCu;
    {
        const bool branch_taken_0x2682bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2682bc) {
            ctx->pc = 0x2682DCu;
            goto label_2682dc;
        }
    }
    ctx->pc = 0x2682C4u;
    // 0x2682c4: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x2682c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x2682c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2682c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2682cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2682CCu;
    {
        const bool branch_taken_0x2682cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2682cc) {
            ctx->pc = 0x2682DCu;
            goto label_2682dc;
        }
    }
    ctx->pc = 0x2682D4u;
    // 0x2682d4: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x2682D4u;
    SET_GPR_U32(ctx, 31, 0x2682DCu);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x2682D4u, 0x2682DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682DCu;
label_2682dc:
    // 0x2682dc: 0xc099e8c  jal         func_267A30
    ctx->pc = 0x2682DCu;
    SET_GPR_U32(ctx, 31, 0x2682E4u);
    ctx->pc = 0x2682E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2682DCu;
    // 0x2682e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A30u, 0x2682DCu, 0x2682E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682E4u;
label_2682e4:
    // 0x2682e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2682e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2682e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2682e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2682ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2682ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2682F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682ECu;
        // 0x2682f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2682ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2682F4u;
    // 0x2682f4: 0x0  nop
    ctx->pc = 0x2682f4u;
    // NOP
    ctx->pc = 0x2682f8u;
}
