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

// Function: sub_002BE838
// Address: 0x2be838 - 0x2be888
void sub_002BE838_0x2be838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE838_0x2be838");
#endif

    switch (ctx->pc) {
        case 0x2be838u: goto label_2be838;
        case 0x2be83cu: goto label_2be83c;
        case 0x2be840u: goto label_2be840;
        case 0x2be844u: goto label_2be844;
        case 0x2be848u: goto label_2be848;
        case 0x2be84cu: goto label_2be84c;
        case 0x2be850u: goto label_2be850;
        case 0x2be854u: goto label_2be854;
        case 0x2be858u: goto label_2be858;
        case 0x2be85cu: goto label_2be85c;
        case 0x2be860u: goto label_2be860;
        case 0x2be864u: goto label_2be864;
        case 0x2be868u: goto label_2be868;
        case 0x2be86cu: goto label_2be86c;
        case 0x2be870u: goto label_2be870;
        case 0x2be874u: goto label_2be874;
        case 0x2be878u: goto label_2be878;
        case 0x2be87cu: goto label_2be87c;
        case 0x2be880u: goto label_2be880;
        case 0x2be884u: goto label_2be884;
        default: break;
    }

    ctx->pc = 0x2be838u;

label_2be838:
    // 0x2be838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2be83c:
    // 0x2be83c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2be83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2be840:
    // 0x2be840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2be844:
    // 0x2be844: 0xa0c2002c  sb          $v0, 0x2C($a2)
    ctx->pc = 0x2be844u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 44), (uint8_t)GPR_U32(ctx, 2));
label_2be848:
    // 0x2be848: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2be848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2be84c:
    // 0x2be84c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2be84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2be850:
    // 0x2be850: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2be854:
    // 0x2be854: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x2be854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2be858:
    // 0x2be858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2be85c:
    // 0x2be85c: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
label_2be860:
    if (ctx->pc == 0x2BE860u) {
        ctx->pc = 0x2BE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE85Cu;
        // 0x2be860: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE864u;
        goto label_2be864;
    }
    ctx->pc = 0x2BE85Cu;
    {
        const bool branch_taken_0x2be85c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE85Cu;
        // 0x2be860: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be85c) {
            ctx->pc = 0x2BE87Cu;
            goto label_2be87c;
        }
    }
    ctx->pc = 0x2BE864u;
label_2be864:
    // 0x2be864: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2be864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2be868:
    // 0x2be868: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2be868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2be86c:
    // 0x2be86c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2be86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2be870:
    // 0x2be870: 0x40f809  jalr        $v0
label_2be874:
    if (ctx->pc == 0x2BE874u) {
        ctx->pc = 0x2BE878u;
        goto label_2be878;
    }
    ctx->pc = 0x2BE870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BE878u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE870u, 0x2BE878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE878u;
label_2be878:
    // 0x2be878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2be87c:
    // 0x2be87c: 0x3e00008  jr          $ra
label_2be880:
    if (ctx->pc == 0x2BE880u) {
        ctx->pc = 0x2BE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE87Cu;
        // 0x2be880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE884u;
        goto label_2be884;
    }
    ctx->pc = 0x2BE87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE87Cu;
        // 0x2be880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE884u;
label_2be884:
    // 0x2be884: 0x0  nop
    ctx->pc = 0x2be884u;
    // NOP
    ctx->pc = 0x2be888u;
}
