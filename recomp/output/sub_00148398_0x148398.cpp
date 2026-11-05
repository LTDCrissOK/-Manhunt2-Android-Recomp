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

// Function: sub_00148398
// Address: 0x148398 - 0x148408
void sub_00148398_0x148398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148398_0x148398");
#endif

    switch (ctx->pc) {
        case 0x1483bcu: goto label_1483bc;
        case 0x1483c8u: goto label_1483c8;
        case 0x1483d0u: goto label_1483d0;
        default: break;
    }

    ctx->pc = 0x148398u;

    // 0x148398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14839c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1483a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1483a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1483a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1483a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483a8: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x1483a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1483ac: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1483ACu;
    {
        const bool branch_taken_0x1483ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1483ac) {
            ctx->pc = 0x1483B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1483ACu;
            // 0x1483b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1483FCu;
            goto label_1483fc;
        }
    }
    ctx->pc = 0x1483B4u;
    // 0x1483b4: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x1483B4u;
    SET_GPR_U32(ctx, 31, 0x1483BCu);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x1483B4u, 0x1483BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483BCu;
label_1483bc:
    // 0x1483bc: 0xae0006a0  sw          $zero, 0x6A0($s0)
    ctx->pc = 0x1483bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 0));
    // 0x1483c0: 0xc052102  jal         func_148408
    ctx->pc = 0x1483C0u;
    SET_GPR_U32(ctx, 31, 0x1483C8u);
    ctx->pc = 0x1483C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1483C0u;
    // 0x1483c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148408u, 0x1483C0u, 0x1483C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483C8u;
label_1483c8:
    // 0x1483c8: 0xc052106  jal         func_148418
    ctx->pc = 0x1483C8u;
    SET_GPR_U32(ctx, 31, 0x1483D0u);
    ctx->pc = 0x1483CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1483C8u;
    // 0x1483cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148418u, 0x1483C8u, 0x1483D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483D0u;
label_1483d0:
    // 0x1483d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1483d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1483d4: 0xae000704  sw          $zero, 0x704($s0)
    ctx->pc = 0x1483d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
    // 0x1483d8: 0xae0206f4  sw          $v0, 0x6F4($s0)
    ctx->pc = 0x1483d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1780), GPR_U32(ctx, 2));
    // 0x1483dc: 0xae0006e8  sw          $zero, 0x6E8($s0)
    ctx->pc = 0x1483dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1768), GPR_U32(ctx, 0));
    // 0x1483e0: 0xae0006e4  sw          $zero, 0x6E4($s0)
    ctx->pc = 0x1483e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1764), GPR_U32(ctx, 0));
    // 0x1483e4: 0xae0006ec  sw          $zero, 0x6EC($s0)
    ctx->pc = 0x1483e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1772), GPR_U32(ctx, 0));
    // 0x1483e8: 0xae0006f0  sw          $zero, 0x6F0($s0)
    ctx->pc = 0x1483e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1776), GPR_U32(ctx, 0));
    // 0x1483ec: 0xae0006f8  sw          $zero, 0x6F8($s0)
    ctx->pc = 0x1483ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1784), GPR_U32(ctx, 0));
    // 0x1483f0: 0xae0006fc  sw          $zero, 0x6FC($s0)
    ctx->pc = 0x1483f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1788), GPR_U32(ctx, 0));
    // 0x1483f4: 0xae000700  sw          $zero, 0x700($s0)
    ctx->pc = 0x1483f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 0));
    // 0x1483f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1483f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1483fc:
    // 0x1483fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1483fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148400: 0x3e00008  jr          $ra
    ctx->pc = 0x148400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148400u;
        // 0x148404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148408u;
}
