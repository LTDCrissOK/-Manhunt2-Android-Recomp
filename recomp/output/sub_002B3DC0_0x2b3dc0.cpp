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

// Function: sub_002B3DC0
// Address: 0x2b3dc0 - 0x2b3e70
void sub_002B3DC0_0x2b3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3DC0_0x2b3dc0");
#endif

    switch (ctx->pc) {
        case 0x2b3df4u: goto label_2b3df4;
        case 0x2b3e04u: goto label_2b3e04;
        default: break;
    }

    ctx->pc = 0x2b3dc0u;

    // 0x2b3dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3dc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b3dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3dc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3dcc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2b3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b3dd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b3dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b3dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3dd8: 0x260908c0  addiu       $t1, $s0, 0x8C0
    ctx->pc = 0x2b3dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 2240));
    // 0x2b3ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b3ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3de0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3de4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3de8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2b3dec: 0xc0ef15a  jal         func_3BC568
    ctx->pc = 0x2B3DECu;
    SET_GPR_U32(ctx, 31, 0x2B3DF4u);
    ctx->pc = 0x2B3DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3DECu;
    // 0x2b3df0: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC568u, 0x2B3DECu, 0x2B3DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3DF4u;
label_2b3df4:
    // 0x2b3df4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b3df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3df8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b3df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3dfc: 0xc0ef0b2  jal         func_3BC2C8
    ctx->pc = 0x2B3DFCu;
    SET_GPR_U32(ctx, 31, 0x2B3E04u);
    ctx->pc = 0x2B3E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3DFCu;
    // 0x2b3e00: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B3DFCu, 0x2B3E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E04u;
label_2b3e04:
    // 0x2b3e04: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b3e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b3e08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3E08u;
    {
        const bool branch_taken_0x2b3e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E08u;
        // 0x2b3e0c: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e08) {
            ctx->pc = 0x2B3E18u;
            goto label_2b3e18;
        }
    }
    ctx->pc = 0x2B3E10u;
    // 0x2b3e10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B3E10u;
    {
        const bool branch_taken_0x2b3e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E10u;
        // 0x2b3e14: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e10) {
            ctx->pc = 0x2B3E58u;
            goto label_2b3e58;
        }
    }
    ctx->pc = 0x2B3E18u;
label_2b3e18:
    // 0x2b3e18: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3E18u;
    {
        const bool branch_taken_0x2b3e18 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E18u;
        // 0x2b3e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e18) {
            ctx->pc = 0x2B3E28u;
            goto label_2b3e28;
        }
    }
    ctx->pc = 0x2B3E20u;
    // 0x2b3e20: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B3E20u;
    {
        const bool branch_taken_0x2b3e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E20u;
        // 0x2b3e24: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e20) {
            ctx->pc = 0x2B3E5Cu;
            goto label_2b3e5c;
        }
    }
    ctx->pc = 0x2B3E28u;
label_2b3e28:
    // 0x2b3e28: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2b3e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b3e2c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3E2Cu;
    {
        const bool branch_taken_0x2b3e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E2Cu;
        // 0x2b3e30: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e2c) {
            ctx->pc = 0x2B3E40u;
            goto label_2b3e40;
        }
    }
    ctx->pc = 0x2B3E34u;
    // 0x2b3e34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3e38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3E38u;
    {
        const bool branch_taken_0x2b3e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E38u;
        // 0x2b3e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e38) {
            ctx->pc = 0x2B3E58u;
            goto label_2b3e58;
        }
    }
    ctx->pc = 0x2B3E40u;
label_2b3e40:
    // 0x2b3e40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3E40u;
    {
        const bool branch_taken_0x2b3e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E40u;
        // 0x2b3e44: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e40) {
            ctx->pc = 0x2B3E50u;
            goto label_2b3e50;
        }
    }
    ctx->pc = 0x2B3E48u;
    // 0x2b3e48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3E48u;
    {
        const bool branch_taken_0x2b3e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E48u;
        // 0x2b3e4c: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e48) {
            ctx->pc = 0x2B3E5Cu;
            goto label_2b3e5c;
        }
    }
    ctx->pc = 0x2B3E50u;
label_2b3e50:
    // 0x2b3e50: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2b3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b3e54: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2b3e58:
    // 0x2b3e58: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2b3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2b3e5c:
    // 0x2b3e5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b3e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3e60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b3e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3e64: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E64u;
        // 0x2b3e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3E6Cu;
    // 0x2b3e6c: 0x0  nop
    ctx->pc = 0x2b3e6cu;
    // NOP
    ctx->pc = 0x2b3e70u;
}
