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

// Function: sub_001D3DB0
// Address: 0x1d3db0 - 0x1d3e10
void sub_001D3DB0_0x1d3db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3DB0_0x1d3db0");
#endif

    switch (ctx->pc) {
        case 0x1d3de0u: goto label_1d3de0;
        case 0x1d3decu: goto label_1d3dec;
        default: break;
    }

    ctx->pc = 0x1d3db0u;

    // 0x1d3db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3db4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d3db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3dbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3dc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3dc4: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3DC4u;
    {
        const bool branch_taken_0x1d3dc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DC4u;
        // 0x1d3dc8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dc4) {
            ctx->pc = 0x1D3DF8u;
            goto label_1d3df8;
        }
    }
    ctx->pc = 0x1D3DCCu;
    // 0x1d3dcc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3DCCu;
    {
        const bool branch_taken_0x1d3dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DCCu;
        // 0x1d3dd0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dcc) {
            ctx->pc = 0x1D3DF8u;
            goto label_1d3df8;
        }
    }
    ctx->pc = 0x1D3DD4u;
    // 0x1d3dd4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d3dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3dd8: 0x2450f290  addiu       $s0, $v0, -0xD70
    ctx->pc = 0x1d3dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963856));
    // 0x1d3ddc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1d3ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d3de0:
    // 0x1d3de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3de4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D3DE4u;
    SET_GPR_U32(ctx, 31, 0x1D3DECu);
    ctx->pc = 0x1D3DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DE4u;
    // 0x1d3de8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D3DE4u, 0x1D3DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DECu;
label_1d3dec:
    // 0x1d3dec: 0x0  nop
    ctx->pc = 0x1d3decu;
    // NOP
    // 0x1d3df0: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3DF0u;
    {
        const bool branch_taken_0x1d3df0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1D3DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DF0u;
        // 0x1d3df4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3df0) {
            ctx->pc = 0x1D3DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3de0;
        }
    }
    ctx->pc = 0x1D3DF8u;
label_1d3df8:
    // 0x1d3df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3e00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3e04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d3e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3e08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E08u;
        // 0x1d3e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E10u;
}
