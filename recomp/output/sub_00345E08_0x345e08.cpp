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

// Function: sub_00345E08
// Address: 0x345e08 - 0x345fa0
void sub_00345E08_0x345e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345E08_0x345e08");
#endif

    switch (ctx->pc) {
        case 0x345ee0u: goto label_345ee0;
        default: break;
    }

    ctx->pc = 0x345e08u;

    // 0x345e08: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x345e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345e0c: 0x8ce200d4  lw          $v0, 0xD4($a3)
    ctx->pc = 0x345e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x345e10: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x345E10u;
    {
        const bool branch_taken_0x345e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345e10) {
            ctx->pc = 0x345F94u;
            goto label_345f94;
        }
    }
    ctx->pc = 0x345E18u;
    // 0x345e18: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x345e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345e1c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x345e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x345e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x345e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345e24: 0x0  nop
    ctx->pc = 0x345e24u;
    // NOP
    // 0x345e28: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x345e28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345e2c: 0x0  nop
    ctx->pc = 0x345e2cu;
    // NOP
    // 0x345e30: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x345E30u;
    {
        const bool branch_taken_0x345e30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x345E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E30u;
        // 0x345e34: 0x8ce20010  lw          $v0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e30) {
            ctx->pc = 0x345ED0u;
            goto label_345ed0;
        }
    }
    ctx->pc = 0x345E38u;
    // 0x345e38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x345E38u;
    {
        const bool branch_taken_0x345e38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x345E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E38u;
        // 0x345e3c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e38) {
            ctx->pc = 0x345E54u;
            goto label_345e54;
        }
    }
    ctx->pc = 0x345E40u;
    // 0x345e40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x345e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345e44: 0x0  nop
    ctx->pc = 0x345e44u;
    // NOP
    // 0x345e48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x345e48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345e4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x345E4Cu;
    {
        const bool branch_taken_0x345e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E4Cu;
        // 0x345e50: 0xc4e00024  lwc1        $f0, 0x24($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e4c) {
            ctx->pc = 0x345E74u;
            goto label_345e74;
        }
    }
    ctx->pc = 0x345E54u;
label_345e54:
    // 0x345e54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345e58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x345e5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x345e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345e60: 0x0  nop
    ctx->pc = 0x345e60u;
    // NOP
    // 0x345e64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x345e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345e68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x345e68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x345e6c: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x345e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e70: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x345e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_345e74:
    // 0x345e74: 0x0  nop
    ctx->pc = 0x345e74u;
    // NOP
    // 0x345e78: 0x0  nop
    ctx->pc = 0x345e78u;
    // NOP
    // 0x345e7c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x345e7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x345e80: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x345E80u;
    {
        const bool branch_taken_0x345e80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x345E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E80u;
        // 0x345e84: 0xe4e00018  swc1        $f0, 0x18($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e80) {
            ctx->pc = 0x345E9Cu;
            goto label_345e9c;
        }
    }
    ctx->pc = 0x345E88u;
    // 0x345e88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x345e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345e8c: 0x0  nop
    ctx->pc = 0x345e8cu;
    // NOP
    // 0x345e90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x345e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345e94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x345E94u;
    {
        const bool branch_taken_0x345e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E94u;
        // 0x345e98: 0xc4e00028  lwc1        $f0, 0x28($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e94) {
            ctx->pc = 0x345EBCu;
            goto label_345ebc;
        }
    }
    ctx->pc = 0x345E9Cu;
label_345e9c:
    // 0x345e9c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x345e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x345ea0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345ea4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x345ea8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x345ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345eac: 0x0  nop
    ctx->pc = 0x345eacu;
    // NOP
    // 0x345eb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x345eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345eb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x345eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x345eb8: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x345eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_345ebc:
    // 0x345ebc: 0x0  nop
    ctx->pc = 0x345ebcu;
    // NOP
    // 0x345ec0: 0x0  nop
    ctx->pc = 0x345ec0u;
    // NOP
    // 0x345ec4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x345ec4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x345ec8: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x345ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x345ecc: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x345eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_345ed0:
    // 0x345ed0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x345ED0u;
    {
        const bool branch_taken_0x345ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345ED0u;
        // 0x345ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ed0) {
            ctx->pc = 0x345F18u;
            goto label_345f18;
        }
    }
    ctx->pc = 0x345ED8u;
    // 0x345ed8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x345ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345edc: 0x8ce30118  lw          $v1, 0x118($a3)
    ctx->pc = 0x345edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
label_345ee0:
    // 0x345ee0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x345ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x345ee4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x345ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x345ee8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x345ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x345eec: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x345eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x345ef0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x345ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345ef4: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x345ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 8));
    // 0x345ef8: 0x8ce30118  lw          $v1, 0x118($a3)
    ctx->pc = 0x345ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
    // 0x345efc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x345efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x345f00: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x345f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x345f04: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x345f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x345f08: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x345f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x345f0c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x345f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x345f10: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x345F10u;
    {
        const bool branch_taken_0x345f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345f10) {
            ctx->pc = 0x345F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345F10u;
            // 0x345f14: 0x8ce30118  lw          $v1, 0x118($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345ee0;
        }
    }
    ctx->pc = 0x345F18u;
label_345f18:
    // 0x345f18: 0xc4e10108  lwc1        $f1, 0x108($a3)
    ctx->pc = 0x345f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345f20: 0x0  nop
    ctx->pc = 0x345f20u;
    // NOP
    // 0x345f24: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x345f24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345f28: 0x0  nop
    ctx->pc = 0x345f28u;
    // NOP
    // 0x345f2c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x345F2Cu;
    {
        const bool branch_taken_0x345f2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x345F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F2Cu;
        // 0x345f30: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f2c) {
            ctx->pc = 0x345F94u;
            goto label_345f94;
        }
    }
    ctx->pc = 0x345F34u;
    // 0x345f34: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x345f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x345f38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x345F38u;
    {
        const bool branch_taken_0x345f38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x345F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F38u;
        // 0x345f3c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f38) {
            ctx->pc = 0x345F54u;
            goto label_345f54;
        }
    }
    ctx->pc = 0x345F40u;
    // 0x345f40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x345f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345f44: 0x0  nop
    ctx->pc = 0x345f44u;
    // NOP
    // 0x345f48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x345f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345f4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345F4Cu;
    {
        const bool branch_taken_0x345f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345f4c) {
            ctx->pc = 0x345F6Cu;
            goto label_345f6c;
        }
    }
    ctx->pc = 0x345F54u;
label_345f54:
    // 0x345f54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345f58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x345f5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x345f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345f60: 0x0  nop
    ctx->pc = 0x345f60u;
    // NOP
    // 0x345f64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x345f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345f68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x345f68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_345f6c:
    // 0x345f6c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x345f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x345f70: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x345f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x345f74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x345f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345f78: 0xc4e20104  lwc1        $f2, 0x104($a3)
    ctx->pc = 0x345f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345f7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x345f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x345f80: 0xc4e10108  lwc1        $f1, 0x108($a3)
    ctx->pc = 0x345f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345f84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x345f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x345f88: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x345f88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x345f8c: 0xe4e0011c  swc1        $f0, 0x11C($a3)
    ctx->pc = 0x345f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 284), bits); }
    // 0x345f90: 0xe4e10120  swc1        $f1, 0x120($a3)
    ctx->pc = 0x345f90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 288), bits); }
label_345f94:
    // 0x345f94: 0x3e00008  jr          $ra
    ctx->pc = 0x345F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345F9Cu;
    // 0x345f9c: 0x0  nop
    ctx->pc = 0x345f9cu;
    // NOP
    ctx->pc = 0x345fa0u;
}
