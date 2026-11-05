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

// Function: sub_0011A5A0
// Address: 0x11a5a0 - 0x11a728
void sub_0011A5A0_0x11a5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A5A0_0x11a5a0");
#endif

    switch (ctx->pc) {
        case 0x11a5d4u: goto label_11a5d4;
        case 0x11a5e8u: goto label_11a5e8;
        case 0x11a5f4u: goto label_11a5f4;
        case 0x11a604u: goto label_11a604;
        case 0x11a614u: goto label_11a614;
        case 0x11a624u: goto label_11a624;
        case 0x11a630u: goto label_11a630;
        case 0x11a638u: goto label_11a638;
        case 0x11a644u: goto label_11a644;
        case 0x11a660u: goto label_11a660;
        case 0x11a668u: goto label_11a668;
        case 0x11a678u: goto label_11a678;
        case 0x11a688u: goto label_11a688;
        case 0x11a6a8u: goto label_11a6a8;
        case 0x11a6b8u: goto label_11a6b8;
        case 0x11a6c0u: goto label_11a6c0;
        case 0x11a6e4u: goto label_11a6e4;
        case 0x11a6f0u: goto label_11a6f0;
        case 0x11a6fcu: goto label_11a6fc;
        default: break;
    }

    ctx->pc = 0x11a5a0u;

    // 0x11a5a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11a5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11a5a4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x11a5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x11a5a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11a5a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5ac: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x11a5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11a5b0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x11a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x11a5b4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x11a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x11a5b8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x11a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x11a5bc: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x11a5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x11a5c0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x11a5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a5c4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11a5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11a5c8: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x11a5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x11a5cc: 0xc04695a  jal         func_11A568
    ctx->pc = 0x11A5CCu;
    SET_GPR_U32(ctx, 31, 0x11A5D4u);
    ctx->pc = 0x11A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5CCu;
    // 0x11a5d0: 0x3c150044  lui         $s5, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)68 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A568u, 0x11A5CCu, 0x11A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5D4u;
label_11a5d4:
    // 0x11a5d4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x11a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x11a5d8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x11a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x11a5dc: 0x2451fe40  addiu       $s1, $v0, -0x1C0
    ctx->pc = 0x11a5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x11a5e0: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x11A5E0u;
    SET_GPR_U32(ctx, 31, 0x11A5E8u);
    ctx->pc = 0x11A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5E0u;
    // 0x11a5e4: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x11A5E0u, 0x11A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5E8u;
label_11a5e8:
    // 0x11a5e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5ec: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x11A5ECu;
    SET_GPR_U32(ctx, 31, 0x11A5F4u);
    ctx->pc = 0x11A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5ECu;
    // 0x11a5f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x11A5ECu, 0x11A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5F4u;
label_11a5f4:
    // 0x11a5f4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x11a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x11a5f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5fc: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x11A5FCu;
    SET_GPR_U32(ctx, 31, 0x11A604u);
    ctx->pc = 0x11A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5FCu;
    // 0x11a600: 0x24a5ee40  addiu       $a1, $a1, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x11A5FCu, 0x11A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A604u;
label_11a604:
    // 0x11a604: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11a604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a60c: 0xc09dd98  jal         func_277660
    ctx->pc = 0x11A60Cu;
    SET_GPR_U32(ctx, 31, 0x11A614u);
    ctx->pc = 0x11A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A60Cu;
    // 0x11a610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x11A60Cu, 0x11A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A614u;
label_11a614:
    // 0x11a614: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11a614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a618: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x11a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11a61c: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x11A61Cu;
    SET_GPR_U32(ctx, 31, 0x11A624u);
    ctx->pc = 0x11A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A61Cu;
    // 0x11a620: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x11A61Cu, 0x11A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A624u;
label_11a624:
    // 0x11a624: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x11a624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a628: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x11a628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11a62c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a630:
    // 0x11a630: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x11A630u;
    SET_GPR_U32(ctx, 31, 0x11A638u);
    ctx->pc = 0x11A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A630u;
    // 0x11a634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x11A630u, 0x11A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A638u;
label_11a638:
    // 0x11a638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a63c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A63Cu;
    SET_GPR_U32(ctx, 31, 0x11A644u);
    ctx->pc = 0x11A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A63Cu;
    // 0x11a640: 0x26a5b968  addiu       $a1, $s5, -0x4698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A63Cu, 0x11A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A644u;
label_11a644:
    // 0x11a644: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a648: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x11a648u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x11a64c: 0x1660fff8  bnez        $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11A64Cu;
    {
        const bool branch_taken_0x11a64c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A64Cu;
        // 0x11a650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a64c) {
            ctx->pc = 0x11A630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a630;
        }
    }
    ctx->pc = 0x11A654u;
    // 0x11a654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a658: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x11A658u;
    SET_GPR_U32(ctx, 31, 0x11A660u);
    ctx->pc = 0x11A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A658u;
    // 0x11a65c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x11A658u, 0x11A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A660u;
label_11a660:
    // 0x11a660: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11A660u;
    {
        const bool branch_taken_0x11a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A660u;
        // 0x11a664: 0x26900004  addiu       $s0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a660) {
            ctx->pc = 0x11A69Cu;
            goto label_11a69c;
        }
    }
    ctx->pc = 0x11A668u;
label_11a668:
    // 0x11a668: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11a668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a66c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x11a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x11a670: 0xc085914  jal         func_216450
    ctx->pc = 0x11A670u;
    SET_GPR_U32(ctx, 31, 0x11A678u);
    ctx->pc = 0x11A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A670u;
    // 0x11a674: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216450u, 0x11A670u, 0x11A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A678u;
label_11a678:
    // 0x11a678: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x11a678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x11a67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a680: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x11A680u;
    SET_GPR_U32(ctx, 31, 0x11A688u);
    ctx->pc = 0x11A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A680u;
    // 0x11a684: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x11A680u, 0x11A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A688u;
label_11a688:
    // 0x11a688: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x11a688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x11a68c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x11a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a690: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11a690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11a694: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x11a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11a698: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x11a698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_11a69c:
    // 0x11a69c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6a0: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x11A6A0u;
    SET_GPR_U32(ctx, 31, 0x11A6A8u);
    ctx->pc = 0x11A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6A0u;
    // 0x11a6a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x11A6A0u, 0x11A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6A8u;
label_11a6a8:
    // 0x11a6a8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11A6A8u;
    {
        const bool branch_taken_0x11a6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6A8u;
        // 0x11a6ac: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6a8) {
            ctx->pc = 0x11A668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a668;
        }
    }
    ctx->pc = 0x11A6B0u;
    // 0x11a6b0: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x11A6B0u;
    SET_GPR_U32(ctx, 31, 0x11A6B8u);
    ctx->pc = 0x11A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6B0u;
    // 0x11a6b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x11A6B0u, 0x11A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6B8u;
label_11a6b8:
    // 0x11a6b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_11a6c0:
    // 0x11a6c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a6c4: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x11a6c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x11a6c8: 0x0  nop
    ctx->pc = 0x11a6c8u;
    // NOP
    // 0x11a6cc: 0x0  nop
    ctx->pc = 0x11a6ccu;
    // NOP
    // 0x11a6d0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11A6D0u;
    {
        const bool branch_taken_0x11a6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6D0u;
        // 0x11a6d4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6d0) {
            ctx->pc = 0x11A6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a6c0;
        }
    }
    ctx->pc = 0x11A6D8u;
    // 0x11a6d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6dc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11A6DCu;
    SET_GPR_U32(ctx, 31, 0x11A6E4u);
    ctx->pc = 0x11A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6DCu;
    // 0x11a6e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11A6DCu, 0x11A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6E4u;
label_11a6e4:
    // 0x11a6e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11A6E8u;
    SET_GPR_U32(ctx, 31, 0x11A6F0u);
    ctx->pc = 0x11A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6E8u;
    // 0x11a6ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11A6E8u, 0x11A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6F0u;
label_11a6f0:
    // 0x11a6f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6f4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11A6F4u;
    SET_GPR_U32(ctx, 31, 0x11A6FCu);
    ctx->pc = 0x11A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6F4u;
    // 0x11a6f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11A6F4u, 0x11A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6FCu;
label_11a6fc:
    // 0x11a6fc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11a6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a700: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x11a700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11a704: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x11a704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a708: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x11a708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11a70c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x11a70cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a710: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x11a710u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11a714: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11a714u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a718: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x11a718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11a71c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A71Cu;
        // 0x11a720: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A724u;
    // 0x11a724: 0x0  nop
    ctx->pc = 0x11a724u;
    // NOP
    ctx->pc = 0x11a728u;
}
