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

// Function: sub_00160AA0
// Address: 0x160aa0 - 0x160af8
void sub_00160AA0_0x160aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160AA0_0x160aa0");
#endif

    switch (ctx->pc) {
        case 0x160ae8u: goto label_160ae8;
        default: break;
    }

    ctx->pc = 0x160aa0u;

    // 0x160aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160aa4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x160aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160aac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x160aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x160ab0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x160ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x160ab4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x160ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x160ab8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x160ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x160abc: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x160abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x160ac0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160ac4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x160ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x160acc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x160accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x160ad0: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x160ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x160ad4: 0x8c620238  lw          $v0, 0x238($v1)
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 568)));
    // 0x160ad8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160AD8u;
    {
        const bool branch_taken_0x160ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AD8u;
        // 0x160adc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ad8) {
            ctx->pc = 0x160AECu;
            goto label_160aec;
        }
    }
    ctx->pc = 0x160AE0u;
    // 0x160ae0: 0xc0584e8  jal         func_1613A0
    ctx->pc = 0x160AE0u;
    SET_GPR_U32(ctx, 31, 0x160AE8u);
    ctx->pc = 0x160AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160AE0u;
    // 0x160ae4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1613A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1613A0u, 0x160AE0u, 0x160AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AE8u;
label_160ae8:
    // 0x160ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160aec:
    // 0x160aec: 0x3e00008  jr          $ra
    ctx->pc = 0x160AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AECu;
        // 0x160af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160AF4u;
    // 0x160af4: 0x0  nop
    ctx->pc = 0x160af4u;
    // NOP
    ctx->pc = 0x160af8u;
}
