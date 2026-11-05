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

// Function: sub_002D4D78
// Address: 0x2d4d78 - 0x2d4e18
void sub_002D4D78_0x2d4d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4D78_0x2d4d78");
#endif

    switch (ctx->pc) {
        case 0x2d4dacu: goto label_2d4dac;
        case 0x2d4dc4u: goto label_2d4dc4;
        case 0x2d4ddcu: goto label_2d4ddc;
        default: break;
    }

    ctx->pc = 0x2d4d78u;

    // 0x2d4d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d4d7c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d4d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4d84: 0x24423dd8  addiu       $v0, $v0, 0x3DD8
    ctx->pc = 0x2d4d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15832));
    // 0x2d4d88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d4d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d4d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d4d94: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2d4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2d4d98: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2d4d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d4d9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4D9Cu;
    {
        const bool branch_taken_0x2d4d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D9Cu;
        // 0x2d4da0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4d9c) {
            ctx->pc = 0x2D4DB0u;
            goto label_2d4db0;
        }
    }
    ctx->pc = 0x2D4DA4u;
    // 0x2d4da4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2D4DA4u;
    SET_GPR_U32(ctx, 31, 0x2D4DACu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2D4DA4u, 0x2D4DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DACu;
label_2d4dac:
    // 0x2d4dac: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2d4dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2d4db0:
    // 0x2d4db0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2d4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d4db4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4DB4u;
    {
        const bool branch_taken_0x2d4db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4DB4u;
        // 0x2d4db8: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4db4) {
            ctx->pc = 0x2D4DCCu;
            goto label_2d4dcc;
        }
    }
    ctx->pc = 0x2D4DBCu;
    // 0x2d4dbc: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2D4DBCu;
    SET_GPR_U32(ctx, 31, 0x2D4DC4u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2D4DBCu, 0x2D4DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DC4u;
label_2d4dc4:
    // 0x2d4dc4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2d4dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2d4dc8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2d4dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2d4dcc:
    // 0x2d4dcc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4DCCu;
    {
        const bool branch_taken_0x2d4dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4dcc) {
            ctx->pc = 0x2D4DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4DCCu;
            // 0x2d4dd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4DE0u;
            goto label_2d4de0;
        }
    }
    ctx->pc = 0x2D4DD4u;
    // 0x2d4dd4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D4DD4u;
    SET_GPR_U32(ctx, 31, 0x2D4DDCu);
    ctx->pc = 0x2D4DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4DD4u;
    // 0x2d4dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D4DD4u, 0x2D4DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DDCu;
label_2d4ddc:
    // 0x2d4ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4de0:
    // 0x2d4de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4de8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4DE8u;
        // 0x2d4dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4DF0u;
    // 0x2d4df0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d4df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d4df4: 0x0  nop
    ctx->pc = 0x2d4df4u;
    // NOP
    // 0x2d4df8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d4dfc: 0x0  nop
    ctx->pc = 0x2d4dfcu;
    // NOP
    // 0x2d4e00: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d4e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d4e04: 0x0  nop
    ctx->pc = 0x2d4e04u;
    // NOP
    // 0x2d4e08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d4e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4e0c: 0x0  nop
    ctx->pc = 0x2d4e0cu;
    // NOP
    // 0x2d4e10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d4e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d4e14: 0x0  nop
    ctx->pc = 0x2d4e14u;
    // NOP
    ctx->pc = 0x2d4e18u;
}
