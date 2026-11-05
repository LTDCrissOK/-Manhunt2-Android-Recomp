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

// Function: sub_002D3068
// Address: 0x2d3068 - 0x2d30c0
void sub_002D3068_0x2d3068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3068_0x2d3068");
#endif

    switch (ctx->pc) {
        case 0x2d3084u: goto label_2d3084;
        case 0x2d3098u: goto label_2d3098;
        case 0x2d30acu: goto label_2d30ac;
        default: break;
    }

    ctx->pc = 0x2d3068u;

    // 0x2d3068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d306c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d306cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d3074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d3078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d307c: 0xc0b4c90  jal         func_2D3240
    ctx->pc = 0x2D307Cu;
    SET_GPR_U32(ctx, 31, 0x2D3084u);
    ctx->pc = 0x2D3080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D307Cu;
    // 0x2d3080: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3240u, 0x2D307Cu, 0x2D3084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3084u;
label_2d3084:
    // 0x2d3084: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d3084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d3088: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3088u;
    {
        const bool branch_taken_0x2d3088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3088u;
        // 0x2d308c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3088) {
            ctx->pc = 0x2D309Cu;
            goto label_2d309c;
        }
    }
    ctx->pc = 0x2D3090u;
    // 0x2d3090: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2D3090u;
    SET_GPR_U32(ctx, 31, 0x2D3098u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2D3090u, 0x2D3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3098u;
label_2d3098:
    // 0x2d3098: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2d3098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2d309c:
    // 0x2d309c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D309Cu;
    {
        const bool branch_taken_0x2d309c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d309c) {
            ctx->pc = 0x2D30A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D309Cu;
            // 0x2d30a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D30B0u;
            goto label_2d30b0;
        }
    }
    ctx->pc = 0x2D30A4u;
    // 0x2d30a4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D30A4u;
    SET_GPR_U32(ctx, 31, 0x2D30ACu);
    ctx->pc = 0x2D30A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30A4u;
    // 0x2d30a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D30A4u, 0x2D30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30ACu;
label_2d30ac:
    // 0x2d30ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d30acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d30b0:
    // 0x2d30b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d30b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d30b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d30b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d30b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D30B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30B8u;
        // 0x2d30bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D30B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D30C0u;
}
