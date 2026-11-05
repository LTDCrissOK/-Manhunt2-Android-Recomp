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

// Function: sub_001BF620
// Address: 0x1bf620 - 0x1bf7d8
void sub_001BF620_0x1bf620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF620_0x1bf620");
#endif

    switch (ctx->pc) {
        case 0x1bf63cu: goto label_1bf63c;
        case 0x1bf64cu: goto label_1bf64c;
        case 0x1bf65cu: goto label_1bf65c;
        case 0x1bf690u: goto label_1bf690;
        case 0x1bf6d4u: goto label_1bf6d4;
        case 0x1bf6f4u: goto label_1bf6f4;
        case 0x1bf728u: goto label_1bf728;
        default: break;
    }

    ctx->pc = 0x1bf620u;

    // 0x1bf620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bf620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bf624: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bf624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1bf628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf62c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bf62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1bf630: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bf630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bf634: 0xc070d92  jal         func_1C3648
    ctx->pc = 0x1BF634u;
    SET_GPR_U32(ctx, 31, 0x1BF63Cu);
    ctx->pc = 0x1BF638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF634u;
    // 0x1bf638: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3648u, 0x1BF634u, 0x1BF63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF63Cu;
label_1bf63c:
    // 0x1bf63c: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1bf63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf644: 0xc070d92  jal         func_1C3648
    ctx->pc = 0x1BF644u;
    SET_GPR_U32(ctx, 31, 0x1BF64Cu);
    ctx->pc = 0x1BF648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF644u;
    // 0x1bf648: 0xe6000350  swc1        $f0, 0x350($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 848), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3648u, 0x1BF644u, 0x1BF64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF64Cu;
label_1bf64c:
    // 0x1bf64c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1bf64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf654: 0xc070d92  jal         func_1C3648
    ctx->pc = 0x1BF654u;
    SET_GPR_U32(ctx, 31, 0x1BF65Cu);
    ctx->pc = 0x1BF658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF654u;
    // 0x1bf658: 0xe6000354  swc1        $f0, 0x354($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 852), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3648u, 0x1BF654u, 0x1BF65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF65Cu;
label_1bf65c:
    // 0x1bf65c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1bf65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bf660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf664: 0x0  nop
    ctx->pc = 0x1bf664u;
    // NOP
    // 0x1bf668: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bf668u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf66c: 0x0  nop
    ctx->pc = 0x1bf66cu;
    // NOP
    // 0x1bf670: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF670u;
    {
        const bool branch_taken_0x1bf670 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF670u;
        // 0x1bf674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf670) {
            ctx->pc = 0x1BF67Cu;
            goto label_1bf67c;
        }
    }
    ctx->pc = 0x1BF678u;
    // 0x1bf678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf67c:
    // 0x1bf67c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BF67Cu;
    {
        const bool branch_taken_0x1bf67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF67Cu;
        // 0x1bf680: 0x26110260  addiu       $s1, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf67c) {
            ctx->pc = 0x1BF6E0u;
            goto label_1bf6e0;
        }
    }
    ctx->pc = 0x1BF684u;
    // 0x1bf684: 0xc6140354  lwc1        $f20, 0x354($s0)
    ctx->pc = 0x1bf684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bf688: 0xc06fc34  jal         func_1BF0D0
    ctx->pc = 0x1BF688u;
    SET_GPR_U32(ctx, 31, 0x1BF690u);
    ctx->pc = 0x1BF68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF688u;
    // 0x1bf68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BF688u, 0x1BF690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF690u;
label_1bf690:
    // 0x1bf690: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1bf690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1bf694: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bf694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bf698: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf69c: 0xc601033c  lwc1        $f1, 0x33C($s0)
    ctx->pc = 0x1bf69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf6a0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1bf6a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1bf6a4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1bf6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1bf6a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf6ac: 0x0  nop
    ctx->pc = 0x1bf6acu;
    // NOP
    // 0x1bf6b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF6B0u;
    {
        const bool branch_taken_0x1bf6b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6B0u;
        // 0x1bf6b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6b0) {
            ctx->pc = 0x1BF6C8u;
            goto label_1bf6c8;
        }
    }
    ctx->pc = 0x1BF6B8u;
    // 0x1bf6b8: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1bf6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1bf6bc: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1bf6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1bf6c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF6C0u;
    {
        const bool branch_taken_0x1bf6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6c0) {
            ctx->pc = 0x1BF6D8u;
            goto label_1bf6d8;
        }
    }
    ctx->pc = 0x1BF6C8u;
label_1bf6c8:
    // 0x1bf6c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bf6c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bf6cc: 0xc06fcb6  jal         func_1BF2D8
    ctx->pc = 0x1BF6CCu;
    SET_GPR_U32(ctx, 31, 0x1BF6D4u);
    ctx->pc = 0x1BF6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6CCu;
    // 0x1bf6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF2D8u, 0x1BF6CCu, 0x1BF6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6D4u;
label_1bf6d4:
    // 0x1bf6d4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1bf6d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bf6d8:
    // 0x1bf6d8: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1BF6D8u;
    {
        const bool branch_taken_0x1bf6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6D8u;
        // 0x1bf6dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6d8) {
            ctx->pc = 0x1BF7C0u;
            goto label_1bf7c0;
        }
    }
    ctx->pc = 0x1BF6E0u;
label_1bf6e0:
    // 0x1bf6e0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1bf6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1bf6e4: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1BF6E4u;
    {
        const bool branch_taken_0x1bf6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6E4u;
        // 0x1bf6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6e4) {
            ctx->pc = 0x1BF7C0u;
            goto label_1bf7c0;
        }
    }
    ctx->pc = 0x1BF6ECu;
    // 0x1bf6ec: 0xc06fc34  jal         func_1BF0D0
    ctx->pc = 0x1BF6ECu;
    SET_GPR_U32(ctx, 31, 0x1BF6F4u);
    ctx->pc = 0x1BF6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6ECu;
    // 0x1bf6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BF6ECu, 0x1BF6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6F4u;
label_1bf6f4:
    // 0x1bf6f4: 0xc60c0350  lwc1        $f12, 0x350($s0)
    ctx->pc = 0x1bf6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf6f8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1bf6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1bf6fc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bf6fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bf700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf704: 0xc601033c  lwc1        $f1, 0x33C($s0)
    ctx->pc = 0x1bf704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf708: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1bf708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1bf70c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1bf70cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1bf710: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf714: 0x0  nop
    ctx->pc = 0x1bf714u;
    // NOP
    // 0x1bf718: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF718u;
    {
        const bool branch_taken_0x1bf718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF718u;
        // 0x1bf71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf718) {
            ctx->pc = 0x1BF72Cu;
            goto label_1bf72c;
        }
    }
    ctx->pc = 0x1BF720u;
    // 0x1bf720: 0xc06fcb6  jal         func_1BF2D8
    ctx->pc = 0x1BF720u;
    SET_GPR_U32(ctx, 31, 0x1BF728u);
    ctx->pc = 0x1BF724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF720u;
    // 0x1bf724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF2D8u, 0x1BF720u, 0x1BF728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF728u;
label_1bf728:
    // 0x1bf728: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bf728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bf72c:
    // 0x1bf72c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BF72Cu;
    {
        const bool branch_taken_0x1bf72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF72Cu;
        // 0x1bf730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf72c) {
            ctx->pc = 0x1BF7C0u;
            goto label_1bf7c0;
        }
    }
    ctx->pc = 0x1BF734u;
    // 0x1bf734: 0x8e0304bc  lw          $v1, 0x4BC($s0)
    ctx->pc = 0x1bf734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1212)));
    // 0x1bf738: 0x8c640ffc  lw          $a0, 0xFFC($v1)
    ctx->pc = 0x1bf738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4092)));
    // 0x1bf73c: 0x24840210  addiu       $a0, $a0, 0x210
    ctx->pc = 0x1bf73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x1bf740: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1bf740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1bf744: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BF744u;
    {
        const bool branch_taken_0x1bf744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF744u;
        // 0x1bf748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf744) {
            ctx->pc = 0x1BF7C0u;
            goto label_1bf7c0;
        }
    }
    ctx->pc = 0x1BF74Cu;
    // 0x1bf74c: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1bf74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1bf750: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1bf750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bf754: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1bf754u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf758: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bf758u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf75c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1bf75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf760: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1bf760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf764: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1bf764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf768: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1bf768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf76c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1bf76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1bf770: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bf770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bf774: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1bf774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1bf778: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1bf778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bf77c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1bf77cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1bf780: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1bf780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf784: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1bf784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bf788: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1bf788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1bf78c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1bf78cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1bf790: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1bf790u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1bf794: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1bf794u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1bf798: 0x46010044  c1          0x10044
    ctx->pc = 0x1bf798u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1bf79c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1bf79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1bf7a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bf7a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bf7a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf7a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf7a8: 0x0  nop
    ctx->pc = 0x1bf7a8u;
    // NOP
    // 0x1bf7ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf7acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf7b0: 0x0  nop
    ctx->pc = 0x1bf7b0u;
    // NOP
    // 0x1bf7b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF7B4u;
    {
        const bool branch_taken_0x1bf7b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7B4u;
        // 0x1bf7b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7b4) {
            ctx->pc = 0x1BF7C4u;
            goto label_1bf7c4;
        }
    }
    ctx->pc = 0x1BF7BCu;
    // 0x1bf7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf7c0:
    // 0x1bf7c0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bf7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf7c4:
    // 0x1bf7c4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bf7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bf7c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bf7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf7cc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1bf7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bf7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7D0u;
        // 0x1bf7d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF7D8u;
}
