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

// Function: sub_00371730
// Address: 0x371730 - 0x371790
void sub_00371730_0x371730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371730_0x371730");
#endif

    switch (ctx->pc) {
        case 0x371770u: goto label_371770;
        case 0x37177cu: goto label_37177c;
        default: break;
    }

    ctx->pc = 0x371730u;

    // 0x371730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x371730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x371734: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x371734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x371738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37173c: 0x24425988  addiu       $v0, $v0, 0x5988
    ctx->pc = 0x37173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22920));
    // 0x371740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x371740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x371744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x371748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x371748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37174c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37174cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371750: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x371750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x371754: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x371754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x371758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37175c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x371760: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x371760u;
    {
        const bool branch_taken_0x371760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371760u;
        // 0x371764: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371760) {
            ctx->pc = 0x371770u;
            goto label_371770;
        }
    }
    ctx->pc = 0x371768u;
    // 0x371768: 0xc0f28ea  jal         func_3CA3A8
    ctx->pc = 0x371768u;
    SET_GPR_U32(ctx, 31, 0x371770u);
    ctx->pc = 0x3CA3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA3A8u, 0x371768u, 0x371770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371770u;
label_371770:
    // 0x371770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x371770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371774: 0xc0f25a8  jal         func_3C96A0
    ctx->pc = 0x371774u;
    SET_GPR_U32(ctx, 31, 0x37177Cu);
    ctx->pc = 0x371778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371774u;
    // 0x371778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96A0u, 0x371774u, 0x37177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37177Cu;
label_37177c:
    // 0x37177c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37177cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x371780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x371784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371788: 0x3e00008  jr          $ra
    ctx->pc = 0x371788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371788u;
        // 0x37178c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371790u;
}
