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

// Function: sub_00115770
// Address: 0x115770 - 0x1157c8
void sub_00115770_0x115770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115770_0x115770");
#endif

    switch (ctx->pc) {
        case 0x115798u: goto label_115798;
        case 0x1157b0u: goto label_1157b0;
        default: break;
    }

    ctx->pc = 0x115770u;

    // 0x115770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11577c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11577cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115784: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x115784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115788u;
    {
        const bool branch_taken_0x115788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115788u;
        // 0x11578c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115788) {
            ctx->pc = 0x115798u;
            goto label_115798;
        }
    }
    ctx->pc = 0x115790u;
    // 0x115790: 0xc0455fe  jal         func_1157F8
    ctx->pc = 0x115790u;
    SET_GPR_U32(ctx, 31, 0x115798u);
    ctx->pc = 0x1157F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157F8u, 0x115790u, 0x115798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115798u;
label_115798:
    // 0x115798: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x115798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x11579c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11579Cu;
    {
        const bool branch_taken_0x11579c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11579Cu;
        // 0x1157a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11579c) {
            ctx->pc = 0x1157B0u;
            goto label_1157b0;
        }
    }
    ctx->pc = 0x1157A4u;
    // 0x1157a4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1157a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1157a8: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x1157A8u;
    SET_GPR_U32(ctx, 31, 0x1157B0u);
    ctx->pc = 0x1157ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157A8u;
    // 0x1157ac: 0x24848760  addiu       $a0, $a0, -0x78A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x1157A8u, 0x1157B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157B0u;
label_1157b0:
    // 0x1157b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1157b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1157b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1157b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1157b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1157b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1157bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1157BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1157C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157BCu;
        // 0x1157c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1157BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1157C4u;
    // 0x1157c4: 0x0  nop
    ctx->pc = 0x1157c4u;
    // NOP
    ctx->pc = 0x1157c8u;
}
