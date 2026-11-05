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

// Function: sub_0024BD40
// Address: 0x24bd40 - 0x24be28
void sub_0024BD40_0x24bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BD40_0x24bd40");
#endif

    switch (ctx->pc) {
        case 0x24bd78u: goto label_24bd78;
        case 0x24bdc8u: goto label_24bdc8;
        case 0x24be18u: goto label_24be18;
        default: break;
    }

    ctx->pc = 0x24bd40u;

    // 0x24bd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24bd44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x24bd48: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x24bd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x24bd4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd50: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x24bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x24bd54: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x24bd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x24bd58: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x24bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x24bd5c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24BD5Cu;
    {
        const bool branch_taken_0x24bd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD5Cu;
        // 0x24bd60: 0x26021030  addiu       $v0, $s0, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd5c) {
            ctx->pc = 0x24BDD0u;
            goto label_24bdd0;
        }
    }
    ctx->pc = 0x24BD64u;
    // 0x24bd64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24bd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24bd68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24bd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bd6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x24bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x24bd70: 0xc08fde2  jal         func_23F788
    ctx->pc = 0x24BD70u;
    SET_GPR_U32(ctx, 31, 0x24BD78u);
    ctx->pc = 0x24BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD70u;
    // 0x24bd74: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x24BD70u, 0x24BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD78u;
label_24bd78:
    // 0x24bd78: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x24bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24bd7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bd80: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24BD80u;
    {
        const bool branch_taken_0x24bd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24bd80) {
            ctx->pc = 0x24BD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BD80u;
            // 0x24bd84: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BDACu;
            goto label_24bdac;
        }
    }
    ctx->pc = 0x24BD88u;
    // 0x24bd88: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x24bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x24bd8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24bd8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bd90: 0xc4412454  lwc1        $f1, 0x2454($v0)
    ctx->pc = 0x24bd90u;
    { uint32_t bits = FAST_READ32(0x4C2454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bd94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24bd94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bd98: 0x0  nop
    ctx->pc = 0x24bd98u;
    // NOP
    // 0x24bd9c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BD9Cu;
    {
        const bool branch_taken_0x24bd9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD9Cu;
        // 0x24bda0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd9c) {
            ctx->pc = 0x24BDA8u;
            goto label_24bda8;
        }
    }
    ctx->pc = 0x24BDA4u;
    // 0x24bda4: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x24bda4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_24bda8:
    // 0x24bda8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x24bda8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24bdac:
    // 0x24bdac: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x24bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bdb0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x24bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24bdb4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24bdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bdb8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x24bdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x24bdbc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x24bdbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24bdc0: 0xc092d34  jal         func_24B4D0
    ctx->pc = 0x24BDC0u;
    SET_GPR_U32(ctx, 31, 0x24BDC8u);
    ctx->pc = 0x24BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDC0u;
    // 0x24bdc4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B4D0u, 0x24BDC0u, 0x24BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDC8u;
label_24bdc8:
    // 0x24bdc8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24BDC8u;
    {
        const bool branch_taken_0x24bdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDC8u;
        // 0x24bdcc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdc8) {
            ctx->pc = 0x24BE1Cu;
            goto label_24be1c;
        }
    }
    ctx->pc = 0x24BDD0u;
label_24bdd0:
    // 0x24bdd0: 0xc6021030  lwc1        $f2, 0x1030($s0)
    ctx->pc = 0x24bdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bdd4: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x24bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24bdd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24bdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bddc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bde0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bde4: 0x3c013fac  lui         $at, 0x3FAC
    ctx->pc = 0x24bde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16300 << 16));
    // 0x24bde8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24bde8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24bdec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24bdecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bdf0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x24bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x24bdf4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x24bdf4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24bdf8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24bdf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24bdfc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x24bdfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x24be00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24be00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24be04: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x24be04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x24be08: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x24be08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24be0c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x24be0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24be10: 0xc092d6a  jal         func_24B5A8
    ctx->pc = 0x24BE10u;
    SET_GPR_U32(ctx, 31, 0x24BE18u);
    ctx->pc = 0x24BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE10u;
    // 0x24be14: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5A8u, 0x24BE10u, 0x24BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE18u;
label_24be18:
    // 0x24be18: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24be18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24be1c:
    // 0x24be1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24be1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24be20: 0x3e00008  jr          $ra
    ctx->pc = 0x24BE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE20u;
        // 0x24be24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BE28u;
}
