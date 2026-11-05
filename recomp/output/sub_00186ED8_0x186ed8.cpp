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

// Function: sub_00186ED8
// Address: 0x186ed8 - 0x186fe8
void sub_00186ED8_0x186ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186ED8_0x186ed8");
#endif

    switch (ctx->pc) {
        case 0x186ed8u: goto label_186ed8;
        case 0x186edcu: goto label_186edc;
        case 0x186ee0u: goto label_186ee0;
        case 0x186ee4u: goto label_186ee4;
        case 0x186ee8u: goto label_186ee8;
        case 0x186eecu: goto label_186eec;
        case 0x186ef0u: goto label_186ef0;
        case 0x186ef4u: goto label_186ef4;
        case 0x186ef8u: goto label_186ef8;
        case 0x186efcu: goto label_186efc;
        case 0x186f00u: goto label_186f00;
        case 0x186f04u: goto label_186f04;
        case 0x186f08u: goto label_186f08;
        case 0x186f0cu: goto label_186f0c;
        case 0x186f10u: goto label_186f10;
        case 0x186f14u: goto label_186f14;
        case 0x186f18u: goto label_186f18;
        case 0x186f1cu: goto label_186f1c;
        case 0x186f20u: goto label_186f20;
        case 0x186f24u: goto label_186f24;
        case 0x186f28u: goto label_186f28;
        case 0x186f2cu: goto label_186f2c;
        case 0x186f30u: goto label_186f30;
        case 0x186f34u: goto label_186f34;
        case 0x186f38u: goto label_186f38;
        case 0x186f3cu: goto label_186f3c;
        case 0x186f40u: goto label_186f40;
        case 0x186f44u: goto label_186f44;
        case 0x186f48u: goto label_186f48;
        case 0x186f4cu: goto label_186f4c;
        case 0x186f50u: goto label_186f50;
        case 0x186f54u: goto label_186f54;
        case 0x186f58u: goto label_186f58;
        case 0x186f5cu: goto label_186f5c;
        case 0x186f60u: goto label_186f60;
        case 0x186f64u: goto label_186f64;
        case 0x186f68u: goto label_186f68;
        case 0x186f6cu: goto label_186f6c;
        case 0x186f70u: goto label_186f70;
        case 0x186f74u: goto label_186f74;
        case 0x186f78u: goto label_186f78;
        case 0x186f7cu: goto label_186f7c;
        case 0x186f80u: goto label_186f80;
        case 0x186f84u: goto label_186f84;
        case 0x186f88u: goto label_186f88;
        case 0x186f8cu: goto label_186f8c;
        case 0x186f90u: goto label_186f90;
        case 0x186f94u: goto label_186f94;
        case 0x186f98u: goto label_186f98;
        case 0x186f9cu: goto label_186f9c;
        case 0x186fa0u: goto label_186fa0;
        case 0x186fa4u: goto label_186fa4;
        case 0x186fa8u: goto label_186fa8;
        case 0x186facu: goto label_186fac;
        case 0x186fb0u: goto label_186fb0;
        case 0x186fb4u: goto label_186fb4;
        case 0x186fb8u: goto label_186fb8;
        case 0x186fbcu: goto label_186fbc;
        case 0x186fc0u: goto label_186fc0;
        case 0x186fc4u: goto label_186fc4;
        case 0x186fc8u: goto label_186fc8;
        case 0x186fccu: goto label_186fcc;
        case 0x186fd0u: goto label_186fd0;
        case 0x186fd4u: goto label_186fd4;
        case 0x186fd8u: goto label_186fd8;
        case 0x186fdcu: goto label_186fdc;
        case 0x186fe0u: goto label_186fe0;
        case 0x186fe4u: goto label_186fe4;
        default: break;
    }

    ctx->pc = 0x186ed8u;

label_186ed8:
    // 0x186ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_186edc:
    // 0x186edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186ee0:
    // 0x186ee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186ee4:
    // 0x186ee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186ee8:
    // 0x186ee8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_186eec:
    // 0x186eec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x186eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_186ef0:
    // 0x186ef0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x186ef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_186ef4:
    // 0x186ef4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x186ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_186ef8:
    // 0x186ef8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x186ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_186efc:
    // 0x186efc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x186efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_186f00:
    // 0x186f00: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_186f04:
    // 0x186f04: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
label_186f08:
    if (ctx->pc == 0x186F08u) {
        ctx->pc = 0x186F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F04u;
        // 0x186f08: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F0Cu;
        goto label_186f0c;
    }
    ctx->pc = 0x186F04u;
    {
        const bool branch_taken_0x186f04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x186F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F04u;
        // 0x186f08: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f04) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186F0Cu;
label_186f0c:
    // 0x186f0c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x186f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_186f10:
    // 0x186f10: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x186f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_186f14:
    // 0x186f14: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_186f18:
    if (ctx->pc == 0x186F18u) {
        ctx->pc = 0x186F1Cu;
        goto label_186f1c;
    }
    ctx->pc = 0x186F14u;
    {
        const bool branch_taken_0x186f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186f14) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186F1Cu;
label_186f1c:
    // 0x186f1c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x186f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_186f20:
    // 0x186f20: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
label_186f24:
    if (ctx->pc == 0x186F24u) {
        ctx->pc = 0x186F28u;
        goto label_186f28;
    }
    ctx->pc = 0x186F20u;
    {
        const bool branch_taken_0x186f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x186f20) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186F28u;
label_186f28:
    // 0x186f28: 0xc48100a8  lwc1        $f1, 0xA8($a0)
    ctx->pc = 0x186f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186f2c:
    // 0x186f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186f30:
    // 0x186f30: 0x0  nop
    ctx->pc = 0x186f30u;
    // NOP
label_186f34:
    // 0x186f34: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x186f34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186f38:
    // 0x186f38: 0x0  nop
    ctx->pc = 0x186f38u;
    // NOP
label_186f3c:
    // 0x186f3c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_186f40:
    if (ctx->pc == 0x186F40u) {
        ctx->pc = 0x186F44u;
        goto label_186f44;
    }
    ctx->pc = 0x186F3Cu;
    {
        const bool branch_taken_0x186f3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186f3c) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186F44u;
label_186f44:
    // 0x186f44: 0xc48000ac  lwc1        $f0, 0xAC($a0)
    ctx->pc = 0x186f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186f48:
    // 0x186f48: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x186f48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186f4c:
    // 0x186f4c: 0x0  nop
    ctx->pc = 0x186f4cu;
    // NOP
label_186f50:
    // 0x186f50: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
label_186f54:
    if (ctx->pc == 0x186F54u) {
        ctx->pc = 0x186F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F50u;
        // 0x186f54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F58u;
        goto label_186f58;
    }
    ctx->pc = 0x186F50u;
    {
        const bool branch_taken_0x186f50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186f50) {
            ctx->pc = 0x186F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186F50u;
            // 0x186f54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186FCCu;
            goto label_186fcc;
        }
    }
    ctx->pc = 0x186F58u;
label_186f58:
    // 0x186f58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x186f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_186f5c:
    // 0x186f5c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_186f60:
    if (ctx->pc == 0x186F60u) {
        ctx->pc = 0x186F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F5Cu;
        // 0x186f60: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F64u;
        goto label_186f64;
    }
    ctx->pc = 0x186F5Cu;
    {
        const bool branch_taken_0x186f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186f5c) {
            ctx->pc = 0x186F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186F5Cu;
            // 0x186f60: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186F78u;
            goto label_186f78;
        }
    }
    ctx->pc = 0x186F64u;
label_186f64:
    // 0x186f64: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186f68:
    // 0x186f68: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x186f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_186f6c:
    // 0x186f6c: 0x40f809  jalr        $v0
label_186f70:
    if (ctx->pc == 0x186F70u) {
        ctx->pc = 0x186F74u;
        goto label_186f74;
    }
    ctx->pc = 0x186F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186F74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186F6Cu, 0x186F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186F74u;
label_186f74:
    // 0x186f74: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_186f78:
    // 0x186f78: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_186f7c:
    if (ctx->pc == 0x186F7Cu) {
        ctx->pc = 0x186F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F78u;
        // 0x186f7c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F80u;
        goto label_186f80;
    }
    ctx->pc = 0x186F78u;
    {
        const bool branch_taken_0x186f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186f78) {
            ctx->pc = 0x186F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186F78u;
            // 0x186f7c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186F9Cu;
            goto label_186f9c;
        }
    }
    ctx->pc = 0x186F80u;
label_186f80:
    // 0x186f80: 0xc0f5240  jal         func_3D4900
label_186f84:
    if (ctx->pc == 0x186F84u) {
        ctx->pc = 0x186F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F80u;
        // 0x186f84: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F88u;
        goto label_186f88;
    }
    ctx->pc = 0x186F80u;
    SET_GPR_U32(ctx, 31, 0x186F88u);
    ctx->pc = 0x186F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F80u;
    // 0x186f84: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x186F80u, 0x186F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F88u;
label_186f88:
    // 0x186f88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x186f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_186f8c:
    // 0x186f8c: 0xc0661b6  jal         func_1986D8
label_186f90:
    if (ctx->pc == 0x186F90u) {
        ctx->pc = 0x186F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F8Cu;
        // 0x186f90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F94u;
        goto label_186f94;
    }
    ctx->pc = 0x186F8Cu;
    SET_GPR_U32(ctx, 31, 0x186F94u);
    ctx->pc = 0x186F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F8Cu;
    // 0x186f90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986D8u, 0x186F8Cu, 0x186F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F94u;
label_186f94:
    // 0x186f94: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x186f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_186f98:
    // 0x186f98: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_186f9c:
    // 0x186f9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186fa0:
    // 0x186fa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x186fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_186fa4:
    // 0x186fa4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186fa8:
    // 0x186fa8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x186fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_186fac:
    // 0x186fac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186fb0:
    // 0x186fb0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x186fb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_186fb4:
    // 0x186fb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x186fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186fb8:
    // 0x186fb8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x186fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_186fbc:
    // 0x186fbc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x186fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_186fc0:
    // 0x186fc0: 0x40f809  jalr        $v0
label_186fc4:
    if (ctx->pc == 0x186FC4u) {
        ctx->pc = 0x186FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FC0u;
        // 0x186fc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186FC8u;
        goto label_186fc8;
    }
    ctx->pc = 0x186FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186FC8u);
        ctx->pc = 0x186FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FC0u;
        // 0x186fc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186FC0u, 0x186FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186FC8u;
label_186fc8:
    // 0x186fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186fcc:
    // 0x186fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186fd0:
    // 0x186fd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186fd4:
    // 0x186fd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x186fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_186fd8:
    // 0x186fd8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x186fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_186fdc:
    // 0x186fdc: 0x3e00008  jr          $ra
label_186fe0:
    if (ctx->pc == 0x186FE0u) {
        ctx->pc = 0x186FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FDCu;
        // 0x186fe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186FE4u;
        goto label_186fe4;
    }
    ctx->pc = 0x186FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FDCu;
        // 0x186fe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186FE4u;
label_186fe4:
    // 0x186fe4: 0x0  nop
    ctx->pc = 0x186fe4u;
    // NOP
    ctx->pc = 0x186fe8u;
}
