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

// Function: sub_0031A088
// Address: 0x31a088 - 0x31a5b0
void sub_0031A088_0x31a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A088_0x31a088");
#endif

    switch (ctx->pc) {
        case 0x31a178u: goto label_31a178;
        case 0x31a1b0u: goto label_31a1b0;
        case 0x31a3c0u: goto label_31a3c0;
        case 0x31a3c8u: goto label_31a3c8;
        case 0x31a500u: goto label_31a500;
        case 0x31a518u: goto label_31a518;
        case 0x31a568u: goto label_31a568;
        default: break;
    }

    ctx->pc = 0x31a088u;

    // 0x31a088: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x31a088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x31a08c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31a090: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31a090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31a094: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x31a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
    // 0x31a098: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x31a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
    // 0x31a09c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x31a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x31a0a0: 0xe7ba01e0  swc1        $f26, 0x1E0($sp)
    ctx->pc = 0x31a0a0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x31a0a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31a0a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a0a8: 0xe7b701c8  swc1        $f23, 0x1C8($sp)
    ctx->pc = 0x31a0a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x31a0ac: 0x24843510  addiu       $a0, $a0, 0x3510
    ctx->pc = 0x31a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13584));
    // 0x31a0b0: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x31a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x31a0b4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x31a0b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a0b8: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x31a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x31a0bc: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x31a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x31a0c0: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x31a0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
    // 0x31a0c4: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x31a0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x31a0c8: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x31a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x31a0cc: 0xe7b901d8  swc1        $f25, 0x1D8($sp)
    ctx->pc = 0x31a0ccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x31a0d0: 0xe7b801d0  swc1        $f24, 0x1D0($sp)
    ctx->pc = 0x31a0d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x31a0d4: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x31a0d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x31a0d8: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x31a0d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x31a0dc: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x31a0dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x31a0e0: 0xac40bd54  sw          $zero, -0x42AC($v0)
    ctx->pc = 0x31a0e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBD54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBD54u, _value); } while (0);
    // 0x31a0e4: 0x8c65bd48  lw          $a1, -0x42B8($v1)
    ctx->pc = 0x31a0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x31a0e8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x31a0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4A3514u));
    // 0x31a0ec: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x31a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x31a0f0: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x31a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x31a0f4: 0xc47a38ec  lwc1        $f26, 0x38EC($v1)
    ctx->pc = 0x31a0f4u;
    { uint32_t bits = FAST_READ32(0x4738ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x31a0f8: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x31a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a0fc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x31a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x31a100: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x31a100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x31a104: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x31a104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x31a108: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x31a108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31a10c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31a10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a110: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x31a110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31a114: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x31a114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a118: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x31a118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31a11c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x31a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a120: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x31a120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x31a124: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x31a124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x31a128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x31a128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x31a12c: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x31a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x31a130: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x31a130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x31a134: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x31a134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x31a138: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x31a138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x31a13c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x31a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x31a140: 0x10c00107  beqz        $a2, . + 4 + (0x107 << 2)
    ctx->pc = 0x31A140u;
    {
        const bool branch_taken_0x31a140 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A140u;
        // 0x31a144: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a140) {
            ctx->pc = 0x31A560u;
            goto label_31a560;
        }
    }
    ctx->pc = 0x31A148u;
    // 0x31a148: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x31a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x31a14c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x31a14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x31a150: 0x3c130100  lui         $s3, 0x100
    ctx->pc = 0x31a150u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)256 << 16));
    // 0x31a154: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x31a154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x31a158: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x31a158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x31a15c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x31a15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x31a160: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x31a160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31a164: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31a164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31a168: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x31a168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x31a16c: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x31a16cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x31a170: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x31a170u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a174: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x31a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_31a178:
    // 0x31a178: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x31a178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a17c: 0x120000eb  beqz        $s0, . + 4 + (0xEB << 2)
    ctx->pc = 0x31A17Cu;
    {
        const bool branch_taken_0x31a17c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a17c) {
            ctx->pc = 0x31A52Cu;
            goto label_31a52c;
        }
    }
    ctx->pc = 0x31A184u;
    // 0x31a184: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x31a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x31a188: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x31a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x31a18c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x31a18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x31a190: 0x145300e6  bne         $v0, $s3, . + 4 + (0xE6 << 2)
    ctx->pc = 0x31A190u;
    {
        const bool branch_taken_0x31a190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x31A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A190u;
        // 0x31a194: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a190) {
            ctx->pc = 0x31A52Cu;
            goto label_31a52c;
        }
    }
    ctx->pc = 0x31A198u;
    // 0x31a198: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x31a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x31a19c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31a19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a1a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31a1a4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x31a1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a1a8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x31A1A8u;
    SET_GPR_U32(ctx, 31, 0x31A1B0u);
    ctx->pc = 0x31A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A1A8u;
    // 0x31a1ac: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x31A1A8u, 0x31A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A1B0u;
label_31a1b0:
    // 0x31a1b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31a1b4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x31a1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a1b8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x31a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a1bc: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x31a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31a1c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x31a1c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x31a1c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x31a1c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x31a1c8: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x31a1c8u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x31a1cc: 0x461aa834  c.lt.s      $f21, $f26
    ctx->pc = 0x31a1ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a1d0: 0x0  nop
    ctx->pc = 0x31a1d0u;
    // NOP
    // 0x31a1d4: 0x450000d5  bc1f        . + 4 + (0xD5 << 2)
    ctx->pc = 0x31A1D4u;
    {
        const bool branch_taken_0x31a1d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1D4u;
        // 0x31a1d8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1d4) {
            ctx->pc = 0x31A52Cu;
            goto label_31a52c;
        }
    }
    ctx->pc = 0x31A1DCu;
    // 0x31a1dc: 0x4617a834  c.lt.s      $f21, $f23
    ctx->pc = 0x31a1dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a1e0: 0x0  nop
    ctx->pc = 0x31a1e0u;
    // NOP
    // 0x31a1e4: 0x450000d0  bc1f        . + 4 + (0xD0 << 2)
    ctx->pc = 0x31A1E4u;
    {
        const bool branch_taken_0x31a1e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1E4u;
        // 0x31a1e8: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1e4) {
            ctx->pc = 0x31A528u;
            goto label_31a528;
        }
    }
    ctx->pc = 0x31A1ECu;
    // 0x31a1ec: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x31a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a1f0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x31a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a1f4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x31a1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31a1f8: 0x46190180  add.s       $f6, $f0, $f25
    ctx->pc = 0x31a1f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x31a1fc: 0x8ea4bd48  lw          $a0, -0x42B8($s5)
    ctx->pc = 0x31a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950216)));
    // 0x31a200: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a204: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x31a204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x31a208: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x31a208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a20c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x31a20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31a210: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x31a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a214: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x31a214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x31a218: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x31a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x31a21c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a220: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x31a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a224: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x31a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x31a228: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x31a228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31a22c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x31a22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a230: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x31a230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x31a234: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x31a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a238: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x31a238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x31a23c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x31a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a240: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x31a240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x31a244: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x31a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x31a248: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x31a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a24c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x31a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x31a250: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x31a250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x31a254: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a258: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x31a258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x31a25c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x31a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a260: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x31a260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x31a264: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x31a264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a268: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x31a268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x31a26c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31a26cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a270: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x31a270u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31a274: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31a274u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31a278: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x31a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a27c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x31a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a280: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x31a280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31a284: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x31a284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a288: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x31a288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a28c: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x31a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31a290: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31a294: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x31a294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a298: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x31a298u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a29c: 0xe7a4006c  swc1        $f4, 0x6C($sp)
    ctx->pc = 0x31a29cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a2a0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x31a2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a2a4: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x31a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a2a8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x31a2a8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x31a2ac: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x31a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a2b0: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x31a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a2b4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x31a2b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x31a2b8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x31a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a2bc: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x31a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a2c0: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x31a2c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x31a2c4: 0x4604c834  c.lt.s      $f25, $f4
    ctx->pc = 0x31a2c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a2c8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x31a2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x31a2cc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x31a2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x31a2d0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x31A2D0u;
    {
        const bool branch_taken_0x31a2d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2D0u;
        // 0x31a2d4: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2d0) {
            ctx->pc = 0x31A2E4u;
            goto label_31a2e4;
        }
    }
    ctx->pc = 0x31A2D8u;
    // 0x31a2d8: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x31a2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
    // 0x31a2dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x31a2dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x31a2e0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x31a2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_31a2e4:
    // 0x31a2e4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x31a2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a2e8: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x31a2e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x31a2ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x31a2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a2f0: 0x0  nop
    ctx->pc = 0x31a2f0u;
    // NOP
    // 0x31a2f4: 0x4500008d  bc1f        . + 4 + (0x8D << 2)
    ctx->pc = 0x31A2F4u;
    {
        const bool branch_taken_0x31a2f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2F4u;
        // 0x31a2f8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2f4) {
            ctx->pc = 0x31A52Cu;
            goto label_31a52c;
        }
    }
    ctx->pc = 0x31A2FCu;
    // 0x31a2fc: 0x46060801  sub.s       $f0, $f1, $f6
    ctx->pc = 0x31a2fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x31a300: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x31a300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a304: 0x0  nop
    ctx->pc = 0x31a304u;
    // NOP
    // 0x31a308: 0x45000087  bc1f        . + 4 + (0x87 << 2)
    ctx->pc = 0x31A308u;
    {
        const bool branch_taken_0x31a308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A308u;
        // 0x31a30c: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a308) {
            ctx->pc = 0x31A528u;
            goto label_31a528;
        }
    }
    ctx->pc = 0x31A310u;
    // 0x31a310: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x31a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a314: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x31a314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a318: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x31a318u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x31a31c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x31a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a320: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x31a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a324: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x31a324u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x31a328: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x31a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a32c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x31a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a330: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x31a330u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x31a334: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x31a334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a338: 0x0  nop
    ctx->pc = 0x31a338u;
    // NOP
    // 0x31a33c: 0x4500007b  bc1f        . + 4 + (0x7B << 2)
    ctx->pc = 0x31A33Cu;
    {
        const bool branch_taken_0x31a33c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A33Cu;
        // 0x31a340: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a33c) {
            ctx->pc = 0x31A52Cu;
            goto label_31a52c;
        }
    }
    ctx->pc = 0x31A344u;
    // 0x31a344: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x31a344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31a348: 0x0  nop
    ctx->pc = 0x31a348u;
    // NOP
    // 0x31a34c: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x31a34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a350: 0x0  nop
    ctx->pc = 0x31a350u;
    // NOP
    // 0x31a354: 0x45000075  bc1f        . + 4 + (0x75 << 2)
    ctx->pc = 0x31A354u;
    {
        const bool branch_taken_0x31a354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A354u;
        // 0x31a358: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a354) {
            ctx->pc = 0x31A52Cu;
            goto label_31a52c;
        }
    }
    ctx->pc = 0x31A35Cu;
    // 0x31a35c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x31a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a360: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x31a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a364: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x31a364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x31a368: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x31a368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a36c: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x31a36cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x31a370: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x31a370u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x31a374: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x31a374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x31a378: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x31a378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x31a37c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x31a37cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x31a380: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x31a380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x31a384: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x31a384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x31a388: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x31a388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31a38c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x31a38cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a390: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31a390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31a394: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x31a394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a398: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x31a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a39c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x31a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x31a3a0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x31a3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a3a4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x31a3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a3a8: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x31a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a3ac: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x31a3acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x31a3b0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x31a3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x31a3b4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x31a3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x31a3b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31A3B8u;
    SET_GPR_U32(ctx, 31, 0x31A3C0u);
    ctx->pc = 0x31A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3B8u;
    // 0x31a3bc: 0xe7a2007c  swc1        $f2, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31A3B8u, 0x31A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3C0u;
label_31a3c0:
    // 0x31a3c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31A3C0u;
    SET_GPR_U32(ctx, 31, 0x31A3C8u);
    ctx->pc = 0x31A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3C0u;
    // 0x31a3c4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31A3C0u, 0x31A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3C8u;
label_31a3c8:
    // 0x31a3c8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x31a3c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x31a3cc: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x31a3ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x31a3d0: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x31a3d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x31a3d4: 0xe7b4008c  swc1        $f20, 0x8C($sp)
    ctx->pc = 0x31a3d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x31a3d8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x31a3d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31a3dc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x31a3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x31a3e0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x31a3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x31a3e4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31a3e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a3e8: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x31a3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a3ec: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x31a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x31a3f0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x31a3f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x31a3f4: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x31a3f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x31a3f8: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x31a3f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x31a3fc: 0xe7b4008c  swc1        $f20, 0x8C($sp)
    ctx->pc = 0x31a3fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x31a400: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31a400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a404: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x31a404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a408: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x31a408u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a40c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x31a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31a410: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x31a410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x31a414: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x31a414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x31a418: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x31a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x31a41c: 0xe7b400f4  swc1        $f20, 0xF4($sp)
    ctx->pc = 0x31a41cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x31a420: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x31a420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31a424: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x31a424u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a428: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31a428u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31a42c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x31a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a430: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x31a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a434: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x31a434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a438: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x31a438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31a43c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x31a43cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x31a440: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x31a440u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x31a444: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x31a444u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x31a448: 0x0  nop
    ctx->pc = 0x31a448u;
    // NOP
    // 0x31a44c: 0x0  nop
    ctx->pc = 0x31a44cu;
    // NOP
    // 0x31a450: 0x46000044  c1          0x44
    ctx->pc = 0x31a450u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x31a454: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x31a454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x31a458: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x31a458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a45c: 0x0  nop
    ctx->pc = 0x31a45cu;
    // NOP
    // 0x31a460: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x31A460u;
    {
        const bool branch_taken_0x31a460 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A460u;
        // 0x31a464: 0xe7a100f0  swc1        $f1, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a460) {
            ctx->pc = 0x31A488u;
            goto label_31a488;
        }
    }
    ctx->pc = 0x31A468u;
    // 0x31a468: 0x0  nop
    ctx->pc = 0x31a468u;
    // NOP
    // 0x31a46c: 0x0  nop
    ctx->pc = 0x31a46cu;
    // NOP
    // 0x31a470: 0x4601c003  div.s       $f0, $f24, $f1
    ctx->pc = 0x31a470u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[1]); }
    // 0x31a474: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31a474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31a478: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x31a478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31a47c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x31a47cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x31a480: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x31a480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31a484: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x31a484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_31a488:
    // 0x31a488: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x31a488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31a48c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x31a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x31a490: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x31a490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31a494: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x31a494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a498: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31a498u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31a49c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x31a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a4a0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x31a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a4a4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x31a4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a4a8: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x31a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31a4ac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x31a4acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x31a4b0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x31a4b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x31a4b4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x31a4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x31a4b8: 0x0  nop
    ctx->pc = 0x31a4b8u;
    // NOP
    // 0x31a4bc: 0x0  nop
    ctx->pc = 0x31a4bcu;
    // NOP
    // 0x31a4c0: 0x46000044  c1          0x44
    ctx->pc = 0x31a4c0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x31a4c4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x31a4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x31a4c8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x31a4c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a4cc: 0x0  nop
    ctx->pc = 0x31a4ccu;
    // NOP
    // 0x31a4d0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x31A4D0u;
    {
        const bool branch_taken_0x31a4d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4D0u;
        // 0x31a4d4: 0xe7a100f0  swc1        $f1, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a4d0) {
            ctx->pc = 0x31A4F8u;
            goto label_31a4f8;
        }
    }
    ctx->pc = 0x31A4D8u;
    // 0x31a4d8: 0x0  nop
    ctx->pc = 0x31a4d8u;
    // NOP
    // 0x31a4dc: 0x0  nop
    ctx->pc = 0x31a4dcu;
    // NOP
    // 0x31a4e0: 0x4601c003  div.s       $f0, $f24, $f1
    ctx->pc = 0x31a4e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[1]); }
    // 0x31a4e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31a4e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31a4e8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x31a4e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31a4ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x31a4ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x31a4f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x31a4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31a4f4: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x31a4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_31a4f8:
    // 0x31a4f8: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x31A4F8u;
    SET_GPR_U32(ctx, 31, 0x31A500u);
    ctx->pc = 0x31A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4F8u;
    // 0x31a4fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x31A4F8u, 0x31A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A500u;
label_31a500:
    // 0x31a500: 0x4617b800  add.s       $f0, $f23, $f23
    ctx->pc = 0x31a500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
    // 0x31a504: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x31a504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31a508: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31a508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a50c: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x31a50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x31a510: 0xc0779da  jal         func_1DE768
    ctx->pc = 0x31A510u;
    SET_GPR_U32(ctx, 31, 0x31A518u);
    ctx->pc = 0x31A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A510u;
    // 0x31a514: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE768u, 0x31A510u, 0x31A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A518u;
label_31a518:
    // 0x31a518: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A518u;
    {
        const bool branch_taken_0x31a518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A518u;
        // 0x31a51c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a518) {
            ctx->pc = 0x31A52Cu;
            goto label_31a52c;
        }
    }
    ctx->pc = 0x31A520u;
    // 0x31a520: 0xaed0bd54  sw          $s0, -0x42AC($s6)
    ctx->pc = 0x31a520u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294950228), GPR_U32(ctx, 16));
    // 0x31a524: 0x4600ae86  mov.s       $f26, $f21
    ctx->pc = 0x31a524u;
    ctx->f[26] = FPU_MOV_S(ctx->f[21]);
label_31a528:
    // 0x31a528: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x31a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_31a52c:
    // 0x31a52c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A52Cu;
    {
        const bool branch_taken_0x31a52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a52c) {
            ctx->pc = 0x31A530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A52Cu;
            // 0x31a530: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A540u;
            goto label_31a540;
        }
    }
    ctx->pc = 0x31A534u;
    // 0x31a534: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x31a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x31a538: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31A538u;
    {
        const bool branch_taken_0x31a538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A538u;
        // 0x31a53c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a538) {
            ctx->pc = 0x31A550u;
            goto label_31a550;
        }
    }
    ctx->pc = 0x31A540u;
label_31a540:
    // 0x31a540: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A540u;
    {
        const bool branch_taken_0x31a540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A540u;
        // 0x31a544: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a540) {
            ctx->pc = 0x31A554u;
            goto label_31a554;
        }
    }
    ctx->pc = 0x31A548u;
    // 0x31a548: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x31a548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x31a54c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x31a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_31a550:
    // 0x31a550: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x31a550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_31a554:
    // 0x31a554: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x31a554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x31a558: 0x1462ff07  bne         $v1, $v0, . + 4 + (-0xF9 << 2)
    ctx->pc = 0x31A558u;
    {
        const bool branch_taken_0x31a558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A558u;
        // 0x31a55c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a558) {
            ctx->pc = 0x31A178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a178;
        }
    }
    ctx->pc = 0x31A560u;
label_31a560:
    // 0x31a560: 0xc0c696c  jal         func_31A5B0
    ctx->pc = 0x31A560u;
    SET_GPR_U32(ctx, 31, 0x31A568u);
    ctx->pc = 0x31A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A5B0u, 0x31A560u, 0x31A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A568u;
label_31a568:
    // 0x31a568: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x31a568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x31a56c: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x31a56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x31a570: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x31a570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x31a574: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x31a574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x31a578: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x31a578u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x31a57c: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x31a57cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x31a580: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x31a580u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x31a584: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x31a584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x31a588: 0xc7ba01e0  lwc1        $f26, 0x1E0($sp)
    ctx->pc = 0x31a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x31a58c: 0xc7b901d8  lwc1        $f25, 0x1D8($sp)
    ctx->pc = 0x31a58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x31a590: 0xc7b801d0  lwc1        $f24, 0x1D0($sp)
    ctx->pc = 0x31a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x31a594: 0xc7b701c8  lwc1        $f23, 0x1C8($sp)
    ctx->pc = 0x31a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x31a598: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x31a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31a59c: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x31a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31a5a0: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x31a5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31a5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x31A5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5A4u;
        // 0x31a5a8: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A5ACu;
    // 0x31a5ac: 0x0  nop
    ctx->pc = 0x31a5acu;
    // NOP
    ctx->pc = 0x31a5b0u;
}
