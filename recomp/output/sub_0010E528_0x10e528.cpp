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

// Function: sub_0010E528
// Address: 0x10e528 - 0x10e560
void sub_0010E528_0x10e528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E528_0x10e528");
#endif

    switch (ctx->pc) {
        case 0x10e528u: goto label_10e528;
        case 0x10e52cu: goto label_10e52c;
        case 0x10e530u: goto label_10e530;
        case 0x10e534u: goto label_10e534;
        case 0x10e538u: goto label_10e538;
        case 0x10e53cu: goto label_10e53c;
        case 0x10e540u: goto label_10e540;
        case 0x10e544u: goto label_10e544;
        case 0x10e548u: goto label_10e548;
        case 0x10e54cu: goto label_10e54c;
        case 0x10e550u: goto label_10e550;
        case 0x10e554u: goto label_10e554;
        case 0x10e558u: goto label_10e558;
        case 0x10e55cu: goto label_10e55c;
        default: break;
    }

    ctx->pc = 0x10e528u;

label_10e528:
    // 0x10e528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e52c:
    // 0x10e52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e530:
    // 0x10e530: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e534:
    // 0x10e534: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_10e538:
    if (ctx->pc == 0x10E538u) {
        ctx->pc = 0x10E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E534u;
        // 0x10e538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E53Cu;
        goto label_10e53c;
    }
    ctx->pc = 0x10E534u;
    {
        const bool branch_taken_0x10e534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E534u;
        // 0x10e538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e534) {
            ctx->pc = 0x10E554u;
            goto label_10e554;
        }
    }
    ctx->pc = 0x10E53Cu;
label_10e53c:
    // 0x10e53c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e540:
    // 0x10e540: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x10e540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_10e544:
    // 0x10e544: 0x40f809  jalr        $v0
label_10e548:
    if (ctx->pc == 0x10E548u) {
        ctx->pc = 0x10E54Cu;
        goto label_10e54c;
    }
    ctx->pc = 0x10E544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E54Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E544u, 0x10E54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E54Cu;
label_10e54c:
    // 0x10e54c: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e550:
    if (ctx->pc == 0x10E550u) {
        ctx->pc = 0x10E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E54Cu;
        // 0x10e550: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E554u;
        goto label_10e554;
    }
    ctx->pc = 0x10E54Cu;
    {
        const bool branch_taken_0x10e54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E54Cu;
        // 0x10e550: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e54c) {
            ctx->pc = 0x10E558u;
            goto label_10e558;
        }
    }
    ctx->pc = 0x10E554u;
label_10e554:
    // 0x10e554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e558:
    // 0x10e558: 0x3e00008  jr          $ra
label_10e55c:
    if (ctx->pc == 0x10E55Cu) {
        ctx->pc = 0x10E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E558u;
        // 0x10e55c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E560u;
        goto label_fallthrough_0x10e558;
    }
    ctx->pc = 0x10E558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E558u;
        // 0x10e55c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e558:
    ctx->pc = 0x10E560u;
}
