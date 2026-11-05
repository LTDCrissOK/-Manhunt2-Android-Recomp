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

// Function: sub_003A3DB0
// Address: 0x3a3db0 - 0x3a3e28
void sub_003A3DB0_0x3a3db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3DB0_0x3a3db0");
#endif

    switch (ctx->pc) {
        case 0x3a3df0u: goto label_3a3df0;
        case 0x3a3e04u: goto label_3a3e04;
        default: break;
    }

    ctx->pc = 0x3a3db0u;

    // 0x3a3db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a3db4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a3db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a3db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a3db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a3dbc: 0x24631e7c  addiu       $v1, $v1, 0x1E7C
    ctx->pc = 0x3a3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7804));
    // 0x3a3dc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a3dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a3dc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a3dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a3dc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a3dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a3dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E7Cu));
    // 0x3a3dd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a3dd4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A3DD4u;
    {
        const bool branch_taken_0x3a3dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DD4u;
        // 0x3a3dd8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3dd4) {
            ctx->pc = 0x3A3E10u;
            goto label_3a3e10;
        }
    }
    ctx->pc = 0x3A3DDCu;
    // 0x3a3ddc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a3de0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3a3de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3de4: 0x24501e80  addiu       $s0, $v0, 0x1E80
    ctx->pc = 0x3a3de4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
    // 0x3a3de8: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x3a3de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a3dec: 0x0  nop
    ctx->pc = 0x3a3decu;
    // NOP
label_3a3df0:
    // 0x3a3df0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a3df0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a3df4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3DF4u;
    {
        const bool branch_taken_0x3a3df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a3df4) {
            ctx->pc = 0x3A3DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3DF4u;
            // 0x3a3df8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3E08u;
            goto label_3a3e08;
        }
    }
    ctx->pc = 0x3A3DFCu;
    // 0x3a3dfc: 0xc0e8eb2  jal         func_3A3AC8
    ctx->pc = 0x3A3DFCu;
    SET_GPR_U32(ctx, 31, 0x3A3E04u);
    ctx->pc = 0x3A3E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3DFCu;
    // 0x3a3e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3AC8u, 0x3A3DFCu, 0x3A3E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3E04u;
label_3a3e04:
    // 0x3a3e04: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a3e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a3e08:
    // 0x3a3e08: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A3E08u;
    {
        const bool branch_taken_0x3a3e08 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E08u;
        // 0x3a3e0c: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e08) {
            ctx->pc = 0x3A3DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3df0;
        }
    }
    ctx->pc = 0x3A3E10u;
label_3a3e10:
    // 0x3a3e10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3e14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a3e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a3e18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a3e18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3e1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a3e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a3e20: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E20u;
        // 0x3a3e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3E28u;
}
