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

// Function: sub_001DDEE0
// Address: 0x1ddee0 - 0x1de090
void sub_001DDEE0_0x1ddee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDEE0_0x1ddee0");
#endif

    switch (ctx->pc) {
        case 0x1ddf44u: goto label_1ddf44;
        case 0x1de044u: goto label_1de044;
        default: break;
    }

    ctx->pc = 0x1ddee0u;

    // 0x1ddee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ddee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ddee4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1ddee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1ddee8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ddee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ddeec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ddeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ddef0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ddef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ddef4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ddef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddef8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ddef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1ddefc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ddefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf00: 0x8c47d9a4  lw          $a3, -0x265C($v0)
    ctx->pc = 0x1ddf00u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x45D9A4u));
    // 0x1ddf04: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1ddf04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf08: 0x8c642b1c  lw          $a0, 0x2B1C($v1)
    ctx->pc = 0x1ddf08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1ddf0c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ddf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ddf10: 0x14870003  bne         $a0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDF10u;
    {
        const bool branch_taken_0x1ddf10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x1DDF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF10u;
        // 0x1ddf14: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf10) {
            ctx->pc = 0x1DDF20u;
            goto label_1ddf20;
        }
    }
    ctx->pc = 0x1DDF18u;
    // 0x1ddf18: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1DDF18u;
    {
        const bool branch_taken_0x1ddf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF18u;
        // 0x1ddf1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf18) {
            ctx->pc = 0x1DE070u;
            goto label_1de070;
        }
    }
    ctx->pc = 0x1DDF20u;
label_1ddf20:
    // 0x1ddf20: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x1ddf20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ddf24: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDF24u;
    {
        const bool branch_taken_0x1ddf24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf24) {
            ctx->pc = 0x1DDF3Cu;
            goto label_1ddf3c;
        }
    }
    ctx->pc = 0x1DDF2Cu;
    // 0x1ddf2c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ddf2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ddf30: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x1ddf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x1ddf34: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1DDF34u;
    {
        const bool branch_taken_0x1ddf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF34u;
        // 0x1ddf38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf34) {
            ctx->pc = 0x1DE070u;
            goto label_1de070;
        }
    }
    ctx->pc = 0x1DDF3Cu;
label_1ddf3c:
    // 0x1ddf3c: 0xc0c350a  jal         func_30D428
    ctx->pc = 0x1DDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1DDF44u);
    ctx->pc = 0x1DDF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF3Cu;
    // 0x1ddf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D428u, 0x1DDF3Cu, 0x1DDF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF44u;
label_1ddf44:
    // 0x1ddf44: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1DDF44u;
    {
        const bool branch_taken_0x1ddf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF44u;
        // 0x1ddf48: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf44) {
            ctx->pc = 0x1DE06Cu;
            goto label_1de06c;
        }
    }
    ctx->pc = 0x1DDF4Cu;
    // 0x1ddf4c: 0x8c4391b8  lw          $v1, -0x6E48($v0)
    ctx->pc = 0x1ddf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939064)));
    // 0x1ddf50: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DDF50u;
    {
        const bool branch_taken_0x1ddf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF50u;
        // 0x1ddf54: 0x8e632b1c  lw          $v1, 0x2B1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf50) {
            ctx->pc = 0x1DDF7Cu;
            goto label_1ddf7c;
        }
    }
    ctx->pc = 0x1DDF58u;
    // 0x1ddf58: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDF58u;
    {
        const bool branch_taken_0x1ddf58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF58u;
        // 0x1ddf5c: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf58) {
            ctx->pc = 0x1DDF78u;
            goto label_1ddf78;
        }
    }
    ctx->pc = 0x1DDF60u;
    // 0x1ddf60: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ddf60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ddf64: 0x24632828  addiu       $v1, $v1, 0x2828
    ctx->pc = 0x1ddf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x1ddf68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddf6c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ddf6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddf70: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1DDF70u;
    {
        const bool branch_taken_0x1ddf70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF70u;
        // 0x1ddf74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf70) {
            ctx->pc = 0x1DE070u;
            goto label_1de070;
        }
    }
    ctx->pc = 0x1DDF78u;
label_1ddf78:
    // 0x1ddf78: 0x8e632b1c  lw          $v1, 0x2B1C($s3)
    ctx->pc = 0x1ddf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11036)));
label_1ddf7c:
    // 0x1ddf7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ddf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ddf80: 0x8c442b20  lw          $a0, 0x2B20($v0)
    ctx->pc = 0x1ddf80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B20u));
    // 0x1ddf84: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1ddf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ddf88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ddf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ddf8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ddf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddf90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ddf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ddf94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ddf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ddf98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1ddf98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddf9c: 0xae632b1c  sw          $v1, 0x2B1C($s3)
    ctx->pc = 0x1ddf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11036), GPR_U32(ctx, 3));
    // 0x1ddfa0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ddfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ddfa4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1ddfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1ddfa8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ddfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ddfac: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1ddfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1ddfb0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ddfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ddfb4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1ddfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1ddfb8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ddfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ddfbc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1ddfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ddfc0: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x1ddfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1ddfc4: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1ddfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1ddfc8: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x1ddfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x1ddfcc: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1ddfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x1ddfd0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ddfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ddfd4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1ddfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1ddfd8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ddfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ddfdc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1ddfdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddfe0: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1ddfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ddfe4: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x1ddfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1ddfe8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1ddfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddfec: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1ddfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ddff0: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1ddff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ddff4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ddff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddff8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1ddff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddffc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1ddffcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1de000: 0xc6440030  lwc1        $f4, 0x30($s2)
    ctx->pc = 0x1de000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1de004: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1de004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1de008: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1de008u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1de00c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1de00cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1de010: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1de010u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1de014: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1de014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1de018: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1de018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1de01c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1de01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1de020: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1de020u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de024: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1de024u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1de028: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1de028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de02c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1de02cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de034: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1de034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1de038: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1de038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1de03c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1DE03Cu;
    SET_GPR_U32(ctx, 31, 0x1DE044u);
    ctx->pc = 0x1DE040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE03Cu;
    // 0x1de040: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1DE03Cu, 0x1DE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE044u;
label_1de044:
    // 0x1de044: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1de044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1de048: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1de048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de04c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1de04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1de050: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1de050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1de054: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1de054u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1de058: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1de058u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1de05c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1de05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1de060: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1de060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de064: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1de064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1de068: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1de068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_1de06c:
    // 0x1de06c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de070:
    // 0x1de070: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1de070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de074: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1de074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de078: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1de078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de07c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1de07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1de080: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1de080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de084: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE084u;
        // 0x1de088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE08Cu;
    // 0x1de08c: 0x0  nop
    ctx->pc = 0x1de08cu;
    // NOP
    ctx->pc = 0x1de090u;
}
