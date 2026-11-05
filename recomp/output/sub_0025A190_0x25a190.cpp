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

// Function: sub_0025A190
// Address: 0x25a190 - 0x25a288
void sub_0025A190_0x25a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A190_0x25a190");
#endif

    switch (ctx->pc) {
        case 0x25a200u: goto label_25a200;
        case 0x25a270u: goto label_25a270;
        default: break;
    }

    ctx->pc = 0x25a190u;

    // 0x25a190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a194: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25a198: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x25a198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x25a19c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25a19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1a0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x25a1a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25a1a4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x25a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25a1a8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x25a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25a1ac: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x25a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25a1b0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x25a1b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x25a1b4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x25a1b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x25a1b8: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x25a1b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x25a1bc: 0x46140504  c1          0x140504
    ctx->pc = 0x25a1bcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x25a1c0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x25a1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x25a1c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a1c8: 0x0  nop
    ctx->pc = 0x25a1c8u;
    // NOP
    // 0x25a1cc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25a1ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a1d0: 0x0  nop
    ctx->pc = 0x25a1d0u;
    // NOP
    // 0x25a1d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25A1D4u;
    {
        const bool branch_taken_0x25a1d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a1d4) {
            ctx->pc = 0x25A1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A1D4u;
            // 0x25a1d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A1DCu;
            goto label_25a1dc;
        }
    }
    ctx->pc = 0x25A1DCu;
label_25a1dc:
    // 0x25a1dc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x25a1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x25a1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a1e4: 0x0  nop
    ctx->pc = 0x25a1e4u;
    // NOP
    // 0x25a1e8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25a1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a1ec: 0x0  nop
    ctx->pc = 0x25a1ecu;
    // NOP
    // 0x25a1f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x25A1F0u;
    {
        const bool branch_taken_0x25a1f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1F0u;
        // 0x25a1f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1f0) {
            ctx->pc = 0x25A210u;
            goto label_25a210;
        }
    }
    ctx->pc = 0x25A1F8u;
    // 0x25a1f8: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x25A1F8u;
    SET_GPR_U32(ctx, 31, 0x25A200u);
    ctx->pc = 0x25A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A1F8u;
    // 0x25a1fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x25A1F8u, 0x25A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A200u;
label_25a200:
    // 0x25a200: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x25a200u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a204: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25A208u;
    {
        const bool branch_taken_0x25a208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A208u;
        // 0x25a20c: 0x62580a  movz        $t3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a208) {
            ctx->pc = 0x25A214u;
            goto label_25a214;
        }
    }
    ctx->pc = 0x25A210u;
label_25a210:
    // 0x25a210: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x25a210u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25a214:
    // 0x25a214: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x25a214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x25a218: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25a218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25a21c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25a21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a224: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x25a224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x25a228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a22c: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x25a22cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x25a230: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x25a230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
    // 0x25a234: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x25a234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x25a238: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x25a238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x25a23c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25a23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25a240: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x25a240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x25a244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25a244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25a248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25a24c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x25a24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x25a250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25a250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a254: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25a254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25a258: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x25a258u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x25a25c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x25a25cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a260: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x25a260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a264: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x25a264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a268: 0xc0cf430  jal         func_33D0C0
    ctx->pc = 0x25A268u;
    SET_GPR_U32(ctx, 31, 0x25A270u);
    ctx->pc = 0x25A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A268u;
    // 0x25a26c: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x25A268u, 0x25A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A270u;
label_25a270:
    // 0x25a270: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25a270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a274: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x25a274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25a278: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x25a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a27c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A27Cu;
        // 0x25a280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A284u;
    // 0x25a284: 0x0  nop
    ctx->pc = 0x25a284u;
    // NOP
    ctx->pc = 0x25a288u;
}
