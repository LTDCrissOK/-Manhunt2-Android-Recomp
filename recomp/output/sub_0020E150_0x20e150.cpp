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

// Function: sub_0020E150
// Address: 0x20e150 - 0x20e248
void sub_0020E150_0x20e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E150_0x20e150");
#endif

    switch (ctx->pc) {
        case 0x20e1a0u: goto label_20e1a0;
        case 0x20e1b4u: goto label_20e1b4;
        case 0x20e1c8u: goto label_20e1c8;
        case 0x20e1e0u: goto label_20e1e0;
        case 0x20e1f8u: goto label_20e1f8;
        case 0x20e220u: goto label_20e220;
        case 0x20e230u: goto label_20e230;
        default: break;
    }

    ctx->pc = 0x20e150u;

    // 0x20e150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20e154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e158: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20e158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20e15c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20e15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20e160: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20e160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20e168: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20e168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e16c: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x20e16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e170: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20e170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e174: 0x0  nop
    ctx->pc = 0x20e174u;
    // NOP
    // 0x20e178: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20E178u;
    {
        const bool branch_taken_0x20e178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E178u;
        // 0x20e17c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e178) {
            ctx->pc = 0x20E184u;
            goto label_20e184;
        }
    }
    ctx->pc = 0x20E180u;
    // 0x20e180: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x20e180u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_20e184:
    // 0x20e184: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x20e184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x20e188: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20e188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e18c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20e18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20e190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e194: 0x460c1302  mul.s       $f12, $f2, $f12
    ctx->pc = 0x20e194u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x20e198: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x20E198u;
    SET_GPR_U32(ctx, 31, 0x20E1A0u);
    ctx->pc = 0x20E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E198u;
    // 0x20e19c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x20E198u, 0x20E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1A0u;
label_20e1a0:
    // 0x20e1a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x20e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x20e1a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20e1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20e1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1ac: 0xc0b5ec8  jal         func_2D7B20
    ctx->pc = 0x20E1ACu;
    SET_GPR_U32(ctx, 31, 0x20E1B4u);
    ctx->pc = 0x20E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E1ACu;
    // 0x20e1b0: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B20u, 0x20E1ACu, 0x20E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1B4u;
label_20e1b4:
    // 0x20e1b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20e1b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20e1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20e1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1c0: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x20E1C0u;
    SET_GPR_U32(ctx, 31, 0x20E1C8u);
    ctx->pc = 0x20E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E1C0u;
    // 0x20e1c4: 0x24a513e8  addiu       $a1, $a1, 0x13E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x20E1C0u, 0x20E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1C8u;
label_20e1c8:
    // 0x20e1c8: 0xc62c0180  lwc1        $f12, 0x180($s1)
    ctx->pc = 0x20e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20e1cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20e1d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20e1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1d4: 0x24a513f0  addiu       $a1, $a1, 0x13F0
    ctx->pc = 0x20e1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5104));
    // 0x20e1d8: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x20E1D8u;
    SET_GPR_U32(ctx, 31, 0x20E1E0u);
    ctx->pc = 0x20E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E1D8u;
    // 0x20e1dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x20E1D8u, 0x20E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1E0u;
label_20e1e0:
    // 0x20e1e0: 0xc62c0184  lwc1        $f12, 0x184($s1)
    ctx->pc = 0x20e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20e1e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20e1e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20e1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1ec: 0x24a51408  addiu       $a1, $a1, 0x1408
    ctx->pc = 0x20e1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5128));
    // 0x20e1f0: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x20E1F0u;
    SET_GPR_U32(ctx, 31, 0x20E1F8u);
    ctx->pc = 0x20E1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E1F0u;
    // 0x20e1f4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x20E1F0u, 0x20E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1F8u;
label_20e1f8:
    // 0x20e1f8: 0x8e2600c0  lw          $a2, 0xC0($s1)
    ctx->pc = 0x20e1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x20e1fc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x20e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x20e200: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20e200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20e204: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20e204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e208: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x20e208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x20e20c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x20e20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20e210: 0xc33026  xor         $a2, $a2, $v1
    ctx->pc = 0x20e210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x20e214: 0x24a513f8  addiu       $a1, $a1, 0x13F8
    ctx->pc = 0x20e214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5112));
    // 0x20e218: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x20E218u;
    SET_GPR_U32(ctx, 31, 0x20E220u);
    ctx->pc = 0x20E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E218u;
    // 0x20e21c: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x20E218u, 0x20E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E220u;
label_20e220:
    // 0x20e220: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x20e220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20e224: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20e224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e228: 0xc0b5ecc  jal         func_2D7B30
    ctx->pc = 0x20E228u;
    SET_GPR_U32(ctx, 31, 0x20E230u);
    ctx->pc = 0x20E22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E228u;
    // 0x20e22c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B30u, 0x20E228u, 0x20E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E230u;
label_20e230:
    // 0x20e230: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20e230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e234: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20e234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e238: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20e238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e23c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20e23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e240: 0x3e00008  jr          $ra
    ctx->pc = 0x20E240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E240u;
        // 0x20e244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E248u;
}
