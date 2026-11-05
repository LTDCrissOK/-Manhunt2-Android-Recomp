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

// Function: sub_00327538
// Address: 0x327538 - 0x32764c
void sub_00327538_0x327538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327538_0x327538");
#endif

    switch (ctx->pc) {
        case 0x327580u: goto label_327580;
        case 0x32759cu: goto label_32759c;
        case 0x3275a8u: goto label_3275a8;
        case 0x3275ccu: goto label_3275cc;
        case 0x3275d8u: goto label_3275d8;
        case 0x3275ecu: goto label_3275ec;
        case 0x3275f8u: goto label_3275f8;
        case 0x32760cu: goto label_32760c;
        case 0x327618u: goto label_327618;
        case 0x32762cu: goto label_32762c;
        case 0x327638u: goto label_327638;
        default: break;
    }

    ctx->pc = 0x327538u;

    // 0x327538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32753c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327540: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x327540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x327544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327548: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x327548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32754c: 0x8e020484  lw          $v0, 0x484($s0)
    ctx->pc = 0x32754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1156)));
    // 0x327550: 0x2444ffb9  addiu       $a0, $v0, -0x47
    ctx->pc = 0x327550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967225));
    // 0x327554: 0x2c83000d  sltiu       $v1, $a0, 0xD
    ctx->pc = 0x327554u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x327558: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x327558u;
    {
        const bool branch_taken_0x327558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327558u;
        // 0x32755c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327558) {
            ctx->pc = 0x327650u;
            return;
        }
    }
    ctx->pc = 0x327560u;
    // 0x327560: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327564: 0x24424800  addiu       $v0, $v0, 0x4800
    ctx->pc = 0x327564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18432));
    // 0x327568: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x327568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32756c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x32756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327570: 0x800008  jr          $a0
    ctx->pc = 0x327570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x327578u: goto label_327578;
            case 0x327594u: goto label_327594;
            case 0x3275B4u: goto label_3275b4;
            case 0x3275C4u: goto label_3275c4;
            case 0x3275E4u: goto label_3275e4;
            case 0x327604u: goto label_327604;
            case 0x327624u: goto label_327624;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327570u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x327578u;
label_327578:
    // 0x327578: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x327578u;
    SET_GPR_U32(ctx, 31, 0x327580u);
    ctx->pc = 0x32757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327578u;
    // 0x32757c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x327578u, 0x327580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327580u;
label_327580:
    // 0x327580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327584: 0x0  nop
    ctx->pc = 0x327584u;
    // NOP
    // 0x327588: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x327588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32758c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x32758Cu;
    {
        const bool branch_taken_0x32758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32758Cu;
        // 0x327590: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32758c) {
            ctx->pc = 0x327650u;
            return;
        }
    }
    ctx->pc = 0x327594u;
label_327594:
    // 0x327594: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x327594u;
    SET_GPR_U32(ctx, 31, 0x32759Cu);
    ctx->pc = 0x327598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327594u;
    // 0x327598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x327594u, 0x32759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32759Cu;
label_32759c:
    // 0x32759c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32759cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3275a0: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x3275A0u;
    SET_GPR_U32(ctx, 31, 0x3275A8u);
    ctx->pc = 0x3275A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3275A0u;
    // 0x3275a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x3275A0u, 0x3275A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3275A8u;
label_3275a8:
    // 0x3275a8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3275a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3275ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3275ACu;
    {
        const bool branch_taken_0x3275ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3275B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275ACu;
        // 0x3275b0: 0xe6000480  swc1        $f0, 0x480($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275ac) {
            ctx->pc = 0x327650u;
            return;
        }
    }
    ctx->pc = 0x3275B4u;
label_3275b4:
    // 0x3275b4: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x3275b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3275b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3275b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3275bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3275BCu;
    {
        const bool branch_taken_0x3275bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3275C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275BCu;
        // 0x3275c0: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275bc) {
            ctx->pc = 0x327650u;
            return;
        }
    }
    ctx->pc = 0x3275C4u;
label_3275c4:
    // 0x3275c4: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x3275C4u;
    SET_GPR_U32(ctx, 31, 0x3275CCu);
    ctx->pc = 0x3275C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3275C4u;
    // 0x3275c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x3275C4u, 0x3275CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3275CCu;
label_3275cc:
    // 0x3275cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3275ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3275d0: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x3275D0u;
    SET_GPR_U32(ctx, 31, 0x3275D8u);
    ctx->pc = 0x3275D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3275D0u;
    // 0x3275d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x3275D0u, 0x3275D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3275D8u;
label_3275d8:
    // 0x3275d8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3275d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3275dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3275DCu;
    {
        const bool branch_taken_0x3275dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3275E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275DCu;
        // 0x3275e0: 0xe614003c  swc1        $f20, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275dc) {
            ctx->pc = 0x327650u;
            return;
        }
    }
    ctx->pc = 0x3275E4u;
label_3275e4:
    // 0x3275e4: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x3275E4u;
    SET_GPR_U32(ctx, 31, 0x3275ECu);
    ctx->pc = 0x3275E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3275E4u;
    // 0x3275e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x3275E4u, 0x3275ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3275ECu;
label_3275ec:
    // 0x3275ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3275ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3275f0: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x3275F0u;
    SET_GPR_U32(ctx, 31, 0x3275F8u);
    ctx->pc = 0x3275F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3275F0u;
    // 0x3275f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x3275F0u, 0x3275F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3275F8u;
label_3275f8:
    // 0x3275f8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3275f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3275fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3275FCu;
    {
        const bool branch_taken_0x3275fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275FCu;
        // 0x327600: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275fc) {
            ctx->pc = 0x327650u;
            return;
        }
    }
    ctx->pc = 0x327604u;
label_327604:
    // 0x327604: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x327604u;
    SET_GPR_U32(ctx, 31, 0x32760Cu);
    ctx->pc = 0x327608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327604u;
    // 0x327608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x327604u, 0x32760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32760Cu;
label_32760c:
    // 0x32760c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32760cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x327610: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x327610u;
    SET_GPR_U32(ctx, 31, 0x327618u);
    ctx->pc = 0x327614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327610u;
    // 0x327614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x327610u, 0x327618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327618u;
label_327618:
    // 0x327618: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x327618u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x32761c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32761Cu;
    {
        const bool branch_taken_0x32761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32761Cu;
        // 0x327620: 0xe614003c  swc1        $f20, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32761c) {
            ctx->pc = 0x327650u;
            return;
        }
    }
    ctx->pc = 0x327624u;
label_327624:
    // 0x327624: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x327624u;
    SET_GPR_U32(ctx, 31, 0x32762Cu);
    ctx->pc = 0x327628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327624u;
    // 0x327628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x327624u, 0x32762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32762Cu;
label_32762c:
    // 0x32762c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32762cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x327630: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x327630u;
    SET_GPR_U32(ctx, 31, 0x327638u);
    ctx->pc = 0x327634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327630u;
    // 0x327634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x327630u, 0x327638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327638u;
label_327638:
    // 0x327638: 0x0  nop
    ctx->pc = 0x327638u;
    // NOP
    // 0x32763c: 0x0  nop
    ctx->pc = 0x32763cu;
    // NOP
    // 0x327640: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x327640u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x327644: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x327644u;
    {
        const bool branch_taken_0x327644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327644u;
        // 0x327648: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327644) {
            ctx->pc = 0x327650u;
            return;
        }
    }
    ctx->pc = 0x32764Cu;
}
