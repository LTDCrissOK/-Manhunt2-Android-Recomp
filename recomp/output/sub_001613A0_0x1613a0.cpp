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

// Function: sub_001613A0
// Address: 0x1613a0 - 0x161418
void sub_001613A0_0x1613a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001613A0_0x1613a0");
#endif

    switch (ctx->pc) {
        case 0x1613f4u: goto label_1613f4;
        case 0x161404u: goto label_161404;
        default: break;
    }

    ctx->pc = 0x1613a0u;

    // 0x1613a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1613a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1613a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1613a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1613a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1613a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1613ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1613acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1613b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1613b4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1613b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1613b8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1613b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1613bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1613bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1613c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1613c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1613c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1613c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1613c8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1613C8u;
    {
        const bool branch_taken_0x1613c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613C8u;
        // 0x1613cc: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613c8) {
            ctx->pc = 0x161404u;
            goto label_161404;
        }
    }
    ctx->pc = 0x1613D0u;
    // 0x1613d0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1613d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1613d4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1613d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1613d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1613dc: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x1613dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1613e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1613E0u;
    {
        const bool branch_taken_0x1613e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1613e0) {
            ctx->pc = 0x1613E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1613E0u;
            // 0x1613e4: 0xac400238  sw          $zero, 0x238($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 568), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1613E8u;
            goto label_1613e8;
        }
    }
    ctx->pc = 0x1613E8u;
label_1613e8:
    // 0x1613e8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1613e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1613ec: 0xc04973e  jal         func_125CF8
    ctx->pc = 0x1613ECu;
    SET_GPR_U32(ctx, 31, 0x1613F4u);
    ctx->pc = 0x1613F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613ECu;
    // 0x1613f0: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125CF8u, 0x1613ECu, 0x1613F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1613F4u;
label_1613f4:
    // 0x1613f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1613f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1613f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613fc: 0xc058368  jal         func_160DA0
    ctx->pc = 0x1613FCu;
    SET_GPR_U32(ctx, 31, 0x161404u);
    ctx->pc = 0x161400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613FCu;
    // 0x161400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160DA0u, 0x1613FCu, 0x161404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161404u;
label_161404:
    // 0x161404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x161408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16140c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16140cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161410: 0x3e00008  jr          $ra
    ctx->pc = 0x161410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161410u;
        // 0x161414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161418u;
}
