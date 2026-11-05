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

// Function: sub_00137BB8
// Address: 0x137bb8 - 0x137c10
void sub_00137BB8_0x137bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137BB8_0x137bb8");
#endif

    switch (ctx->pc) {
        case 0x137bf8u: goto label_137bf8;
        default: break;
    }

    ctx->pc = 0x137bb8u;

    // 0x137bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137bbc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x137bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x137bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137bc4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x137bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x137bc8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x137bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x137bcc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x137bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x137bd0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x137bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x137bd4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x137bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x137bd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137bdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137be0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x137be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x137be4: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x137be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x137be8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137BE8u;
    {
        const bool branch_taken_0x137be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BE8u;
        // 0x137bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137be8) {
            ctx->pc = 0x137C00u;
            goto label_137c00;
        }
    }
    ctx->pc = 0x137BF0u;
    // 0x137bf0: 0xc043996  jal         func_10E658
    ctx->pc = 0x137BF0u;
    SET_GPR_U32(ctx, 31, 0x137BF8u);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x137BF0u, 0x137BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137BF8u;
label_137bf8:
    // 0x137bf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137BF8u;
    {
        const bool branch_taken_0x137bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BF8u;
        // 0x137bfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bf8) {
            ctx->pc = 0x137C04u;
            goto label_137c04;
        }
    }
    ctx->pc = 0x137C00u;
label_137c00:
    // 0x137c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_137c04:
    // 0x137c04: 0x3e00008  jr          $ra
    ctx->pc = 0x137C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C04u;
        // 0x137c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137C0Cu;
    // 0x137c0c: 0x0  nop
    ctx->pc = 0x137c0cu;
    // NOP
    ctx->pc = 0x137c10u;
}
