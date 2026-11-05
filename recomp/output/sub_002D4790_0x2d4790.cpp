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

// Function: sub_002D4790
// Address: 0x2d4790 - 0x2d47f8
void sub_002D4790_0x2d4790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4790_0x2d4790");
#endif

    switch (ctx->pc) {
        case 0x2d47bcu: goto label_2d47bc;
        case 0x2d47c4u: goto label_2d47c4;
        case 0x2d47e0u: goto label_2d47e0;
        default: break;
    }

    ctx->pc = 0x2d4790u;

    // 0x2d4790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4798: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d4798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d479c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d479cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d47a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d47a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d47a4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2d47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d47a8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D47A8u;
    {
        const bool branch_taken_0x2d47a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47A8u;
        // 0x2d47ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47a8) {
            ctx->pc = 0x2D47E4u;
            goto label_2d47e4;
        }
    }
    ctx->pc = 0x2D47B0u;
    // 0x2d47b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d47b4: 0xc0b516a  jal         func_2D45A8
    ctx->pc = 0x2D47B4u;
    SET_GPR_U32(ctx, 31, 0x2D47BCu);
    ctx->pc = 0x2D47B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D47B4u;
    // 0x2d47b8: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D45A8u, 0x2D47B4u, 0x2D47BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47BCu;
label_2d47bc:
    // 0x2d47bc: 0xc0b5052  jal         func_2D4148
    ctx->pc = 0x2D47BCu;
    SET_GPR_U32(ctx, 31, 0x2D47C4u);
    ctx->pc = 0x2D47C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D47BCu;
    // 0x2d47c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4148u, 0x2D47BCu, 0x2D47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47C4u;
label_2d47c4:
    // 0x2d47c4: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x2d47c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2d47c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D47C8u;
    {
        const bool branch_taken_0x2d47c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47C8u;
        // 0x2d47cc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47c8) {
            ctx->pc = 0x2D47E0u;
            goto label_2d47e0;
        }
    }
    ctx->pc = 0x2D47D0u;
    // 0x2d47d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d47d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d47d4: 0x8c44bd20  lw          $a0, -0x42E0($v0)
    ctx->pc = 0x2d47d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    // 0x2d47d8: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2D47D8u;
    SET_GPR_U32(ctx, 31, 0x2D47E0u);
    ctx->pc = 0x2D47DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D47D8u;
    // 0x2d47dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x2D47D8u, 0x2D47E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47E0u;
label_2d47e0:
    // 0x2d47e0: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x2d47e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
label_2d47e4:
    // 0x2d47e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d47e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d47e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d47ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d47ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d47f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D47F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47F0u;
        // 0x2d47f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D47F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D47F8u;
}
