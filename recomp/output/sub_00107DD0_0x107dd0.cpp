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

// Function: sub_00107DD0
// Address: 0x107dd0 - 0x107e00
void sub_00107DD0_0x107dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107DD0_0x107dd0");
#endif

    switch (ctx->pc) {
        case 0x107dd0u: goto label_107dd0;
        case 0x107dd4u: goto label_107dd4;
        case 0x107dd8u: goto label_107dd8;
        case 0x107ddcu: goto label_107ddc;
        case 0x107de0u: goto label_107de0;
        case 0x107de4u: goto label_107de4;
        case 0x107de8u: goto label_107de8;
        case 0x107decu: goto label_107dec;
        case 0x107df0u: goto label_107df0;
        case 0x107df4u: goto label_107df4;
        case 0x107df8u: goto label_107df8;
        case 0x107dfcu: goto label_107dfc;
        default: break;
    }

    ctx->pc = 0x107dd0u;

label_107dd0:
    // 0x107dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107dd4:
    // 0x107dd4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107dd8:
    // 0x107dd8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107ddc:
    if (ctx->pc == 0x107DDCu) {
        ctx->pc = 0x107DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DD8u;
        // 0x107ddc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107DE0u;
        goto label_107de0;
    }
    ctx->pc = 0x107DD8u;
    {
        const bool branch_taken_0x107dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DD8u;
        // 0x107ddc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dd8) {
            ctx->pc = 0x107DF0u;
            goto label_107df0;
        }
    }
    ctx->pc = 0x107DE0u;
label_107de0:
    // 0x107de0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107de4:
    // 0x107de4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107de8:
    // 0x107de8: 0x40f809  jalr        $v0
label_107dec:
    if (ctx->pc == 0x107DECu) {
        ctx->pc = 0x107DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DE8u;
        // 0x107dec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107DF0u;
        goto label_107df0;
    }
    ctx->pc = 0x107DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107DF0u);
        ctx->pc = 0x107DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DE8u;
        // 0x107dec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107DE8u, 0x107DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107DF0u;
label_107df0:
    // 0x107df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107df4:
    // 0x107df4: 0x3e00008  jr          $ra
label_107df8:
    if (ctx->pc == 0x107DF8u) {
        ctx->pc = 0x107DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DF4u;
        // 0x107df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107DFCu;
        goto label_107dfc;
    }
    ctx->pc = 0x107DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DF4u;
        // 0x107df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107DFCu;
label_107dfc:
    // 0x107dfc: 0x0  nop
    ctx->pc = 0x107dfcu;
    // NOP
    ctx->pc = 0x107e00u;
}
