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

// Function: sub_00107C80
// Address: 0x107c80 - 0x107cb0
void sub_00107C80_0x107c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107C80_0x107c80");
#endif

    switch (ctx->pc) {
        case 0x107c80u: goto label_107c80;
        case 0x107c84u: goto label_107c84;
        case 0x107c88u: goto label_107c88;
        case 0x107c8cu: goto label_107c8c;
        case 0x107c90u: goto label_107c90;
        case 0x107c94u: goto label_107c94;
        case 0x107c98u: goto label_107c98;
        case 0x107c9cu: goto label_107c9c;
        case 0x107ca0u: goto label_107ca0;
        case 0x107ca4u: goto label_107ca4;
        case 0x107ca8u: goto label_107ca8;
        case 0x107cacu: goto label_107cac;
        default: break;
    }

    ctx->pc = 0x107c80u;

label_107c80:
    // 0x107c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107c84:
    // 0x107c84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107c88:
    // 0x107c88: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107c8c:
    if (ctx->pc == 0x107C8Cu) {
        ctx->pc = 0x107C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C88u;
        // 0x107c8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C90u;
        goto label_107c90;
    }
    ctx->pc = 0x107C88u;
    {
        const bool branch_taken_0x107c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C88u;
        // 0x107c8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c88) {
            ctx->pc = 0x107CA0u;
            goto label_107ca0;
        }
    }
    ctx->pc = 0x107C90u;
label_107c90:
    // 0x107c90: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107c94:
    // 0x107c94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107c98:
    // 0x107c98: 0x40f809  jalr        $v0
label_107c9c:
    if (ctx->pc == 0x107C9Cu) {
        ctx->pc = 0x107C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C98u;
        // 0x107c9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CA0u;
        goto label_107ca0;
    }
    ctx->pc = 0x107C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107CA0u);
        ctx->pc = 0x107C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C98u;
        // 0x107c9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C98u, 0x107CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107CA0u;
label_107ca0:
    // 0x107ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107ca4:
    // 0x107ca4: 0x3e00008  jr          $ra
label_107ca8:
    if (ctx->pc == 0x107CA8u) {
        ctx->pc = 0x107CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CA4u;
        // 0x107ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CACu;
        goto label_107cac;
    }
    ctx->pc = 0x107CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CA4u;
        // 0x107ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107CACu;
label_107cac:
    // 0x107cac: 0x0  nop
    ctx->pc = 0x107cacu;
    // NOP
    ctx->pc = 0x107cb0u;
}
