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

// Function: sub_00123A80
// Address: 0x123a80 - 0x123ad0
void sub_00123A80_0x123a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123A80_0x123a80");
#endif

    switch (ctx->pc) {
        case 0x123aa0u: goto label_123aa0;
        case 0x123ab4u: goto label_123ab4;
        default: break;
    }

    ctx->pc = 0x123a80u;

    // 0x123a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123a8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123a98: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123A98u;
    SET_GPR_U32(ctx, 31, 0x123AA0u);
    ctx->pc = 0x123A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A98u;
    // 0x123a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123A98u, 0x123AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AA0u;
label_123aa0:
    // 0x123aa0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123AA0u;
    {
        const bool branch_taken_0x123aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AA0u;
        // 0x123aa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123aa0) {
            ctx->pc = 0x123ABCu;
            goto label_123abc;
        }
    }
    ctx->pc = 0x123AA8u;
    // 0x123aa8: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123aac: 0xc042dee  jal         func_10B7B8
    ctx->pc = 0x123AACu;
    SET_GPR_U32(ctx, 31, 0x123AB4u);
    ctx->pc = 0x123AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AACu;
    // 0x123ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B7B8u, 0x123AACu, 0x123AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AB4u;
label_123ab4:
    // 0x123ab4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123AB4u;
    {
        const bool branch_taken_0x123ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AB4u;
        // 0x123ab8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ab4) {
            ctx->pc = 0x123AC0u;
            goto label_123ac0;
        }
    }
    ctx->pc = 0x123ABCu;
label_123abc:
    // 0x123abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123ac0:
    // 0x123ac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x123AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AC8u;
        // 0x123acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123AD0u;
}
