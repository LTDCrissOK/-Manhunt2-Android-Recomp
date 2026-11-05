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

// Function: sub_001A8548
// Address: 0x1a8548 - 0x1a8668
void sub_001A8548_0x1a8548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8548_0x1a8548");
#endif

    switch (ctx->pc) {
        case 0x1a8588u: goto label_1a8588;
        case 0x1a85a8u: goto label_1a85a8;
        case 0x1a85b4u: goto label_1a85b4;
        case 0x1a85c4u: goto label_1a85c4;
        case 0x1a8644u: goto label_1a8644;
        default: break;
    }

    ctx->pc = 0x1a8548u;

    // 0x1a8548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a854c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a854cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a8550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8558: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a855c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8560: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a8560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8568: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a856c: 0x8e420140  lw          $v0, 0x140($s2)
    ctx->pc = 0x1a856cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x1a8570: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1a8570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a8574: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x1a8574u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a8578: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8578u;
    {
        const bool branch_taken_0x1a8578 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8578u;
        // 0x1a857c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8578) {
            ctx->pc = 0x1A8598u;
            goto label_1a8598;
        }
    }
    ctx->pc = 0x1A8580u;
    // 0x1a8580: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x1A8580u;
    SET_GPR_U32(ctx, 31, 0x1A8588u);
    ctx->pc = 0x1A8584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8580u;
    // 0x1a8584: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x1A8580u, 0x1A8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8588u;
label_1a8588:
    // 0x1a8588: 0x8e420140  lw          $v0, 0x140($s2)
    ctx->pc = 0x1a8588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x1a858c: 0x8c5115c4  lw          $s1, 0x15C4($v0)
    ctx->pc = 0x1a858cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5572)));
    // 0x1a8590: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A8590u;
    {
        const bool branch_taken_0x1a8590 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8590u;
        // 0x1a8594: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8590) {
            ctx->pc = 0x1A8648u;
            goto label_1a8648;
        }
    }
    ctx->pc = 0x1A8598u;
label_1a8598:
    // 0x1a8598: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1a8598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1a859c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a859cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a85a0: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x1A85A0u;
    SET_GPR_U32(ctx, 31, 0x1A85A8u);
    ctx->pc = 0x1A85A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85A0u;
    // 0x1a85a4: 0x2484f1b0  addiu       $a0, $a0, -0xE50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x1A85A0u, 0x1A85A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85A8u;
label_1a85a8:
    // 0x1a85a8: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x1a85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1a85ac: 0xc089ede  jal         func_227B78
    ctx->pc = 0x1A85ACu;
    SET_GPR_U32(ctx, 31, 0x1A85B4u);
    ctx->pc = 0x1A85B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85ACu;
    // 0x1a85b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B78u, 0x1A85ACu, 0x1A85B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85B4u;
label_1a85b4:
    // 0x1a85b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a85b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a85b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85bc: 0xc073dee  jal         func_1CF7B8
    ctx->pc = 0x1A85BCu;
    SET_GPR_U32(ctx, 31, 0x1A85C4u);
    ctx->pc = 0x1A85C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85BCu;
    // 0x1a85c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF7B8u, 0x1A85BCu, 0x1A85C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85C4u;
label_1a85c4:
    // 0x1a85c4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1a85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a85c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1a85c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1a85cc: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x1a85ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a85d0: 0x24846a00  addiu       $a0, $a0, 0x6A00
    ctx->pc = 0x1a85d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27136));
    // 0x1a85d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a85d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85d8: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x1a85d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1a85dc: 0x9605002a  lhu         $a1, 0x2A($s0)
    ctx->pc = 0x1a85dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a85e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a85e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a85e4: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x1a85e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a85e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1a85e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a85ec: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x1a85ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a85f0: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x1a85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1a85f4: 0x14660014  bne         $v1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A85F4u;
    {
        const bool branch_taken_0x1a85f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1A85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85F4u;
        // 0x1a85f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85f4) {
            ctx->pc = 0x1A8648u;
            goto label_1a8648;
        }
    }
    ctx->pc = 0x1A85FCu;
    // 0x1a85fc: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x1a85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x1a8600: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1a8600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1a8604: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A8604u;
    {
        const bool branch_taken_0x1a8604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8604u;
        // 0x1a8608: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8604) {
            ctx->pc = 0x1A8648u;
            goto label_1a8648;
        }
    }
    ctx->pc = 0x1A860Cu;
    // 0x1a860c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1a860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8610: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1a8610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1a8614: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a8614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a8618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a861c: 0x0  nop
    ctx->pc = 0x1a861cu;
    // NOP
    // 0x1a8620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a8620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8624: 0x0  nop
    ctx->pc = 0x1a8624u;
    // NOP
    // 0x1a8628: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8628u;
    {
        const bool branch_taken_0x1a8628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8628u;
        // 0x1a862c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8628) {
            ctx->pc = 0x1A8648u;
            goto label_1a8648;
        }
    }
    ctx->pc = 0x1A8630u;
    // 0x1a8630: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a8630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1a8634: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a8634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a8638: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a8638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a863c: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1A863Cu;
    SET_GPR_U32(ctx, 31, 0x1A8644u);
    ctx->pc = 0x1A8640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A863Cu;
    // 0x1a8640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1A863Cu, 0x1A8644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8644u;
label_1a8644:
    // 0x1a8644: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a8644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8648:
    // 0x1a8648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a864c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a864cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8650: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8654: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8654u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8658: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a865c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A865Cu;
        // 0x1a8660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8664u;
    // 0x1a8664: 0x0  nop
    ctx->pc = 0x1a8664u;
    // NOP
    ctx->pc = 0x1a8668u;
}
