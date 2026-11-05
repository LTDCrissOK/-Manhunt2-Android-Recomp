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

// Function: sub_0011477C
// Address: 0x11477c - 0x1147bc
void sub_0011477C_0x11477c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011477C_0x11477c");
#endif

    switch (ctx->pc) {
        case 0x11477cu: goto label_11477c;
        case 0x114780u: goto label_114780;
        case 0x114784u: goto label_114784;
        case 0x114788u: goto label_114788;
        case 0x11478cu: goto label_11478c;
        case 0x114790u: goto label_114790;
        case 0x114794u: goto label_114794;
        case 0x114798u: goto label_114798;
        case 0x11479cu: goto label_11479c;
        case 0x1147a0u: goto label_1147a0;
        case 0x1147a4u: goto label_1147a4;
        case 0x1147a8u: goto label_1147a8;
        case 0x1147acu: goto label_1147ac;
        case 0x1147b0u: goto label_1147b0;
        case 0x1147b4u: goto label_1147b4;
        case 0x1147b8u: goto label_1147b8;
        default: break;
    }

    ctx->pc = 0x11477cu;

label_11477c:
    // 0x11477c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114780:
    // 0x114780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_114784:
    // 0x114784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x114784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_114788:
    // 0x114788: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x114788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11478c:
    // 0x11478c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11478cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_114790:
    // 0x114790: 0x3e00008  jr          $ra
label_114794:
    if (ctx->pc == 0x114794u) {
        ctx->pc = 0x114794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114790u;
        // 0x114794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114798u;
        goto label_114798;
    }
    ctx->pc = 0x114790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114790u;
        // 0x114794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114798u;
label_114798:
    // 0x114798: 0x2ca20076  sltiu       $v0, $a1, 0x76
    ctx->pc = 0x114798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)118) ? 1 : 0);
label_11479c:
    // 0x11479c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1147a0:
    if (ctx->pc == 0x1147A0u) {
        ctx->pc = 0x1147A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11479Cu;
        // 0x1147a0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147A4u;
        goto label_1147a4;
    }
    ctx->pc = 0x11479Cu;
    {
        const bool branch_taken_0x11479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1147A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11479Cu;
        // 0x1147a0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11479c) {
            ctx->pc = 0x1147FCu;
            return;
        }
    }
    ctx->pc = 0x1147A4u;
label_1147a4:
    // 0x1147a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1147a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1147a8:
    // 0x1147a8: 0x2442add0  addiu       $v0, $v0, -0x5230
    ctx->pc = 0x1147a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946256));
label_1147ac:
    // 0x1147ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1147acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1147b0:
    // 0x1147b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1147b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1147b4:
    // 0x1147b4: 0x800008  jr          $a0
label_1147b8:
    if (ctx->pc == 0x1147B8u) {
        ctx->pc = 0x1147BCu;
        goto label_fallthrough_0x1147b4;
    }
    ctx->pc = 0x1147B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1147B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1147b4:
    ctx->pc = 0x1147BCu;
}
