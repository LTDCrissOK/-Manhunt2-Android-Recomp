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

// Function: sub_00186DC8
// Address: 0x186dc8 - 0x186ed8
void sub_00186DC8_0x186dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186DC8_0x186dc8");
#endif

    switch (ctx->pc) {
        case 0x186dc8u: goto label_186dc8;
        case 0x186dccu: goto label_186dcc;
        case 0x186dd0u: goto label_186dd0;
        case 0x186dd4u: goto label_186dd4;
        case 0x186dd8u: goto label_186dd8;
        case 0x186ddcu: goto label_186ddc;
        case 0x186de0u: goto label_186de0;
        case 0x186de4u: goto label_186de4;
        case 0x186de8u: goto label_186de8;
        case 0x186decu: goto label_186dec;
        case 0x186df0u: goto label_186df0;
        case 0x186df4u: goto label_186df4;
        case 0x186df8u: goto label_186df8;
        case 0x186dfcu: goto label_186dfc;
        case 0x186e00u: goto label_186e00;
        case 0x186e04u: goto label_186e04;
        case 0x186e08u: goto label_186e08;
        case 0x186e0cu: goto label_186e0c;
        case 0x186e10u: goto label_186e10;
        case 0x186e14u: goto label_186e14;
        case 0x186e18u: goto label_186e18;
        case 0x186e1cu: goto label_186e1c;
        case 0x186e20u: goto label_186e20;
        case 0x186e24u: goto label_186e24;
        case 0x186e28u: goto label_186e28;
        case 0x186e2cu: goto label_186e2c;
        case 0x186e30u: goto label_186e30;
        case 0x186e34u: goto label_186e34;
        case 0x186e38u: goto label_186e38;
        case 0x186e3cu: goto label_186e3c;
        case 0x186e40u: goto label_186e40;
        case 0x186e44u: goto label_186e44;
        case 0x186e48u: goto label_186e48;
        case 0x186e4cu: goto label_186e4c;
        case 0x186e50u: goto label_186e50;
        case 0x186e54u: goto label_186e54;
        case 0x186e58u: goto label_186e58;
        case 0x186e5cu: goto label_186e5c;
        case 0x186e60u: goto label_186e60;
        case 0x186e64u: goto label_186e64;
        case 0x186e68u: goto label_186e68;
        case 0x186e6cu: goto label_186e6c;
        case 0x186e70u: goto label_186e70;
        case 0x186e74u: goto label_186e74;
        case 0x186e78u: goto label_186e78;
        case 0x186e7cu: goto label_186e7c;
        case 0x186e80u: goto label_186e80;
        case 0x186e84u: goto label_186e84;
        case 0x186e88u: goto label_186e88;
        case 0x186e8cu: goto label_186e8c;
        case 0x186e90u: goto label_186e90;
        case 0x186e94u: goto label_186e94;
        case 0x186e98u: goto label_186e98;
        case 0x186e9cu: goto label_186e9c;
        case 0x186ea0u: goto label_186ea0;
        case 0x186ea4u: goto label_186ea4;
        case 0x186ea8u: goto label_186ea8;
        case 0x186eacu: goto label_186eac;
        case 0x186eb0u: goto label_186eb0;
        case 0x186eb4u: goto label_186eb4;
        case 0x186eb8u: goto label_186eb8;
        case 0x186ebcu: goto label_186ebc;
        case 0x186ec0u: goto label_186ec0;
        case 0x186ec4u: goto label_186ec4;
        case 0x186ec8u: goto label_186ec8;
        case 0x186eccu: goto label_186ecc;
        case 0x186ed0u: goto label_186ed0;
        case 0x186ed4u: goto label_186ed4;
        default: break;
    }

    ctx->pc = 0x186dc8u;

label_186dc8:
    // 0x186dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_186dcc:
    // 0x186dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186dd0:
    // 0x186dd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186dd4:
    // 0x186dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186dd8:
    // 0x186dd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_186ddc:
    // 0x186ddc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x186ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_186de0:
    // 0x186de0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x186de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_186de4:
    // 0x186de4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x186de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_186de8:
    // 0x186de8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x186de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_186dec:
    // 0x186dec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x186decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_186df0:
    // 0x186df0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_186df4:
    // 0x186df4: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_186df8:
    if (ctx->pc == 0x186DF8u) {
        ctx->pc = 0x186DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DF4u;
        // 0x186df8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186DFCu;
        goto label_186dfc;
    }
    ctx->pc = 0x186DF4u;
    {
        const bool branch_taken_0x186df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x186DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DF4u;
        // 0x186df8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186df4) {
            ctx->pc = 0x186E4Cu;
            goto label_186e4c;
        }
    }
    ctx->pc = 0x186DFCu;
label_186dfc:
    // 0x186dfc: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x186dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_186e00:
    // 0x186e00: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x186e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_186e04:
    // 0x186e04: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x186e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_186e08:
    // 0x186e08: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_186e0c:
    if (ctx->pc == 0x186E0Cu) {
        ctx->pc = 0x186E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E08u;
        // 0x186e0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E10u;
        goto label_186e10;
    }
    ctx->pc = 0x186E08u;
    {
        const bool branch_taken_0x186e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186e08) {
            ctx->pc = 0x186E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E08u;
            // 0x186e0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186E50u;
            goto label_186e50;
        }
    }
    ctx->pc = 0x186E10u;
label_186e10:
    // 0x186e10: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x186e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_186e14:
    // 0x186e14: 0x5451000e  bnel        $v0, $s1, . + 4 + (0xE << 2)
label_186e18:
    if (ctx->pc == 0x186E18u) {
        ctx->pc = 0x186E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E14u;
        // 0x186e18: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E1Cu;
        goto label_186e1c;
    }
    ctx->pc = 0x186E14u;
    {
        const bool branch_taken_0x186e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x186e14) {
            ctx->pc = 0x186E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E14u;
            // 0x186e18: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186E50u;
            goto label_186e50;
        }
    }
    ctx->pc = 0x186E1Cu;
label_186e1c:
    // 0x186e1c: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x186e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186e20:
    // 0x186e20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186e24:
    // 0x186e24: 0x0  nop
    ctx->pc = 0x186e24u;
    // NOP
label_186e28:
    // 0x186e28: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x186e28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186e2c:
    // 0x186e2c: 0x0  nop
    ctx->pc = 0x186e2cu;
    // NOP
label_186e30:
    // 0x186e30: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_186e34:
    if (ctx->pc == 0x186E34u) {
        ctx->pc = 0x186E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E30u;
        // 0x186e34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E38u;
        goto label_186e38;
    }
    ctx->pc = 0x186E30u;
    {
        const bool branch_taken_0x186e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186e30) {
            ctx->pc = 0x186E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E30u;
            // 0x186e34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186E50u;
            goto label_186e50;
        }
    }
    ctx->pc = 0x186E38u;
label_186e38:
    // 0x186e38: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x186e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186e3c:
    // 0x186e3c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x186e3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186e40:
    // 0x186e40: 0x0  nop
    ctx->pc = 0x186e40u;
    // NOP
label_186e44:
    // 0x186e44: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
label_186e48:
    if (ctx->pc == 0x186E48u) {
        ctx->pc = 0x186E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E44u;
        // 0x186e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E4Cu;
        goto label_186e4c;
    }
    ctx->pc = 0x186E44u;
    {
        const bool branch_taken_0x186e44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186e44) {
            ctx->pc = 0x186E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E44u;
            // 0x186e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186EC0u;
            goto label_186ec0;
        }
    }
    ctx->pc = 0x186E4Cu;
label_186e4c:
    // 0x186e4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x186e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_186e50:
    // 0x186e50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_186e54:
    if (ctx->pc == 0x186E54u) {
        ctx->pc = 0x186E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E50u;
        // 0x186e54: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E58u;
        goto label_186e58;
    }
    ctx->pc = 0x186E50u;
    {
        const bool branch_taken_0x186e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e50) {
            ctx->pc = 0x186E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E50u;
            // 0x186e54: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186E6Cu;
            goto label_186e6c;
        }
    }
    ctx->pc = 0x186E58u;
label_186e58:
    // 0x186e58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186e5c:
    // 0x186e5c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x186e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_186e60:
    // 0x186e60: 0x40f809  jalr        $v0
label_186e64:
    if (ctx->pc == 0x186E64u) {
        ctx->pc = 0x186E68u;
        goto label_186e68;
    }
    ctx->pc = 0x186E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186E68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E60u, 0x186E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186E68u;
label_186e68:
    // 0x186e68: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_186e6c:
    // 0x186e6c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_186e70:
    if (ctx->pc == 0x186E70u) {
        ctx->pc = 0x186E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E6Cu;
        // 0x186e70: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E74u;
        goto label_186e74;
    }
    ctx->pc = 0x186E6Cu;
    {
        const bool branch_taken_0x186e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186e6c) {
            ctx->pc = 0x186E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E6Cu;
            // 0x186e70: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186E90u;
            goto label_186e90;
        }
    }
    ctx->pc = 0x186E74u;
label_186e74:
    // 0x186e74: 0xc0f5240  jal         func_3D4900
label_186e78:
    if (ctx->pc == 0x186E78u) {
        ctx->pc = 0x186E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E74u;
        // 0x186e78: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E7Cu;
        goto label_186e7c;
    }
    ctx->pc = 0x186E74u;
    SET_GPR_U32(ctx, 31, 0x186E7Cu);
    ctx->pc = 0x186E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E74u;
    // 0x186e78: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x186E74u, 0x186E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E7Cu;
label_186e7c:
    // 0x186e7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x186e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_186e80:
    // 0x186e80: 0xc0661b6  jal         func_1986D8
label_186e84:
    if (ctx->pc == 0x186E84u) {
        ctx->pc = 0x186E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E80u;
        // 0x186e84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E88u;
        goto label_186e88;
    }
    ctx->pc = 0x186E80u;
    SET_GPR_U32(ctx, 31, 0x186E88u);
    ctx->pc = 0x186E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E80u;
    // 0x186e84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986D8u, 0x186E80u, 0x186E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E88u;
label_186e88:
    // 0x186e88: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x186e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_186e8c:
    // 0x186e8c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_186e90:
    // 0x186e90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186e94:
    // 0x186e94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x186e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_186e98:
    // 0x186e98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186e9c:
    // 0x186e9c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x186e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_186ea0:
    // 0x186ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186ea4:
    // 0x186ea4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x186ea4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_186ea8:
    // 0x186ea8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x186ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186eac:
    // 0x186eac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x186eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_186eb0:
    // 0x186eb0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x186eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_186eb4:
    // 0x186eb4: 0x40f809  jalr        $v0
label_186eb8:
    if (ctx->pc == 0x186EB8u) {
        ctx->pc = 0x186EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EB4u;
        // 0x186eb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186EBCu;
        goto label_186ebc;
    }
    ctx->pc = 0x186EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186EBCu);
        ctx->pc = 0x186EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EB4u;
        // 0x186eb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186EB4u, 0x186EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186EBCu;
label_186ebc:
    // 0x186ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186ec0:
    // 0x186ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186ec4:
    // 0x186ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186ec8:
    // 0x186ec8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x186ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_186ecc:
    // 0x186ecc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x186eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_186ed0:
    // 0x186ed0: 0x3e00008  jr          $ra
label_186ed4:
    if (ctx->pc == 0x186ED4u) {
        ctx->pc = 0x186ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ED0u;
        // 0x186ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186ED8u;
        goto label_fallthrough_0x186ed0;
    }
    ctx->pc = 0x186ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ED0u;
        // 0x186ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x186ed0:
    ctx->pc = 0x186ED8u;
}
