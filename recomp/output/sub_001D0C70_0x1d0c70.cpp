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

// Function: sub_001D0C70
// Address: 0x1d0c70 - 0x1d0e60
void sub_001D0C70_0x1d0c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0C70_0x1d0c70");
#endif

    switch (ctx->pc) {
        case 0x1d0cc8u: goto label_1d0cc8;
        case 0x1d0d10u: goto label_1d0d10;
        case 0x1d0d90u: goto label_1d0d90;
        case 0x1d0decu: goto label_1d0dec;
        default: break;
    }

    ctx->pc = 0x1d0c70u;

    // 0x1d0c70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d0c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d0c74: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d0c78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d0c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d0c7c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1d0c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1d0c80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c84: 0x8c628e88  lw          $v0, -0x7178($v1)
    ctx->pc = 0x1d0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8E88u));
    // 0x1d0c88: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1d0c88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d0c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1d0c90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d0c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d0c94: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d0c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1d0c98: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d0c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1d0c9c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1d0c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1d0ca0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1d0ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1d0ca4: 0x18400062  blez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1D0CA4u;
    {
        const bool branch_taken_0x1d0ca4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CA4u;
        // 0x1d0ca8: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ca4) {
            ctx->pc = 0x1D0E30u;
            goto label_1d0e30;
        }
    }
    ctx->pc = 0x1D0CACu;
    // 0x1d0cac: 0x3c140049  lui         $s4, 0x49
    ctx->pc = 0x1d0cacu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    // 0x1d0cb0: 0x3c150049  lui         $s5, 0x49
    ctx->pc = 0x1d0cb0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)73 << 16));
    // 0x1d0cb4: 0x26b1f1d0  addiu       $s1, $s5, -0xE30
    ctx->pc = 0x1d0cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963664));
    // 0x1d0cb8: 0xc68cf260  lwc1        $f12, -0xDA0($s4)
    ctx->pc = 0x1d0cb8u;
    { uint32_t bits = FAST_READ32(0x48F260u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d0cbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cc0: 0xc0f757a  jal         func_3DD5E8
    ctx->pc = 0x1D0CC0u;
    SET_GPR_U32(ctx, 31, 0x1D0CC8u);
    ctx->pc = 0x1D0CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CC0u;
    // 0x1d0cc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD5E8u, 0x1D0CC0u, 0x1D0CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CC8u;
label_1d0cc8:
    // 0x1d0cc8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d0cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ccc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1d0cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0cd0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1d0cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0cd4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1d0cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0cd8: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x1d0cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d0cdc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d0cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d0ce0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1d0ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d0ce4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1d0ce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d0ce8: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x1d0ce8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d0cec: 0x8ec28e88  lw          $v0, -0x7178($s6)
    ctx->pc = 0x1d0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294938248)));
    // 0x1d0cf0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d0cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d0cf4: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1D0CF4u;
    {
        const bool branch_taken_0x1d0cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CF4u;
        // 0x1d0cf8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cf4) {
            ctx->pc = 0x1D0DE4u;
            goto label_1d0de4;
        }
    }
    ctx->pc = 0x1D0CFCu;
    // 0x1d0cfc: 0x2682f260  addiu       $v0, $s4, -0xDA0
    ctx->pc = 0x1d0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963808));
    // 0x1d0d00: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d0d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d0d04: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x1d0d04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d0d08: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x1d0d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1d0d0c: 0x0  nop
    ctx->pc = 0x1d0d0cu;
    // NOP
label_1d0d10:
    // 0x1d0d10: 0xc6a0f1d0  lwc1        $f0, -0xE30($s5)
    ctx->pc = 0x1d0d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294963664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d14: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x1d0d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1d0d18: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1d0d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d0d1c: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x1d0d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1d0d20: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1d0d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1d0d24: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1d0d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0d28: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x1d0d28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1d0d2c: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x1d0d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d0d30: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1d0d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0d34: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1d0d34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1d0d38: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x1d0d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d0d3c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1d0d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1d0d40: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1d0d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1d0d44: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d0d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d0d48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d0d4c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1d0d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0d50: 0x0  nop
    ctx->pc = 0x1d0d50u;
    // NOP
    // 0x1d0d54: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1D0D54u;
    {
        const bool branch_taken_0x1d0d54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0d54) {
            ctx->pc = 0x1D0D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0D54u;
            // 0x1d0d58: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0D80u;
            goto label_1d0d80;
        }
    }
    ctx->pc = 0x1D0D5Cu;
    // 0x1d0d5c: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x1d0d5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x1d0d60: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1d0d60u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x1d0d64: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x1d0d64u;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x1d0d68: 0x460020c7  neg.s       $f3, $f4
    ctx->pc = 0x1d0d68u;
    ctx->f[3] = FPU_NEG_S(ctx->f[4]);
    // 0x1d0d6c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1d0d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1d0d70: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1d0d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1d0d74: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1d0d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1d0d78: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x1d0d78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1d0d7c: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x1d0d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0d80:
    // 0x1d0d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d0d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d88: 0xc0f757a  jal         func_3DD5E8
    ctx->pc = 0x1D0D88u;
    SET_GPR_U32(ctx, 31, 0x1D0D90u);
    ctx->pc = 0x1D0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D88u;
    // 0x1d0d8c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD5E8u, 0x1D0D88u, 0x1D0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D90u;
label_1d0d90:
    // 0x1d0d90: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1d0d90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1d0d94: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1d0d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d98: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x1d0d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d0d9c: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x1d0d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1d0da0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1d0da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0da4: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x1d0da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1d0da8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1d0da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0dac: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1d0dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d0db0: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x1d0db0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1d0db4: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x1d0db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d0db8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1d0db8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1d0dbc: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x1d0dbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x1d0dc0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x1d0dc0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x1d0dc4: 0xe6070000  swc1        $f7, 0x0($s0)
    ctx->pc = 0x1d0dc4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d0dc8: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1d0dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d0dcc: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x1d0dccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d0dd0: 0xe604000c  swc1        $f4, 0xC($s0)
    ctx->pc = 0x1d0dd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d0dd4: 0x8ec28e88  lw          $v0, -0x7178($s6)
    ctx->pc = 0x1d0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294938248)));
    // 0x1d0dd8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d0dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d0ddc: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1D0DDCu;
    {
        const bool branch_taken_0x1d0ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DDCu;
        // 0x1d0de0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ddc) {
            ctx->pc = 0x1D0D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0d10;
        }
    }
    ctx->pc = 0x1D0DE4u;
label_1d0de4:
    // 0x1d0de4: 0xc0f756e  jal         func_3DD5B8
    ctx->pc = 0x1D0DE4u;
    SET_GPR_U32(ctx, 31, 0x1D0DECu);
    ctx->pc = 0x1D0DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DE4u;
    // 0x1d0de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD5B8u, 0x1D0DE4u, 0x1D0DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DECu;
label_1d0dec:
    // 0x1d0dec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0df0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d0df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0df4: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1d0df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d0df8: 0x0  nop
    ctx->pc = 0x1d0df8u;
    // NOP
    // 0x1d0dfc: 0x0  nop
    ctx->pc = 0x1d0dfcu;
    // NOP
    // 0x1d0e00: 0x46000856  rsqrt.s     $f1, $f1, $f0
    ctx->pc = 0x1d0e00u;
    ctx->f[1] = FPU_RSQRT_S(ctx->f[1], ctx->f[0]);
    // 0x1d0e04: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1d0e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0e08: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1d0e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d0e0c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1d0e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e10: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1d0e10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1d0e14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d0e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d0e18: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1d0e18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1d0e1c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1d0e1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1d0e20: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x1d0e20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d0e24: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1d0e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d0e28: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1d0e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d0e2c: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x1d0e2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1d0e30:
    // 0x1d0e30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d0e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0e34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d0e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0e38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d0e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0e3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d0e3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d0e40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d0e40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0e44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d0e44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0e48: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d0e48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0e4c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d0e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d0e50: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1d0e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d0e54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E54u;
        // 0x1d0e58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E5Cu;
    // 0x1d0e5c: 0x0  nop
    ctx->pc = 0x1d0e5cu;
    // NOP
    ctx->pc = 0x1d0e60u;
}
