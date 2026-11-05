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

// Function: sub_003D61B0
// Address: 0x3d61b0 - 0x3d61f0
void sub_003D61B0_0x3d61b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D61B0_0x3d61b0");
#endif

    switch (ctx->pc) {
        case 0x3d61dcu: goto label_3d61dc;
        default: break;
    }

    ctx->pc = 0x3d61b0u;

    // 0x3d61b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d61b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d61b4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3d61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3d61b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d61b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d61bc: 0x8c622d60  lw          $v0, 0x2D60($v1)
    ctx->pc = 0x3d61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482D60u));
    // 0x3d61c0: 0x24702d60  addiu       $s0, $v1, 0x2D60
    ctx->pc = 0x3d61c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11616));
    // 0x3d61c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D61C4u;
    {
        const bool branch_taken_0x3d61c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61C4u;
        // 0x3d61c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d61c4) {
            ctx->pc = 0x3D61DCu;
            goto label_3d61dc;
        }
    }
    ctx->pc = 0x3D61CCu;
    // 0x3d61cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d61ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d61d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d61d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d61d4: 0xc0f5cb8  jal         func_3D72E0
    ctx->pc = 0x3D61D4u;
    SET_GPR_U32(ctx, 31, 0x3D61DCu);
    ctx->pc = 0x3D61D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D61D4u;
    // 0x3d61d8: 0x24a52498  addiu       $a1, $a1, 0x2498 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72E0u, 0x3D61D4u, 0x3D61DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D61DCu;
label_3d61dc:
    // 0x3d61dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d61dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d61e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d61e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d61e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d61e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d61e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D61E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61E8u;
        // 0x3d61ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D61E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D61F0u;
}
