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

// Function: sub_002B8D80
// Address: 0x2b8d80 - 0x2b8f60
void sub_002B8D80_0x2b8d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8D80_0x2b8d80");
#endif

    switch (ctx->pc) {
        case 0x2b8da0u: goto label_2b8da0;
        case 0x2b8dd8u: goto label_2b8dd8;
        case 0x2b8df4u: goto label_2b8df4;
        case 0x2b8e18u: goto label_2b8e18;
        case 0x2b8e30u: goto label_2b8e30;
        case 0x2b8e40u: goto label_2b8e40;
        case 0x2b8e9cu: goto label_2b8e9c;
        case 0x2b8ee0u: goto label_2b8ee0;
        case 0x2b8ef0u: goto label_2b8ef0;
        case 0x2b8f00u: goto label_2b8f00;
        case 0x2b8f38u: goto label_2b8f38;
        default: break;
    }

    ctx->pc = 0x2b8d80u;

    // 0x2b8d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8d88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b8d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b8d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b8d94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b8d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b8d98: 0xc0ae582  jal         func_2B9608
    ctx->pc = 0x2B8D98u;
    SET_GPR_U32(ctx, 31, 0x2B8DA0u);
    ctx->pc = 0x2B8D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D98u;
    // 0x2b8d9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9608u, 0x2B8D98u, 0x2B8DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8DA0u;
label_2b8da0:
    // 0x2b8da0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8da4: 0x2444fffc  addiu       $a0, $v0, -0x4
    ctx->pc = 0x2b8da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2b8da8: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2b8da8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2b8dac: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B8DACu;
    {
        const bool branch_taken_0x2b8dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DACu;
        // 0x2b8db0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8dac) {
            ctx->pc = 0x2B8E20u;
            goto label_2b8e20;
        }
    }
    ctx->pc = 0x2B8DB4u;
    // 0x2b8db4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2b8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2b8db8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b8dbc: 0x2442fe90  addiu       $v0, $v0, -0x170
    ctx->pc = 0x2b8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
    // 0x2b8dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b8dc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b8dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8dc8: 0x800008  jr          $a0
    ctx->pc = 0x2B8DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B8DD0u: goto label_2b8dd0;
            case 0x2B8DE4u: goto label_2b8de4;
            case 0x2B8DFCu: goto label_2b8dfc;
            case 0x2B8E20u: goto label_2b8e20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8DC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B8DD0u;
label_2b8dd0:
    // 0x2b8dd0: 0xc0ae4e8  jal         func_2B93A0
    ctx->pc = 0x2B8DD0u;
    SET_GPR_U32(ctx, 31, 0x2B8DD8u);
    ctx->pc = 0x2B8DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8DD0u;
    // 0x2b8dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B93A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B93A0u, 0x2B8DD0u, 0x2B8DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8DD8u;
label_2b8dd8:
    // 0x2b8dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8ddc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B8DDCu;
    {
        const bool branch_taken_0x2b8ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DDCu;
        // 0x2b8de0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ddc) {
            ctx->pc = 0x2B8E24u;
            goto label_2b8e24;
        }
    }
    ctx->pc = 0x2B8DE4u;
label_2b8de4:
    // 0x2b8de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8dec: 0xc0ae3d8  jal         func_2B8F60
    ctx->pc = 0x2B8DECu;
    SET_GPR_U32(ctx, 31, 0x2B8DF4u);
    ctx->pc = 0x2B8DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8DECu;
    // 0x2b8df0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8F60u, 0x2B8DECu, 0x2B8DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8DF4u;
label_2b8df4:
    // 0x2b8df4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B8DF4u;
    {
        const bool branch_taken_0x2b8df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DF4u;
        // 0x2b8df8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8df4) {
            ctx->pc = 0x2B8E28u;
            goto label_2b8e28;
        }
    }
    ctx->pc = 0x2B8DFCu;
label_2b8dfc:
    // 0x2b8dfc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b8e00: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x2b8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x2b8e04: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8E04u;
    {
        const bool branch_taken_0x2b8e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8e04) {
            ctx->pc = 0x2B8E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8E04u;
            // 0x2b8e08: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8E28u;
            goto label_2b8e28;
        }
    }
    ctx->pc = 0x2B8E0Cu;
    // 0x2b8e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e10: 0xc0ae422  jal         func_2B9088
    ctx->pc = 0x2B8E10u;
    SET_GPR_U32(ctx, 31, 0x2B8E18u);
    ctx->pc = 0x2B8E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8E10u;
    // 0x2b8e14: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9088u, 0x2B8E10u, 0x2B8E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E18u;
label_2b8e18:
    // 0x2b8e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8E18u;
    {
        const bool branch_taken_0x2b8e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E18u;
        // 0x2b8e1c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e18) {
            ctx->pc = 0x2B8E28u;
            goto label_2b8e28;
        }
    }
    ctx->pc = 0x2B8E20u;
label_2b8e20:
    // 0x2b8e20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b8e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8e24:
    // 0x2b8e24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8e28:
    // 0x2b8e28: 0xc0ae5fc  jal         func_2B97F0
    ctx->pc = 0x2B8E28u;
    SET_GPR_U32(ctx, 31, 0x2B8E30u);
    ctx->pc = 0x2B8E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8E28u;
    // 0x2b8e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B97F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B97F0u, 0x2B8E28u, 0x2B8E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E30u;
label_2b8e30:
    // 0x2b8e30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8E30u;
    {
        const bool branch_taken_0x2b8e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E30u;
        // 0x2b8e34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e30) {
            ctx->pc = 0x2B8E48u;
            goto label_2b8e48;
        }
    }
    ctx->pc = 0x2B8E38u;
    // 0x2b8e38: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b8e3c: 0xac62aa88  sw          $v0, -0x5578($v1)
    ctx->pc = 0x2b8e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FAA88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAA88u, _value); } while (0);
label_2b8e40:
    // 0x2b8e40: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2B8E40u;
    {
        const bool branch_taken_0x2b8e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E40u;
        // 0x2b8e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e40) {
            ctx->pc = 0x2B8F48u;
            goto label_2b8f48;
        }
    }
    ctx->pc = 0x2B8E48u;
label_2b8e48:
    // 0x2b8e48: 0x1620003e  bnez        $s1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B8E48u;
    {
        const bool branch_taken_0x2b8e48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E48u;
        // 0x2b8e4c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e48) {
            ctx->pc = 0x2B8F44u;
            goto label_2b8f44;
        }
    }
    ctx->pc = 0x2B8E50u;
    // 0x2b8e50: 0x1640003d  bnez        $s2, . + 4 + (0x3D << 2)
    ctx->pc = 0x2B8E50u;
    {
        const bool branch_taken_0x2b8e50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E50u;
        // 0x2b8e54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e50) {
            ctx->pc = 0x2B8F48u;
            goto label_2b8f48;
        }
    }
    ctx->pc = 0x2B8E58u;
    // 0x2b8e58: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x2b8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x2b8e5c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2b8e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e60: 0x2463ac80  addiu       $v1, $v1, -0x5380
    ctx->pc = 0x2b8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945920));
    // 0x2b8e64: 0x8c62590c  lw          $v0, 0x590C($v1)
    ctx->pc = 0x2b8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x52058Cu));
    // 0x2b8e68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8E68u;
    {
        const bool branch_taken_0x2b8e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E68u;
        // 0x2b8e6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e68) {
            ctx->pc = 0x2B8E7Cu;
            goto label_2b8e7c;
        }
    }
    ctx->pc = 0x2B8E70u;
    // 0x2b8e70: 0x8c6258f8  lw          $v0, 0x58F8($v1)
    ctx->pc = 0x2b8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22776)));
    // 0x2b8e74: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8E74u;
    {
        const bool branch_taken_0x2b8e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8e74) {
            ctx->pc = 0x2B8E80u;
            goto label_2b8e80;
        }
    }
    ctx->pc = 0x2B8E7Cu;
label_2b8e7c:
    // 0x2b8e7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8e80:
    // 0x2b8e80: 0x5080002b  beql        $a0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B8E80u;
    {
        const bool branch_taken_0x2b8e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8e80) {
            ctx->pc = 0x2B8E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8E80u;
            // 0x2b8e84: 0x2630ac80  addiu       $s0, $s1, -0x5380 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945920));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F30u;
            goto label_2b8f30;
        }
    }
    ctx->pc = 0x2B8E88u;
    // 0x2b8e88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b8e8c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B8E8Cu;
    {
        const bool branch_taken_0x2b8e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8e8c) {
            ctx->pc = 0x2B8E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8E8Cu;
            // 0x2b8e90: 0x2630ac80  addiu       $s0, $s1, -0x5380 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945920));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F30u;
            goto label_2b8f30;
        }
    }
    ctx->pc = 0x2B8E94u;
    // 0x2b8e94: 0xc0ae4a4  jal         func_2B9290
    ctx->pc = 0x2B8E94u;
    SET_GPR_U32(ctx, 31, 0x2B8E9Cu);
    ctx->pc = 0x2B8E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8E94u;
    // 0x2b8e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9290u, 0x2B8E94u, 0x2B8E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E9Cu;
label_2b8e9c:
    // 0x2b8e9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8ea0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8ea4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B8EA4u;
    {
        const bool branch_taken_0x2b8ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EA4u;
        // 0x2b8ea8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ea4) {
            ctx->pc = 0x2B8EE8u;
            goto label_2b8ee8;
        }
    }
    ctx->pc = 0x2B8EACu;
    // 0x2b8eac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8EACu;
    {
        const bool branch_taken_0x2b8eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EACu;
        // 0x2b8eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8eac) {
            ctx->pc = 0x2B8EC4u;
            goto label_2b8ec4;
        }
    }
    ctx->pc = 0x2B8EB4u;
    // 0x2b8eb4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B8EB4u;
    {
        const bool branch_taken_0x2b8eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b8eb4) {
            ctx->pc = 0x2B8EF8u;
            goto label_2b8ef8;
        }
    }
    ctx->pc = 0x2B8EBCu;
    // 0x2b8ebc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B8EBCu;
    {
        const bool branch_taken_0x2b8ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EBCu;
        // 0x2b8ec0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ebc) {
            ctx->pc = 0x2B8F04u;
            goto label_2b8f04;
        }
    }
    ctx->pc = 0x2B8EC4u;
label_2b8ec4:
    // 0x2b8ec4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b8ec8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B8EC8u;
    {
        const bool branch_taken_0x2b8ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EC8u;
        // 0x2b8ecc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ec8) {
            ctx->pc = 0x2B8EF8u;
            goto label_2b8ef8;
        }
    }
    ctx->pc = 0x2B8ED0u;
    // 0x2b8ed0: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B8ED0u;
    {
        const bool branch_taken_0x2b8ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b8ed0) {
            ctx->pc = 0x2B8ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8ED0u;
            // 0x2b8ed4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F04u;
            goto label_2b8f04;
        }
    }
    ctx->pc = 0x2B8ED8u;
    // 0x2b8ed8: 0xc0ae578  jal         func_2B95E0
    ctx->pc = 0x2B8ED8u;
    SET_GPR_U32(ctx, 31, 0x2B8EE0u);
    ctx->pc = 0x2B8EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8ED8u;
    // 0x2b8edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B95E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B95E0u, 0x2B8ED8u, 0x2B8EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8EE0u;
label_2b8ee0:
    // 0x2b8ee0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B8EE0u;
    {
        const bool branch_taken_0x2b8ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EE0u;
        // 0x2b8ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ee0) {
            ctx->pc = 0x2B8F48u;
            goto label_2b8f48;
        }
    }
    ctx->pc = 0x2B8EE8u;
label_2b8ee8:
    // 0x2b8ee8: 0xc0ae486  jal         func_2B9218
    ctx->pc = 0x2B8EE8u;
    SET_GPR_U32(ctx, 31, 0x2B8EF0u);
    ctx->pc = 0x2B8EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8EE8u;
    // 0x2b8eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9218u, 0x2B8EE8u, 0x2B8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8EF0u;
label_2b8ef0:
    // 0x2b8ef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8EF0u;
    {
        const bool branch_taken_0x2b8ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EF0u;
        // 0x2b8ef4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ef0) {
            ctx->pc = 0x2B8F04u;
            goto label_2b8f04;
        }
    }
    ctx->pc = 0x2B8EF8u;
label_2b8ef8:
    // 0x2b8ef8: 0xc0ae46c  jal         func_2B91B0
    ctx->pc = 0x2B8EF8u;
    SET_GPR_U32(ctx, 31, 0x2B8F00u);
    ctx->pc = 0x2B8EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8EF8u;
    // 0x2b8efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B91B0u, 0x2B8EF8u, 0x2B8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F00u;
label_2b8f00:
    // 0x2b8f00: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b8f04:
    // 0x2b8f04: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2b8f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2b8f08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8F08u;
    {
        const bool branch_taken_0x2b8f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F08u;
        // 0x2b8f0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f08) {
            ctx->pc = 0x2B8F2Cu;
            goto label_2b8f2c;
        }
    }
    ctx->pc = 0x2B8F10u;
    // 0x2b8f10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b8f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8f14: 0x1082ffca  beq         $a0, $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2B8F14u;
    {
        const bool branch_taken_0x2b8f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F14u;
        // 0x2b8f18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f14) {
            ctx->pc = 0x2B8E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8e40;
        }
    }
    ctx->pc = 0x2B8F1Cu;
    // 0x2b8f1c: 0x1082ffc8  beq         $a0, $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2B8F1Cu;
    {
        const bool branch_taken_0x2b8f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F1Cu;
        // 0x2b8f20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f1c) {
            ctx->pc = 0x2B8E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8e40;
        }
    }
    ctx->pc = 0x2B8F24u;
    // 0x2b8f24: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8F24u;
    {
        const bool branch_taken_0x2b8f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F24u;
        // 0x2b8f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f24) {
            ctx->pc = 0x2B8F48u;
            goto label_2b8f48;
        }
    }
    ctx->pc = 0x2B8F2Cu;
label_2b8f2c:
    // 0x2b8f2c: 0x2630ac80  addiu       $s0, $s1, -0x5380
    ctx->pc = 0x2b8f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945920));
label_2b8f30:
    // 0x2b8f30: 0xc0ad6d4  jal         func_2B5B50
    ctx->pc = 0x2B8F30u;
    SET_GPR_U32(ctx, 31, 0x2B8F38u);
    ctx->pc = 0x2B8F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F30u;
    // 0x2b8f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B50u, 0x2B8F30u, 0x2B8F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F38u;
label_2b8f38:
    // 0x2b8f38: 0x8e0358f8  lw          $v1, 0x58F8($s0)
    ctx->pc = 0x2b8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b8f3c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8F3Cu;
    {
        const bool branch_taken_0x2b8f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F3Cu;
        // 0x2b8f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f3c) {
            ctx->pc = 0x2B8F48u;
            goto label_2b8f48;
        }
    }
    ctx->pc = 0x2B8F44u;
label_2b8f44:
    // 0x2b8f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8f48:
    // 0x2b8f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8f4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b8f4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8f50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b8f50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8f54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b8f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8f58: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F58u;
        // 0x2b8f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8F60u;
}
