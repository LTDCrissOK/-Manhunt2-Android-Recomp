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

// Function: sub_00201B10
// Address: 0x201b10 - 0x201c00
void sub_00201B10_0x201b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201B10_0x201b10");
#endif

    switch (ctx->pc) {
        case 0x201ba8u: goto label_201ba8;
        case 0x201bd4u: goto label_201bd4;
        default: break;
    }

    ctx->pc = 0x201b10u;

    // 0x201b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x201b14: 0x3c013503  lui         $at, 0x3503
    ctx->pc = 0x201b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13571 << 16));
    // 0x201b18: 0x34210c28  ori         $at, $at, 0xC28
    ctx->pc = 0x201b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3112);
    // 0x201b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x201b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x201b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x201b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x201b2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x201b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x201b30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x201b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x201b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x201b38: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x201b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x201b3c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x201b3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x201b40: 0x49080  sll         $s2, $a0, 2
    ctx->pc = 0x201b40u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x201b44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201b48: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x201b48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x201b4c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x201b4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x201b50: 0x3c013c36  lui         $at, 0x3C36
    ctx->pc = 0x201b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15414 << 16));
    // 0x201b54: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x201b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x201b58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x201b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201b5c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x201b5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x201b60: 0x904502ac  lbu         $a1, 0x2AC($v0)
    ctx->pc = 0x201b60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x201b64: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x201b64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x201b68: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x201b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x201b6c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x201b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x201b70: 0xc45502dc  lwc1        $f21, 0x2DC($v0)
    ctx->pc = 0x201b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x201b74: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x201b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x201b78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x201b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b7c: 0xc456039c  lwc1        $f22, 0x39C($v0)
    ctx->pc = 0x201b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x201b80: 0x8c71013c  lw          $s1, 0x13C($v1)
    ctx->pc = 0x201b80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x201b84: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x201b84u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x201b88: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x201b88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x201b8c: 0x3233ffff  andi        $s3, $s1, 0xFFFF
    ctx->pc = 0x201b8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x201b90: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x201b90u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x201b94: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x201b94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x201b98: 0x0  nop
    ctx->pc = 0x201b98u;
    // NOP
    // 0x201b9c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x201b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x201ba0: 0xc0827f4  jal         func_209FD0
    ctx->pc = 0x201BA0u;
    SET_GPR_U32(ctx, 31, 0x201BA8u);
    ctx->pc = 0x201BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201BA0u;
    // 0x201ba4: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FD0u, 0x201BA0u, 0x201BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201BA8u;
label_201ba8:
    // 0x201ba8: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x201ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x201bac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bb0: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x201bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x201bb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x201bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x201bb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x201bbc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x201bbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x201bc0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x201bc0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x201bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x201bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201bcc: 0xc08282e  jal         func_20A0B8
    ctx->pc = 0x201BCCu;
    SET_GPR_U32(ctx, 31, 0x201BD4u);
    ctx->pc = 0x201BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201BCCu;
    // 0x201bd0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A0B8u, 0x201BCCu, 0x201BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201BD4u;
label_201bd4:
    // 0x201bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201bd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201bdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201bdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201be0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x201be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201be4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x201be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201be8: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x201be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x201bec: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x201becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x201bf0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x201bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x201bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x201BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BF4u;
        // 0x201bf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201BFCu;
    // 0x201bfc: 0x0  nop
    ctx->pc = 0x201bfcu;
    // NOP
    ctx->pc = 0x201c00u;
}
