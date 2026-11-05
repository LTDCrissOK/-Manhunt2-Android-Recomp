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

// Function: sub_0028E008
// Address: 0x28e008 - 0x28e248
void sub_0028E008_0x28e008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E008_0x28e008");
#endif

    switch (ctx->pc) {
        case 0x28e038u: goto label_28e038;
        case 0x28e074u: goto label_28e074;
        case 0x28e110u: goto label_28e110;
        case 0x28e14cu: goto label_28e14c;
        case 0x28e178u: goto label_28e178;
        case 0x28e188u: goto label_28e188;
        case 0x28e1ecu: goto label_28e1ec;
        case 0x28e22cu: goto label_28e22c;
        default: break;
    }

    ctx->pc = 0x28e008u;

    // 0x28e008: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28e008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28e00c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x28e00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x28e010: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x28e010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x28e014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28e014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e018: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x28e018u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28e01c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28e01cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e020: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28e020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28e024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e028: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x28e028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28e02c: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x28e02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e030: 0xc0a2ebc  jal         func_28BAF0
    ctx->pc = 0x28E030u;
    SET_GPR_U32(ctx, 31, 0x28E038u);
    ctx->pc = 0x28E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E030u;
    // 0x28e034: 0xc62d0018  lwc1        $f13, 0x18($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BAF0u, 0x28E030u, 0x28E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E038u;
label_28e038:
    // 0x28e038: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28e038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28e03c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x28e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28e040: 0x8ca2bd50  lw          $v0, -0x42B0($a1)
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x28e044: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x28e044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x28e048: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x28e048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28e04c: 0xc4ac0070  lwc1        $f12, 0x70($a1)
    ctx->pc = 0x28e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e050: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x28e050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x28e054: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x28e054u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28e058: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x28e058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e05c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x28e05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28e060: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x28e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e064: 0xe7ad0018  swc1        $f13, 0x18($sp)
    ctx->pc = 0x28e064u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28e068: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x28e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e06c: 0xc0a2ebc  jal         func_28BAF0
    ctx->pc = 0x28E06Cu;
    SET_GPR_U32(ctx, 31, 0x28E074u);
    ctx->pc = 0x28E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E06Cu;
    // 0x28e070: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BAF0u, 0x28E06Cu, 0x28E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E074u;
label_28e074:
    // 0x28e074: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x28e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e078: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x28e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e07c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28e07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e080: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x28e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e084: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x28e084u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e088: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x28e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e08c: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x28e08cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x28e090: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28e090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28e094: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28e094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28e098: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x28e098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x28e09c: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x28e09cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28e0a0: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x28e0a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x28e0a4: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x28e0a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28e0a8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x28e0a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x28e0ac: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x28e0acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28e0b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28e0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28e0b4: 0x0  nop
    ctx->pc = 0x28e0b4u;
    // NOP
    // 0x28e0b8: 0x0  nop
    ctx->pc = 0x28e0b8u;
    // NOP
    // 0x28e0bc: 0x46000544  c1          0x544
    ctx->pc = 0x28e0bcu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x28e0c0: 0x46152034  c.lt.s      $f4, $f21
    ctx->pc = 0x28e0c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e0c4: 0x0  nop
    ctx->pc = 0x28e0c4u;
    // NOP
    // 0x28e0c8: 0x45010058  bc1t        . + 4 + (0x58 << 2)
    ctx->pc = 0x28E0C8u;
    {
        const bool branch_taken_0x28e0c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0C8u;
        // 0x28e0cc: 0xe7a30004  swc1        $f3, 0x4($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0c8) {
            ctx->pc = 0x28E22Cu;
            goto label_28e22c;
        }
    }
    ctx->pc = 0x28E0D0u;
    // 0x28e0d0: 0x46151036  c.le.s      $f2, $f21
    ctx->pc = 0x28e0d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e0d4: 0x0  nop
    ctx->pc = 0x28e0d4u;
    // NOP
    // 0x28e0d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28E0D8u;
    {
        const bool branch_taken_0x28e0d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e0d8) {
            ctx->pc = 0x28E0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E0D8u;
            // 0x28e0dc: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E0E0u;
            goto label_28e0e0;
        }
    }
    ctx->pc = 0x28E0E0u;
label_28e0e0:
    // 0x28e0e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28e0e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e0e4: 0x0  nop
    ctx->pc = 0x28e0e4u;
    // NOP
    // 0x28e0e8: 0x46002832  c.eq.s      $f5, $f0
    ctx->pc = 0x28e0e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e0ec: 0x0  nop
    ctx->pc = 0x28e0ecu;
    // NOP
    // 0x28e0f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x28E0F0u;
    {
        const bool branch_taken_0x28e0f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e0f0) {
            ctx->pc = 0x28E108u;
            goto label_28e108;
        }
    }
    ctx->pc = 0x28E0F8u;
    // 0x28e0f8: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x28e0f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e0fc: 0x0  nop
    ctx->pc = 0x28e0fcu;
    // NOP
    // 0x28e100: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x28E100u;
    {
        const bool branch_taken_0x28e100 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E100u;
        // 0x28e104: 0xc7ae0004  lwc1        $f14, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e100) {
            ctx->pc = 0x28E13Cu;
            goto label_28e13c;
        }
    }
    ctx->pc = 0x28E108u;
label_28e108:
    // 0x28e108: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x28E108u;
    SET_GPR_U32(ctx, 31, 0x28E110u);
    ctx->pc = 0x28E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E108u;
    // 0x28e10c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x28E108u, 0x28E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E110u;
label_28e110:
    // 0x28e110: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x28e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e114: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x28e114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e118: 0x0  nop
    ctx->pc = 0x28e118u;
    // NOP
    // 0x28e11c: 0x0  nop
    ctx->pc = 0x28e11cu;
    // NOP
    // 0x28e120: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x28e120u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28e124: 0x0  nop
    ctx->pc = 0x28e124u;
    // NOP
    // 0x28e128: 0x0  nop
    ctx->pc = 0x28e128u;
    // NOP
    // 0x28e12c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x28e12cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x28e130: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28e130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28e134: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x28e134u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28e138: 0xc7ae0004  lwc1        $f14, 0x4($sp)
    ctx->pc = 0x28e138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_28e13c:
    // 0x28e13c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x28e13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e140: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28e140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28e144: 0xc0a2f26  jal         func_28BC98
    ctx->pc = 0x28E144u;
    SET_GPR_U32(ctx, 31, 0x28E14Cu);
    ctx->pc = 0x28E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E144u;
    // 0x28e148: 0x46007387  neg.s       $f14, $f14 (Delay Slot)
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BC98u, 0x28E144u, 0x28E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E14Cu;
label_28e14c:
    // 0x28e14c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x28e14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e150: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x28e150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x28e154: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28e154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28e158: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x28e158u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28e15c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x28e15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x28e160: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x28e160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x28e164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28e164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e168: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x28e168u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x28e16c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x28e16cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28e170: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x28E170u;
    SET_GPR_U32(ctx, 31, 0x28E178u);
    ctx->pc = 0x28E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E170u;
    // 0x28e174: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x28E170u, 0x28E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E178u;
label_28e178:
    // 0x28e178: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x28e178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x28e17c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28e17cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28e180: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x28E180u;
    SET_GPR_U32(ctx, 31, 0x28E188u);
    ctx->pc = 0x28E184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E180u;
    // 0x28e184: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x28E180u, 0x28E188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E188u;
label_28e188:
    // 0x28e188: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x28e188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x28e18c: 0xc6140010  lwc1        $f20, 0x10($s0)
    ctx->pc = 0x28e18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e190: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x28e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e194: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x28e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e198: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x28e198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e19c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x28e19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x28e1a0: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x28e1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e1a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28e1a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28e1a8: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x28e1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e1ac: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x28e1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28e1b0: 0x0  nop
    ctx->pc = 0x28e1b0u;
    // NOP
    // 0x28e1b4: 0x0  nop
    ctx->pc = 0x28e1b4u;
    // NOP
    // 0x28e1b8: 0x4603a503  div.s       $f20, $f20, $f3
    ctx->pc = 0x28e1b8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[3]); }
    // 0x28e1bc: 0x0  nop
    ctx->pc = 0x28e1bcu;
    // NOP
    // 0x28e1c0: 0x0  nop
    ctx->pc = 0x28e1c0u;
    // NOP
    // 0x28e1c4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x28e1c4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x28e1c8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x28e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e1cc: 0x0  nop
    ctx->pc = 0x28e1ccu;
    // NOP
    // 0x28e1d0: 0x0  nop
    ctx->pc = 0x28e1d0u;
    // NOP
    // 0x28e1d4: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x28e1d4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x28e1d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28e1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28e1dc: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x28e1dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x28e1e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28e1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28e1e4: 0xc0a34b4  jal         func_28D2D0
    ctx->pc = 0x28E1E4u;
    SET_GPR_U32(ctx, 31, 0x28E1ECu);
    ctx->pc = 0x28E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E1E4u;
    // 0x28e1e8: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2D0u, 0x28E1E4u, 0x28E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1ECu;
label_28e1ec:
    // 0x28e1ec: 0x8a230033  lwl         $v1, 0x33($s1)
    ctx->pc = 0x28e1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x28e1f0: 0x9a230030  lwr         $v1, 0x30($s1)
    ctx->pc = 0x28e1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x28e1f4: 0xaba30033  swl         $v1, 0x33($sp)
    ctx->pc = 0x28e1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28e1f8: 0xbba30030  swr         $v1, 0x30($sp)
    ctx->pc = 0x28e1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28e1fc: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x28e1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28e200: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e204: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x28e204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x28e208: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28e208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e20c: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x28e20cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e210: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28e210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28e214: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x28e214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e218: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28e218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e21c: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x28e21cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x28e220: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28e220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e224: 0xc0a2f6a  jal         func_28BDA8
    ctx->pc = 0x28E224u;
    SET_GPR_U32(ctx, 31, 0x28E22Cu);
    ctx->pc = 0x28E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E224u;
    // 0x28e228: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BDA8u, 0x28E224u, 0x28E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E22Cu;
label_28e22c:
    // 0x28e22c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x28e22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e230: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x28e230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28e234: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28e234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e238: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x28e238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28e23c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x28e23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e240: 0x3e00008  jr          $ra
    ctx->pc = 0x28E240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E240u;
        // 0x28e244: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E248u;
}
