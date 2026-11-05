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

// Function: sub_0030C848
// Address: 0x30c848 - 0x30c8c8
void sub_0030C848_0x30c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C848_0x30c848");
#endif

    switch (ctx->pc) {
        case 0x30c868u: goto label_30c868;
        case 0x30c87cu: goto label_30c87c;
        case 0x30c890u: goto label_30c890;
        case 0x30c8a4u: goto label_30c8a4;
        case 0x30c8b4u: goto label_30c8b4;
        default: break;
    }

    ctx->pc = 0x30c848u;

    // 0x30c848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c84c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c854: 0x24a5c6f8  addiu       $a1, $a1, -0x3908
    ctx->pc = 0x30c854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952696));
    // 0x30c858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c85c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30c860: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30C860u;
    SET_GPR_U32(ctx, 31, 0x30C868u);
    ctx->pc = 0x30C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C860u;
    // 0x30c864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30C860u, 0x30C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C868u;
label_30c868:
    // 0x30c868: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x30c868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30c86c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C86Cu;
    {
        const bool branch_taken_0x30c86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c86c) {
            ctx->pc = 0x30C870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C86Cu;
            // 0x30c870: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C880u;
            goto label_30c880;
        }
    }
    ctx->pc = 0x30C874u;
    // 0x30c874: 0xc07418e  jal         func_1D0638
    ctx->pc = 0x30C874u;
    SET_GPR_U32(ctx, 31, 0x30C87Cu);
    ctx->pc = 0x30C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C874u;
    // 0x30c878: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0638u, 0x30C874u, 0x30C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C87Cu;
label_30c87c:
    // 0x30c87c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30c880:
    // 0x30c880: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C880u;
    {
        const bool branch_taken_0x30c880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c880) {
            ctx->pc = 0x30C894u;
            goto label_30c894;
        }
    }
    ctx->pc = 0x30C888u;
    // 0x30c888: 0xc0c497c  jal         func_3125F0
    ctx->pc = 0x30C888u;
    SET_GPR_U32(ctx, 31, 0x30C890u);
    ctx->pc = 0x3125F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3125F0u, 0x30C888u, 0x30C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C890u;
label_30c890:
    // 0x30c890: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x30c890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_30c894:
    // 0x30c894: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30C894u;
    {
        const bool branch_taken_0x30c894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c894) {
            ctx->pc = 0x30C898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C894u;
            // 0x30c898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C8B8u;
            goto label_30c8b8;
        }
    }
    ctx->pc = 0x30C89Cu;
    // 0x30c89c: 0xc0fb988  jal         func_3EE620
    ctx->pc = 0x30C89Cu;
    SET_GPR_U32(ctx, 31, 0x30C8A4u);
    ctx->pc = 0x30C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C89Cu;
    // 0x30c8a0: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE620u, 0x30C89Cu, 0x30C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C8A4u;
label_30c8a4:
    // 0x30c8a4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x30c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x30c8a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30c8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c8ac: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x30C8ACu;
    SET_GPR_U32(ctx, 31, 0x30C8B4u);
    ctx->pc = 0x30C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C8ACu;
    // 0x30c8b0: 0x24847eb8  addiu       $a0, $a0, 0x7EB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x30C8ACu, 0x30C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C8B4u;
label_30c8b4:
    // 0x30c8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30c8b8:
    // 0x30c8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c8bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30c8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x30C8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8C0u;
        // 0x30c8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C8C8u;
}
