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

// Function: sub_002C3068
// Address: 0x2c3068 - 0x2c3310
void sub_002C3068_0x2c3068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3068_0x2c3068");
#endif

    switch (ctx->pc) {
        case 0x2c30a4u: goto label_2c30a4;
        case 0x2c30b4u: goto label_2c30b4;
        case 0x2c30c4u: goto label_2c30c4;
        case 0x2c30d4u: goto label_2c30d4;
        case 0x2c30e4u: goto label_2c30e4;
        case 0x2c30fcu: goto label_2c30fc;
        case 0x2c3110u: goto label_2c3110;
        case 0x2c3128u: goto label_2c3128;
        case 0x2c3240u: goto label_2c3240;
        case 0x2c3250u: goto label_2c3250;
        case 0x2c3268u: goto label_2c3268;
        case 0x2c3280u: goto label_2c3280;
        case 0x2c3290u: goto label_2c3290;
        case 0x2c3298u: goto label_2c3298;
        case 0x2c32b8u: goto label_2c32b8;
        case 0x2c32e0u: goto label_2c32e0;
        default: break;
    }

    ctx->pc = 0x2c3068u;

    // 0x2c3068: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2c3068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2c306c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3070: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x2c3070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x2c3074: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x2c3074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x2c3078: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c3078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c307c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c307cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3080: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2c3080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x2c3084: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x2c3084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x2c3088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c308c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2c308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2c3090: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x2c3090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x2c3094: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x2c3094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x2c3098: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x2c3098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x2c309c: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C309Cu;
    SET_GPR_U32(ctx, 31, 0x2C30A4u);
    ctx->pc = 0x2C30A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C309Cu;
    // 0x2c30a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C309Cu, 0x2C30A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30A4u;
label_2c30a4:
    // 0x2c30a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c30a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30a8: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x2c30a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c30ac: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C30ACu;
    SET_GPR_U32(ctx, 31, 0x2C30B4u);
    ctx->pc = 0x2C30B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C30ACu;
    // 0x2c30b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C30ACu, 0x2C30B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30B4u;
label_2c30b4:
    // 0x2c30b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c30b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30b8: 0x26650002  addiu       $a1, $s3, 0x2
    ctx->pc = 0x2c30b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2c30bc: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C30BCu;
    SET_GPR_U32(ctx, 31, 0x2C30C4u);
    ctx->pc = 0x2C30C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C30BCu;
    // 0x2c30c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C30BCu, 0x2C30C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30C4u;
label_2c30c4:
    // 0x2c30c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c30c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30c8: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x2c30c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c30cc: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C30CCu;
    SET_GPR_U32(ctx, 31, 0x2C30D4u);
    ctx->pc = 0x2C30D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C30CCu;
    // 0x2c30d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C30CCu, 0x2C30D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30D4u;
label_2c30d4:
    // 0x2c30d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c30d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30d8: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x2c30d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2c30dc: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C30DCu;
    SET_GPR_U32(ctx, 31, 0x2C30E4u);
    ctx->pc = 0x2C30E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C30DCu;
    // 0x2c30e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C30DCu, 0x2C30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30E4u;
label_2c30e4:
    // 0x2c30e4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2c30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c30e8: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C30E8u;
    {
        const bool branch_taken_0x2c30e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30E8u;
        // 0x2c30ec: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30e8) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C30F0u;
    // 0x2c30f0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2c30f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c30f4: 0xc0fa3ee  jal         func_3E8FB8
    ctx->pc = 0x2C30F4u;
    SET_GPR_U32(ctx, 31, 0x2C30FCu);
    ctx->pc = 0x2C30F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C30F4u;
    // 0x2c30f8: 0x24845058  addiu       $a0, $a0, 0x5058 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8FB8u, 0x2C30F4u, 0x2C30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30FCu;
label_2c30fc:
    // 0x2c30fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c30fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c3100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3104: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2c3104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2c3108: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C3108u;
    SET_GPR_U32(ctx, 31, 0x2C3110u);
    ctx->pc = 0x2C310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3108u;
    // 0x2c310c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C3108u, 0x2C3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3110u;
label_2c3110:
    // 0x2c3110: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x2c3110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x2c3114: 0x34210100  ori         $at, $at, 0x100
    ctx->pc = 0x2c3114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)256);
    // 0x2c3118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c3118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c311c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c311cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3120: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2c3120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c3124: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2c3124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c3128:
    // 0x2c3128: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2c3128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c312c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2c312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2c3130: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2c3130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2c3134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3138: 0x0  nop
    ctx->pc = 0x2c3138u;
    // NOP
    // 0x2c313c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c313cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c3140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c3140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3144: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2c3144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c3148: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C3148u;
    {
        const bool branch_taken_0x2c3148 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2C314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3148u;
        // 0x2c314c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3148) {
            ctx->pc = 0x2C3128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3128;
        }
    }
    ctx->pc = 0x2C3150u;
    // 0x2c3150: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c3150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c3154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c3158: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c3158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c315c: 0x0  nop
    ctx->pc = 0x2c315cu;
    // NOP
    // 0x2c3160: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c3160u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3164: 0x0  nop
    ctx->pc = 0x2c3164u;
    // NOP
    // 0x2c3168: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x2C3168u;
    {
        const bool branch_taken_0x2c3168 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3168u;
        // 0x2c316c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3168) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C3170u;
    // 0x2c3170: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c3170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3174: 0x0  nop
    ctx->pc = 0x2c3174u;
    // NOP
    // 0x2c3178: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c3178u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c317c: 0x0  nop
    ctx->pc = 0x2c317cu;
    // NOP
    // 0x2c3180: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x2C3180u;
    {
        const bool branch_taken_0x2c3180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3180u;
        // 0x2c3184: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3180) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C3188u;
    // 0x2c3188: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c3188u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c318c: 0x0  nop
    ctx->pc = 0x2c318cu;
    // NOP
    // 0x2c3190: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x2C3190u;
    {
        const bool branch_taken_0x2c3190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3190u;
        // 0x2c3194: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3190) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C3198u;
    // 0x2c3198: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c3198u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c319c: 0x0  nop
    ctx->pc = 0x2c319cu;
    // NOP
    // 0x2c31a0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2C31A0u;
    {
        const bool branch_taken_0x2c31a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C31A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31A0u;
        // 0x2c31a4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31a0) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C31A8u;
    // 0x2c31a8: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c31a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c31ac: 0x0  nop
    ctx->pc = 0x2c31acu;
    // NOP
    // 0x2c31b0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2C31B0u;
    {
        const bool branch_taken_0x2c31b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31B0u;
        // 0x2c31b4: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31b0) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C31B8u;
    // 0x2c31b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c31b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c31bc: 0x0  nop
    ctx->pc = 0x2c31bcu;
    // NOP
    // 0x2c31c0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2C31C0u;
    {
        const bool branch_taken_0x2c31c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31C0u;
        // 0x2c31c4: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31c0) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C31C8u;
    // 0x2c31c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c31c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c31cc: 0x0  nop
    ctx->pc = 0x2c31ccu;
    // NOP
    // 0x2c31d0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2C31D0u;
    {
        const bool branch_taken_0x2c31d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31D0u;
        // 0x2c31d4: 0xc7a0001c  lwc1        $f0, 0x1C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31d0) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C31D8u;
    // 0x2c31d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c31d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c31dc: 0x0  nop
    ctx->pc = 0x2c31dcu;
    // NOP
    // 0x2c31e0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2C31E0u;
    {
        const bool branch_taken_0x2c31e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31E0u;
        // 0x2c31e4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31e0) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C31E8u;
    // 0x2c31e8: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2c31e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c31ec: 0x0  nop
    ctx->pc = 0x2c31ecu;
    // NOP
    // 0x2c31f0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2C31F0u;
    {
        const bool branch_taken_0x2c31f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31F0u;
        // 0x2c31f4: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31f0) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C31F8u;
    // 0x2c31f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c31f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c31fc: 0x0  nop
    ctx->pc = 0x2c31fcu;
    // NOP
    // 0x2c3200: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3200u;
    {
        const bool branch_taken_0x2c3200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3200u;
        // 0x2c3204: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3200) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C3208u;
    // 0x2c3208: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c3208u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c320c: 0x0  nop
    ctx->pc = 0x2c320cu;
    // NOP
    // 0x2c3210: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3210u;
    {
        const bool branch_taken_0x2c3210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3210u;
        // 0x2c3214: 0xc7a0002c  lwc1        $f0, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3210) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C3218u;
    // 0x2c3218: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c3218u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c321c: 0x0  nop
    ctx->pc = 0x2c321cu;
    // NOP
    // 0x2c3220: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C3220u;
    {
        const bool branch_taken_0x2c3220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3220) {
            ctx->pc = 0x2C3224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3220u;
            // 0x2c3224: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C3228u;
label_2c3228:
    // 0x2c3228: 0x2675000c  addiu       $s5, $s3, 0xC
    ctx->pc = 0x2c3228u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2c322c: 0x26760028  addiu       $s6, $s3, 0x28
    ctx->pc = 0x2c322cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x2c3230: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2c3230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3234: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2c3234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c3238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c323c: 0x0  nop
    ctx->pc = 0x2c323cu;
    // NOP
label_2c3240:
    // 0x2c3240: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3244: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c3244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3248: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C3248u;
    SET_GPR_U32(ctx, 31, 0x2C3250u);
    ctx->pc = 0x2C324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3248u;
    // 0x2c324c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C3248u, 0x2C3250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3250u;
label_2c3250:
    // 0x2c3250: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2c3250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2c3254: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3254u;
    {
        const bool branch_taken_0x2c3254 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2C3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3254u;
        // 0x2c3258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3254) {
            ctx->pc = 0x2C3240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3240;
        }
    }
    ctx->pc = 0x2C325Cu;
    // 0x2c325c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2c325cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c3260: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2c3260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3264: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2c3264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c3268:
    // 0x2c3268: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c3268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c326c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C326Cu;
    {
        const bool branch_taken_0x2c326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C326Cu;
        // 0x2c3270: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c326c) {
            ctx->pc = 0x2C329Cu;
            goto label_2c329c;
        }
    }
    ctx->pc = 0x2C3274u;
    // 0x2c3274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3278: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C3278u;
    SET_GPR_U32(ctx, 31, 0x2C3280u);
    ctx->pc = 0x2C327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3278u;
    // 0x2c327c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C3278u, 0x2C3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3280u;
label_2c3280:
    // 0x2c3280: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2c3280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c3284: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3288: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C3288u;
    SET_GPR_U32(ctx, 31, 0x2C3290u);
    ctx->pc = 0x2C328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3288u;
    // 0x2c328c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C3288u, 0x2C3290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3290u;
label_2c3290:
    // 0x2c3290: 0xc0c7c38  jal         func_31F0E0
    ctx->pc = 0x2C3290u;
    SET_GPR_U32(ctx, 31, 0x2C3298u);
    ctx->pc = 0x2C3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3290u;
    // 0x2c3294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F0E0u, 0x2C3290u, 0x2C3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3298u;
label_2c3298:
    // 0x2c3298: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c3298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c329c:
    // 0x2c329c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2c329cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2c32a0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2c32a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2c32a4: 0x641fff0  bgez        $s2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C32A4u;
    {
        const bool branch_taken_0x2c32a4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2C32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32A4u;
        // 0x2c32a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32a4) {
            ctx->pc = 0x2C3268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3268;
        }
    }
    ctx->pc = 0x2C32ACu;
    // 0x2c32ac: 0x26a30004  addiu       $v1, $s5, 0x4
    ctx->pc = 0x2c32acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2c32b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c32b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c32b4: 0x0  nop
    ctx->pc = 0x2c32b4u;
    // NOP
label_2c32b8:
    // 0x2c32b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c32bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C32BCu;
    {
        const bool branch_taken_0x2c32bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32BCu;
        // 0x2c32c0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32bc) {
            ctx->pc = 0x2C32CCu;
            goto label_2c32cc;
        }
    }
    ctx->pc = 0x2C32C4u;
    // 0x2c32c4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2c32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2c32c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c32c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2c32cc:
    // 0x2c32cc: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C32CCu;
    {
        const bool branch_taken_0x2c32cc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2C32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32CCu;
        // 0x2c32d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32cc) {
            ctx->pc = 0x2C32B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c32b8;
        }
    }
    ctx->pc = 0x2C32D4u;
    // 0x2c32d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c32d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c32d8: 0xc0af79c  jal         func_2BDE70
    ctx->pc = 0x2C32D8u;
    SET_GPR_U32(ctx, 31, 0x2C32E0u);
    ctx->pc = 0x2C32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C32D8u;
    // 0x2c32dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDE70u, 0x2C32D8u, 0x2C32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32E0u;
label_2c32e0:
    // 0x2c32e0: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2c32e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c32e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c32e8: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x2c32e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2c32ec: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2c32ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c32f0: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x2c32f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2c32f4: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x2c32f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c32f8: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x2c32f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2c32fc: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x2c32fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c3300: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x2c3300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2c3304: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3304u;
        // 0x2c3308: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C330Cu;
    // 0x2c330c: 0x0  nop
    ctx->pc = 0x2c330cu;
    // NOP
    ctx->pc = 0x2c3310u;
}
