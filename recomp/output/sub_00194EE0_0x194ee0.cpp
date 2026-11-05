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

// Function: sub_00194EE0
// Address: 0x194ee0 - 0x194fb0
void sub_00194EE0_0x194ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194EE0_0x194ee0");
#endif

    switch (ctx->pc) {
        case 0x194ee0u: goto label_194ee0;
        case 0x194ee4u: goto label_194ee4;
        case 0x194ee8u: goto label_194ee8;
        case 0x194eecu: goto label_194eec;
        case 0x194ef0u: goto label_194ef0;
        case 0x194ef4u: goto label_194ef4;
        case 0x194ef8u: goto label_194ef8;
        case 0x194efcu: goto label_194efc;
        case 0x194f00u: goto label_194f00;
        case 0x194f04u: goto label_194f04;
        case 0x194f08u: goto label_194f08;
        case 0x194f0cu: goto label_194f0c;
        case 0x194f10u: goto label_194f10;
        case 0x194f14u: goto label_194f14;
        case 0x194f18u: goto label_194f18;
        case 0x194f1cu: goto label_194f1c;
        case 0x194f20u: goto label_194f20;
        case 0x194f24u: goto label_194f24;
        case 0x194f28u: goto label_194f28;
        case 0x194f2cu: goto label_194f2c;
        case 0x194f30u: goto label_194f30;
        case 0x194f34u: goto label_194f34;
        case 0x194f38u: goto label_194f38;
        case 0x194f3cu: goto label_194f3c;
        case 0x194f40u: goto label_194f40;
        case 0x194f44u: goto label_194f44;
        case 0x194f48u: goto label_194f48;
        case 0x194f4cu: goto label_194f4c;
        case 0x194f50u: goto label_194f50;
        case 0x194f54u: goto label_194f54;
        case 0x194f58u: goto label_194f58;
        case 0x194f5cu: goto label_194f5c;
        case 0x194f60u: goto label_194f60;
        case 0x194f64u: goto label_194f64;
        case 0x194f68u: goto label_194f68;
        case 0x194f6cu: goto label_194f6c;
        case 0x194f70u: goto label_194f70;
        case 0x194f74u: goto label_194f74;
        case 0x194f78u: goto label_194f78;
        case 0x194f7cu: goto label_194f7c;
        case 0x194f80u: goto label_194f80;
        case 0x194f84u: goto label_194f84;
        case 0x194f88u: goto label_194f88;
        case 0x194f8cu: goto label_194f8c;
        case 0x194f90u: goto label_194f90;
        case 0x194f94u: goto label_194f94;
        case 0x194f98u: goto label_194f98;
        case 0x194f9cu: goto label_194f9c;
        case 0x194fa0u: goto label_194fa0;
        case 0x194fa4u: goto label_194fa4;
        case 0x194fa8u: goto label_194fa8;
        case 0x194facu: goto label_194fac;
        default: break;
    }

    ctx->pc = 0x194ee0u;

label_194ee0:
    // 0x194ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_194ee4:
    // 0x194ee4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x194ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_194ee8:
    // 0x194ee8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x194ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_194eec:
    // 0x194eec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x194eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_194ef0:
    // 0x194ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194ef4:
    // 0x194ef4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x194ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_194ef8:
    // 0x194ef8: 0x50430029  beql        $v0, $v1, . + 4 + (0x29 << 2)
label_194efc:
    if (ctx->pc == 0x194EFCu) {
        ctx->pc = 0x194EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EF8u;
        // 0x194efc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F00u;
        goto label_194f00;
    }
    ctx->pc = 0x194EF8u;
    {
        const bool branch_taken_0x194ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x194ef8) {
            ctx->pc = 0x194EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194EF8u;
            // 0x194efc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194FA0u;
            goto label_194fa0;
        }
    }
    ctx->pc = 0x194F00u;
label_194f00:
    // 0x194f00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x194f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_194f04:
    // 0x194f04: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_194f08:
    if (ctx->pc == 0x194F08u) {
        ctx->pc = 0x194F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F04u;
        // 0x194f08: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F0Cu;
        goto label_194f0c;
    }
    ctx->pc = 0x194F04u;
    {
        const bool branch_taken_0x194f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F04u;
        // 0x194f08: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f04) {
            ctx->pc = 0x194F1Cu;
            goto label_194f1c;
        }
    }
    ctx->pc = 0x194F0Cu;
label_194f0c:
    // 0x194f0c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x194f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_194f10:
    // 0x194f10: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x194f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_194f14:
    // 0x194f14: 0x40f809  jalr        $v0
label_194f18:
    if (ctx->pc == 0x194F18u) {
        ctx->pc = 0x194F1Cu;
        goto label_194f1c;
    }
    ctx->pc = 0x194F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194F1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F14u, 0x194F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194F1Cu;
label_194f1c:
    // 0x194f1c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x194f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_194f20:
    // 0x194f20: 0xc061a12  jal         func_186848
label_194f24:
    if (ctx->pc == 0x194F24u) {
        ctx->pc = 0x194F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F20u;
        // 0x194f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F28u;
        goto label_194f28;
    }
    ctx->pc = 0x194F20u;
    SET_GPR_U32(ctx, 31, 0x194F28u);
    ctx->pc = 0x194F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F20u;
    // 0x194f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194F20u, 0x194F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F28u;
label_194f28:
    // 0x194f28: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x194f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_194f2c:
    // 0x194f2c: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x194f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194f30:
    // 0x194f30: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x194f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194f34:
    // 0x194f34: 0x0  nop
    ctx->pc = 0x194f34u;
    // NOP
label_194f38:
    // 0x194f38: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_194f3c:
    if (ctx->pc == 0x194F3Cu) {
        ctx->pc = 0x194F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F38u;
        // 0x194f3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F40u;
        goto label_194f40;
    }
    ctx->pc = 0x194F38u;
    {
        const bool branch_taken_0x194f38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F38u;
        // 0x194f3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f38) {
            ctx->pc = 0x194F44u;
            goto label_194f44;
        }
    }
    ctx->pc = 0x194F40u;
label_194f40:
    // 0x194f40: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x194f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_194f44:
    // 0x194f44: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x194f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_194f48:
    // 0x194f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194f4c:
    // 0x194f4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x194f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194f50:
    // 0x194f50: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x194f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194f54:
    // 0x194f54: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x194f54u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_194f58:
    // 0x194f58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x194f58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_194f5c:
    // 0x194f5c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x194f5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_194f60:
    // 0x194f60: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x194f60u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_194f64:
    // 0x194f64: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x194f64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_194f68:
    // 0x194f68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x194f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_194f6c:
    // 0x194f6c: 0xc061a12  jal         func_186848
label_194f70:
    if (ctx->pc == 0x194F70u) {
        ctx->pc = 0x194F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F6Cu;
        // 0x194f70: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F74u;
        goto label_194f74;
    }
    ctx->pc = 0x194F6Cu;
    SET_GPR_U32(ctx, 31, 0x194F74u);
    ctx->pc = 0x194F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F6Cu;
    // 0x194f70: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194F6Cu, 0x194F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F74u;
label_194f74:
    // 0x194f74: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x194f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_194f78:
    // 0x194f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194f7c:
    // 0x194f7c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x194f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_194f80:
    // 0x194f80: 0x40f809  jalr        $v0
label_194f84:
    if (ctx->pc == 0x194F84u) {
        ctx->pc = 0x194F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F80u;
        // 0x194f84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F88u;
        goto label_194f88;
    }
    ctx->pc = 0x194F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194F88u);
        ctx->pc = 0x194F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F80u;
        // 0x194f84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F80u, 0x194F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194F88u;
label_194f88:
    // 0x194f88: 0xc061a12  jal         func_186848
label_194f8c:
    if (ctx->pc == 0x194F8Cu) {
        ctx->pc = 0x194F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F88u;
        // 0x194f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F90u;
        goto label_194f90;
    }
    ctx->pc = 0x194F88u;
    SET_GPR_U32(ctx, 31, 0x194F90u);
    ctx->pc = 0x194F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F88u;
    // 0x194f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194F88u, 0x194F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F90u;
label_194f90:
    // 0x194f90: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x194f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_194f94:
    // 0x194f94: 0xc0655f6  jal         func_1957D8
label_194f98:
    if (ctx->pc == 0x194F98u) {
        ctx->pc = 0x194F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F94u;
        // 0x194f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F9Cu;
        goto label_194f9c;
    }
    ctx->pc = 0x194F94u;
    SET_GPR_U32(ctx, 31, 0x194F9Cu);
    ctx->pc = 0x194F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F94u;
    // 0x194f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1957D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1957D8u, 0x194F94u, 0x194F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F9Cu;
label_194f9c:
    // 0x194f9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x194f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_194fa0:
    // 0x194fa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x194fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_194fa4:
    // 0x194fa4: 0x3e00008  jr          $ra
label_194fa8:
    if (ctx->pc == 0x194FA8u) {
        ctx->pc = 0x194FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FA4u;
        // 0x194fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FACu;
        goto label_194fac;
    }
    ctx->pc = 0x194FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FA4u;
        // 0x194fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194FACu;
label_194fac:
    // 0x194fac: 0x0  nop
    ctx->pc = 0x194facu;
    // NOP
    ctx->pc = 0x194fb0u;
}
