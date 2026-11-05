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

// Function: sub_00141870
// Address: 0x141870 - 0x1418d8
void sub_00141870_0x141870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141870_0x141870");
#endif

    switch (ctx->pc) {
        case 0x1418b0u: goto label_1418b0;
        case 0x1418b8u: goto label_1418b8;
        default: break;
    }

    ctx->pc = 0x141870u;

    // 0x141870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141874: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x141874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x141878: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14187c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14187cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141884: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x141884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141888: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x141888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14188c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14188cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x141890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141894: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x141894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x141898: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x141898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14189c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14189cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1418a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1418a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1418a4: 0x8c90020c  lw          $s0, 0x20C($a0)
    ctx->pc = 0x1418a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1418a8: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x1418A8u;
    SET_GPR_U32(ctx, 31, 0x1418B0u);
    ctx->pc = 0x1418ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418A8u;
    // 0x1418ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x1418A8u, 0x1418B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418B0u;
label_1418b0:
    // 0x1418b0: 0xc043e8e  jal         func_10FA38
    ctx->pc = 0x1418B0u;
    SET_GPR_U32(ctx, 31, 0x1418B8u);
    ctx->pc = 0x1418B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418B0u;
    // 0x1418b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA38u, 0x1418B0u, 0x1418B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418B8u;
label_1418b8:
    // 0x1418b8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1418b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1418bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1418bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1418c0: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x1418c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x1418c4: 0xae030268  sw          $v1, 0x268($s0)
    ctx->pc = 0x1418c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 3));
    // 0x1418c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1418c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1418cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1418CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1418D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418CCu;
        // 0x1418d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1418CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1418D4u;
    // 0x1418d4: 0x0  nop
    ctx->pc = 0x1418d4u;
    // NOP
    ctx->pc = 0x1418d8u;
}
