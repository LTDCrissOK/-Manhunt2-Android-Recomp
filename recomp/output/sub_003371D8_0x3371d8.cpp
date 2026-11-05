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

// Function: sub_003371D8
// Address: 0x3371d8 - 0x337220
void sub_003371D8_0x3371d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003371D8_0x3371d8");
#endif

    switch (ctx->pc) {
        case 0x337210u: goto label_337210;
        default: break;
    }

    ctx->pc = 0x3371d8u;

    // 0x3371d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3371d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3371dc: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3371DCu;
    {
        const bool branch_taken_0x3371dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3371E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371DCu;
        // 0x3371e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3371dc) {
            ctx->pc = 0x3371ECu;
            goto label_3371ec;
        }
    }
    ctx->pc = 0x3371E4u;
    // 0x3371e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3371E4u;
    {
        const bool branch_taken_0x3371e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3371E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371E4u;
        // 0x3371e8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3371e4) {
            ctx->pc = 0x337208u;
            goto label_337208;
        }
    }
    ctx->pc = 0x3371ECu;
label_3371ec:
    // 0x3371ec: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x3371ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x3371f0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3371f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3371f4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x3371f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x3371f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3371F8u;
    {
        const bool branch_taken_0x3371f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3371FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371F8u;
        // 0x3371fc: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3371f8) {
            ctx->pc = 0x337208u;
            goto label_337208;
        }
    }
    ctx->pc = 0x337200u;
    // 0x337200: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x337200u;
    {
        const bool branch_taken_0x337200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337200u;
        // 0x337204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337200) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x337208u;
label_337208:
    // 0x337208: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x337208u;
    SET_GPR_U32(ctx, 31, 0x337210u);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x337208u, 0x337210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337210u;
label_337210:
    // 0x337210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337214:
    // 0x337214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337218: 0x3e00008  jr          $ra
    ctx->pc = 0x337218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337218u;
        // 0x33721c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337220u;
}
