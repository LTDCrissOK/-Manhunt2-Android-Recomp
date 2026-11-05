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

// Function: sub_002D2CD0
// Address: 0x2d2cd0 - 0x2d2e38
void sub_002D2CD0_0x2d2cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2CD0_0x2d2cd0");
#endif

    switch (ctx->pc) {
        case 0x2d2d50u: goto label_2d2d50;
        case 0x2d2d68u: goto label_2d2d68;
        case 0x2d2d80u: goto label_2d2d80;
        case 0x2d2d98u: goto label_2d2d98;
        case 0x2d2db0u: goto label_2d2db0;
        case 0x2d2dc8u: goto label_2d2dc8;
        case 0x2d2de0u: goto label_2d2de0;
        default: break;
    }

    ctx->pc = 0x2d2cd0u;

    // 0x2d2cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CD0u;
        // 0x2d2cd4: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2CD8u;
    // 0x2d2cd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d2cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2cdc: 0x0  nop
    ctx->pc = 0x2d2cdcu;
    // NOP
    // 0x2d2ce0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d2ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2ce4: 0x0  nop
    ctx->pc = 0x2d2ce4u;
    // NOP
    // 0x2d2ce8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d2ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2cec: 0x0  nop
    ctx->pc = 0x2d2cecu;
    // NOP
    // 0x2d2cf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2cf4: 0x0  nop
    ctx->pc = 0x2d2cf4u;
    // NOP
    // 0x2d2cf8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2d2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2d2cfc: 0x0  nop
    ctx->pc = 0x2d2cfcu;
    // NOP
    // 0x2d2d00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d2d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d2d04: 0x0  nop
    ctx->pc = 0x2d2d04u;
    // NOP
    // 0x2d2d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d2d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d2d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d2d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2d10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d2d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d2d14: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2d2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d2d18: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2d2d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2d2d1c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D2D1Cu;
    {
        const bool branch_taken_0x2d2d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D1Cu;
        // 0x2d2d20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d1c) {
            ctx->pc = 0x2D2DD0u;
            goto label_2d2dd0;
        }
    }
    ctx->pc = 0x2D2D24u;
    // 0x2d2d24: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2d2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2d2d28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d2d2c: 0x24420c60  addiu       $v0, $v0, 0xC60
    ctx->pc = 0x2d2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x2d2d30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2d34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d2d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2d38: 0x800008  jr          $a0
    ctx->pc = 0x2D2D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2D40u: goto label_2d2d40;
            case 0x2D2D58u: goto label_2d2d58;
            case 0x2D2D70u: goto label_2d2d70;
            case 0x2D2D88u: goto label_2d2d88;
            case 0x2D2DA0u: goto label_2d2da0;
            case 0x2D2DB8u: goto label_2d2db8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2D38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D2D40u;
label_2d2d40:
    // 0x2d2d40: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d2d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d48: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D2D48u;
    SET_GPR_U32(ctx, 31, 0x2D2D50u);
    ctx->pc = 0x2D2D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D48u;
    // 0x2d2d4c: 0x24a50c10  addiu       $a1, $a1, 0xC10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D2D48u, 0x2D2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D50u;
label_2d2d50:
    // 0x2d2d50: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2D2D50u;
    {
        const bool branch_taken_0x2d2d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D50u;
        // 0x2d2d54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d50) {
            ctx->pc = 0x2D2DE4u;
            goto label_2d2de4;
        }
    }
    ctx->pc = 0x2D2D58u;
label_2d2d58:
    // 0x2d2d58: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d2d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d2d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d60: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D2D60u;
    SET_GPR_U32(ctx, 31, 0x2D2D68u);
    ctx->pc = 0x2D2D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D60u;
    // 0x2d2d64: 0x24a50c18  addiu       $a1, $a1, 0xC18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D2D60u, 0x2D2D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D68u;
label_2d2d68:
    // 0x2d2d68: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D2D68u;
    {
        const bool branch_taken_0x2d2d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D68u;
        // 0x2d2d6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d68) {
            ctx->pc = 0x2D2DE4u;
            goto label_2d2de4;
        }
    }
    ctx->pc = 0x2D2D70u;
label_2d2d70:
    // 0x2d2d70: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d2d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d2d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d78: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D2D78u;
    SET_GPR_U32(ctx, 31, 0x2D2D80u);
    ctx->pc = 0x2D2D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D78u;
    // 0x2d2d7c: 0x24a50c20  addiu       $a1, $a1, 0xC20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D2D78u, 0x2D2D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D80u;
label_2d2d80:
    // 0x2d2d80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2D2D80u;
    {
        const bool branch_taken_0x2d2d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D80u;
        // 0x2d2d84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d80) {
            ctx->pc = 0x2D2DE4u;
            goto label_2d2de4;
        }
    }
    ctx->pc = 0x2D2D88u;
label_2d2d88:
    // 0x2d2d88: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d2d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d2d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d90: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D2D90u;
    SET_GPR_U32(ctx, 31, 0x2D2D98u);
    ctx->pc = 0x2D2D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D90u;
    // 0x2d2d94: 0x24a50c28  addiu       $a1, $a1, 0xC28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D2D90u, 0x2D2D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D98u;
label_2d2d98:
    // 0x2d2d98: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D2D98u;
    {
        const bool branch_taken_0x2d2d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D98u;
        // 0x2d2d9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d98) {
            ctx->pc = 0x2D2DE4u;
            goto label_2d2de4;
        }
    }
    ctx->pc = 0x2D2DA0u;
label_2d2da0:
    // 0x2d2da0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d2da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d2da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2da8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D2DA8u;
    SET_GPR_U32(ctx, 31, 0x2D2DB0u);
    ctx->pc = 0x2D2DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DA8u;
    // 0x2d2dac: 0x24a50c30  addiu       $a1, $a1, 0xC30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D2DA8u, 0x2D2DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DB0u;
label_2d2db0:
    // 0x2d2db0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D2DB0u;
    {
        const bool branch_taken_0x2d2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DB0u;
        // 0x2d2db4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2db0) {
            ctx->pc = 0x2D2DE4u;
            goto label_2d2de4;
        }
    }
    ctx->pc = 0x2D2DB8u;
label_2d2db8:
    // 0x2d2db8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d2db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d2dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2dc0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D2DC0u;
    SET_GPR_U32(ctx, 31, 0x2D2DC8u);
    ctx->pc = 0x2D2DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DC0u;
    // 0x2d2dc4: 0x24a50c40  addiu       $a1, $a1, 0xC40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D2DC0u, 0x2D2DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DC8u;
label_2d2dc8:
    // 0x2d2dc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2DC8u;
    {
        const bool branch_taken_0x2d2dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DC8u;
        // 0x2d2dcc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2dc8) {
            ctx->pc = 0x2D2DE4u;
            goto label_2d2de4;
        }
    }
    ctx->pc = 0x2D2DD0u;
label_2d2dd0:
    // 0x2d2dd0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d2dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d2dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2dd8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D2DD8u;
    SET_GPR_U32(ctx, 31, 0x2D2DE0u);
    ctx->pc = 0x2D2DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DD8u;
    // 0x2d2ddc: 0x24a50c48  addiu       $a1, $a1, 0xC48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D2DD8u, 0x2D2DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DE0u;
label_2d2de0:
    // 0x2d2de0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d2de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d2de4:
    // 0x2d2de4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d2de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d2de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d2de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2dec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DECu;
        // 0x2d2df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2DF4u;
    // 0x2d2df4: 0x0  nop
    ctx->pc = 0x2d2df4u;
    // NOP
    // 0x2d2df8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d2df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2dfc: 0x0  nop
    ctx->pc = 0x2d2dfcu;
    // NOP
    // 0x2d2e00: 0x27bd0920  addiu       $sp, $sp, 0x920
    ctx->pc = 0x2d2e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
    // 0x2d2e04: 0x0  nop
    ctx->pc = 0x2d2e04u;
    // NOP
    // 0x2d2e08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d2e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2e0c: 0x0  nop
    ctx->pc = 0x2d2e0cu;
    // NOP
    // 0x2d2e10: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2d2e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d2e14: 0x0  nop
    ctx->pc = 0x2d2e14u;
    // NOP
    // 0x2d2e18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d2e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2e1c: 0x0  nop
    ctx->pc = 0x2d2e1cu;
    // NOP
    // 0x2d2e20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d2e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2e24: 0x0  nop
    ctx->pc = 0x2d2e24u;
    // NOP
    // 0x2d2e28: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2d2e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d2e2c: 0x0  nop
    ctx->pc = 0x2d2e2cu;
    // NOP
    // 0x2d2e30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d2e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2e34: 0x0  nop
    ctx->pc = 0x2d2e34u;
    // NOP
    ctx->pc = 0x2d2e38u;
}
