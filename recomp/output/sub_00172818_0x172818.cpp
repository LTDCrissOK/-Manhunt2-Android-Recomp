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

// Function: sub_00172818
// Address: 0x172818 - 0x172880
void sub_00172818_0x172818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172818_0x172818");
#endif

    switch (ctx->pc) {
        case 0x17286cu: goto label_17286c;
        default: break;
    }

    ctx->pc = 0x172818u;

    // 0x172818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17281c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172820: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x172820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x172824: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x172824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x172828: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x172828u;
    {
        const bool branch_taken_0x172828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172828u;
        // 0x17282c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172828) {
            ctx->pc = 0x172874u;
            goto label_172874;
        }
    }
    ctx->pc = 0x172830u;
    // 0x172830: 0x8c850228  lw          $a1, 0x228($a0)
    ctx->pc = 0x172830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x172834: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x172834u;
    {
        const bool branch_taken_0x172834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x172838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172834u;
        // 0x172838: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172834) {
            ctx->pc = 0x172874u;
            goto label_172874;
        }
    }
    ctx->pc = 0x17283Cu;
    // 0x17283c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17283cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x172840: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x172840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x172844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172848: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x172848u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x17284c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x17284Cu;
    {
        const bool branch_taken_0x17284c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17284c) {
            ctx->pc = 0x172850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17284Cu;
            // 0x172850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172874u;
            goto label_172874;
        }
    }
    ctx->pc = 0x172854u;
    // 0x172854: 0x92020234  lbu         $v0, 0x234($s0)
    ctx->pc = 0x172854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x172858: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x172858u;
    {
        const bool branch_taken_0x172858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172858) {
            ctx->pc = 0x17285Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172858u;
            // 0x17285c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172874u;
            goto label_172874;
        }
    }
    ctx->pc = 0x172860u;
    // 0x172860: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x172860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x172864: 0xc04970e  jal         func_125C38
    ctx->pc = 0x172864u;
    SET_GPR_U32(ctx, 31, 0x17286Cu);
    ctx->pc = 0x172868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172864u;
    // 0x172868: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x172864u, 0x17286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17286Cu;
label_17286c:
    // 0x17286c: 0xa2000234  sb          $zero, 0x234($s0)
    ctx->pc = 0x17286cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 0));
    // 0x172870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172874:
    // 0x172874: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x172874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172878: 0x3e00008  jr          $ra
    ctx->pc = 0x172878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172878u;
        // 0x17287c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172880u;
}
