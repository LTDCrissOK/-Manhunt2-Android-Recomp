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

// Function: sub_0017A790
// Address: 0x17a790 - 0x17a958
void sub_0017A790_0x17a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A790_0x17a790");
#endif

    switch (ctx->pc) {
        case 0x17a7f0u: goto label_17a7f0;
        case 0x17a814u: goto label_17a814;
        case 0x17a828u: goto label_17a828;
        case 0x17a83cu: goto label_17a83c;
        case 0x17a860u: goto label_17a860;
        case 0x17a888u: goto label_17a888;
        case 0x17a8c4u: goto label_17a8c4;
        default: break;
    }

    ctx->pc = 0x17a790u;

    // 0x17a790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17a794: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17a794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17a798: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17a79c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x17a79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17a7a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17a7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7a4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x17a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x17a7a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17a7a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7ac: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x17a7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x17a7b0: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x17a7b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17a7b4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x17a7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x17a7b8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x17a7b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7bc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x17a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x17a7c0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x17a7c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7c4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x17a7c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17a7c8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x17a7c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17a7d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17a7d4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x17a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17a7d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17a7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x17a7dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17a7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17a7e0: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x17a7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x17a7e4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x17A7E4u;
    {
        const bool branch_taken_0x17a7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7E4u;
        // 0x17a7e8: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7e4) {
            ctx->pc = 0x17A920u;
            goto label_17a920;
        }
    }
    ctx->pc = 0x17A7ECu;
    // 0x17a7ec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x17a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17a7f0:
    // 0x17a7f0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17a7f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a7f8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x17a7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a7fc: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x17A7FCu;
    {
        const bool branch_taken_0x17a7fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7FCu;
        // 0x17a800: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7fc) {
            ctx->pc = 0x17A900u;
            goto label_17a900;
        }
    }
    ctx->pc = 0x17A804u;
    // 0x17a804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a808: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x17a808u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a80c: 0xc05eb1e  jal         func_17AC78
    ctx->pc = 0x17A80Cu;
    SET_GPR_U32(ctx, 31, 0x17A814u);
    ctx->pc = 0x17A810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A80Cu;
    // 0x17a810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC78u, 0x17A80Cu, 0x17A814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A814u;
label_17a814:
    // 0x17a814: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x17A814u;
    {
        const bool branch_taken_0x17a814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A814u;
        // 0x17a818: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a814) {
            ctx->pc = 0x17A904u;
            goto label_17a904;
        }
    }
    ctx->pc = 0x17A81Cu;
    // 0x17a81c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a820: 0xc05eb2a  jal         func_17ACA8
    ctx->pc = 0x17A820u;
    SET_GPR_U32(ctx, 31, 0x17A828u);
    ctx->pc = 0x17A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A820u;
    // 0x17a824: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x17A820u, 0x17A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A828u;
label_17a828:
    // 0x17a828: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x17A828u;
    {
        const bool branch_taken_0x17a828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A828u;
        // 0x17a82c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a828) {
            ctx->pc = 0x17A904u;
            goto label_17a904;
        }
    }
    ctx->pc = 0x17A830u;
    // 0x17a830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a834: 0xc05eaee  jal         func_17ABB8
    ctx->pc = 0x17A834u;
    SET_GPR_U32(ctx, 31, 0x17A83Cu);
    ctx->pc = 0x17A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A834u;
    // 0x17a838: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABB8u, 0x17A834u, 0x17A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A83Cu;
label_17a83c:
    // 0x17a83c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17a83cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a840: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17a844: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x17A844u;
    {
        const bool branch_taken_0x17a844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A844u;
        // 0x17a848: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a844) {
            ctx->pc = 0x17A904u;
            goto label_17a904;
        }
    }
    ctx->pc = 0x17A84Cu;
    // 0x17a84c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A84Cu;
    {
        const bool branch_taken_0x17a84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A84Cu;
        // 0x17a850: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a84c) {
            ctx->pc = 0x17A868u;
            goto label_17a868;
        }
    }
    ctx->pc = 0x17A854u;
    // 0x17a854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a858: 0xc05eb12  jal         func_17AC48
    ctx->pc = 0x17A858u;
    SET_GPR_U32(ctx, 31, 0x17A860u);
    ctx->pc = 0x17A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A858u;
    // 0x17a85c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC48u, 0x17A858u, 0x17A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A860u;
label_17a860:
    // 0x17a860: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x17A860u;
    {
        const bool branch_taken_0x17a860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A860u;
        // 0x17a864: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a860) {
            ctx->pc = 0x17A900u;
            goto label_17a900;
        }
    }
    ctx->pc = 0x17A868u;
label_17a868:
    // 0x17a868: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x17a868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17a86c: 0x24739a08  addiu       $s3, $v1, -0x65F8
    ctx->pc = 0x17a86cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x17a870: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x17a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17a874: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A874u;
    {
        const bool branch_taken_0x17a874 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A874u;
        // 0x17a878: 0x8c50020c  lw          $s0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a874) {
            ctx->pc = 0x17A890u;
            goto label_17a890;
        }
    }
    ctx->pc = 0x17A87Cu;
    // 0x17a87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a880: 0xc04446a  jal         func_1111A8
    ctx->pc = 0x17A880u;
    SET_GPR_U32(ctx, 31, 0x17A888u);
    ctx->pc = 0x17A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A880u;
    // 0x17a884: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1111A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1111A8u, 0x17A880u, 0x17A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A888u;
label_17a888:
    // 0x17a888: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x17A888u;
    {
        const bool branch_taken_0x17a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A888u;
        // 0x17a88c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a888) {
            ctx->pc = 0x17A904u;
            goto label_17a904;
        }
    }
    ctx->pc = 0x17A890u;
label_17a890:
    // 0x17a890: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17a894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a898: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x17a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17a89c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x17a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x17a8a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A8A0u;
    {
        const bool branch_taken_0x17a8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a8a0) {
            ctx->pc = 0x17A8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A8A0u;
            // 0x17a8a4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A8B0u;
            goto label_17a8b0;
        }
    }
    ctx->pc = 0x17A8A8u;
    // 0x17a8a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17A8A8u;
    {
        const bool branch_taken_0x17a8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8A8u;
        // 0x17a8ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a8a8) {
            ctx->pc = 0x17A8B8u;
            goto label_17a8b8;
        }
    }
    ctx->pc = 0x17A8B0u;
label_17a8b0:
    // 0x17a8b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a8b4: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x17a8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17a8b8:
    // 0x17a8b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8bc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17A8BCu;
    SET_GPR_U32(ctx, 31, 0x17A8C4u);
    ctx->pc = 0x17A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8BCu;
    // 0x17a8c0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17A8BCu, 0x17A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A8C4u;
label_17a8c4:
    // 0x17a8c4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17a8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17a8c8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x17a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17a8cc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17a8d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17a8d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17a8d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17a8d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17a8d8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x17a8d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17a8dc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17a8e0: 0x52a20006  beql        $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A8E0u;
    {
        const bool branch_taken_0x17a8e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a8e0) {
            ctx->pc = 0x17A8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A8E0u;
            // 0x17a8e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A8FCu;
            goto label_17a8fc;
        }
    }
    ctx->pc = 0x17A8E8u;
    // 0x17a8e8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x17a8e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17a8ec: 0x0  nop
    ctx->pc = 0x17a8ecu;
    // NOP
    // 0x17a8f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17A8F0u;
    {
        const bool branch_taken_0x17a8f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8F0u;
        // 0x17a8f4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a8f0) {
            ctx->pc = 0x17A904u;
            goto label_17a904;
        }
    }
    ctx->pc = 0x17A8F8u;
    // 0x17a8f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17a8f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17a8fc:
    // 0x17a8fc: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x17a8fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a900:
    // 0x17a900: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x17a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17a904:
    // 0x17a904: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17a904u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a908: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x17a908u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17a90c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A90Cu;
    {
        const bool branch_taken_0x17a90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A90Cu;
        // 0x17a910: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a90c) {
            ctx->pc = 0x17A924u;
            goto label_17a924;
        }
    }
    ctx->pc = 0x17A914u;
    // 0x17a914: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x17a914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x17a918: 0x5682ffb5  bnel        $s4, $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x17A918u;
    {
        const bool branch_taken_0x17a918 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x17a918) {
            ctx->pc = 0x17A91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A918u;
            // 0x17a91c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a7f0;
        }
    }
    ctx->pc = 0x17A920u;
label_17a920:
    // 0x17a920: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x17a920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17a924:
    // 0x17a924: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17a924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a928: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17a928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a92c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17a92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a930: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17a930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a934: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x17a934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a938: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x17a938u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17a93c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x17a93cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a940: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x17a940u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17a944: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x17a944u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a948: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x17a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17a94c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x17a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17a950: 0x3e00008  jr          $ra
    ctx->pc = 0x17A950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A950u;
        // 0x17a954: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A958u;
}
