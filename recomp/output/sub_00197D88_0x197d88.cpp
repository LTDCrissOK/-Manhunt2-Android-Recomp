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

// Function: sub_00197D88
// Address: 0x197d88 - 0x197e80
void sub_00197D88_0x197d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197D88_0x197d88");
#endif

    switch (ctx->pc) {
        case 0x197d88u: goto label_197d88;
        case 0x197d8cu: goto label_197d8c;
        case 0x197d90u: goto label_197d90;
        case 0x197d94u: goto label_197d94;
        case 0x197d98u: goto label_197d98;
        case 0x197d9cu: goto label_197d9c;
        case 0x197da0u: goto label_197da0;
        case 0x197da4u: goto label_197da4;
        case 0x197da8u: goto label_197da8;
        case 0x197dacu: goto label_197dac;
        case 0x197db0u: goto label_197db0;
        case 0x197db4u: goto label_197db4;
        case 0x197db8u: goto label_197db8;
        case 0x197dbcu: goto label_197dbc;
        case 0x197dc0u: goto label_197dc0;
        case 0x197dc4u: goto label_197dc4;
        case 0x197dc8u: goto label_197dc8;
        case 0x197dccu: goto label_197dcc;
        case 0x197dd0u: goto label_197dd0;
        case 0x197dd4u: goto label_197dd4;
        case 0x197dd8u: goto label_197dd8;
        case 0x197ddcu: goto label_197ddc;
        case 0x197de0u: goto label_197de0;
        case 0x197de4u: goto label_197de4;
        case 0x197de8u: goto label_197de8;
        case 0x197decu: goto label_197dec;
        case 0x197df0u: goto label_197df0;
        case 0x197df4u: goto label_197df4;
        case 0x197df8u: goto label_197df8;
        case 0x197dfcu: goto label_197dfc;
        case 0x197e00u: goto label_197e00;
        case 0x197e04u: goto label_197e04;
        case 0x197e08u: goto label_197e08;
        case 0x197e0cu: goto label_197e0c;
        case 0x197e10u: goto label_197e10;
        case 0x197e14u: goto label_197e14;
        case 0x197e18u: goto label_197e18;
        case 0x197e1cu: goto label_197e1c;
        case 0x197e20u: goto label_197e20;
        case 0x197e24u: goto label_197e24;
        case 0x197e28u: goto label_197e28;
        case 0x197e2cu: goto label_197e2c;
        case 0x197e30u: goto label_197e30;
        case 0x197e34u: goto label_197e34;
        case 0x197e38u: goto label_197e38;
        case 0x197e3cu: goto label_197e3c;
        case 0x197e40u: goto label_197e40;
        case 0x197e44u: goto label_197e44;
        case 0x197e48u: goto label_197e48;
        case 0x197e4cu: goto label_197e4c;
        case 0x197e50u: goto label_197e50;
        case 0x197e54u: goto label_197e54;
        case 0x197e58u: goto label_197e58;
        case 0x197e5cu: goto label_197e5c;
        case 0x197e60u: goto label_197e60;
        case 0x197e64u: goto label_197e64;
        case 0x197e68u: goto label_197e68;
        case 0x197e6cu: goto label_197e6c;
        case 0x197e70u: goto label_197e70;
        case 0x197e74u: goto label_197e74;
        case 0x197e78u: goto label_197e78;
        case 0x197e7cu: goto label_197e7c;
        default: break;
    }

    ctx->pc = 0x197d88u;

label_197d88:
    // 0x197d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_197d8c:
    // 0x197d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197d90:
    // 0x197d90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_197d94:
    // 0x197d94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x197d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_197d98:
    // 0x197d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197d9c:
    // 0x197d9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_197da0:
    // 0x197da0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x197da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_197da4:
    // 0x197da4: 0x10430030  beq         $v0, $v1, . + 4 + (0x30 << 2)
label_197da8:
    if (ctx->pc == 0x197DA8u) {
        ctx->pc = 0x197DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DA4u;
        // 0x197da8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DACu;
        goto label_197dac;
    }
    ctx->pc = 0x197DA4u;
    {
        const bool branch_taken_0x197da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x197DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DA4u;
        // 0x197da8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197da4) {
            ctx->pc = 0x197E68u;
            goto label_197e68;
        }
    }
    ctx->pc = 0x197DACu;
label_197dac:
    // 0x197dac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_197db0:
    // 0x197db0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_197db4:
    if (ctx->pc == 0x197DB4u) {
        ctx->pc = 0x197DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DB0u;
        // 0x197db4: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DB8u;
        goto label_197db8;
    }
    ctx->pc = 0x197DB0u;
    {
        const bool branch_taken_0x197db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DB0u;
        // 0x197db4: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197db0) {
            ctx->pc = 0x197DC8u;
            goto label_197dc8;
        }
    }
    ctx->pc = 0x197DB8u;
label_197db8:
    // 0x197db8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x197db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_197dbc:
    // 0x197dbc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x197dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_197dc0:
    // 0x197dc0: 0x40f809  jalr        $v0
label_197dc4:
    if (ctx->pc == 0x197DC4u) {
        ctx->pc = 0x197DC8u;
        goto label_197dc8;
    }
    ctx->pc = 0x197DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197DC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197DC0u, 0x197DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197DC8u;
label_197dc8:
    // 0x197dc8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x197dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_197dcc:
    // 0x197dcc: 0xc061a16  jal         func_186858
label_197dd0:
    if (ctx->pc == 0x197DD0u) {
        ctx->pc = 0x197DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DCCu;
        // 0x197dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DD4u;
        goto label_197dd4;
    }
    ctx->pc = 0x197DCCu;
    SET_GPR_U32(ctx, 31, 0x197DD4u);
    ctx->pc = 0x197DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DCCu;
    // 0x197dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x197DCCu, 0x197DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DD4u;
label_197dd4:
    // 0x197dd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197dd8:
    // 0x197dd8: 0xc06ee66  jal         func_1BB998
label_197ddc:
    if (ctx->pc == 0x197DDCu) {
        ctx->pc = 0x197DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DD8u;
        // 0x197ddc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DE0u;
        goto label_197de0;
    }
    ctx->pc = 0x197DD8u;
    SET_GPR_U32(ctx, 31, 0x197DE0u);
    ctx->pc = 0x197DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DD8u;
    // 0x197ddc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x197DD8u, 0x197DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DE0u;
label_197de0:
    // 0x197de0: 0xc061a12  jal         func_186848
label_197de4:
    if (ctx->pc == 0x197DE4u) {
        ctx->pc = 0x197DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DE0u;
        // 0x197de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DE8u;
        goto label_197de8;
    }
    ctx->pc = 0x197DE0u;
    SET_GPR_U32(ctx, 31, 0x197DE8u);
    ctx->pc = 0x197DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DE0u;
    // 0x197de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197DE0u, 0x197DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DE8u;
label_197de8:
    // 0x197de8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197dec:
    // 0x197dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197df0:
    // 0x197df0: 0xc07023a  jal         func_1C08E8
label_197df4:
    if (ctx->pc == 0x197DF4u) {
        ctx->pc = 0x197DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DF0u;
        // 0x197df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DF8u;
        goto label_197df8;
    }
    ctx->pc = 0x197DF0u;
    SET_GPR_U32(ctx, 31, 0x197DF8u);
    ctx->pc = 0x197DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DF0u;
    // 0x197df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x197DF0u, 0x197DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DF8u;
label_197df8:
    // 0x197df8: 0xc061a12  jal         func_186848
label_197dfc:
    if (ctx->pc == 0x197DFCu) {
        ctx->pc = 0x197DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DF8u;
        // 0x197dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E00u;
        goto label_197e00;
    }
    ctx->pc = 0x197DF8u;
    SET_GPR_U32(ctx, 31, 0x197E00u);
    ctx->pc = 0x197DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DF8u;
    // 0x197dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197DF8u, 0x197E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E00u;
label_197e00:
    // 0x197e00: 0xc4410290  lwc1        $f1, 0x290($v0)
    ctx->pc = 0x197e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_197e04:
    // 0x197e04: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x197e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_197e08:
    // 0x197e08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_197e0c:
    // 0x197e0c: 0x0  nop
    ctx->pc = 0x197e0cu;
    // NOP
label_197e10:
    // 0x197e10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x197e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197e14:
    // 0x197e14: 0x0  nop
    ctx->pc = 0x197e14u;
    // NOP
label_197e18:
    // 0x197e18: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_197e1c:
    if (ctx->pc == 0x197E1Cu) {
        ctx->pc = 0x197E20u;
        goto label_197e20;
    }
    ctx->pc = 0x197E18u;
    {
        const bool branch_taken_0x197e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x197e18) {
            ctx->pc = 0x197E38u;
            goto label_197e38;
        }
    }
    ctx->pc = 0x197E20u;
label_197e20:
    // 0x197e20: 0xc061a1e  jal         func_186878
label_197e24:
    if (ctx->pc == 0x197E24u) {
        ctx->pc = 0x197E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E20u;
        // 0x197e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E28u;
        goto label_197e28;
    }
    ctx->pc = 0x197E20u;
    SET_GPR_U32(ctx, 31, 0x197E28u);
    ctx->pc = 0x197E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E20u;
    // 0x197e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x197E20u, 0x197E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E28u;
label_197e28:
    // 0x197e28: 0xc06e0f0  jal         func_1B83C0
label_197e2c:
    if (ctx->pc == 0x197E2Cu) {
        ctx->pc = 0x197E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E28u;
        // 0x197e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E30u;
        goto label_197e30;
    }
    ctx->pc = 0x197E28u;
    SET_GPR_U32(ctx, 31, 0x197E30u);
    ctx->pc = 0x197E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E28u;
    // 0x197e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x197E28u, 0x197E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E30u;
label_197e30:
    // 0x197e30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_197e34:
    if (ctx->pc == 0x197E34u) {
        ctx->pc = 0x197E38u;
        goto label_197e38;
    }
    ctx->pc = 0x197E30u;
    {
        const bool branch_taken_0x197e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197e30) {
            ctx->pc = 0x197E50u;
            goto label_197e50;
        }
    }
    ctx->pc = 0x197E38u;
label_197e38:
    // 0x197e38: 0xc061a16  jal         func_186858
label_197e3c:
    if (ctx->pc == 0x197E3Cu) {
        ctx->pc = 0x197E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E38u;
        // 0x197e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E40u;
        goto label_197e40;
    }
    ctx->pc = 0x197E38u;
    SET_GPR_U32(ctx, 31, 0x197E40u);
    ctx->pc = 0x197E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E38u;
    // 0x197e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x197E38u, 0x197E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E40u;
label_197e40:
    // 0x197e40: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x197e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_197e44:
    // 0x197e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_197e48:
    // 0x197e48: 0x10000007  b           . + 4 + (0x7 << 2)
label_197e4c:
    if (ctx->pc == 0x197E4Cu) {
        ctx->pc = 0x197E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E48u;
        // 0x197e4c: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E50u;
        goto label_197e50;
    }
    ctx->pc = 0x197E48u;
    {
        const bool branch_taken_0x197e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E48u;
        // 0x197e4c: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e48) {
            ctx->pc = 0x197E68u;
            goto label_197e68;
        }
    }
    ctx->pc = 0x197E50u;
label_197e50:
    // 0x197e50: 0xc061a16  jal         func_186858
label_197e54:
    if (ctx->pc == 0x197E54u) {
        ctx->pc = 0x197E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E50u;
        // 0x197e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E58u;
        goto label_197e58;
    }
    ctx->pc = 0x197E50u;
    SET_GPR_U32(ctx, 31, 0x197E58u);
    ctx->pc = 0x197E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E50u;
    // 0x197e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x197E50u, 0x197E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E58u;
label_197e58:
    // 0x197e58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x197e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_197e5c:
    // 0x197e5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_197e60:
    // 0x197e60: 0x0  nop
    ctx->pc = 0x197e60u;
    // NOP
label_197e64:
    // 0x197e64: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x197e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_197e68:
    // 0x197e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197e6c:
    // 0x197e6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_197e70:
    // 0x197e70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_197e74:
    // 0x197e74: 0x3e00008  jr          $ra
label_197e78:
    if (ctx->pc == 0x197E78u) {
        ctx->pc = 0x197E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E74u;
        // 0x197e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E7Cu;
        goto label_197e7c;
    }
    ctx->pc = 0x197E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E74u;
        // 0x197e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197E7Cu;
label_197e7c:
    // 0x197e7c: 0x0  nop
    ctx->pc = 0x197e7cu;
    // NOP
    ctx->pc = 0x197e80u;
}
