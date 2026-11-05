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

// Function: sub_001EEFC0
// Address: 0x1eefc0 - 0x1ef1f8
void sub_001EEFC0_0x1eefc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEFC0_0x1eefc0");
#endif

    switch (ctx->pc) {
        case 0x1ef0b8u: goto label_1ef0b8;
        case 0x1ef1e0u: goto label_1ef1e0;
        default: break;
    }

    ctx->pc = 0x1eefc0u;

    // 0x1eefc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eefc4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1eefc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eefc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eefc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eefcc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1eefccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eefd0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1eefd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1eefd4: 0x8c6215e8  lw          $v0, 0x15E8($v1)
    ctx->pc = 0x1eefd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5608)));
    // 0x1eefd8: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1EEFD8u;
    {
        const bool branch_taken_0x1eefd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFD8u;
        // 0x1eefdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefd8) {
            ctx->pc = 0x1EF1ECu;
            goto label_1ef1ec;
        }
    }
    ctx->pc = 0x1EEFE0u;
    // 0x1eefe0: 0xc4621528  lwc1        $f2, 0x1528($v1)
    ctx->pc = 0x1eefe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eefe4: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1eefe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eefe8: 0x0  nop
    ctx->pc = 0x1eefe8u;
    // NOP
    // 0x1eefec: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1EEFECu;
    {
        const bool branch_taken_0x1eefec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFECu;
        // 0x1eeff0: 0x34029438  ori         $v0, $zero, 0x9438 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37944);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefec) {
            ctx->pc = 0x1EF058u;
            goto label_1ef058;
        }
    }
    ctx->pc = 0x1EEFF4u;
    // 0x1eeff4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1eeff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1eeff8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1eeff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1eeffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eeffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef000: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1ef000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1ef004: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ef004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef008: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1ef008u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ef00c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1ef00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef010: 0x0  nop
    ctx->pc = 0x1ef010u;
    // NOP
    // 0x1ef014: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF014u;
    {
        const bool branch_taken_0x1ef014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF014u;
        // 0x1ef018: 0x34039438  ori         $v1, $zero, 0x9438 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37944);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef014) {
            ctx->pc = 0x1EF030u;
            goto label_1ef030;
        }
    }
    ctx->pc = 0x1EF01Cu;
    // 0x1ef01c: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1ef01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
    // 0x1ef020: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1ef020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1ef024: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ef024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ef028: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EF028u;
    {
        const bool branch_taken_0x1ef028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef028) {
            ctx->pc = 0x1EF05Cu;
            goto label_1ef05c;
        }
    }
    ctx->pc = 0x1EF030u;
label_1ef030:
    // 0x1ef030: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ef030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1ef034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef038: 0x0  nop
    ctx->pc = 0x1ef038u;
    // NOP
    // 0x1ef03c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1ef03cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef040: 0x0  nop
    ctx->pc = 0x1ef040u;
    // NOP
    // 0x1ef044: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF044u;
    {
        const bool branch_taken_0x1ef044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF044u;
        // 0x1ef048: 0x34029438  ori         $v0, $zero, 0x9438 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37944);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef044) {
            ctx->pc = 0x1EF058u;
            goto label_1ef058;
        }
    }
    ctx->pc = 0x1EF04Cu;
    // 0x1ef04c: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1ef04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x1ef050: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1ef050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1ef054: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ef054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ef058:
    // 0x1ef058: 0x34039438  ori         $v1, $zero, 0x9438
    ctx->pc = 0x1ef058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37944);
label_1ef05c:
    // 0x1ef05c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1ef05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ef060: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1ef060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1ef064: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ef064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ef068: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ef068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1ef06c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ef06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1ef070: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x1ef070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x1ef074: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ef074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1ef078: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef07c: 0x3c013d63  lui         $at, 0x3D63
    ctx->pc = 0x1ef07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15715 << 16));
    // 0x1ef080: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x1ef080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x1ef084: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ef084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1ef088: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1ef088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1ef08c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef090: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ef090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1ef094: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1ef094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1ef098: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1ef098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1ef09c: 0x3c013e28  lui         $at, 0x3E28
    ctx->pc = 0x1ef09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15912 << 16));
    // 0x1ef0a0: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ef0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1ef0a4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ef0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1ef0a8: 0x3c013da8  lui         $at, 0x3DA8
    ctx->pc = 0x1ef0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15784 << 16));
    // 0x1ef0ac: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ef0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1ef0b0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ef0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1ef0b4: 0x0  nop
    ctx->pc = 0x1ef0b4u;
    // NOP
label_1ef0b8:
    // 0x1ef0b8: 0xc481ffb0  lwc1        $f1, -0x50($a0)
    ctx->pc = 0x1ef0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef0bc: 0x46013834  c.lt.s      $f7, $f1
    ctx->pc = 0x1ef0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef0c0: 0x0  nop
    ctx->pc = 0x1ef0c0u;
    // NOP
    // 0x1ef0c4: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x1EF0C4u;
    {
        const bool branch_taken_0x1ef0c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef0c4) {
            ctx->pc = 0x1EF0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF0C4u;
            // 0x1ef0c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF168u;
            goto label_1ef168;
        }
    }
    ctx->pc = 0x1EF0CCu;
    // 0x1ef0cc: 0xc480ffd8  lwc1        $f0, -0x28($a0)
    ctx->pc = 0x1ef0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef0d0: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x1ef0d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef0d4: 0x0  nop
    ctx->pc = 0x1ef0d4u;
    // NOP
    // 0x1ef0d8: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1EF0D8u;
    {
        const bool branch_taken_0x1ef0d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0D8u;
        // 0x1ef0dc: 0x2462000a  addiu       $v0, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0d8) {
            ctx->pc = 0x1EF164u;
            goto label_1ef164;
        }
    }
    ctx->pc = 0x1EF0E0u;
    // 0x1ef0e0: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1ef0e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef0e4: 0x460b1034  c.lt.s      $f2, $f11
    ctx->pc = 0x1ef0e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef0e8: 0x0  nop
    ctx->pc = 0x1ef0e8u;
    // NOP
    // 0x1ef0ec: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x1EF0ECu;
    {
        const bool branch_taken_0x1ef0ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef0ec) {
            ctx->pc = 0x1EF0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF0ECu;
            // 0x1ef0f0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF168u;
            goto label_1ef168;
        }
    }
    ctx->pc = 0x1EF0F4u;
    // 0x1ef0f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1ef0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef0f8: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x1ef0f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef0fc: 0x0  nop
    ctx->pc = 0x1ef0fcu;
    // NOP
    // 0x1ef100: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF100u;
    {
        const bool branch_taken_0x1ef100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef100) {
            ctx->pc = 0x1EF114u;
            goto label_1ef114;
        }
    }
    ctx->pc = 0x1EF108u;
    // 0x1ef108: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1ef108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1ef10c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF10Cu;
    {
        const bool branch_taken_0x1ef10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF10Cu;
        // 0x1ef110: 0x46002041  sub.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef10c) {
            ctx->pc = 0x1EF118u;
            goto label_1ef118;
        }
    }
    ctx->pc = 0x1EF114u;
label_1ef114:
    // 0x1ef114: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ef114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ef118:
    // 0x1ef118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ef118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ef11c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ef11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ef120: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ef120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef124: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x1ef124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef128: 0x0  nop
    ctx->pc = 0x1ef128u;
    // NOP
    // 0x1ef12c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF12Cu;
    {
        const bool branch_taken_0x1ef12c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef12c) {
            ctx->pc = 0x1EF140u;
            goto label_1ef140;
        }
    }
    ctx->pc = 0x1EF134u;
    // 0x1ef134: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1ef134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1ef138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF138u;
    {
        const bool branch_taken_0x1ef138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF138u;
        // 0x1ef13c: 0x46002001  sub.s       $f0, $f4, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef138) {
            ctx->pc = 0x1EF144u;
            goto label_1ef144;
        }
    }
    ctx->pc = 0x1EF140u;
label_1ef140:
    // 0x1ef140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef144:
    // 0x1ef144: 0x460a1034  c.lt.s      $f2, $f10
    ctx->pc = 0x1ef144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef148: 0x0  nop
    ctx->pc = 0x1ef148u;
    // NOP
    // 0x1ef14c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF14Cu;
    {
        const bool branch_taken_0x1ef14c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF14Cu;
        // 0x1ef150: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef14c) {
            ctx->pc = 0x1EF15Cu;
            goto label_1ef15c;
        }
    }
    ctx->pc = 0x1EF154u;
    // 0x1ef154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF154u;
    {
        const bool branch_taken_0x1ef154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF154u;
        // 0x1ef158: 0x46090002  mul.s       $f0, $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef154) {
            ctx->pc = 0x1EF160u;
            goto label_1ef160;
        }
    }
    ctx->pc = 0x1EF15Cu;
label_1ef15c:
    // 0x1ef15c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x1ef15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_1ef160:
    // 0x1ef160: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1ef160u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1ef164:
    // 0x1ef164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ef164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ef168:
    // 0x1ef168: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1ef168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ef16c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1EF16Cu;
    {
        const bool branch_taken_0x1ef16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF16Cu;
        // 0x1ef170: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef16c) {
            ctx->pc = 0x1EF0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef0b8;
        }
    }
    ctx->pc = 0x1EF174u;
    // 0x1ef174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef17c: 0x0  nop
    ctx->pc = 0x1ef17cu;
    // NOP
    // 0x1ef180: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1ef180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef184: 0x0  nop
    ctx->pc = 0x1ef184u;
    // NOP
    // 0x1ef188: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EF188u;
    {
        const bool branch_taken_0x1ef188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef188) {
            ctx->pc = 0x1EF18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF188u;
            // 0x1ef18c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF190u;
            goto label_1ef190;
        }
    }
    ctx->pc = 0x1EF190u;
label_1ef190:
    // 0x1ef190: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x1ef190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x1ef194: 0x244221e8  addiu       $v0, $v0, 0x21E8
    ctx->pc = 0x1ef194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8680));
    // 0x1ef198: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ef198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B21F4u));
    // 0x1ef19c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF19Cu;
    {
        const bool branch_taken_0x1ef19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF19Cu;
        // 0x1ef1a0: 0x460300c1  sub.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef19c) {
            ctx->pc = 0x1EF1B0u;
            goto label_1ef1b0;
        }
    }
    ctx->pc = 0x1EF1A4u;
    // 0x1ef1a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ef1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ef1a8: 0xc4402b58  lwc1        $f0, 0x2B58($v0)
    ctx->pc = 0x1ef1a8u;
    { uint32_t bits = FAST_READ32(0x482B58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef1ac: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1ef1acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1ef1b0:
    // 0x1ef1b0: 0xc4c29244  lwc1        $f2, -0x6DBC($a2)
    ctx->pc = 0x1ef1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294939204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ef1b4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ef1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1ef1b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ef1b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ef1bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ef1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef1c0: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1ef1c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1ef1c4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1ef1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1ef1c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ef1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef1cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ef1ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ef1d0: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x1ef1d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ef1d4: 0x460c1b02  mul.s       $f12, $f3, $f12
    ctx->pc = 0x1ef1d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x1ef1d8: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x1EF1D8u;
    SET_GPR_U32(ctx, 31, 0x1EF1E0u);
    ctx->pc = 0x1EF1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF1D8u;
    // 0x1ef1dc: 0xe4c39244  swc1        $f3, -0x6DBC($a2) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294939204), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1EF1D8u, 0x1EF1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1E0u;
label_1ef1e0:
    // 0x1ef1e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ef1e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ef1e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ef1e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ef1e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ef1ec:
    // 0x1ef1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF1F0u;
        // 0x1ef1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF1F8u;
}
