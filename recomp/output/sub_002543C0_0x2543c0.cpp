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

// Function: sub_002543C0
// Address: 0x2543c0 - 0x254428
void sub_002543C0_0x2543c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002543C0_0x2543c0");
#endif

    switch (ctx->pc) {
        case 0x2543ecu: goto label_2543ec;
        case 0x254408u: goto label_254408;
        case 0x254410u: goto label_254410;
        default: break;
    }

    ctx->pc = 0x2543c0u;

    // 0x2543c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2543c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2543c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2543c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2543c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2543c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2543cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2543ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543d0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2543d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2543d4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2543d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2543d8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2543D8u;
    {
        const bool branch_taken_0x2543d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2543d8) {
            ctx->pc = 0x2543DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543D8u;
            // 0x2543dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254414u;
            goto label_254414;
        }
    }
    ctx->pc = 0x2543E0u;
    // 0x2543e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2543e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2543e4: 0xc0944da  jal         func_251368
    ctx->pc = 0x2543E4u;
    SET_GPR_U32(ctx, 31, 0x2543ECu);
    ctx->pc = 0x2543E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543E4u;
    // 0x2543e8: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x2543E4u, 0x2543ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543ECu;
label_2543ec:
    // 0x2543ec: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x2543ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x2543f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2543f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2543f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2543f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543f8: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x2543f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x2543fc: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x2543fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x254400: 0xc061b16  jal         func_186C58
    ctx->pc = 0x254400u;
    SET_GPR_U32(ctx, 31, 0x254408u);
    ctx->pc = 0x254404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254400u;
    // 0x254404: 0x8e051004  lw          $a1, 0x1004($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186C58u, 0x254400u, 0x254408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254408u;
label_254408:
    // 0x254408: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x254408u;
    SET_GPR_U32(ctx, 31, 0x254410u);
    ctx->pc = 0x25440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254408u;
    // 0x25440c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x254408u, 0x254410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254410u;
label_254410:
    // 0x254410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254414:
    // 0x254414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254418: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25441c: 0x3e00008  jr          $ra
    ctx->pc = 0x25441Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25441Cu;
        // 0x254420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25441Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254424u;
    // 0x254424: 0x0  nop
    ctx->pc = 0x254424u;
    // NOP
    ctx->pc = 0x254428u;
}
