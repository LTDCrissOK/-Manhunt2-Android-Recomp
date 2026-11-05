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

// Function: sub_003E3000
// Address: 0x3e3000 - 0x3e31f0
void sub_003E3000_0x3e3000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3000_0x3e3000");
#endif

    switch (ctx->pc) {
        case 0x3e3058u: goto label_3e3058;
        case 0x3e3074u: goto label_3e3074;
        case 0x3e3190u: goto label_3e3190;
        case 0x3e31acu: goto label_3e31ac;
        default: break;
    }

    ctx->pc = 0x3e3000u;

label_3e3000:
    // 0x3e3000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e3000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e3004: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x3e3004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x3e3008: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3e3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3e300c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3e300cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3e3010: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3e3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3e3014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e3014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3018: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e3018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e301c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3e301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3e3020: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x3e3020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3e3024: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3e3024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3e3028: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e3028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e302c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3e302cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3e3030: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3e3030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x3e3034: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3e3034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3038: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3e3038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3e303c: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x3e303cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e3040: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x3E3040u;
    {
        const bool branch_taken_0x3e3040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3040u;
        // 0x3e3044: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3040) {
            ctx->pc = 0x3E31C8u;
            goto label_3e31c8;
        }
    }
    ctx->pc = 0x3E3048u;
    // 0x3e3048: 0x3c14cccc  lui         $s4, 0xCCCC
    ctx->pc = 0x3e3048u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52428 << 16));
    // 0x3e304c: 0x27b50008  addiu       $s5, $sp, 0x8
    ctx->pc = 0x3e304cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3e3050: 0x3694cccd  ori         $s4, $s4, 0xCCCD
    ctx->pc = 0x3e3050u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)52429);
    // 0x3e3054: 0x0  nop
    ctx->pc = 0x3e3054u;
    // NOP
label_3e3058:
    // 0x3e3058: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E3058u;
    {
        const bool branch_taken_0x3e3058 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3058u;
        // 0x3e305c: 0x2511023  subu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3058) {
            ctx->pc = 0x3E307Cu;
            goto label_3e307c;
        }
    }
    ctx->pc = 0x3E3060u;
    // 0x3e3060: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3068: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3e3068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e306c: 0xc0f8bb4  jal         func_3E2ED0
    ctx->pc = 0x3E306Cu;
    SET_GPR_U32(ctx, 31, 0x3E3074u);
    ctx->pc = 0x3E3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E306Cu;
    // 0x3e3070: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2ED0u, 0x3E306Cu, 0x3E3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3074u;
label_3e3074:
    // 0x3e3074: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x3E3074u;
    {
        const bool branch_taken_0x3e3074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3074u;
        // 0x3e3078: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3074) {
            ctx->pc = 0x3E31CCu;
            goto label_3e31cc;
        }
    }
    ctx->pc = 0x3E307Cu;
label_3e307c:
    // 0x3e307c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3e307cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e3080: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x3e3080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e3084: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x3e3084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e3088: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3e3088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3e308c: 0x2645ffec  addiu       $a1, $s2, -0x14
    ctx->pc = 0x3e308cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967276));
    // 0x3e3090: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3e3090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3e3094: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3e3094u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3e3098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e3098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e309c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3e309cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3e30a0: 0x443818  mult        $a3, $v0, $a0
    ctx->pc = 0x3e30a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3e30a4: 0xf11821  addu        $v1, $a3, $s1
    ctx->pc = 0x3e30a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x3e30a8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3e30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e30ac: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3e30acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e30b0: 0x0  nop
    ctx->pc = 0x3e30b0u;
    // NOP
    // 0x3e30b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E30B4u;
    {
        const bool branch_taken_0x3e30b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30B4u;
        // 0x3e30b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30b4) {
            ctx->pc = 0x3E30C0u;
            goto label_3e30c0;
        }
    }
    ctx->pc = 0x3E30BCu;
    // 0x3e30bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e30bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e30c0:
    // 0x3e30c0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3e30c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3e30c4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E30C4u;
    {
        const bool branch_taken_0x3e30c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30C4u;
        // 0x3e30c8: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30c4) {
            ctx->pc = 0x3E3108u;
            goto label_3e3108;
        }
    }
    ctx->pc = 0x3E30CCu;
    // 0x3e30cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e30ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e30d0: 0x0  nop
    ctx->pc = 0x3e30d0u;
    // NOP
    // 0x3e30d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E30D4u;
    {
        const bool branch_taken_0x3e30d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30D4u;
        // 0x3e30d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30d4) {
            ctx->pc = 0x3E30E0u;
            goto label_3e30e0;
        }
    }
    ctx->pc = 0x3E30DCu;
    // 0x3e30dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e30dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e30e0:
    // 0x3e30e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e30e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e30e4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E30E4u;
    {
        const bool branch_taken_0x3e30e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30E4u;
        // 0x3e30e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30e4) {
            ctx->pc = 0x3E3144u;
            goto label_3e3144;
        }
    }
    ctx->pc = 0x3E30ECu;
    // 0x3e30ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3e30ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e30f0: 0x0  nop
    ctx->pc = 0x3e30f0u;
    // NOP
    // 0x3e30f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E30F4u;
    {
        const bool branch_taken_0x3e30f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30F4u;
        // 0x3e30f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30f4) {
            ctx->pc = 0x3E3100u;
            goto label_3e3100;
        }
    }
    ctx->pc = 0x3E30FCu;
    // 0x3e30fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e30fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e3100:
    // 0x3e3100: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E3100u;
    {
        const bool branch_taken_0x3e3100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3100u;
        // 0x3e3104: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3100) {
            ctx->pc = 0x3E3140u;
            goto label_3e3140;
        }
    }
    ctx->pc = 0x3E3108u;
label_3e3108:
    // 0x3e3108: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3e3108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e310c: 0x0  nop
    ctx->pc = 0x3e310cu;
    // NOP
    // 0x3e3110: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3110u;
    {
        const bool branch_taken_0x3e3110 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3110u;
        // 0x3e3114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3110) {
            ctx->pc = 0x3E311Cu;
            goto label_3e311c;
        }
    }
    ctx->pc = 0x3E3118u;
    // 0x3e3118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e3118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e311c:
    // 0x3e311c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e3120: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E3120u;
    {
        const bool branch_taken_0x3e3120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3120u;
        // 0x3e3124: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3120) {
            ctx->pc = 0x3E3144u;
            goto label_3e3144;
        }
    }
    ctx->pc = 0x3E3128u;
    // 0x3e3128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e3128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e312c: 0x0  nop
    ctx->pc = 0x3e312cu;
    // NOP
    // 0x3e3130: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3130u;
    {
        const bool branch_taken_0x3e3130 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3130u;
        // 0x3e3134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3130) {
            ctx->pc = 0x3E313Cu;
            goto label_3e313c;
        }
    }
    ctx->pc = 0x3E3138u;
    // 0x3e3138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e3138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e313c:
    // 0x3e313c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3e313cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_3e3140:
    // 0x3e3140: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3e3140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e3144:
    // 0x3e3144: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e3144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e3148: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e314c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e314cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e3150: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3e3150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3154: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e3154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e3158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e315c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x3e315cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x3e3160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e3160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3164: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3e3164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3168: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e3168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e316c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3e316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3170: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e3170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e3174: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3e3174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3178: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3e3178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e317c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3e317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3180: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x3e3180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x3e3184: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3e3184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3188: 0xc0f8bbc  jal         func_3E2EF0
    ctx->pc = 0x3E3188u;
    SET_GPR_U32(ctx, 31, 0x3E3190u);
    ctx->pc = 0x3E318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3188u;
    // 0x3e318c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2EF0u, 0x3E3188u, 0x3E3190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3190u;
label_3e3190:
    // 0x3e3190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e3190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3194: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e319c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e319cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e31a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3e31a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e31a4: 0xc0f8c00  jal         func_3E3000
    ctx->pc = 0x3E31A4u;
    SET_GPR_U32(ctx, 31, 0x3E31ACu);
    ctx->pc = 0x3E31A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E31A4u;
    // 0x3e31a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3000u;
    goto label_3e3000;
    ctx->pc = 0x3E31ACu;
label_3e31ac:
    // 0x3e31ac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3e31acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e31b0: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x3e31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3e31b4: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x3e31b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e31b8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3e31b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3e31bc: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x3e31bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e31c0: 0x1040ffa5  beqz        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x3E31C0u;
    {
        const bool branch_taken_0x3e31c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e31c0) {
            ctx->pc = 0x3E3058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3058;
        }
    }
    ctx->pc = 0x3E31C8u;
label_3e31c8:
    // 0x3e31c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3e31c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e31cc:
    // 0x3e31cc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3e31ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e31d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3e31d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e31d4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3e31d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e31d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3e31d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e31dc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3e31dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3e31e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e31e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e31e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E31E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E31E4u;
        // 0x3e31e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E31E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E31ECu;
    // 0x3e31ec: 0x0  nop
    ctx->pc = 0x3e31ecu;
    // NOP
    ctx->pc = 0x3e31f0u;
}
