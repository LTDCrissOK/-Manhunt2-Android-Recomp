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

// Function: sub_00188D90
// Address: 0x188d90 - 0x188e58
void sub_00188D90_0x188d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188D90_0x188d90");
#endif

    switch (ctx->pc) {
        case 0x188d90u: goto label_188d90;
        case 0x188d94u: goto label_188d94;
        case 0x188d98u: goto label_188d98;
        case 0x188d9cu: goto label_188d9c;
        case 0x188da0u: goto label_188da0;
        case 0x188da4u: goto label_188da4;
        case 0x188da8u: goto label_188da8;
        case 0x188dacu: goto label_188dac;
        case 0x188db0u: goto label_188db0;
        case 0x188db4u: goto label_188db4;
        case 0x188db8u: goto label_188db8;
        case 0x188dbcu: goto label_188dbc;
        case 0x188dc0u: goto label_188dc0;
        case 0x188dc4u: goto label_188dc4;
        case 0x188dc8u: goto label_188dc8;
        case 0x188dccu: goto label_188dcc;
        case 0x188dd0u: goto label_188dd0;
        case 0x188dd4u: goto label_188dd4;
        case 0x188dd8u: goto label_188dd8;
        case 0x188ddcu: goto label_188ddc;
        case 0x188de0u: goto label_188de0;
        case 0x188de4u: goto label_188de4;
        case 0x188de8u: goto label_188de8;
        case 0x188decu: goto label_188dec;
        case 0x188df0u: goto label_188df0;
        case 0x188df4u: goto label_188df4;
        case 0x188df8u: goto label_188df8;
        case 0x188dfcu: goto label_188dfc;
        case 0x188e00u: goto label_188e00;
        case 0x188e04u: goto label_188e04;
        case 0x188e08u: goto label_188e08;
        case 0x188e0cu: goto label_188e0c;
        case 0x188e10u: goto label_188e10;
        case 0x188e14u: goto label_188e14;
        case 0x188e18u: goto label_188e18;
        case 0x188e1cu: goto label_188e1c;
        case 0x188e20u: goto label_188e20;
        case 0x188e24u: goto label_188e24;
        case 0x188e28u: goto label_188e28;
        case 0x188e2cu: goto label_188e2c;
        case 0x188e30u: goto label_188e30;
        case 0x188e34u: goto label_188e34;
        case 0x188e38u: goto label_188e38;
        case 0x188e3cu: goto label_188e3c;
        case 0x188e40u: goto label_188e40;
        case 0x188e44u: goto label_188e44;
        case 0x188e48u: goto label_188e48;
        case 0x188e4cu: goto label_188e4c;
        case 0x188e50u: goto label_188e50;
        case 0x188e54u: goto label_188e54;
        default: break;
    }

    ctx->pc = 0x188d90u;

label_188d90:
    // 0x188d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_188d94:
    // 0x188d94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x188d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_188d98:
    // 0x188d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x188d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_188d9c:
    // 0x188d9c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x188d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_188da0:
    // 0x188da0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188da4:
    // 0x188da4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x188da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_188da8:
    // 0x188da8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x188da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_188dac:
    // 0x188dac: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
label_188db0:
    if (ctx->pc == 0x188DB0u) {
        ctx->pc = 0x188DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DACu;
        // 0x188db0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DB4u;
        goto label_188db4;
    }
    ctx->pc = 0x188DACu;
    {
        const bool branch_taken_0x188dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x188DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DACu;
        // 0x188db0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188dac) {
            ctx->pc = 0x188E40u;
            goto label_188e40;
        }
    }
    ctx->pc = 0x188DB4u;
label_188db4:
    // 0x188db4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x188db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188db8:
    // 0x188db8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_188dbc:
    if (ctx->pc == 0x188DBCu) {
        ctx->pc = 0x188DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DB8u;
        // 0x188dbc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DC0u;
        goto label_188dc0;
    }
    ctx->pc = 0x188DB8u;
    {
        const bool branch_taken_0x188db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DB8u;
        // 0x188dbc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188db8) {
            ctx->pc = 0x188DD0u;
            goto label_188dd0;
        }
    }
    ctx->pc = 0x188DC0u;
label_188dc0:
    // 0x188dc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x188dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188dc4:
    // 0x188dc4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x188dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_188dc8:
    // 0x188dc8: 0x40f809  jalr        $v0
label_188dcc:
    if (ctx->pc == 0x188DCCu) {
        ctx->pc = 0x188DD0u;
        goto label_188dd0;
    }
    ctx->pc = 0x188DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188DD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188DC8u, 0x188DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188DD0u;
label_188dd0:
    // 0x188dd0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x188dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_188dd4:
    // 0x188dd4: 0xc061a16  jal         func_186858
label_188dd8:
    if (ctx->pc == 0x188DD8u) {
        ctx->pc = 0x188DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DD4u;
        // 0x188dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DDCu;
        goto label_188ddc;
    }
    ctx->pc = 0x188DD4u;
    SET_GPR_U32(ctx, 31, 0x188DDCu);
    ctx->pc = 0x188DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DD4u;
    // 0x188dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x188DD4u, 0x188DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DDCu;
label_188ddc:
    // 0x188ddc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x188ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_188de0:
    // 0x188de0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188de4:
    // 0x188de4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x188de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_188de8:
    // 0x188de8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x188de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_188dec:
    // 0x188dec: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x188decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_188df0:
    // 0x188df0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_188df4:
    if (ctx->pc == 0x188DF4u) {
        ctx->pc = 0x188DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DF0u;
        // 0x188df4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DF8u;
        goto label_188df8;
    }
    ctx->pc = 0x188DF0u;
    {
        const bool branch_taken_0x188df0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x188DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DF0u;
        // 0x188df4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188df0) {
            ctx->pc = 0x188E0Cu;
            goto label_188e0c;
        }
    }
    ctx->pc = 0x188DF8u;
label_188df8:
    // 0x188df8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188dfc:
    // 0x188dfc: 0x0  nop
    ctx->pc = 0x188dfcu;
    // NOP
label_188e00:
    // 0x188e00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_188e04:
    // 0x188e04: 0x10000007  b           . + 4 + (0x7 << 2)
label_188e08:
    if (ctx->pc == 0x188E08u) {
        ctx->pc = 0x188E0Cu;
        goto label_188e0c;
    }
    ctx->pc = 0x188E04u;
    {
        const bool branch_taken_0x188e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188e04) {
            ctx->pc = 0x188E24u;
            goto label_188e24;
        }
    }
    ctx->pc = 0x188E0Cu;
label_188e0c:
    // 0x188e0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x188e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_188e10:
    // 0x188e10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x188e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_188e14:
    // 0x188e14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188e18:
    // 0x188e18: 0x0  nop
    ctx->pc = 0x188e18u;
    // NOP
label_188e1c:
    // 0x188e1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_188e20:
    // 0x188e20: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x188e20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_188e24:
    // 0x188e24: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x188e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_188e28:
    // 0x188e28: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x188e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_188e2c:
    // 0x188e2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188e30:
    // 0x188e30: 0x0  nop
    ctx->pc = 0x188e30u;
    // NOP
label_188e34:
    // 0x188e34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x188e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_188e38:
    // 0x188e38: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x188e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_188e3c:
    // 0x188e3c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x188e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_188e40:
    // 0x188e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188e44:
    // 0x188e44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x188e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_188e48:
    // 0x188e48: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x188e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_188e4c:
    // 0x188e4c: 0x3e00008  jr          $ra
label_188e50:
    if (ctx->pc == 0x188E50u) {
        ctx->pc = 0x188E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E4Cu;
        // 0x188e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E54u;
        goto label_188e54;
    }
    ctx->pc = 0x188E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E4Cu;
        // 0x188e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188E54u;
label_188e54:
    // 0x188e54: 0x0  nop
    ctx->pc = 0x188e54u;
    // NOP
    ctx->pc = 0x188e58u;
}
