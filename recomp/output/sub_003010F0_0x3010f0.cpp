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

// Function: sub_003010F0
// Address: 0x3010f0 - 0x301238
void sub_003010F0_0x3010f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003010F0_0x3010f0");
#endif

    switch (ctx->pc) {
        case 0x301164u: goto label_301164;
        default: break;
    }

    ctx->pc = 0x3010f0u;

    // 0x3010f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3010f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3010f4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x3010f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x3010f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3010f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3010fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3010fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x301100: 0x24505870  addiu       $s0, $v0, 0x5870
    ctx->pc = 0x301100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x301104: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x301104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x301108: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x301108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x30110c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30110cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x301110: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x301110u;
    { uint32_t bits = FAST_READ32(0x595908u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301114: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x301114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301118: 0x0  nop
    ctx->pc = 0x301118u;
    // NOP
    // 0x30111c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30111Cu;
    {
        const bool branch_taken_0x30111c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30111Cu;
        // 0x301120: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30111c) {
            ctx->pc = 0x30112Cu;
            goto label_30112c;
        }
    }
    ctx->pc = 0x301124u;
    // 0x301124: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x301124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301128: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x301128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_30112c:
    // 0x30112c: 0xc6020098  lwc1        $f2, 0x98($s0)
    ctx->pc = 0x30112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301130: 0xe6020094  swc1        $f2, 0x94($s0)
    ctx->pc = 0x301130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x301134: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x301134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x301138: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x301138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x30113c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x30113Cu;
    {
        const bool branch_taken_0x30113c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30113c) {
            ctx->pc = 0x301140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30113Cu;
            // 0x301140: 0xc60000e0  lwc1        $f0, 0xE0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3011ACu;
            goto label_3011ac;
        }
    }
    ctx->pc = 0x301144u;
    // 0x301144: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x301144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30114c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30114cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301150: 0x0  nop
    ctx->pc = 0x301150u;
    // NOP
    // 0x301154: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x301154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x301158: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x301158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30115c: 0xc08dada  jal         func_236B68
    ctx->pc = 0x30115Cu;
    SET_GPR_U32(ctx, 31, 0x301164u);
    ctx->pc = 0x301160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30115Cu;
    // 0x301160: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x30115Cu, 0x301164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301164u;
label_301164:
    // 0x301164: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x301164u;
    {
        const bool branch_taken_0x301164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301164) {
            ctx->pc = 0x301168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301164u;
            // 0x301168: 0xc6000094  lwc1        $f0, 0x94($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301190u;
            goto label_301190;
        }
    }
    ctx->pc = 0x30116Cu;
    // 0x30116c: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x30116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301170: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x301170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x301174: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x301174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x301178: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x301178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30117c: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x30117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x301184: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x301184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301188: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x301188u;
    {
        const bool branch_taken_0x301188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301188) {
            ctx->pc = 0x30121Cu;
            goto label_30121c;
        }
    }
    ctx->pc = 0x301190u;
label_301190:
    // 0x301190: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x301190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301194: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x301194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301198: 0x0  nop
    ctx->pc = 0x301198u;
    // NOP
    // 0x30119c: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
    ctx->pc = 0x30119Cu;
    {
        const bool branch_taken_0x30119c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30119c) {
            ctx->pc = 0x3011A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30119Cu;
            // 0x3011a0: 0xe6010094  swc1        $f1, 0x94($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301228u;
            goto label_301228;
        }
    }
    ctx->pc = 0x3011A4u;
    // 0x3011a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3011A4u;
    {
        const bool branch_taken_0x3011a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3011A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011A4u;
        // 0x3011a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011a4) {
            ctx->pc = 0x30122Cu;
            goto label_30122c;
        }
    }
    ctx->pc = 0x3011ACu;
label_3011ac:
    // 0x3011ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3011acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3011b0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3011b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3011b4: 0x0  nop
    ctx->pc = 0x3011b4u;
    // NOP
    // 0x3011b8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3011b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3011bc: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x3011bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3011c0: 0xe6040094  swc1        $f4, 0x94($s0)
    ctx->pc = 0x3011c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3011c4: 0x8c8211d8  lw          $v0, 0x11D8($a0)
    ctx->pc = 0x3011c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4568)));
    // 0x3011c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3011C8u;
    {
        const bool branch_taken_0x3011c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3011CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011C8u;
        // 0x3011cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011c8) {
            ctx->pc = 0x3011E0u;
            goto label_3011e0;
        }
    }
    ctx->pc = 0x3011D0u;
    // 0x3011d0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3011d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3011d4: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x3011d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x3011d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3011d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3011dc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3011dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3011e0:
    // 0x3011e0: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3011E0u;
    {
        const bool branch_taken_0x3011e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3011e0) {
            ctx->pc = 0x3011E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3011E0u;
            // 0x3011e4: 0xc60000a0  lwc1        $f0, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301218u;
            goto label_301218;
        }
    }
    ctx->pc = 0x3011E8u;
    // 0x3011e8: 0xc48011d4  lwc1        $f0, 0x11D4($a0)
    ctx->pc = 0x3011e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3011ec: 0x3c013c36  lui         $at, 0x3C36
    ctx->pc = 0x3011ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15414 << 16));
    // 0x3011f0: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x3011f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x3011f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3011f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3011f8: 0xc60300e4  lwc1        $f3, 0xE4($s0)
    ctx->pc = 0x3011f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3011fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3011fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x301200: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x301200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301204: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x301204u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x301208: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x301208u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x30120c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x30120cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x301210: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301214: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x301214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_301218:
    // 0x301218: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x301218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30121c:
    // 0x30121c: 0x0  nop
    ctx->pc = 0x30121cu;
    // NOP
    // 0x301220: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x301220u;
    {
        const bool branch_taken_0x301220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301220) {
            ctx->pc = 0x301224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301220u;
            // 0x301224: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301228u;
            goto label_301228;
        }
    }
    ctx->pc = 0x301228u;
label_301228:
    // 0x301228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x301228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30122c:
    // 0x30122c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30122cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x301230: 0x3e00008  jr          $ra
    ctx->pc = 0x301230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301230u;
        // 0x301234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301238u;
}
