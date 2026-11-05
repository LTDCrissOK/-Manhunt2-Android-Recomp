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

// Function: sub_00337300
// Address: 0x337300 - 0x337350
void sub_00337300_0x337300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337300_0x337300");
#endif

    switch (ctx->pc) {
        case 0x337338u: goto label_337338;
        default: break;
    }

    ctx->pc = 0x337300u;

    // 0x337300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337304: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337304u;
    {
        const bool branch_taken_0x337304 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x337308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337304u;
        // 0x337308: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337304) {
            ctx->pc = 0x337314u;
            goto label_337314;
        }
    }
    ctx->pc = 0x33730Cu;
    // 0x33730c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33730Cu;
    {
        const bool branch_taken_0x33730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33730Cu;
        // 0x337310: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33730c) {
            ctx->pc = 0x337330u;
            goto label_337330;
        }
    }
    ctx->pc = 0x337314u;
label_337314:
    // 0x337314: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x337314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x337318: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x337318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33731c: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x33731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x337320: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337320u;
    {
        const bool branch_taken_0x337320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337320u;
        // 0x337324: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337320) {
            ctx->pc = 0x337330u;
            goto label_337330;
        }
    }
    ctx->pc = 0x337328u;
    // 0x337328: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x337328u;
    {
        const bool branch_taken_0x337328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337328u;
        // 0x33732c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337328) {
            ctx->pc = 0x33733Cu;
            goto label_33733c;
        }
    }
    ctx->pc = 0x337330u;
label_337330:
    // 0x337330: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x337330u;
    SET_GPR_U32(ctx, 31, 0x337338u);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x337330u, 0x337338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337338u;
label_337338:
    // 0x337338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33733c:
    // 0x33733c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33733cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337340: 0x3e00008  jr          $ra
    ctx->pc = 0x337340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337340u;
        // 0x337344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337348u;
    // 0x337348: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x337348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33734c: 0x0  nop
    ctx->pc = 0x33734cu;
    // NOP
    ctx->pc = 0x337350u;
}
