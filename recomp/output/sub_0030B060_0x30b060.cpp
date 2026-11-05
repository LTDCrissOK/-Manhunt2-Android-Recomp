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

// Function: sub_0030B060
// Address: 0x30b060 - 0x30b250
void sub_0030B060_0x30b060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B060_0x30b060");
#endif

    switch (ctx->pc) {
        case 0x30b0d0u: goto label_30b0d0;
        default: break;
    }

    ctx->pc = 0x30b060u;

    // 0x30b060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30b064: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x30b064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b068: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x30b068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x30b06c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30b06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b070: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x30b070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x30b074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30b074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b078: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x30b078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x30b07c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30b080: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x30b080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x30b084: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30b084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b088: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x30b088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30b08c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x30b08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b090: 0xc4540010  lwc1        $f20, 0x10($v0)
    ctx->pc = 0x30b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30b094: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x30b094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b098: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x30b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30b09c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30b09cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b0a0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x30b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30b0a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30b0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b0a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x30b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b0ac: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x30b0acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30b0b0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x30b0b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30b0b4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x30b0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30b0b8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x30b0b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30b0bc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x30b0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30b0c0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x30b0c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30b0c4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30b0c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30b0c8: 0xc0b1ace  jal         func_2C6B38
    ctx->pc = 0x30B0C8u;
    SET_GPR_U32(ctx, 31, 0x30B0D0u);
    ctx->pc = 0x30B0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B0C8u;
    // 0x30b0cc: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x30B0C8u, 0x30B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0D0u;
label_30b0d0:
    // 0x30b0d0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x30b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30b0d4: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x30b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b0d8: 0x461410c0  add.s       $f3, $f2, $f20
    ctx->pc = 0x30b0d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x30b0dc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x30b0dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b0e0: 0x0  nop
    ctx->pc = 0x30b0e0u;
    // NOP
    // 0x30b0e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B0E4u;
    {
        const bool branch_taken_0x30b0e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b0e4) {
            ctx->pc = 0x30B0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B0E4u;
            // 0x30b0e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B0ECu;
            goto label_30b0ec;
        }
    }
    ctx->pc = 0x30B0ECu;
label_30b0ec:
    // 0x30b0ec: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x30b0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x30b0f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x30b0f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b0f4: 0x0  nop
    ctx->pc = 0x30b0f4u;
    // NOP
    // 0x30b0f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B0F8u;
    {
        const bool branch_taken_0x30b0f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b0f8) {
            ctx->pc = 0x30B0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B0F8u;
            // 0x30b0fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B100u;
            goto label_30b100;
        }
    }
    ctx->pc = 0x30B100u;
label_30b100:
    // 0x30b100: 0x46141001  sub.s       $f0, $f2, $f20
    ctx->pc = 0x30b100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x30b104: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x30b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b108: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30b108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b10c: 0x0  nop
    ctx->pc = 0x30b10cu;
    // NOP
    // 0x30b110: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B110u;
    {
        const bool branch_taken_0x30b110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b110) {
            ctx->pc = 0x30B114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B110u;
            // 0x30b114: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B118u;
            goto label_30b118;
        }
    }
    ctx->pc = 0x30B118u;
label_30b118:
    // 0x30b118: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x30b118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b11c: 0x0  nop
    ctx->pc = 0x30b11cu;
    // NOP
    // 0x30b120: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B120u;
    {
        const bool branch_taken_0x30b120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b120) {
            ctx->pc = 0x30B124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B120u;
            // 0x30b124: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B128u;
            goto label_30b128;
        }
    }
    ctx->pc = 0x30B128u;
label_30b128:
    // 0x30b128: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x30b128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30b12c: 0x4600a0c7  neg.s       $f3, $f20
    ctx->pc = 0x30b12cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[20]);
    // 0x30b130: 0xc6010160  lwc1        $f1, 0x160($s0)
    ctx->pc = 0x30b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b134: 0xc6000168  lwc1        $f0, 0x168($s0)
    ctx->pc = 0x30b134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b138: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x30b138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x30b13c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30b13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30b140: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30b140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30b144: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x30b144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b148: 0x0  nop
    ctx->pc = 0x30b148u;
    // NOP
    // 0x30b14c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B14Cu;
    {
        const bool branch_taken_0x30b14c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b14c) {
            ctx->pc = 0x30B150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B14Cu;
            // 0x30b150: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B154u;
            goto label_30b154;
        }
    }
    ctx->pc = 0x30B154u;
label_30b154:
    // 0x30b154: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x30b154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x30b158: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x30b158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30b15c: 0x0  nop
    ctx->pc = 0x30b15cu;
    // NOP
    // 0x30b160: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x30b160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b164: 0x0  nop
    ctx->pc = 0x30b164u;
    // NOP
    // 0x30b168: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B168u;
    {
        const bool branch_taken_0x30b168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b168) {
            ctx->pc = 0x30B16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B168u;
            // 0x30b16c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B170u;
            goto label_30b170;
        }
    }
    ctx->pc = 0x30B170u;
label_30b170:
    // 0x30b170: 0xc6010170  lwc1        $f1, 0x170($s0)
    ctx->pc = 0x30b170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b174: 0xc6000178  lwc1        $f0, 0x178($s0)
    ctx->pc = 0x30b174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b178: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x30b178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x30b17c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30b17cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30b180: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30b180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30b184: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x30b184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b188: 0x0  nop
    ctx->pc = 0x30b188u;
    // NOP
    // 0x30b18c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B18Cu;
    {
        const bool branch_taken_0x30b18c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b18c) {
            ctx->pc = 0x30B190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B18Cu;
            // 0x30b190: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B194u;
            goto label_30b194;
        }
    }
    ctx->pc = 0x30B194u;
label_30b194:
    // 0x30b194: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x30b194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x30b198: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x30b198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b19c: 0x0  nop
    ctx->pc = 0x30b19cu;
    // NOP
    // 0x30b1a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B1A0u;
    {
        const bool branch_taken_0x30b1a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b1a0) {
            ctx->pc = 0x30B1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B1A0u;
            // 0x30b1a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B1A8u;
            goto label_30b1a8;
        }
    }
    ctx->pc = 0x30B1A8u;
label_30b1a8:
    // 0x30b1a8: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x30b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x30b1ac: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x30b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30b1b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b1b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30b1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b1b8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30b1b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30b1bc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x30b1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30b1c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30b1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30b1c4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x30b1c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b1c8: 0x0  nop
    ctx->pc = 0x30b1c8u;
    // NOP
    // 0x30b1cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B1CCu;
    {
        const bool branch_taken_0x30b1cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b1cc) {
            ctx->pc = 0x30B1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B1CCu;
            // 0x30b1d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B1D4u;
            goto label_30b1d4;
        }
    }
    ctx->pc = 0x30B1D4u;
label_30b1d4:
    // 0x30b1d4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x30b1d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x30b1d8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x30b1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b1dc: 0x0  nop
    ctx->pc = 0x30b1dcu;
    // NOP
    // 0x30b1e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B1E0u;
    {
        const bool branch_taken_0x30b1e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b1e0) {
            ctx->pc = 0x30B1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B1E0u;
            // 0x30b1e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B1E8u;
            goto label_30b1e8;
        }
    }
    ctx->pc = 0x30B1E8u;
label_30b1e8:
    // 0x30b1e8: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x30b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x30b1ec: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x30b1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b1f0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x30b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30b1f4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30b1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b1f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30b1f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30b1fc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x30b1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30b200: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30b200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30b204: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x30b204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b208: 0x0  nop
    ctx->pc = 0x30b208u;
    // NOP
    // 0x30b20c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B20Cu;
    {
        const bool branch_taken_0x30b20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b20c) {
            ctx->pc = 0x30B210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B20Cu;
            // 0x30b210: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B214u;
            goto label_30b214;
        }
    }
    ctx->pc = 0x30B214u;
label_30b214:
    // 0x30b214: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x30b214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x30b218: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x30b218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b21c: 0x0  nop
    ctx->pc = 0x30b21cu;
    // NOP
    // 0x30b220: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30B220u;
    {
        const bool branch_taken_0x30b220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b220) {
            ctx->pc = 0x30B224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B220u;
            // 0x30b224: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B228u;
            goto label_30b228;
        }
    }
    ctx->pc = 0x30B228u;
label_30b228:
    // 0x30b228: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30B228u;
    {
        const bool branch_taken_0x30b228 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B228u;
        // 0x30b22c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b228) {
            ctx->pc = 0x30B234u;
            goto label_30b234;
        }
    }
    ctx->pc = 0x30B230u;
    // 0x30b230: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x30b230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_30b234:
    // 0x30b234: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x30b234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b238: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x30b238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30b23c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30b23cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b240: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x30b240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b244: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x30b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30b248: 0x3e00008  jr          $ra
    ctx->pc = 0x30B248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B248u;
        // 0x30b24c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B250u;
}
