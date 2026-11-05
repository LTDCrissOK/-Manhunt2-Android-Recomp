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

// Function: sub_00335800
// Address: 0x335800 - 0x335840
void sub_00335800_0x335800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335800_0x335800");
#endif

    switch (ctx->pc) {
        case 0x335830u: goto label_335830;
        default: break;
    }

    ctx->pc = 0x335800u;

    // 0x335800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x335808: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x335808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x33580c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x33580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x335810: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x335810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x335814: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x335814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x335818: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x335818u;
    {
        const bool branch_taken_0x335818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335818) {
            ctx->pc = 0x33581Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335818u;
            // 0x33581c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335828u;
            goto label_335828;
        }
    }
    ctx->pc = 0x335820u;
    // 0x335820: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x335820u;
    {
        const bool branch_taken_0x335820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335820u;
        // 0x335824: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335820) {
            ctx->pc = 0x335830u;
            goto label_335830;
        }
    }
    ctx->pc = 0x335828u;
label_335828:
    // 0x335828: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x335828u;
    SET_GPR_U32(ctx, 31, 0x335830u);
    ctx->pc = 0x33582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335828u;
    // 0x33582c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x335828u, 0x335830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335830u;
label_335830:
    // 0x335830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335834: 0x3e00008  jr          $ra
    ctx->pc = 0x335834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335834u;
        // 0x335838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33583Cu;
    // 0x33583c: 0x0  nop
    ctx->pc = 0x33583cu;
    // NOP
    ctx->pc = 0x335840u;
}
