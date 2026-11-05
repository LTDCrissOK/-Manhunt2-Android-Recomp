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

// Function: sub_003A2D90
// Address: 0x3a2d90 - 0x3a2ed0
void sub_003A2D90_0x3a2d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2D90_0x3a2d90");
#endif

    switch (ctx->pc) {
        case 0x3a2df8u: goto label_3a2df8;
        case 0x3a2e00u: goto label_3a2e00;
        case 0x3a2e08u: goto label_3a2e08;
        case 0x3a2e14u: goto label_3a2e14;
        case 0x3a2e1cu: goto label_3a2e1c;
        case 0x3a2e30u: goto label_3a2e30;
        case 0x3a2e38u: goto label_3a2e38;
        case 0x3a2e44u: goto label_3a2e44;
        case 0x3a2e84u: goto label_3a2e84;
        default: break;
    }

    ctx->pc = 0x3a2d90u;

    // 0x3a2d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a2d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a2d94: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a2d98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a2d9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a2d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2da0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a2da4: 0x24631e14  addiu       $v1, $v1, 0x1E14
    ctx->pc = 0x3a2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7700));
    // 0x3a2da8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a2da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a2dac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a2dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2db0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a2db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a2db4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a2db4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x411E14u));
    // 0x3a2db8: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3A2DB8u;
    {
        const bool branch_taken_0x3a2db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2DB8u;
        // 0x3a2dbc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2db8) {
            ctx->pc = 0x3A2E94u;
            goto label_3a2e94;
        }
    }
    ctx->pc = 0x3A2DC0u;
    // 0x3a2dc0: 0x82240002  lb          $a0, 0x2($s1)
    ctx->pc = 0x3a2dc0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a2dc4: 0x54830034  bnel        $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3A2DC4u;
    {
        const bool branch_taken_0x3a2dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a2dc4) {
            ctx->pc = 0x3A2DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2DC4u;
            // 0x3a2dc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2E98u;
            goto label_3a2e98;
        }
    }
    ctx->pc = 0x3A2DCCu;
    // 0x3a2dcc: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x3a2dccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x3a2dd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a2dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2dd4: 0x26441e1c  addiu       $a0, $s2, 0x1E1C
    ctx->pc = 0x3a2dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7708));
    // 0x3a2dd8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a2ddc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3a2ddcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x411E1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E1Cu, _value); } while (0);
    // 0x3a2de0: 0x24421e10  addiu       $v0, $v0, 0x1E10
    ctx->pc = 0x3a2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7696));
    // 0x3a2de4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411E10u));
    // 0x3a2de8: 0x1465000f  bne         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3A2DE8u;
    {
        const bool branch_taken_0x3a2de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3a2de8) {
            ctx->pc = 0x3A2E28u;
            goto label_3a2e28;
        }
    }
    ctx->pc = 0x3A2DF0u;
    // 0x3a2df0: 0xc0eb280  jal         func_3ACA00
    ctx->pc = 0x3A2DF0u;
    SET_GPR_U32(ctx, 31, 0x3A2DF8u);
    ctx->pc = 0x3ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA00u, 0x3A2DF0u, 0x3A2DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2DF8u;
label_3a2df8:
    // 0x3a2df8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2DF8u;
    SET_GPR_U32(ctx, 31, 0x3A2E00u);
    ctx->pc = 0x3A2DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2DF8u;
    // 0x3a2dfc: 0x24041400  addiu       $a0, $zero, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2DF8u, 0x3A2E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2E00u;
label_3a2e00:
    // 0x3a2e00: 0xc0ee354  jal         func_3B8D50
    ctx->pc = 0x3A2E00u;
    SET_GPR_U32(ctx, 31, 0x3A2E08u);
    ctx->pc = 0x3B8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8D50u, 0x3A2E00u, 0x3A2E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2E08u;
label_3a2e08:
    // 0x3a2e08: 0x24041401  addiu       $a0, $zero, 0x1401
    ctx->pc = 0x3a2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5121));
    // 0x3a2e0c: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2E0Cu;
    SET_GPR_U32(ctx, 31, 0x3A2E14u);
    ctx->pc = 0x3A2E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2E0Cu;
    // 0x3a2e10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2E0Cu, 0x3A2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2E14u;
label_3a2e14:
    // 0x3a2e14: 0xc0eb28c  jal         func_3ACA30
    ctx->pc = 0x3A2E14u;
    SET_GPR_U32(ctx, 31, 0x3A2E1Cu);
    ctx->pc = 0x3ACA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA30u, 0x3A2E14u, 0x3A2E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2E1Cu;
label_3a2e1c:
    // 0x3a2e1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A2E1Cu;
    {
        const bool branch_taken_0x3a2e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E1Cu;
        // 0x3a2e20: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e1c) {
            ctx->pc = 0x3A2E48u;
            goto label_3a2e48;
        }
    }
    ctx->pc = 0x3A2E24u;
    // 0x3a2e24: 0x0  nop
    ctx->pc = 0x3a2e24u;
    // NOP
label_3a2e28:
    // 0x3a2e28: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2E28u;
    SET_GPR_U32(ctx, 31, 0x3A2E30u);
    ctx->pc = 0x3A2E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2E28u;
    // 0x3a2e2c: 0x24041500  addiu       $a0, $zero, 0x1500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2E28u, 0x3A2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2E30u;
label_3a2e30:
    // 0x3a2e30: 0xc0ee354  jal         func_3B8D50
    ctx->pc = 0x3A2E30u;
    SET_GPR_U32(ctx, 31, 0x3A2E38u);
    ctx->pc = 0x3B8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8D50u, 0x3A2E30u, 0x3A2E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2E38u;
label_3a2e38:
    // 0x3a2e38: 0x24041501  addiu       $a0, $zero, 0x1501
    ctx->pc = 0x3a2e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5377));
    // 0x3a2e3c: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2E3Cu;
    SET_GPR_U32(ctx, 31, 0x3A2E44u);
    ctx->pc = 0x3A2E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2E3Cu;
    // 0x3a2e40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2E3Cu, 0x3A2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2E44u;
label_3a2e44:
    // 0x3a2e44: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a2e48:
    // 0x3a2e48: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x3a2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a2e4c: 0x26441e1c  addiu       $a0, $s2, 0x1E1C
    ctx->pc = 0x3a2e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7708));
    // 0x3a2e50: 0x24421e4c  addiu       $v0, $v0, 0x1E4C
    ctx->pc = 0x3a2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7756));
    // 0x3a2e54: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x3a2e54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a2e58: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3a2e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3a2e5c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3a2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3a2e60: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A2E60u;
    {
        const bool branch_taken_0x3a2e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E60u;
        // 0x3a2e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e60) {
            ctx->pc = 0x3A2E94u;
            goto label_3a2e94;
        }
    }
    ctx->pc = 0x3A2E68u;
    // 0x3a2e68: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3a2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a2e6c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2E6Cu;
    {
        const bool branch_taken_0x3a2e6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E6Cu;
        // 0x3a2e70: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e6c) {
            ctx->pc = 0x3A2E90u;
            goto label_3a2e90;
        }
    }
    ctx->pc = 0x3A2E74u;
    // 0x3a2e74: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x3a2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x3a2e78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a2e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2e7c: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A2E7Cu;
    SET_GPR_U32(ctx, 31, 0x3A2E84u);
    ctx->pc = 0x3A2E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2E7Cu;
    // 0x3a2e80: 0x2484d358  addiu       $a0, $a0, -0x2CA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A2E7Cu, 0x3A2E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2E84u;
label_3a2e84:
    // 0x3a2e84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2E84u;
    {
        const bool branch_taken_0x3a2e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E84u;
        // 0x3a2e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e84) {
            ctx->pc = 0x3A2E94u;
            goto label_3a2e94;
        }
    }
    ctx->pc = 0x3A2E8Cu;
    // 0x3a2e8c: 0x0  nop
    ctx->pc = 0x3a2e8cu;
    // NOP
label_3a2e90:
    // 0x3a2e90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a2e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2e94:
    // 0x3a2e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2e98:
    // 0x3a2e98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a2e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a2e9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a2e9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2ea0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a2ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a2ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2EA4u;
        // 0x3a2ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2EACu;
    // 0x3a2eac: 0x0  nop
    ctx->pc = 0x3a2eacu;
    // NOP
    // 0x3a2eb0: 0xa044008c  sb          $a0, 0x8C($v0)
    ctx->pc = 0x3a2eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a2eb4: 0x0  nop
    ctx->pc = 0x3a2eb4u;
    // NOP
    // 0x3a2eb8: 0xac440088  sw          $a0, 0x88($v0)
    ctx->pc = 0x3a2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 4));
    // 0x3a2ebc: 0x0  nop
    ctx->pc = 0x3a2ebcu;
    // NOP
    // 0x3a2ec0: 0x9062008c  lbu         $v0, 0x8C($v1)
    ctx->pc = 0x3a2ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x3a2ec4: 0x0  nop
    ctx->pc = 0x3a2ec4u;
    // NOP
    // 0x3a2ec8: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x3a2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x3a2ecc: 0x0  nop
    ctx->pc = 0x3a2eccu;
    // NOP
    ctx->pc = 0x3a2ed0u;
}
