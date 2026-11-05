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

// Function: sub_001647E0
// Address: 0x1647e0 - 0x164820
void sub_001647E0_0x1647e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001647E0_0x1647e0");
#endif

    switch (ctx->pc) {
        case 0x164808u: goto label_164808;
        case 0x164810u: goto label_164810;
        default: break;
    }

    ctx->pc = 0x1647e0u;

    // 0x1647e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1647e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1647e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1647e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1647e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1647e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1647ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1647ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1647f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1647f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647f4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1647f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1647f8: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1647F8u;
    {
        const bool branch_taken_0x1647f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1647f8) {
            ctx->pc = 0x1647FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1647F8u;
            // 0x1647fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164814u;
            goto label_164814;
        }
    }
    ctx->pc = 0x164800u;
    // 0x164800: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x164800u;
    SET_GPR_U32(ctx, 31, 0x164808u);
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x164800u, 0x164808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164808u;
label_164808:
    // 0x164808: 0xc059670  jal         func_1659C0
    ctx->pc = 0x164808u;
    SET_GPR_U32(ctx, 31, 0x164810u);
    ctx->pc = 0x16480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164808u;
    // 0x16480c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659C0u, 0x164808u, 0x164810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164810u;
label_164810:
    // 0x164810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164814:
    // 0x164814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x164814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164818: 0x3e00008  jr          $ra
    ctx->pc = 0x164818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164818u;
        // 0x16481c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164820u;
}
