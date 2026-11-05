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

// Function: sub_001CA1A0
// Address: 0x1ca1a0 - 0x1ca200
void sub_001CA1A0_0x1ca1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA1A0_0x1ca1a0");
#endif

    switch (ctx->pc) {
        case 0x1ca1b8u: goto label_1ca1b8;
        case 0x1ca1ccu: goto label_1ca1cc;
        case 0x1ca1e0u: goto label_1ca1e0;
        case 0x1ca1f0u: goto label_1ca1f0;
        default: break;
    }

    ctx->pc = 0x1ca1a0u;

    // 0x1ca1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca1a4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1ca1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1ca1a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca1ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca1b0: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1CA1B0u;
    SET_GPR_U32(ctx, 31, 0x1CA1B8u);
    ctx->pc = 0x1CA1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1B0u;
    // 0x1ca1b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1CA1B0u, 0x1CA1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1B8u;
label_1ca1b8:
    // 0x1ca1b8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA1B8u;
    {
        const bool branch_taken_0x1ca1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1B8u;
        // 0x1ca1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1b8) {
            ctx->pc = 0x1CA204u;
            return;
        }
    }
    ctx->pc = 0x1CA1C0u;
    // 0x1ca1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1c4: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1CA1C4u;
    SET_GPR_U32(ctx, 31, 0x1CA1CCu);
    ctx->pc = 0x1CA1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1C4u;
    // 0x1ca1c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1CA1C4u, 0x1CA1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1CCu;
label_1ca1cc:
    // 0x1ca1cc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CA1CCu;
    {
        const bool branch_taken_0x1ca1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1CCu;
        // 0x1ca1d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1cc) {
            ctx->pc = 0x1CA204u;
            return;
        }
    }
    ctx->pc = 0x1CA1D4u;
    // 0x1ca1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1d8: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1CA1D8u;
    SET_GPR_U32(ctx, 31, 0x1CA1E0u);
    ctx->pc = 0x1CA1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1D8u;
    // 0x1ca1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1CA1D8u, 0x1CA1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1E0u;
label_1ca1e0:
    // 0x1ca1e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA1E0u;
    {
        const bool branch_taken_0x1ca1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1E0u;
        // 0x1ca1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1e0) {
            ctx->pc = 0x1CA1F8u;
            goto label_1ca1f8;
        }
    }
    ctx->pc = 0x1CA1E8u;
    // 0x1ca1e8: 0xc07274e  jal         func_1C9D38
    ctx->pc = 0x1CA1E8u;
    SET_GPR_U32(ctx, 31, 0x1CA1F0u);
    ctx->pc = 0x1CA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1E8u;
    // 0x1ca1ec: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9D38u, 0x1CA1E8u, 0x1CA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1F0u;
label_1ca1f0:
    // 0x1ca1f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA1F0u;
    {
        const bool branch_taken_0x1ca1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1F0u;
        // 0x1ca1f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1f0) {
            ctx->pc = 0x1CA208u;
            return;
        }
    }
    ctx->pc = 0x1CA1F8u;
label_1ca1f8:
    // 0x1ca1f8: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1CA1F8u;
    SET_GPR_U32(ctx, 31, 0x1CA200u);
    ctx->pc = 0x1CA1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1F8u;
    // 0x1ca1fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1CA1F8u, 0x1CA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA200u;
}
