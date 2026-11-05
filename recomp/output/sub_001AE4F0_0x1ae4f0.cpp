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

// Function: sub_001AE4F0
// Address: 0x1ae4f0 - 0x1ae560
void sub_001AE4F0_0x1ae4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE4F0_0x1ae4f0");
#endif

    switch (ctx->pc) {
        case 0x1ae508u: goto label_1ae508;
        case 0x1ae51cu: goto label_1ae51c;
        case 0x1ae538u: goto label_1ae538;
        case 0x1ae54cu: goto label_1ae54c;
        default: break;
    }

    ctx->pc = 0x1ae4f0u;

    // 0x1ae4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae4f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae4f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ae4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ae4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae500: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AE500u;
    SET_GPR_U32(ctx, 31, 0x1AE508u);
    ctx->pc = 0x1AE504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE500u;
    // 0x1ae504: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AE500u, 0x1AE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE508u;
label_1ae508:
    // 0x1ae508: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE508u;
    {
        const bool branch_taken_0x1ae508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE508u;
        // 0x1ae50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae508) {
            ctx->pc = 0x1AE52Cu;
            goto label_1ae52c;
        }
    }
    ctx->pc = 0x1AE510u;
    // 0x1ae510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae514: 0xc06c45e  jal         func_1B1178
    ctx->pc = 0x1AE514u;
    SET_GPR_U32(ctx, 31, 0x1AE51Cu);
    ctx->pc = 0x1AE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE514u;
    // 0x1ae518: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1178u, 0x1AE514u, 0x1AE51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE51Cu;
label_1ae51c:
    // 0x1ae51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae520: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ae520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae524: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE524u;
    {
        const bool branch_taken_0x1ae524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE524u;
        // 0x1ae528: 0x24060061  addiu       $a2, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae524) {
            ctx->pc = 0x1AE544u;
            goto label_1ae544;
        }
    }
    ctx->pc = 0x1AE52Cu;
label_1ae52c:
    // 0x1ae52c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae530: 0xc06c45e  jal         func_1B1178
    ctx->pc = 0x1AE530u;
    SET_GPR_U32(ctx, 31, 0x1AE538u);
    ctx->pc = 0x1AE534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE530u;
    // 0x1ae534: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1178u, 0x1AE530u, 0x1AE538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE538u;
label_1ae538:
    // 0x1ae538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae53c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ae53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae540: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1ae540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1ae544:
    // 0x1ae544: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE544u;
    SET_GPR_U32(ctx, 31, 0x1AE54Cu);
    ctx->pc = 0x1AE548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE544u;
    // 0x1ae548: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE544u, 0x1AE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE54Cu;
label_1ae54c:
    // 0x1ae54c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae550: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ae550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae554: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE554u;
        // 0x1ae558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE55Cu;
    // 0x1ae55c: 0x0  nop
    ctx->pc = 0x1ae55cu;
    // NOP
    ctx->pc = 0x1ae560u;
}
