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

// Function: sub_002D3728
// Address: 0x2d3728 - 0x2d3780
void sub_002D3728_0x2d3728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3728_0x2d3728");
#endif

    switch (ctx->pc) {
        case 0x2d374cu: goto label_2d374c;
        default: break;
    }

    ctx->pc = 0x2d3728u;

    // 0x2d3728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d372c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d372cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3730: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d3730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d3734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3738: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x2d3738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2d373c: 0x5880000c  blezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D373Cu;
    {
        const bool branch_taken_0x2d373c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d373c) {
            ctx->pc = 0x2D3740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D373Cu;
            // 0x2d3740: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3770u;
            goto label_2d3770;
        }
    }
    ctx->pc = 0x2D3744u;
    // 0x2d3744: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2D3744u;
    SET_GPR_U32(ctx, 31, 0x2D374Cu);
    ctx->pc = 0x2D3748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3744u;
    // 0x2d3748: 0x2484003f  addiu       $a0, $a0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2D3744u, 0x2D374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D374Cu;
label_2d374c:
    // 0x2d374c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d374cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2d3750: 0x2444003f  addiu       $a0, $v0, 0x3F
    ctx->pc = 0x2d3750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2d3754: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x2d3754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x2d3758: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x2d3758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2d375c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2d375cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d3760: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x2d3760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x2d3764: 0xae0400a0  sw          $a0, 0xA0($s0)
    ctx->pc = 0x2d3764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 4));
    // 0x2d3768: 0xae0500a4  sw          $a1, 0xA4($s0)
    ctx->pc = 0x2d3768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 5));
    // 0x2d376c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d376cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d3770:
    // 0x2d3770: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d3770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3774: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3774u;
        // 0x2d3778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D377Cu;
    // 0x2d377c: 0x0  nop
    ctx->pc = 0x2d377cu;
    // NOP
    ctx->pc = 0x2d3780u;
}
