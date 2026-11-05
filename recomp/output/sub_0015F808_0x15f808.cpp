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

// Function: sub_0015F808
// Address: 0x15f808 - 0x15f9b0
void sub_0015F808_0x15f808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F808_0x15f808");
#endif

    switch (ctx->pc) {
        case 0x15f850u: goto label_15f850;
        case 0x15f8d0u: goto label_15f8d0;
        case 0x15f95cu: goto label_15f95c;
        default: break;
    }

    ctx->pc = 0x15f808u;

    // 0x15f808: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15f808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15f80c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15f80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x15f810: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x15f814: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x15f814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f818: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x15f81c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15f81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f820: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x15f824: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x15f824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f828: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15f828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x15f82c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x15f82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x15f830: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x15f830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f834: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x15f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x15f838: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F838u;
    {
        const bool branch_taken_0x15f838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F838u;
        // 0x15f83c: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f838) {
            ctx->pc = 0x15F858u;
            goto label_15f858;
        }
    }
    ctx->pc = 0x15F840u;
    // 0x15f840: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F840u;
    {
        const bool branch_taken_0x15f840 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f840) {
            ctx->pc = 0x15F860u;
            goto label_15f860;
        }
    }
    ctx->pc = 0x15F848u;
    // 0x15f848: 0xc057c5a  jal         func_15F168
    ctx->pc = 0x15F848u;
    SET_GPR_U32(ctx, 31, 0x15F850u);
    ctx->pc = 0x15F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F848u;
    // 0x15f84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F168u, 0x15F848u, 0x15F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F850u;
label_15f850:
    // 0x15f850: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F850u;
    {
        const bool branch_taken_0x15f850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f850) {
            ctx->pc = 0x15F868u;
            goto label_15f868;
        }
    }
    ctx->pc = 0x15F858u;
label_15f858:
    // 0x15f858: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x15F858u;
    {
        const bool branch_taken_0x15f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F858u;
        // 0x15f85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f858) {
            ctx->pc = 0x15F988u;
            goto label_15f988;
        }
    }
    ctx->pc = 0x15F860u;
label_15f860:
    // 0x15f860: 0x10e00049  beqz        $a3, . + 4 + (0x49 << 2)
    ctx->pc = 0x15F860u;
    {
        const bool branch_taken_0x15f860 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F860u;
        // 0x15f864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f860) {
            ctx->pc = 0x15F988u;
            goto label_15f988;
        }
    }
    ctx->pc = 0x15F868u;
label_15f868:
    // 0x15f868: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F868u;
    {
        const bool branch_taken_0x15f868 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f868) {
            ctx->pc = 0x15F86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F868u;
            // 0x15f86c: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F87Cu;
            goto label_15f87c;
        }
    }
    ctx->pc = 0x15F870u;
    // 0x15f870: 0x12600045  beqz        $s3, . + 4 + (0x45 << 2)
    ctx->pc = 0x15F870u;
    {
        const bool branch_taken_0x15f870 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F870u;
        // 0x15f874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f870) {
            ctx->pc = 0x15F988u;
            goto label_15f988;
        }
    }
    ctx->pc = 0x15F878u;
    // 0x15f878: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x15f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f87c:
    // 0x15f87c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15f87cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f880: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x15f884: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x15f884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x15f888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15f888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f88c: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x15f88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f890: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x15f890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f894: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15f894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15f898: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x15f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f89c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15f89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f8a0: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x15f8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x15f8a4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x15f8a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15f8a8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x15f8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15f8ac: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x15f8acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x15f8b0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x15F8B0u;
    {
        const bool branch_taken_0x15f8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8B0u;
        // 0x15f8b4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8b0) {
            ctx->pc = 0x15F984u;
            goto label_15f984;
        }
    }
    ctx->pc = 0x15F8B8u;
    // 0x15f8b8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15f8bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15f8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15f8c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15f8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15f8c4: 0x24509c14  addiu       $s0, $v0, -0x63EC
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x15f8c8: 0x2614fefc  addiu       $s4, $s0, -0x104
    ctx->pc = 0x15f8c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967036));
    // 0x15f8cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x15f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15f8d0:
    // 0x15f8d0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15f8d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f8d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f8dc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15F8DCu;
    {
        const bool branch_taken_0x15f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8DCu;
        // 0x15f8e0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8dc) {
            ctx->pc = 0x15F964u;
            goto label_15f964;
        }
    }
    ctx->pc = 0x15F8E4u;
    // 0x15f8e4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15f8e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15f8ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f8f0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15F8F0u;
    {
        const bool branch_taken_0x15f8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8F0u;
        // 0x15f8f4: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8f0) {
            ctx->pc = 0x15F964u;
            goto label_15f964;
        }
    }
    ctx->pc = 0x15F8F8u;
    // 0x15f8f8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15f8fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15f900: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15f900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15f904: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f908: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F908u;
    {
        const bool branch_taken_0x15f908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f908) {
            ctx->pc = 0x15F90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F908u;
            // 0x15f90c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F918u;
            goto label_15f918;
        }
    }
    ctx->pc = 0x15F910u;
    // 0x15f910: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F910u;
    {
        const bool branch_taken_0x15f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F910u;
        // 0x15f914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f910) {
            ctx->pc = 0x15F920u;
            goto label_15f920;
        }
    }
    ctx->pc = 0x15F918u;
label_15f918:
    // 0x15f918: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f91c: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x15f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f920:
    // 0x15f920: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15F920u;
    {
        const bool branch_taken_0x15f920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F920u;
        // 0x15f924: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f920) {
            ctx->pc = 0x15F964u;
            goto label_15f964;
        }
    }
    ctx->pc = 0x15F928u;
    // 0x15f928: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f92c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15f92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15f930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f934: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15f934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15f938: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f93c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15f93cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15f940: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x15f940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x15f944: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f948: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x15f948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15f94c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x15f94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f950: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15f950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15f954: 0xc041032  jal         func_1040C8
    ctx->pc = 0x15F954u;
    SET_GPR_U32(ctx, 31, 0x15F95Cu);
    ctx->pc = 0x15F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F954u;
    // 0x15f958: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x15F954u, 0x15F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F95Cu;
label_15f95c:
    // 0x15f95c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15F95Cu;
    {
        const bool branch_taken_0x15f95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F95Cu;
        // 0x15f960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f95c) {
            ctx->pc = 0x15F988u;
            goto label_15f988;
        }
    }
    ctx->pc = 0x15F964u;
label_15f964:
    // 0x15f964: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15f968: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x15f968u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15f96c: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x15f96cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15f970: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F970u;
    {
        const bool branch_taken_0x15f970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F970u;
        // 0x15f974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f970) {
            ctx->pc = 0x15F988u;
            goto label_15f988;
        }
    }
    ctx->pc = 0x15F978u;
    // 0x15f978: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x15f978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x15f97c: 0x5662ffd4  bnel        $s3, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x15F97Cu;
    {
        const bool branch_taken_0x15f97c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f97c) {
            ctx->pc = 0x15F980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F97Cu;
            // 0x15f980: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f8d0;
        }
    }
    ctx->pc = 0x15F984u;
label_15f984:
    // 0x15f984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f988:
    // 0x15f988: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15f988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f98c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15f98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15f990: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15f990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f994: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15f994u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15f998: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15f998u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f99c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15f99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15f9a0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x15f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15f9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x15F9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9A4u;
        // 0x15f9a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F9ACu;
    // 0x15f9ac: 0x0  nop
    ctx->pc = 0x15f9acu;
    // NOP
    ctx->pc = 0x15f9b0u;
}
