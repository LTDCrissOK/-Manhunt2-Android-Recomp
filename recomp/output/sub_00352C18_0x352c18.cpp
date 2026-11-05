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

// Function: sub_00352C18
// Address: 0x352c18 - 0x352ee8
void sub_00352C18_0x352c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352C18_0x352c18");
#endif

    switch (ctx->pc) {
        case 0x352c50u: goto label_352c50;
        case 0x352c60u: goto label_352c60;
        case 0x352c88u: goto label_352c88;
        case 0x352eccu: goto label_352ecc;
        default: break;
    }

    ctx->pc = 0x352c18u;

    // 0x352c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x352c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x352c1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x352c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x352c20: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x352c20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x352c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x352c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352c28: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x352c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x352c2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x352c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x352c30: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x352c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x352c34: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x352C34u;
    {
        const bool branch_taken_0x352c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C34u;
        // 0x352c38: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c34) {
            ctx->pc = 0x352EC0u;
            goto label_352ec0;
        }
    }
    ctx->pc = 0x352C3Cu;
    // 0x352c3c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x352c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x352c40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x352C40u;
    {
        const bool branch_taken_0x352c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C40u;
        // 0x352c44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c40) {
            ctx->pc = 0x352C74u;
            goto label_352c74;
        }
    }
    ctx->pc = 0x352C48u;
    // 0x352c48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x352c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352c4c: 0x0  nop
    ctx->pc = 0x352c4cu;
    // NOP
label_352c50:
    // 0x352c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352c54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x352c54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x352c58: 0xc0d4ac6  jal         func_352B18
    ctx->pc = 0x352C58u;
    SET_GPR_U32(ctx, 31, 0x352C60u);
    ctx->pc = 0x352C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352C58u;
    // 0x352c5c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352B18u, 0x352C58u, 0x352C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352C60u;
label_352c60:
    // 0x352c60: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x352c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x352c64: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x352c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x352c68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x352C68u;
    {
        const bool branch_taken_0x352c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C68u;
        // 0x352c6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c68) {
            ctx->pc = 0x352C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352c50;
        }
    }
    ctx->pc = 0x352C70u;
    // 0x352c70: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x352c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_352c74:
    // 0x352c74: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x352C74u;
    {
        const bool branch_taken_0x352c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C74u;
        // 0x352c78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c74) {
            ctx->pc = 0x352EC0u;
            goto label_352ec0;
        }
    }
    ctx->pc = 0x352C7Cu;
    // 0x352c7c: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x352c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x352c80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x352c80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352c84: 0x0  nop
    ctx->pc = 0x352c84u;
    // NOP
label_352c88:
    // 0x352c88: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x352c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x352c8c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x352c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x352c90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x352c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x352c94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x352c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352c98: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x352c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352c9c: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x352c9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x352ca0: 0x0  nop
    ctx->pc = 0x352ca0u;
    // NOP
    // 0x352ca4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x352CA4u;
    {
        const bool branch_taken_0x352ca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x352ca4) {
            ctx->pc = 0x352CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352CA4u;
            // 0x352ca8: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352CACu;
            goto label_352cac;
        }
    }
    ctx->pc = 0x352CACu;
label_352cac:
    // 0x352cac: 0x8e06014c  lw          $a2, 0x14C($s0)
    ctx->pc = 0x352cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x352cb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x352cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x352cb4: 0x920300b4  lbu         $v1, 0xB4($s0)
    ctx->pc = 0x352cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x352cb8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x352cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x352cbc: 0x920200b0  lbu         $v0, 0xB0($s0)
    ctx->pc = 0x352cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x352cc0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x352cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352cc4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x352cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x352cc8: 0x0  nop
    ctx->pc = 0x352cc8u;
    // NOP
    // 0x352ccc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x352cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x352cd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x352cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x352cd4: 0x920500b5  lbu         $a1, 0xB5($s0)
    ctx->pc = 0x352cd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 181)));
    // 0x352cd8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x352cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352cdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x352cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x352ce0: 0x0  nop
    ctx->pc = 0x352ce0u;
    // NOP
    // 0x352ce4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x352ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x352ce8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x352ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352cec: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x352cecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x352cf0: 0x0  nop
    ctx->pc = 0x352cf0u;
    // NOP
    // 0x352cf4: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x352cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x352cf8: 0x920200b1  lbu         $v0, 0xB1($s0)
    ctx->pc = 0x352cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 177)));
    // 0x352cfc: 0x0  nop
    ctx->pc = 0x352cfcu;
    // NOP
    // 0x352d00: 0x0  nop
    ctx->pc = 0x352d00u;
    // NOP
    // 0x352d04: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x352d04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x352d08: 0x920400b6  lbu         $a0, 0xB6($s0)
    ctx->pc = 0x352d08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 182)));
    // 0x352d0c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x352d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x352d10: 0x920300b2  lbu         $v1, 0xB2($s0)
    ctx->pc = 0x352d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 178)));
    // 0x352d14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x352d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x352d18: 0x0  nop
    ctx->pc = 0x352d18u;
    // NOP
    // 0x352d1c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x352d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x352d20: 0x920500b7  lbu         $a1, 0xB7($s0)
    ctx->pc = 0x352d20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 183)));
    // 0x352d24: 0x920200b3  lbu         $v0, 0xB3($s0)
    ctx->pc = 0x352d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 179)));
    // 0x352d28: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x352d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x352d2c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x352d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x352d30: 0x0  nop
    ctx->pc = 0x352d30u;
    // NOP
    // 0x352d34: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x352d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x352d38: 0x8e070150  lw          $a3, 0x150($s0)
    ctx->pc = 0x352d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x352d3c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x352d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x352d40: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x352d40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x352d44: 0x0  nop
    ctx->pc = 0x352d44u;
    // NOP
    // 0x352d48: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x352d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x352d4c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x352d4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x352d50: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x352d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x352d54: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x352d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x352d58: 0x0  nop
    ctx->pc = 0x352d58u;
    // NOP
    // 0x352d5c: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x352d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x352d60: 0x44854800  mtc1        $a1, $f9
    ctx->pc = 0x352d60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x352d64: 0x0  nop
    ctx->pc = 0x352d64u;
    // NOP
    // 0x352d68: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x352d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x352d6c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x352d6cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x352d70: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x352d70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x352d74: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x352d74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x352d78: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x352d78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x352d7c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x352d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352d80: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x352d80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x352d84: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x352d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352d88: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x352d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352d8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x352d8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x352d90: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x352d90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x352d94: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x352d94u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x352d98: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x352d98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x352d9c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x352d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x352da0: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x352da0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x352da4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x352da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352da8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x352da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x352dac: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x352dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x352db0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x352db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352db4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x352db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352db8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x352db8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x352dbc: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x352dbcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x352dc0: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x352dc0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x352dc4: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x352dc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x352dc8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x352dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x352dcc: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x352dccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x352dd0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x352dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352dd4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x352dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x352dd8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x352dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x352ddc: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x352ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352de0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x352de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352de4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x352de4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x352de8: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x352de8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x352dec: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x352decu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x352df0: 0x46004824  .word       0x46004824                   # cvt.w.s     $f0, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x352df0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x352df4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x352df4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x352df8: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x352df8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x352dfc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x352dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x352e00: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x352e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x352e04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x352e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x352e08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x352e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x352e0c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x352e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x352e10: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x352e10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x352e14: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x352e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x352e18: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x352e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x352e1c: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x352e1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x352e20: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x352e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x352e24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x352e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x352e28: 0x8e050150  lw          $a1, 0x150($s0)
    ctx->pc = 0x352e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x352e2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x352e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x352e30: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x352e30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x352e34: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x352e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352e38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x352e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x352e3c: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x352e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x352e40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x352e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x352e44: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x352e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x352e48: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x352e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x352e4c: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x352e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x352e50: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x352e50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x352e54: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x352e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x352e58: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x352e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x352e5c: 0x8e050150  lw          $a1, 0x150($s0)
    ctx->pc = 0x352e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x352e60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x352e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x352e64: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x352e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x352e68: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x352e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352e6c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x352e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x352e70: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x352e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x352e74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x352e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x352e78: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x352e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x352e7c: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x352e7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x352e80: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x352e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x352e84: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x352e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x352e88: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x352e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x352e8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x352e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x352e90: 0x8e050150  lw          $a1, 0x150($s0)
    ctx->pc = 0x352e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x352e94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x352e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x352e98: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x352e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x352e9c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x352e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352ea0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x352ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x352ea4: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x352ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x352ea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x352ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x352eac: 0xaca3005c  sw          $v1, 0x5C($a1)
    ctx->pc = 0x352eacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 3));
    // 0x352eb0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x352eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x352eb4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x352eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x352eb8: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
    ctx->pc = 0x352EB8u;
    {
        const bool branch_taken_0x352eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352EB8u;
        // 0x352ebc: 0x25290060  addiu       $t1, $t1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352eb8) {
            ctx->pc = 0x352C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352c88;
        }
    }
    ctx->pc = 0x352EC0u;
label_352ec0:
    // 0x352ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352ec4: 0xc0d19ea  jal         func_3467A8
    ctx->pc = 0x352EC4u;
    SET_GPR_U32(ctx, 31, 0x352ECCu);
    ctx->pc = 0x352EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352EC4u;
    // 0x352ec8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3467A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3467A8u, 0x352EC4u, 0x352ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352ECCu;
label_352ecc:
    // 0x352ecc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x352eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352ed0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x352ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352ed4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x352ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352ed8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x352ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x352edc: 0x3e00008  jr          $ra
    ctx->pc = 0x352EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352EDCu;
        // 0x352ee0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352EE4u;
    // 0x352ee4: 0x0  nop
    ctx->pc = 0x352ee4u;
    // NOP
    ctx->pc = 0x352ee8u;
}
