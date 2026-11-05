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

// Function: sub_0030AEF0
// Address: 0x30aef0 - 0x30b060
void sub_0030AEF0_0x30aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AEF0_0x30aef0");
#endif

    ctx->pc = 0x30aef0u;

    // 0x30aef0: 0xc48000e0  lwc1        $f0, 0xE0($a0)
    ctx->pc = 0x30aef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30aef4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30aef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30aef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30aef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30aefc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30aefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30af00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x30af00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x30af04: 0xc48100e4  lwc1        $f1, 0xE4($a0)
    ctx->pc = 0x30af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30af08: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x30af08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30af0c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x30af0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x30af10: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x30af10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30af14: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x30af14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30af18: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x30af18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30af1c: 0x46030900  add.s       $f4, $f1, $f3
    ctx->pc = 0x30af1cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x30af20: 0x0  nop
    ctx->pc = 0x30af20u;
    // NOP
    // 0x30af24: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x30af24u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x30af28: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x30af28u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x30af2c: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x30af2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30af30: 0x0  nop
    ctx->pc = 0x30af30u;
    // NOP
    // 0x30af34: 0x0  nop
    ctx->pc = 0x30af34u;
    // NOP
    // 0x30af38: 0x46000004  c1          0x4
    ctx->pc = 0x30af38u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x30af3c: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x30af3cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30af40: 0x0  nop
    ctx->pc = 0x30af40u;
    // NOP
    // 0x30af44: 0x0  nop
    ctx->pc = 0x30af44u;
    // NOP
    // 0x30af48: 0x46020084  c1          0x20084
    ctx->pc = 0x30af48u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x30af4c: 0x46010044  c1          0x10044
    ctx->pc = 0x30af4cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x30af50: 0x460300c4  c1          0x300C4
    ctx->pc = 0x30af50u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x30af54: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x30af54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30af58: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x30af58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30af5c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30af5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30af60: 0xf8810160  sqc2        $vf1, 0x160($a0)
    ctx->pc = 0x30af60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30af64: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30af64u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x30af68: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x30af68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30af6c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x30af6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30af70: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x30af70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30af74: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x30af74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30af78: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30af78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30af7c: 0xf8810170  sqc2        $vf1, 0x170($a0)
    ctx->pc = 0x30af7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30af80: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x30af80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30af84: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x30af84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30af88: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x30af88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30af8c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x30af8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30af90: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30af90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30af94: 0xf8810180  sqc2        $vf1, 0x180($a0)
    ctx->pc = 0x30af94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30af98: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x30af98u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x30af9c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x30af9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30afa0: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x30afa0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30afa4: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x30afa4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30afa8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x30afa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30afac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30afacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30afb0: 0xf8810190  sqc2        $vf1, 0x190($a0)
    ctx->pc = 0x30afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30afb4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x30afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30afb8: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x30afb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30afbc: 0x0  nop
    ctx->pc = 0x30afbcu;
    // NOP
    // 0x30afc0: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x30AFC0u;
    {
        const bool branch_taken_0x30afc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30afc0) {
            ctx->pc = 0x30AFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30AFC0u;
            // 0x30afc4: 0xc4840020  lwc1        $f4, 0x20($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30AFF4u;
            goto label_30aff4;
        }
    }
    ctx->pc = 0x30AFC8u;
    // 0x30afc8: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x30afc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30afcc: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x30afccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30afd0: 0x0  nop
    ctx->pc = 0x30afd0u;
    // NOP
    // 0x30afd4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x30AFD4u;
    {
        const bool branch_taken_0x30afd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30afd4) {
            ctx->pc = 0x30AFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30AFD4u;
            // 0x30afd8: 0xc4840020  lwc1        $f4, 0x20($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30AFF4u;
            goto label_30aff4;
        }
    }
    ctx->pc = 0x30AFDCu;
    // 0x30afdc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x30afdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x30afe0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x30afe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x30afe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30afe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30afe8: 0x0  nop
    ctx->pc = 0x30afe8u;
    // NOP
    // 0x30afec: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x30afecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x30aff0: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x30aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30aff4:
    // 0x30aff4: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x30aff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30aff8: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x30aff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x30affc: 0xe4840150  swc1        $f4, 0x150($a0)
    ctx->pc = 0x30affcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x30b000: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x30b000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x30b004: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30b004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30b008: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30b008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30b00c: 0x0  nop
    ctx->pc = 0x30b00cu;
    // NOP
    // 0x30b010: 0x0  nop
    ctx->pc = 0x30b010u;
    // NOP
    // 0x30b014: 0x46000044  c1          0x44
    ctx->pc = 0x30b014u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x30b018: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x30b018u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b01c: 0x0  nop
    ctx->pc = 0x30b01cu;
    // NOP
    // 0x30b020: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x30B020u;
    {
        const bool branch_taken_0x30b020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B020u;
        // 0x30b024: 0xe4830154  swc1        $f3, 0x154($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b020) {
            ctx->pc = 0x30B038u;
            goto label_30b038;
        }
    }
    ctx->pc = 0x30B028u;
    // 0x30b028: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30b028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30b02c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b030: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30B030u;
    {
        const bool branch_taken_0x30b030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B030u;
        // 0x30b034: 0xe4800150  swc1        $f0, 0x150($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b030) {
            ctx->pc = 0x30B058u;
            goto label_30b058;
        }
    }
    ctx->pc = 0x30B038u;
label_30b038:
    // 0x30b038: 0x0  nop
    ctx->pc = 0x30b038u;
    // NOP
    // 0x30b03c: 0x0  nop
    ctx->pc = 0x30b03cu;
    // NOP
    // 0x30b040: 0x46011803  div.s       $f0, $f3, $f1
    ctx->pc = 0x30b040u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x30b044: 0x0  nop
    ctx->pc = 0x30b044u;
    // NOP
    // 0x30b048: 0x0  nop
    ctx->pc = 0x30b048u;
    // NOP
    // 0x30b04c: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x30b04cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x30b050: 0xe4800154  swc1        $f0, 0x154($a0)
    ctx->pc = 0x30b050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x30b054: 0xe4810150  swc1        $f1, 0x150($a0)
    ctx->pc = 0x30b054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
label_30b058:
    // 0x30b058: 0x3e00008  jr          $ra
    ctx->pc = 0x30B058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B058u;
        // 0x30b05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B060u;
}
