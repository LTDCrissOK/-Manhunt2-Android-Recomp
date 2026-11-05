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

// Function: sub_001A31D0
// Address: 0x1a31d0 - 0x1a32e8
void sub_001A31D0_0x1a31d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A31D0_0x1a31d0");
#endif

    switch (ctx->pc) {
        case 0x1a31e4u: goto label_1a31e4;
        case 0x1a31f4u: goto label_1a31f4;
        case 0x1a31fcu: goto label_1a31fc;
        case 0x1a3224u: goto label_1a3224;
        case 0x1a3264u: goto label_1a3264;
        case 0x1a32a4u: goto label_1a32a4;
        case 0x1a32b4u: goto label_1a32b4;
        case 0x1a32c4u: goto label_1a32c4;
        case 0x1a32d4u: goto label_1a32d4;
        default: break;
    }

    ctx->pc = 0x1a31d0u;

    // 0x1a31d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a31d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a31d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a31d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a31d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a31d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a31dc: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A31DCu;
    SET_GPR_U32(ctx, 31, 0x1A31E4u);
    ctx->pc = 0x1A31E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31DCu;
    // 0x1a31e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A31DCu, 0x1A31E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31E4u;
label_1a31e4:
    // 0x1a31e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a31e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a31e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a31e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31ec: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A31ECu;
    SET_GPR_U32(ctx, 31, 0x1A31F4u);
    ctx->pc = 0x1A31F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31ECu;
    // 0x1a31f0: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A31ECu, 0x1A31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31F4u;
label_1a31f4:
    // 0x1a31f4: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A31F4u;
    SET_GPR_U32(ctx, 31, 0x1A31FCu);
    ctx->pc = 0x1A31F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31F4u;
    // 0x1a31f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A31F4u, 0x1A31FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31FCu;
label_1a31fc:
    // 0x1a31fc: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a31fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3200: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x1a3200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x1a3204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3208: 0x0  nop
    ctx->pc = 0x1a3208u;
    // NOP
    // 0x1a320c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a320cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3210: 0x0  nop
    ctx->pc = 0x1a3210u;
    // NOP
    // 0x1a3214: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x1A3214u;
    {
        const bool branch_taken_0x1a3214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3214) {
            ctx->pc = 0x1A32ACu;
            goto label_1a32ac;
        }
    }
    ctx->pc = 0x1A321Cu;
    // 0x1a321c: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A321Cu;
    SET_GPR_U32(ctx, 31, 0x1A3224u);
    ctx->pc = 0x1A3220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A321Cu;
    // 0x1a3220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A321Cu, 0x1A3224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3224u;
label_1a3224:
    // 0x1a3224: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a3224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3228: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1a3228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1a322c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a322cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a3230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3234: 0x0  nop
    ctx->pc = 0x1a3234u;
    // NOP
    // 0x1a3238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a323c: 0x0  nop
    ctx->pc = 0x1a323cu;
    // NOP
    // 0x1a3240: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1A3240u;
    {
        const bool branch_taken_0x1a3240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3240) {
            ctx->pc = 0x1A32BCu;
            goto label_1a32bc;
        }
    }
    ctx->pc = 0x1A3248u;
    // 0x1a3248: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a3248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1a324c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a324cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a3250: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a3250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a3254: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a3258: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a3258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a325c: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1A325Cu;
    SET_GPR_U32(ctx, 31, 0x1A3264u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A325Cu, 0x1A3264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3264u;
label_1a3264:
    // 0x1a3264: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a3264u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1a3268: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1a3268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1a326c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a326cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1a3270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3274: 0x0  nop
    ctx->pc = 0x1a3274u;
    // NOP
    // 0x1a3278: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1a3278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a327c: 0x0  nop
    ctx->pc = 0x1a327cu;
    // NOP
    // 0x1a3280: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1A3280u;
    {
        const bool branch_taken_0x1a3280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3280u;
        // 0x1a3284: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3280) {
            ctx->pc = 0x1A32ACu;
            goto label_1a32ac;
        }
    }
    ctx->pc = 0x1A3288u;
    // 0x1a3288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a328c: 0x2443ff08  addiu       $v1, $v0, -0xF8
    ctx->pc = 0x1a328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967048));
    // 0x1a3290: 0x9c46ff08  lwu         $a2, -0xF8($v0)
    ctx->pc = 0x1a3290u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294967048)));
    // 0x1a3294: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x1a3294u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a3298: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a3298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a329c: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x1A329Cu;
    SET_GPR_U32(ctx, 31, 0x1A32A4u);
    ctx->pc = 0x1A32A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A329Cu;
    // 0x1a32a0: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x1A329Cu, 0x1A32A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A32A4u;
label_1a32a4:
    // 0x1a32a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A32A4u;
    {
        const bool branch_taken_0x1a32a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32A4u;
        // 0x1a32a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32a4) {
            ctx->pc = 0x1A32D8u;
            goto label_1a32d8;
        }
    }
    ctx->pc = 0x1A32ACu;
label_1a32ac:
    // 0x1a32ac: 0xc068f6e  jal         func_1A3DB8
    ctx->pc = 0x1A32ACu;
    SET_GPR_U32(ctx, 31, 0x1A32B4u);
    ctx->pc = 0x1A32B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32ACu;
    // 0x1a32b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A32ACu, 0x1A32B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A32B4u;
label_1a32b4:
    // 0x1a32b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A32B4u;
    {
        const bool branch_taken_0x1a32b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32B4u;
        // 0x1a32b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32b4) {
            ctx->pc = 0x1A32D8u;
            goto label_1a32d8;
        }
    }
    ctx->pc = 0x1A32BCu;
label_1a32bc:
    // 0x1a32bc: 0xc061a12  jal         func_186848
    ctx->pc = 0x1A32BCu;
    SET_GPR_U32(ctx, 31, 0x1A32C4u);
    ctx->pc = 0x1A32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32BCu;
    // 0x1a32c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A32BCu, 0x1A32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A32C4u;
label_1a32c4:
    // 0x1a32c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a32c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a32c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a32c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a32cc: 0xc0702b8  jal         func_1C0AE0
    ctx->pc = 0x1A32CCu;
    SET_GPR_U32(ctx, 31, 0x1A32D4u);
    ctx->pc = 0x1A32D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32CCu;
    // 0x1a32d0: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AE0u, 0x1A32CCu, 0x1A32D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A32D4u;
label_1a32d4:
    // 0x1a32d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a32d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a32d8:
    // 0x1a32d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a32d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a32dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a32dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a32e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A32E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32E0u;
        // 0x1a32e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A32E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A32E8u;
}
