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

// Function: sub_002465B0
// Address: 0x2465b0 - 0x246680
void sub_002465B0_0x2465b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002465B0_0x2465b0");
#endif

    switch (ctx->pc) {
        case 0x2465c8u: goto label_2465c8;
        case 0x2465d8u: goto label_2465d8;
        case 0x2465f4u: goto label_2465f4;
        case 0x246624u: goto label_246624;
        case 0x24666cu: goto label_24666c;
        default: break;
    }

    ctx->pc = 0x2465b0u;

    // 0x2465b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2465b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2465b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2465b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2465b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2465b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2465bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2465c0: 0xc08e528  jal         func_2394A0
    ctx->pc = 0x2465C0u;
    SET_GPR_U32(ctx, 31, 0x2465C8u);
    ctx->pc = 0x2465C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465C0u;
    // 0x2465c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x2465C0u, 0x2465C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465C8u;
label_2465c8:
    // 0x2465c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2465c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465cc: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2465ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2465d0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2465D0u;
    SET_GPR_U32(ctx, 31, 0x2465D8u);
    ctx->pc = 0x2465D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465D0u;
    // 0x2465d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2465D0u, 0x2465D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465D8u;
label_2465d8:
    // 0x2465d8: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x2465d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2465dc: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x2465dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x2465e0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x2465e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2465e4: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2465E4u;
    {
        const bool branch_taken_0x2465e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2465e4) {
            ctx->pc = 0x2465E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2465E4u;
            // 0x2465e8: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2465F8u;
            goto label_2465f8;
        }
    }
    ctx->pc = 0x2465ECu;
    // 0x2465ec: 0xc08f956  jal         func_23E558
    ctx->pc = 0x2465ECu;
    SET_GPR_U32(ctx, 31, 0x2465F4u);
    ctx->pc = 0x2465F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465ECu;
    // 0x2465f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E558u, 0x2465ECu, 0x2465F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465F4u;
label_2465f4:
    // 0x2465f4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2465f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2465f8:
    // 0x2465f8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2465f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2465fc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2465FCu;
    {
        const bool branch_taken_0x2465fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2465fc) {
            ctx->pc = 0x246600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2465FCu;
            // 0x246600: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246670u;
            goto label_246670;
        }
    }
    ctx->pc = 0x246604u;
    // 0x246604: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x246604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x246608: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x246608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24660c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24660cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246610: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x246610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x246614: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x246614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x246618: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x246618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24661c: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x24661Cu;
    SET_GPR_U32(ctx, 31, 0x246624u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x24661Cu, 0x246624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246624u;
label_246624:
    // 0x246624: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x246624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x246628: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x246628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x24662c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24662Cu;
    {
        const bool branch_taken_0x24662c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x246630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24662Cu;
        // 0x246630: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24662c) {
            ctx->pc = 0x246648u;
            goto label_246648;
        }
    }
    ctx->pc = 0x246634u;
    // 0x246634: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x246634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246638: 0x0  nop
    ctx->pc = 0x246638u;
    // NOP
    // 0x24663c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24663cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x246640: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246640u;
    {
        const bool branch_taken_0x246640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246640u;
        // 0x246644: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246640) {
            ctx->pc = 0x246664u;
            goto label_246664;
        }
    }
    ctx->pc = 0x246648u;
label_246648:
    // 0x246648: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24664c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x246650: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x246650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246654: 0x0  nop
    ctx->pc = 0x246654u;
    // NOP
    // 0x246658: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x246658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24665c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x24665cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x246660: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x246660u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_246664:
    // 0x246664: 0xc083976  jal         func_20E5D8
    ctx->pc = 0x246664u;
    SET_GPR_U32(ctx, 31, 0x24666Cu);
    ctx->pc = 0x246668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246664u;
    // 0x246668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x246664u, 0x24666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24666Cu;
label_24666c:
    // 0x24666c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24666cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246670:
    // 0x246670: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246674: 0x3e00008  jr          $ra
    ctx->pc = 0x246674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246674u;
        // 0x246678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24667Cu;
    // 0x24667c: 0x0  nop
    ctx->pc = 0x24667cu;
    // NOP
    ctx->pc = 0x246680u;
}
