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

// Function: sub_0019B598
// Address: 0x19b598 - 0x19ba58
void sub_0019B598_0x19b598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B598_0x19b598");
#endif

    switch (ctx->pc) {
        case 0x19b5acu: goto label_19b5ac;
        case 0x19b5bcu: goto label_19b5bc;
        case 0x19b5d0u: goto label_19b5d0;
        case 0x19b5ecu: goto label_19b5ec;
        case 0x19b5f4u: goto label_19b5f4;
        case 0x19b604u: goto label_19b604;
        case 0x19b614u: goto label_19b614;
        case 0x19b674u: goto label_19b674;
        case 0x19b67cu: goto label_19b67c;
        case 0x19b6acu: goto label_19b6ac;
        case 0x19b6b4u: goto label_19b6b4;
        case 0x19b6d0u: goto label_19b6d0;
        case 0x19b73cu: goto label_19b73c;
        case 0x19b744u: goto label_19b744;
        case 0x19b754u: goto label_19b754;
        case 0x19b774u: goto label_19b774;
        case 0x19b784u: goto label_19b784;
        case 0x19b7a4u: goto label_19b7a4;
        case 0x19b7acu: goto label_19b7ac;
        case 0x19b7bcu: goto label_19b7bc;
        case 0x19b7fcu: goto label_19b7fc;
        case 0x19b80cu: goto label_19b80c;
        case 0x19b814u: goto label_19b814;
        case 0x19b824u: goto label_19b824;
        case 0x19b82cu: goto label_19b82c;
        case 0x19b83cu: goto label_19b83c;
        case 0x19b85cu: goto label_19b85c;
        case 0x19b86cu: goto label_19b86c;
        case 0x19b87cu: goto label_19b87c;
        case 0x19b88cu: goto label_19b88c;
        case 0x19b8b8u: goto label_19b8b8;
        case 0x19b8c8u: goto label_19b8c8;
        case 0x19b8d0u: goto label_19b8d0;
        case 0x19b900u: goto label_19b900;
        case 0x19b9d0u: goto label_19b9d0;
        case 0x19b9ecu: goto label_19b9ec;
        case 0x19b9f4u: goto label_19b9f4;
        case 0x19ba04u: goto label_19ba04;
        case 0x19ba34u: goto label_19ba34;
        case 0x19ba44u: goto label_19ba44;
        default: break;
    }

    ctx->pc = 0x19b598u;

    // 0x19b598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b59c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19b59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19b5a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19b5a4: 0xc06762c  jal         func_19D8B0
    ctx->pc = 0x19B5A4u;
    SET_GPR_U32(ctx, 31, 0x19B5ACu);
    ctx->pc = 0x19B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B5A4u;
    // 0x19b5a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D8B0u, 0x19B5A4u, 0x19B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5ACu;
label_19b5ac:
    // 0x19b5ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B5ACu;
    {
        const bool branch_taken_0x19b5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5ac) {
            ctx->pc = 0x19B5C8u;
            goto label_19b5c8;
        }
    }
    ctx->pc = 0x19B5B4u;
    // 0x19b5b4: 0xc061a16  jal         func_186858
    ctx->pc = 0x19B5B4u;
    SET_GPR_U32(ctx, 31, 0x19B5BCu);
    ctx->pc = 0x19B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B5B4u;
    // 0x19b5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19B5B4u, 0x19B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5BCu;
label_19b5bc:
    // 0x19b5bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b5c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19B5C0u;
    {
        const bool branch_taken_0x19b5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5C0u;
        // 0x19b5c4: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5c0) {
            ctx->pc = 0x19B5D4u;
            goto label_19b5d4;
        }
    }
    ctx->pc = 0x19B5C8u;
label_19b5c8:
    // 0x19b5c8: 0xc061a16  jal         func_186858
    ctx->pc = 0x19B5C8u;
    SET_GPR_U32(ctx, 31, 0x19B5D0u);
    ctx->pc = 0x19B5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B5C8u;
    // 0x19b5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19B5C8u, 0x19B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5D0u;
label_19b5d0:
    // 0x19b5d0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_19b5d4:
    // 0x19b5d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b5d8: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x19b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
    // 0x19b5dc: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x19B5DCu;
    {
        const bool branch_taken_0x19b5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5dc) {
            ctx->pc = 0x19B66Cu;
            goto label_19b66c;
        }
    }
    ctx->pc = 0x19B5E4u;
    // 0x19b5e4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B5E4u;
    SET_GPR_U32(ctx, 31, 0x19B5ECu);
    ctx->pc = 0x19B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B5E4u;
    // 0x19b5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B5E4u, 0x19B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5ECu;
label_19b5ec:
    // 0x19b5ec: 0xc06d9b2  jal         func_1B66C8
    ctx->pc = 0x19B5ECu;
    SET_GPR_U32(ctx, 31, 0x19B5F4u);
    ctx->pc = 0x19B5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B5ECu;
    // 0x19b5f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B66C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B66C8u, 0x19B5ECu, 0x19B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5F4u;
label_19b5f4:
    // 0x19b5f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B5F4u;
    {
        const bool branch_taken_0x19b5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5f4) {
            ctx->pc = 0x19B60Cu;
            goto label_19b60c;
        }
    }
    ctx->pc = 0x19B5FCu;
    // 0x19b5fc: 0xc067258  jal         func_19C960
    ctx->pc = 0x19B5FCu;
    SET_GPR_U32(ctx, 31, 0x19B604u);
    ctx->pc = 0x19B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B5FCu;
    // 0x19b600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x19B5FCu, 0x19B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B604u;
label_19b604:
    // 0x19b604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19B604u;
    {
        const bool branch_taken_0x19b604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B604u;
        // 0x19b608: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b604) {
            ctx->pc = 0x19B618u;
            goto label_19b618;
        }
    }
    ctx->pc = 0x19B60Cu;
label_19b60c:
    // 0x19b60c: 0xc0672f6  jal         func_19CBD8
    ctx->pc = 0x19B60Cu;
    SET_GPR_U32(ctx, 31, 0x19B614u);
    ctx->pc = 0x19B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B60Cu;
    // 0x19b610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CBD8u, 0x19B60Cu, 0x19B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B614u;
label_19b614:
    // 0x19b614: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19b614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_19b618:
    // 0x19b618: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x19b61c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B61Cu;
    {
        const bool branch_taken_0x19b61c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B61Cu;
        // 0x19b620: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b61c) {
            ctx->pc = 0x19B638u;
            goto label_19b638;
        }
    }
    ctx->pc = 0x19B624u;
    // 0x19b624: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b628: 0x0  nop
    ctx->pc = 0x19b628u;
    // NOP
    // 0x19b62c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b62cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19b630: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B630u;
    {
        const bool branch_taken_0x19b630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b630) {
            ctx->pc = 0x19B650u;
            goto label_19b650;
        }
    }
    ctx->pc = 0x19B638u;
label_19b638:
    // 0x19b638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b63c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19b640: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b644: 0x0  nop
    ctx->pc = 0x19b644u;
    // NOP
    // 0x19b648: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19b64c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19b64cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19b650:
    // 0x19b650: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19b650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19b654: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19b654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19b658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b65c: 0x0  nop
    ctx->pc = 0x19b65cu;
    // NOP
    // 0x19b660: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19b664: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x19B664u;
    {
        const bool branch_taken_0x19b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B664u;
        // 0x19b668: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b664) {
            ctx->pc = 0x19BA44u;
            goto label_19ba44;
        }
    }
    ctx->pc = 0x19B66Cu;
label_19b66c:
    // 0x19b66c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B66Cu;
    SET_GPR_U32(ctx, 31, 0x19B674u);
    ctx->pc = 0x19B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B66Cu;
    // 0x19b670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B66Cu, 0x19B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B674u;
label_19b674:
    // 0x19b674: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x19B674u;
    SET_GPR_U32(ctx, 31, 0x19B67Cu);
    ctx->pc = 0x19B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B674u;
    // 0x19b678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19B674u, 0x19B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B67Cu;
label_19b67c:
    // 0x19b67c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x19B67Cu;
    {
        const bool branch_taken_0x19b67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b67c) {
            ctx->pc = 0x19B77Cu;
            goto label_19b77c;
        }
    }
    ctx->pc = 0x19B684u;
    // 0x19b684: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b688: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x19b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x19b68c: 0x8c640334  lw          $a0, 0x334($v1)
    ctx->pc = 0x19b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x19b690: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x19b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x19b694: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x19b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x19b698: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x19b698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x19b69c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B69Cu;
    {
        const bool branch_taken_0x19b69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B69Cu;
        // 0x19b6a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b69c) {
            ctx->pc = 0x19B6D8u;
            goto label_19b6d8;
        }
    }
    ctx->pc = 0x19B6A4u;
    // 0x19b6a4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B6A4u;
    SET_GPR_U32(ctx, 31, 0x19B6ACu);
    ctx->pc = 0x19B6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6A4u;
    // 0x19b6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B6A4u, 0x19B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6ACu;
label_19b6ac:
    // 0x19b6ac: 0xc06d9b2  jal         func_1B66C8
    ctx->pc = 0x19B6ACu;
    SET_GPR_U32(ctx, 31, 0x19B6B4u);
    ctx->pc = 0x19B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6ACu;
    // 0x19b6b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B66C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B66C8u, 0x19B6ACu, 0x19B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6B4u;
label_19b6b4:
    // 0x19b6b4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19B6B4u;
    {
        const bool branch_taken_0x19b6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6B4u;
        // 0x19b6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6b4) {
            ctx->pc = 0x19B76Cu;
            goto label_19b76c;
        }
    }
    ctx->pc = 0x19B6BCu;
    // 0x19b6bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19b6c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19b6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b6c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19b6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b6c8: 0xc06749e  jal         func_19D278
    ctx->pc = 0x19B6C8u;
    SET_GPR_U32(ctx, 31, 0x19B6D0u);
    ctx->pc = 0x19B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6C8u;
    // 0x19b6cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D278u, 0x19B6C8u, 0x19B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6D0u;
label_19b6d0:
    // 0x19b6d0: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x19B6D0u;
    {
        const bool branch_taken_0x19b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6D0u;
        // 0x19b6d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6d0) {
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19B6D8u;
label_19b6d8:
    // 0x19b6d8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x19b6dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B6DCu;
    {
        const bool branch_taken_0x19b6dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6DCu;
        // 0x19b6e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6dc) {
            ctx->pc = 0x19B6F8u;
            goto label_19b6f8;
        }
    }
    ctx->pc = 0x19B6E4u;
    // 0x19b6e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19b6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b6e8: 0x0  nop
    ctx->pc = 0x19b6e8u;
    // NOP
    // 0x19b6ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19b6ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19b6f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B6F0u;
    {
        const bool branch_taken_0x19b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6f0) {
            ctx->pc = 0x19B710u;
            goto label_19b710;
        }
    }
    ctx->pc = 0x19B6F8u;
label_19b6f8:
    // 0x19b6f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b6fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19b6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19b700: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19b700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b704: 0x0  nop
    ctx->pc = 0x19b704u;
    // NOP
    // 0x19b708: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19b708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19b70c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19b70cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19b710:
    // 0x19b710: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19b710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19b714: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19b714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19b718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b71c: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x19b71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b720: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19b720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19b724: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19b724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b728: 0x0  nop
    ctx->pc = 0x19b728u;
    // NOP
    // 0x19b72c: 0x450200c6  bc1fl       . + 4 + (0xC6 << 2)
    ctx->pc = 0x19B72Cu;
    {
        const bool branch_taken_0x19b72c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b72c) {
            ctx->pc = 0x19B730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B72Cu;
            // 0x19b730: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19B734u;
    // 0x19b734: 0xc061a1a  jal         func_186868
    ctx->pc = 0x19B734u;
    SET_GPR_U32(ctx, 31, 0x19B73Cu);
    ctx->pc = 0x19B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B734u;
    // 0x19b738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x19B734u, 0x19B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B73Cu;
label_19b73c:
    // 0x19b73c: 0xc07173a  jal         func_1C5CE8
    ctx->pc = 0x19B73Cu;
    SET_GPR_U32(ctx, 31, 0x19B744u);
    ctx->pc = 0x19B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B73Cu;
    // 0x19b740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CE8u, 0x19B73Cu, 0x19B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B744u;
label_19b744:
    // 0x19b744: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x19B744u;
    {
        const bool branch_taken_0x19b744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b744) {
            ctx->pc = 0x19BA1Cu;
            goto label_19ba1c;
        }
    }
    ctx->pc = 0x19B74Cu;
    // 0x19b74c: 0xc061a1a  jal         func_186868
    ctx->pc = 0x19B74Cu;
    SET_GPR_U32(ctx, 31, 0x19B754u);
    ctx->pc = 0x19B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B74Cu;
    // 0x19b750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x19B74Cu, 0x19B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B754u;
label_19b754:
    // 0x19b754: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19b754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19b758: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x19b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19b75c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19b760: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19b760u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19b764: 0x146000ad  bnez        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x19B764u;
    {
        const bool branch_taken_0x19b764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b764) {
            ctx->pc = 0x19BA1Cu;
            goto label_19ba1c;
        }
    }
    ctx->pc = 0x19B76Cu;
label_19b76c:
    // 0x19b76c: 0xc067258  jal         func_19C960
    ctx->pc = 0x19B76Cu;
    SET_GPR_U32(ctx, 31, 0x19B774u);
    ctx->pc = 0x19B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B76Cu;
    // 0x19b770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x19B76Cu, 0x19B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B774u;
label_19b774:
    // 0x19b774: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x19B774u;
    {
        const bool branch_taken_0x19b774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B774u;
        // 0x19b778: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b774) {
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19B77Cu;
label_19b77c:
    // 0x19b77c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B77Cu;
    SET_GPR_U32(ctx, 31, 0x19B784u);
    ctx->pc = 0x19B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B77Cu;
    // 0x19b780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B77Cu, 0x19B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B784u;
label_19b784:
    // 0x19b784: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x19b784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x19b788: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x19B788u;
    {
        const bool branch_taken_0x19b788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b788) {
            ctx->pc = 0x19B804u;
            goto label_19b804;
        }
    }
    ctx->pc = 0x19B790u;
    // 0x19b790: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x19b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x19b794: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x19B794u;
    {
        const bool branch_taken_0x19b794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b794) {
            ctx->pc = 0x19B798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B794u;
            // 0x19b798: 0xae0000c0  sw          $zero, 0xC0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7F4u;
            goto label_19b7f4;
        }
    }
    ctx->pc = 0x19B79Cu;
    // 0x19b79c: 0xc061a1a  jal         func_186868
    ctx->pc = 0x19B79Cu;
    SET_GPR_U32(ctx, 31, 0x19B7A4u);
    ctx->pc = 0x19B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B79Cu;
    // 0x19b7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x19B79Cu, 0x19B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7A4u;
label_19b7a4:
    // 0x19b7a4: 0xc07173a  jal         func_1C5CE8
    ctx->pc = 0x19B7A4u;
    SET_GPR_U32(ctx, 31, 0x19B7ACu);
    ctx->pc = 0x19B7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B7A4u;
    // 0x19b7a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CE8u, 0x19B7A4u, 0x19B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7ACu;
label_19b7ac:
    // 0x19b7ac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x19B7ACu;
    {
        const bool branch_taken_0x19b7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b7ac) {
            ctx->pc = 0x19B7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7ACu;
            // 0x19b7b0: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7D8u;
            goto label_19b7d8;
        }
    }
    ctx->pc = 0x19B7B4u;
    // 0x19b7b4: 0xc061a1a  jal         func_186868
    ctx->pc = 0x19B7B4u;
    SET_GPR_U32(ctx, 31, 0x19B7BCu);
    ctx->pc = 0x19B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B7B4u;
    // 0x19b7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x19B7B4u, 0x19B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7BCu;
label_19b7bc:
    // 0x19b7bc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19b7c0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x19b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19b7c4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19b7c8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19b7c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19b7cc: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B7CCu;
    {
        const bool branch_taken_0x19b7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b7cc) {
            ctx->pc = 0x19B7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7CCu;
            // 0x19b7d0: 0xae0000c0  sw          $zero, 0xC0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7F4u;
            goto label_19b7f4;
        }
    }
    ctx->pc = 0x19B7D4u;
    // 0x19b7d4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x19b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_19b7d8:
    // 0x19b7d8: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x19B7D8u;
    {
        const bool branch_taken_0x19b7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7D8u;
        // 0x19b7dc: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7d8) {
            ctx->pc = 0x19BA1Cu;
            goto label_19ba1c;
        }
    }
    ctx->pc = 0x19B7E0u;
    // 0x19b7e0: 0x8c620898  lw          $v0, 0x898($v1)
    ctx->pc = 0x19b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2200)));
    // 0x19b7e4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x19b7e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19b7e8: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x19B7E8u;
    {
        const bool branch_taken_0x19b7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b7e8) {
            ctx->pc = 0x19BA1Cu;
            goto label_19ba1c;
        }
    }
    ctx->pc = 0x19B7F0u;
    // 0x19b7f0: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x19b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_19b7f4:
    // 0x19b7f4: 0xc06724e  jal         func_19C938
    ctx->pc = 0x19B7F4u;
    SET_GPR_U32(ctx, 31, 0x19B7FCu);
    ctx->pc = 0x19B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B7F4u;
    // 0x19b7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C938u, 0x19B7F4u, 0x19B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7FCu;
label_19b7fc:
    // 0x19b7fc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x19B7FCu;
    {
        const bool branch_taken_0x19b7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7FCu;
        // 0x19b800: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7fc) {
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19B804u;
label_19b804:
    // 0x19b804: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B804u;
    SET_GPR_U32(ctx, 31, 0x19B80Cu);
    ctx->pc = 0x19B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B804u;
    // 0x19b808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B804u, 0x19B80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B80Cu;
label_19b80c:
    // 0x19b80c: 0xc06d9b2  jal         func_1B66C8
    ctx->pc = 0x19B80Cu;
    SET_GPR_U32(ctx, 31, 0x19B814u);
    ctx->pc = 0x19B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B80Cu;
    // 0x19b810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B66C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B66C8u, 0x19B80Cu, 0x19B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B814u;
label_19b814:
    // 0x19b814: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19B814u;
    {
        const bool branch_taken_0x19b814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b814) {
            ctx->pc = 0x19B854u;
            goto label_19b854;
        }
    }
    ctx->pc = 0x19B81Cu;
    // 0x19b81c: 0xc061a1a  jal         func_186868
    ctx->pc = 0x19B81Cu;
    SET_GPR_U32(ctx, 31, 0x19B824u);
    ctx->pc = 0x19B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B81Cu;
    // 0x19b820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x19B81Cu, 0x19B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B824u;
label_19b824:
    // 0x19b824: 0xc07173a  jal         func_1C5CE8
    ctx->pc = 0x19B824u;
    SET_GPR_U32(ctx, 31, 0x19B82Cu);
    ctx->pc = 0x19B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B824u;
    // 0x19b828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CE8u, 0x19B824u, 0x19B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B82Cu;
label_19b82c:
    // 0x19b82c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x19B82Cu;
    {
        const bool branch_taken_0x19b82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b82c) {
            ctx->pc = 0x19BA1Cu;
            goto label_19ba1c;
        }
    }
    ctx->pc = 0x19B834u;
    // 0x19b834: 0xc061a1a  jal         func_186868
    ctx->pc = 0x19B834u;
    SET_GPR_U32(ctx, 31, 0x19B83Cu);
    ctx->pc = 0x19B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B834u;
    // 0x19b838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x19B834u, 0x19B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B83Cu;
label_19b83c:
    // 0x19b83c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19b83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19b840: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x19b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19b844: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19b844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19b848: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19b848u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19b84c: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x19B84Cu;
    {
        const bool branch_taken_0x19b84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b84c) {
            ctx->pc = 0x19BA1Cu;
            goto label_19ba1c;
        }
    }
    ctx->pc = 0x19B854u;
label_19b854:
    // 0x19b854: 0xc0676b8  jal         func_19DAE0
    ctx->pc = 0x19B854u;
    SET_GPR_U32(ctx, 31, 0x19B85Cu);
    ctx->pc = 0x19B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B854u;
    // 0x19b858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAE0u, 0x19B854u, 0x19B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B85Cu;
label_19b85c:
    // 0x19b85c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B85Cu;
    {
        const bool branch_taken_0x19b85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b85c) {
            ctx->pc = 0x19B874u;
            goto label_19b874;
        }
    }
    ctx->pc = 0x19B864u;
    // 0x19b864: 0xc06766e  jal         func_19D9B8
    ctx->pc = 0x19B864u;
    SET_GPR_U32(ctx, 31, 0x19B86Cu);
    ctx->pc = 0x19B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B864u;
    // 0x19b868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B8u, 0x19B864u, 0x19B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B86Cu;
label_19b86c:
    // 0x19b86c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B86Cu;
    {
        const bool branch_taken_0x19b86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b86c) {
            ctx->pc = 0x19B884u;
            goto label_19b884;
        }
    }
    ctx->pc = 0x19B874u;
label_19b874:
    // 0x19b874: 0xc0675e0  jal         func_19D780
    ctx->pc = 0x19B874u;
    SET_GPR_U32(ctx, 31, 0x19B87Cu);
    ctx->pc = 0x19B878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B874u;
    // 0x19b878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D780u, 0x19B874u, 0x19B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B87Cu;
label_19b87c:
    // 0x19b87c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x19B87Cu;
    {
        const bool branch_taken_0x19b87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B87Cu;
        // 0x19b880: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b87c) {
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19B884u;
label_19b884:
    // 0x19b884: 0xc061a1a  jal         func_186868
    ctx->pc = 0x19B884u;
    SET_GPR_U32(ctx, 31, 0x19B88Cu);
    ctx->pc = 0x19B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B884u;
    // 0x19b888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x19B884u, 0x19B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B88Cu;
label_19b88c:
    // 0x19b88c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19b890: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x19b890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19b894: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19b894u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19b898: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19b898u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19b89c: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x19B89Cu;
    {
        const bool branch_taken_0x19b89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B89Cu;
        // 0x19b8a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b89c) {
            ctx->pc = 0x19B90Cu;
            goto label_19b90c;
        }
    }
    ctx->pc = 0x19B8A4u;
    // 0x19b8a4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x19b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b8a8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19B8A8u;
    {
        const bool branch_taken_0x19b8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8A8u;
        // 0x19b8ac: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8a8) {
            ctx->pc = 0x19B90Cu;
            goto label_19b90c;
        }
    }
    ctx->pc = 0x19B8B0u;
    // 0x19b8b0: 0xc061a26  jal         func_186898
    ctx->pc = 0x19B8B0u;
    SET_GPR_U32(ctx, 31, 0x19B8B8u);
    ctx->pc = 0x19B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8B0u;
    // 0x19b8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19B8B0u, 0x19B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8B8u;
label_19b8b8:
    // 0x19b8b8: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x19b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x19b8bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19b8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8c0: 0xc072682  jal         func_1C9A08
    ctx->pc = 0x19B8C0u;
    SET_GPR_U32(ctx, 31, 0x19B8C8u);
    ctx->pc = 0x19B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8C0u;
    // 0x19b8c4: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9A08u, 0x19B8C0u, 0x19B8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8C8u;
label_19b8c8:
    // 0x19b8c8: 0xc061a26  jal         func_186898
    ctx->pc = 0x19B8C8u;
    SET_GPR_U32(ctx, 31, 0x19B8D0u);
    ctx->pc = 0x19B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8C8u;
    // 0x19b8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19B8C8u, 0x19B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8D0u;
label_19b8d0:
    // 0x19b8d0: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x19b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b8d4: 0xc4400138  lwc1        $f0, 0x138($v0)
    ctx->pc = 0x19b8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b8d8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19b8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b8dc: 0x0  nop
    ctx->pc = 0x19b8dcu;
    // NOP
    // 0x19b8e0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x19B8E0u;
    {
        const bool branch_taken_0x19b8e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8E0u;
        // 0x19b8e4: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8e0) {
            ctx->pc = 0x19B908u;
            goto label_19b908;
        }
    }
    ctx->pc = 0x19B8E8u;
    // 0x19b8e8: 0x8c6208ac  lw          $v0, 0x8AC($v1)
    ctx->pc = 0x19b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2220)));
    // 0x19b8ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b8f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19B8F0u;
    {
        const bool branch_taken_0x19b8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b8f0) {
            ctx->pc = 0x19B8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B8F0u;
            // 0x19b8f4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8F8u;
            goto label_19b8f8;
        }
    }
    ctx->pc = 0x19B8F8u;
label_19b8f8:
    // 0x19b8f8: 0xc067144  jal         func_19C510
    ctx->pc = 0x19B8F8u;
    SET_GPR_U32(ctx, 31, 0x19B900u);
    ctx->pc = 0x19B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8F8u;
    // 0x19b8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C510u, 0x19B8F8u, 0x19B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B900u;
label_19b900:
    // 0x19b900: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x19B900u;
    {
        const bool branch_taken_0x19b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B900u;
        // 0x19b904: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b900) {
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19B908u;
label_19b908:
    // 0x19b908: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19b908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_19b90c:
    // 0x19b90c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b910: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x19b914: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B914u;
    {
        const bool branch_taken_0x19b914 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B914u;
        // 0x19b918: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b914) {
            ctx->pc = 0x19B930u;
            goto label_19b930;
        }
    }
    ctx->pc = 0x19B91Cu;
    // 0x19b91c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19b91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b920: 0x0  nop
    ctx->pc = 0x19b920u;
    // NOP
    // 0x19b924: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19b924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19b928: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B928u;
    {
        const bool branch_taken_0x19b928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b928) {
            ctx->pc = 0x19B948u;
            goto label_19b948;
        }
    }
    ctx->pc = 0x19B930u;
label_19b930:
    // 0x19b930: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b934: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19b934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19b938: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19b938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b93c: 0x0  nop
    ctx->pc = 0x19b93cu;
    // NOP
    // 0x19b940: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19b940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19b944: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19b944u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19b948:
    // 0x19b948: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19b948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19b94c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19b94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19b950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b954: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x19b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b958: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19b958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19b95c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19b95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b960: 0x0  nop
    ctx->pc = 0x19b960u;
    // NOP
    // 0x19b964: 0x45030038  bc1tl       . + 4 + (0x38 << 2)
    ctx->pc = 0x19B964u;
    {
        const bool branch_taken_0x19b964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b964) {
            ctx->pc = 0x19B968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B964u;
            // 0x19b968: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19B96Cu;
    // 0x19b96c: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x19b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
    // 0x19b970: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B970u;
    {
        const bool branch_taken_0x19b970 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B970u;
        // 0x19b974: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b970) {
            ctx->pc = 0x19B98Cu;
            goto label_19b98c;
        }
    }
    ctx->pc = 0x19B978u;
    // 0x19b978: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19b978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b97c: 0x0  nop
    ctx->pc = 0x19b97cu;
    // NOP
    // 0x19b980: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19b980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19b984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B984u;
    {
        const bool branch_taken_0x19b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b984) {
            ctx->pc = 0x19B9A4u;
            goto label_19b9a4;
        }
    }
    ctx->pc = 0x19B98Cu;
label_19b98c:
    // 0x19b98c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b990: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19b994: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19b994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b998: 0x0  nop
    ctx->pc = 0x19b998u;
    // NOP
    // 0x19b99c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19b99cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19b9a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19b9a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19b9a4:
    // 0x19b9a4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19b9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19b9a8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19b9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19b9ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b9b0: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x19b9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b9b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19b9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19b9b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19b9b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b9bc: 0x0  nop
    ctx->pc = 0x19b9bcu;
    // NOP
    // 0x19b9c0: 0x45030021  bc1tl       . + 4 + (0x21 << 2)
    ctx->pc = 0x19B9C0u;
    {
        const bool branch_taken_0x19b9c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b9c0) {
            ctx->pc = 0x19B9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B9C0u;
            // 0x19b9c4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19B9C8u;
    // 0x19b9c8: 0xc064b7a  jal         func_192DE8
    ctx->pc = 0x19B9C8u;
    SET_GPR_U32(ctx, 31, 0x19B9D0u);
    ctx->pc = 0x19B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9C8u;
    // 0x19b9cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192DE8u, 0x19B9C8u, 0x19B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9D0u;
label_19b9d0:
    // 0x19b9d0: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x19B9D0u;
    {
        const bool branch_taken_0x19b9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9d0) {
            ctx->pc = 0x19B9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B9D0u;
            // 0x19b9d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19B9D8u;
    // 0x19b9d8: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x19b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x19b9dc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x19B9DCu;
    {
        const bool branch_taken_0x19b9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9dc) {
            ctx->pc = 0x19B9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B9DCu;
            // 0x19b9e0: 0xae0000c0  sw          $zero, 0xC0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA3Cu;
            goto label_19ba3c;
        }
    }
    ctx->pc = 0x19B9E4u;
    // 0x19b9e4: 0xc061a1a  jal         func_186868
    ctx->pc = 0x19B9E4u;
    SET_GPR_U32(ctx, 31, 0x19B9ECu);
    ctx->pc = 0x19B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9E4u;
    // 0x19b9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x19B9E4u, 0x19B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9ECu;
label_19b9ec:
    // 0x19b9ec: 0xc07173a  jal         func_1C5CE8
    ctx->pc = 0x19B9ECu;
    SET_GPR_U32(ctx, 31, 0x19B9F4u);
    ctx->pc = 0x19B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9ECu;
    // 0x19b9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CE8u, 0x19B9ECu, 0x19B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9F4u;
label_19b9f4:
    // 0x19b9f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B9F4u;
    {
        const bool branch_taken_0x19b9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9f4) {
            ctx->pc = 0x19BA1Cu;
            goto label_19ba1c;
        }
    }
    ctx->pc = 0x19B9FCu;
    // 0x19b9fc: 0xc061a1a  jal         func_186868
    ctx->pc = 0x19B9FCu;
    SET_GPR_U32(ctx, 31, 0x19BA04u);
    ctx->pc = 0x19BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9FCu;
    // 0x19ba00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x19B9FCu, 0x19BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA04u;
label_19ba04:
    // 0x19ba04: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19ba08: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x19ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19ba0c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ba10: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19ba10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19ba14: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x19BA14u;
    {
        const bool branch_taken_0x19ba14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ba14) {
            ctx->pc = 0x19BA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BA14u;
            // 0x19ba18: 0xae0000c0  sw          $zero, 0xC0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA3Cu;
            goto label_19ba3c;
        }
    }
    ctx->pc = 0x19BA1Cu;
label_19ba1c:
    // 0x19ba1c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19ba1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19ba20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19ba20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19ba24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ba2c: 0xc0671ca  jal         func_19C728
    ctx->pc = 0x19BA2Cu;
    SET_GPR_U32(ctx, 31, 0x19BA34u);
    ctx->pc = 0x19BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA2Cu;
    // 0x19ba30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C728u, 0x19BA2Cu, 0x19BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA34u;
label_19ba34:
    // 0x19ba34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19BA34u;
    {
        const bool branch_taken_0x19ba34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA34u;
        // 0x19ba38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba34) {
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19BA3Cu;
label_19ba3c:
    // 0x19ba3c: 0xc06724e  jal         func_19C938
    ctx->pc = 0x19BA3Cu;
    SET_GPR_U32(ctx, 31, 0x19BA44u);
    ctx->pc = 0x19BA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA3Cu;
    // 0x19ba40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C938u, 0x19BA3Cu, 0x19BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA44u;
label_19ba44:
    // 0x19ba44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19ba44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ba48:
    // 0x19ba48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19ba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA4Cu;
        // 0x19ba50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BA54u;
    // 0x19ba54: 0x0  nop
    ctx->pc = 0x19ba54u;
    // NOP
    ctx->pc = 0x19ba58u;
}
