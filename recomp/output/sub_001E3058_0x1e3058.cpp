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

// Function: sub_001E3058
// Address: 0x1e3058 - 0x1e32f8
void sub_001E3058_0x1e3058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3058_0x1e3058");
#endif

    switch (ctx->pc) {
        case 0x1e30acu: goto label_1e30ac;
        case 0x1e3110u: goto label_1e3110;
        case 0x1e316cu: goto label_1e316c;
        case 0x1e31b8u: goto label_1e31b8;
        case 0x1e320cu: goto label_1e320c;
        default: break;
    }

    ctx->pc = 0x1e3058u;

    // 0x1e3058: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1e3058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1e305c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x1e305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x1e3060: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x1e3060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x1e3064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e3064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3068: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x1e3068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x1e306c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e306cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3070: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e3070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3074: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x1e3074u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1e3078: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x1e3078u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1e307c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1e307cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3080: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x1e3080u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1e3084: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1e3084u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1e3088: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1e3088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1e308c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1e308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1e3090: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x1e3090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x1e3094: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x1e3094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x1e3098: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x1e3098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x1e309c: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x1e309cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x1e30a0: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x1e30a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x1e30a4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E30A4u;
    SET_GPR_U32(ctx, 31, 0x1E30ACu);
    ctx->pc = 0x1E30A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30A4u;
    // 0x1e30a8: 0xe7b90188  swc1        $f25, 0x188($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E30A4u, 0x1E30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30ACu;
label_1e30ac:
    // 0x1e30ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e30acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e30b0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1e30b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1e30b4: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x1e30b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e30b8: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1e30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1e30bc: 0xc6140040  lwc1        $f20, 0x40($s0)
    ctx->pc = 0x1e30bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e30c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1e30c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e30c4: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x1e30c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x1e30c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e30c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e30cc: 0x4617a0c2  mul.s       $f3, $f20, $f23
    ctx->pc = 0x1e30ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x1e30d0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e30d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e30d4: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x1e30d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e30d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e30d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e30dc: 0x3c014b18  lui         $at, 0x4B18
    ctx->pc = 0x1e30dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19224 << 16));
    // 0x1e30e0: 0x34219680  ori         $at, $at, 0x9680
    ctx->pc = 0x1e30e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38528);
    // 0x1e30e4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1e30e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1e30e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e30e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e30ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e30ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e30f0: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1e30f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e30f4: 0x46030540  add.s       $f21, $f0, $f3
    ctx->pc = 0x1e30f4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e30f8: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x1e30f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e30fc: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x1e30fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1e3100: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1e3100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1e3104: 0x4601ad80  add.s       $f22, $f21, $f1
    ctx->pc = 0x1e3104u;
    ctx->f[22] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x1e3108: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E3108u;
    SET_GPR_U32(ctx, 31, 0x1E3110u);
    ctx->pc = 0x1E310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3108u;
    // 0x1e310c: 0xe7b50064  swc1        $f21, 0x64($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E3108u, 0x1E3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3110u;
label_1e3110:
    // 0x1e3110: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x1e3110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1e3114: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1e3114u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3118: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1e3118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e311c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1e311cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e3120: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1e3120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1e3124: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e3124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e3128: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1e3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e312c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1e312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3130: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1e3130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3134: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x1e3134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3138: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1e3138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e313c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e313cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e3140: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x1e3140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e3144: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x1e3144u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e3148: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e3148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e314c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1e314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3150: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1e3150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3154: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1e3154u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3158: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1e3158u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e315c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e3160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3164: 0xc0781f2  jal         func_1E07C8
    ctx->pc = 0x1E3164u;
    SET_GPR_U32(ctx, 31, 0x1E316Cu);
    ctx->pc = 0x1E3168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3164u;
    // 0x1e3168: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E07C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E07C8u, 0x1E3164u, 0x1E316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E316Cu;
label_1e316c:
    // 0x1e316c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E316Cu;
    {
        const bool branch_taken_0x1e316c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e316c) {
            ctx->pc = 0x1E3170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E316Cu;
            // 0x1e3170: 0x4615b501  sub.s       $f20, $f22, $f21 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E317Cu;
            goto label_1e317c;
        }
    }
    ctx->pc = 0x1E3174u;
    // 0x1e3174: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1E3174u;
    {
        const bool branch_taken_0x1e3174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3174u;
        // 0x1e3178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3174) {
            ctx->pc = 0x1E32B0u;
            goto label_1e32b0;
        }
    }
    ctx->pc = 0x1E317Cu;
label_1e317c:
    // 0x1e317c: 0x3c013a03  lui         $at, 0x3A03
    ctx->pc = 0x1e317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14851 << 16));
    // 0x1e3180: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e3180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e3184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e3184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3188: 0xe7b60064  swc1        $f22, 0x64($sp)
    ctx->pc = 0x1e3188u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e318c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3190: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x1e3190u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e3194: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x1e3194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e3198: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1e3198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e319c: 0x0  nop
    ctx->pc = 0x1e319cu;
    // NOP
    // 0x1e31a0: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x1E31A0u;
    {
        const bool branch_taken_0x1e31a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E31A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31A0u;
        // 0x1e31a4: 0x27b300d0  addiu       $s3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31a0) {
            ctx->pc = 0x1E3234u;
            goto label_1e3234;
        }
    }
    ctx->pc = 0x1E31A8u;
    // 0x1e31a8: 0x4600c646  mov.s       $f25, $f24
    ctx->pc = 0x1e31a8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[24]);
    // 0x1e31ac: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1e31acu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x1e31b0: 0xe7b90100  swc1        $f25, 0x100($sp)
    ctx->pc = 0x1e31b0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1e31b4: 0x0  nop
    ctx->pc = 0x1e31b4u;
    // NOP
label_1e31b8:
    // 0x1e31b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E31B8u;
    {
        const bool branch_taken_0x1e31b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31B8u;
        // 0x1e31bc: 0x4615b501  sub.s       $f20, $f22, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31b8) {
            ctx->pc = 0x1E31D0u;
            goto label_1e31d0;
        }
    }
    ctx->pc = 0x1E31C0u;
    // 0x1e31c0: 0x4617a042  mul.s       $f1, $f20, $f23
    ctx->pc = 0x1e31c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x1e31c4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1e31c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e31c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E31C8u;
    {
        const bool branch_taken_0x1e31c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31C8u;
        // 0x1e31cc: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31c8) {
            ctx->pc = 0x1E31DCu;
            goto label_1e31dc;
        }
    }
    ctx->pc = 0x1E31D0u;
label_1e31d0:
    // 0x1e31d0: 0x4617a042  mul.s       $f1, $f20, $f23
    ctx->pc = 0x1e31d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x1e31d4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1e31d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e31d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e31d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e31dc:
    // 0x1e31dc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1e31dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e31e0: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x1e31e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e31e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e31e8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1e31e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e31ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e31ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e31f0: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1e31f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e31f4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1e31f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e31f8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1e31f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1e31fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e31fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3200: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1e3200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3204: 0xc0781f2  jal         func_1E07C8
    ctx->pc = 0x1E3204u;
    SET_GPR_U32(ctx, 31, 0x1E320Cu);
    ctx->pc = 0x1E3208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3204u;
    // 0x1e3208: 0xe7a100a0  swc1        $f1, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E07C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E07C8u, 0x1E3204u, 0x1E320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E320Cu;
label_1e320c:
    // 0x1e320c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E320Cu;
    {
        const bool branch_taken_0x1e320c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E320Cu;
        // 0x1e3210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e320c) {
            ctx->pc = 0x1E321Cu;
            goto label_1e321c;
        }
    }
    ctx->pc = 0x1E3214u;
    // 0x1e3214: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3214u;
    {
        const bool branch_taken_0x1e3214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3214u;
        // 0x1e3218: 0xc7b50064  lwc1        $f21, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3214) {
            ctx->pc = 0x1E3224u;
            goto label_1e3224;
        }
    }
    ctx->pc = 0x1E321Cu;
label_1e321c:
    // 0x1e321c: 0xc7b60064  lwc1        $f22, 0x64($sp)
    ctx->pc = 0x1e321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e3220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3224:
    // 0x1e3224: 0x4614c034  c.lt.s      $f24, $f20
    ctx->pc = 0x1e3224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3228: 0x0  nop
    ctx->pc = 0x1e3228u;
    // NOP
    // 0x1e322c: 0x4503ffe2  bc1tl       . + 4 + (-0x1E << 2)
    ctx->pc = 0x1E322Cu;
    {
        const bool branch_taken_0x1e322c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e322c) {
            ctx->pc = 0x1E3230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E322Cu;
            // 0x1e3230: 0xe7b90100  swc1        $f25, 0x100($sp) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E31B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e31b8;
        }
    }
    ctx->pc = 0x1E3234u;
label_1e3234:
    // 0x1e3234: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1e3234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1e3238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e3238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e323c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1e323cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1e3240: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1e3240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1e3244: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x1e3244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3248: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e3248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e324c: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x1e324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3250: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e3250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e3254: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x1e3254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x1e3258: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e3258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e325c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x1e325cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x1e3260: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x1e3260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3264: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e3264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e3268: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x1e3268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e326c: 0xe7a200dc  swc1        $f2, 0xDC($sp)
    ctx->pc = 0x1e326cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e3270: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x1e3270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e3274: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1e3274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e3278: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1e3278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e327c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e327cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3280: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1e3280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3284: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1e3284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3288: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1e3288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e328c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1e328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3290: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x1e3290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3294: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e3294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e3298: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x1e3298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e329c: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x1e329cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e32a0: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x1e32a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e32a4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1e32a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e32a8: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1e32a8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e32ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e32acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e32b0:
    // 0x1e32b0: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x1e32b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e32b4: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x1e32b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1e32b8: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1e32b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e32bc: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x1e32bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1e32c0: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x1e32c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e32c4: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x1e32c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1e32c8: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x1e32c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e32cc: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x1e32ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1e32d0: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x1e32d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e32d4: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x1e32d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1e32d8: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x1e32d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1e32dc: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x1e32dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e32e0: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x1e32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e32e4: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x1e32e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e32e8: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1e32e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e32ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E32ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32ECu;
        // 0x1e32f0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E32F4u;
    // 0x1e32f4: 0x0  nop
    ctx->pc = 0x1e32f4u;
    // NOP
    ctx->pc = 0x1e32f8u;
}
