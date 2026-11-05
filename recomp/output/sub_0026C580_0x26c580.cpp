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

// Function: sub_0026C580
// Address: 0x26c580 - 0x26c678
void sub_0026C580_0x26c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C580_0x26c580");
#endif

    switch (ctx->pc) {
        case 0x26c5b4u: goto label_26c5b4;
        case 0x26c5d0u: goto label_26c5d0;
        case 0x26c5dcu: goto label_26c5dc;
        case 0x26c65cu: goto label_26c65c;
        default: break;
    }

    ctx->pc = 0x26c580u;

    // 0x26c580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26c584: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x26c588: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26c58c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26c58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c590: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c594: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x26c594u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26c598: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x26c598u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26c59c: 0xfa210220  sqc2        $vf1, 0x220($s1)
    ctx->pc = 0x26c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c5a0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x26c5a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26c5a4: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x26c5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c5a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c5ac: 0xc09afb0  jal         func_26BEC0
    ctx->pc = 0x26C5ACu;
    SET_GPR_U32(ctx, 31, 0x26C5B4u);
    ctx->pc = 0x26C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5ACu;
    // 0x26c5b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEC0u, 0x26C5ACu, 0x26C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5B4u;
label_26c5b4:
    // 0x26c5b4: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x26c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x26c5b8: 0x5460001b  bnel        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x26C5B8u;
    {
        const bool branch_taken_0x26c5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c5b8) {
            ctx->pc = 0x26C5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C5B8u;
            // 0x26c5bc: 0x7a220220  lq          $v0, 0x220($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C628u;
            goto label_26c628;
        }
    }
    ctx->pc = 0x26C5C0u;
    // 0x26c5c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26c5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26c5c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26c5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26c5c8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x26C5C8u;
    SET_GPR_U32(ctx, 31, 0x26C5D0u);
    ctx->pc = 0x26C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5C8u;
    // 0x26c5cc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x26C5C8u, 0x26C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5D0u;
label_26c5d0:
    // 0x26c5d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c5d4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26C5D4u;
    SET_GPR_U32(ctx, 31, 0x26C5DCu);
    ctx->pc = 0x26C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5D4u;
    // 0x26c5d8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26C5D4u, 0x26C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5DCu;
label_26c5dc:
    // 0x26c5dc: 0x7a220220  lq          $v0, 0x220($s1)
    ctx->pc = 0x26c5dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x26c5e0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x26c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26c5e4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x26c5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x26c5e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c5ec: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x26c5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x26c5f0: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x26c5f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x26c5f4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x26c5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x26c5f8: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x26c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c5fc: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x26c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c600: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x26c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c604: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26c604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c608: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x26c608u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26c60c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26c60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26c610: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26c610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26c614: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x26c614u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26c618: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26c618u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c61c: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x26c61cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c620: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26C620u;
    {
        const bool branch_taken_0x26c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C620u;
        // 0x26c624: 0xae300258  sw          $s0, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c620) {
            ctx->pc = 0x26C648u;
            goto label_26c648;
        }
    }
    ctx->pc = 0x26C628u;
label_26c628:
    // 0x26c628: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26c628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26c62c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c630: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x26c630u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x26c634: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x26c634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x26c638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c63c: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x26c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x26c640: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x26c640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x26c644: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x26c644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_26c648:
    // 0x26c648: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26c648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26c64c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c650: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26c650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c654: 0xc09275c  jal         func_249D70
    ctx->pc = 0x26C654u;
    SET_GPR_U32(ctx, 31, 0x26C65Cu);
    ctx->pc = 0x26C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C654u;
    // 0x26c658: 0xe6200274  swc1        $f0, 0x274($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D70u, 0x26C654u, 0x26C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C65Cu;
label_26c65c:
    // 0x26c65c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26c65cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c660: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26c660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26c664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c668: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x26c668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c66c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C66Cu;
        // 0x26c670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C674u;
    // 0x26c674: 0x0  nop
    ctx->pc = 0x26c674u;
    // NOP
    ctx->pc = 0x26c678u;
}
