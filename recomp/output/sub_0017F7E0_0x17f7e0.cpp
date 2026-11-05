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

// Function: sub_0017F7E0
// Address: 0x17f7e0 - 0x17f930
void sub_0017F7E0_0x17f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F7E0_0x17f7e0");
#endif

    switch (ctx->pc) {
        case 0x17f850u: goto label_17f850;
        case 0x17f8a0u: goto label_17f8a0;
        case 0x17f8b0u: goto label_17f8b0;
        case 0x17f8ccu: goto label_17f8cc;
        default: break;
    }

    ctx->pc = 0x17f7e0u;

    // 0x17f7e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17f7e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f7e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f7ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17f7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17f7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17f7f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17f7f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7f8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x17f7f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17f7fc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x17f7fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f804: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17f804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17f808: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17f808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17f80c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17f80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17f810: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17f814: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17f814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17f818: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17f81c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17f81cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17f820: 0x8e420418  lw          $v0, 0x418($s2)
    ctx->pc = 0x17f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
    // 0x17f824: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F824u;
    {
        const bool branch_taken_0x17f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F824u;
        // 0x17f828: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f824) {
            ctx->pc = 0x17F870u;
            goto label_17f870;
        }
    }
    ctx->pc = 0x17F82Cu;
    // 0x17f82c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x17f830: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17f830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f834: 0x2442a080  addiu       $v0, $v0, -0x5F80
    ctx->pc = 0x17f834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x17f838: 0x8c430fbc  lw          $v1, 0xFBC($v0)
    ctx->pc = 0x17f838u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48B03Cu));
    // 0x17f83c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F83Cu;
    {
        const bool branch_taken_0x17f83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F83Cu;
        // 0x17f840: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f83c) {
            ctx->pc = 0x17F858u;
            goto label_17f858;
        }
    }
    ctx->pc = 0x17F844u;
    // 0x17f844: 0x26049a08  addiu       $a0, $s0, -0x65F8
    ctx->pc = 0x17f844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x17f848: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x17F848u;
    SET_GPR_U32(ctx, 31, 0x17F850u);
    ctx->pc = 0x17F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F848u;
    // 0x17f84c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x17F848u, 0x17F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F850u;
label_17f850:
    // 0x17f850: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x17F850u;
    {
        const bool branch_taken_0x17f850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F850u;
        // 0x17f854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f850) {
            ctx->pc = 0x17F8F8u;
            goto label_17f8f8;
        }
    }
    ctx->pc = 0x17F858u;
label_17f858:
    // 0x17f858: 0x26179a08  addiu       $s7, $s0, -0x65F8
    ctx->pc = 0x17f858u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x17f85c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17f860: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x17f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x17f864: 0x8c500108  lw          $s0, 0x108($v0)
    ctx->pc = 0x17f864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x17f868: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F868u;
    {
        const bool branch_taken_0x17f868 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f868) {
            ctx->pc = 0x17F86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F868u;
            // 0x17f86c: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F878u;
            goto label_17f878;
        }
    }
    ctx->pc = 0x17F870u;
label_17f870:
    // 0x17f870: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x17F870u;
    {
        const bool branch_taken_0x17f870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F870u;
        // 0x17f874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f870) {
            ctx->pc = 0x17F8F8u;
            goto label_17f8f8;
        }
    }
    ctx->pc = 0x17F878u;
label_17f878:
    // 0x17f878: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x17f878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17f87c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x17f87cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f880: 0x2674a080  addiu       $s4, $s3, -0x5F80
    ctx->pc = 0x17f880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
    // 0x17f884: 0x8c710050  lw          $s1, 0x50($v1)
    ctx->pc = 0x17f884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x17f888: 0xc6340008  lwc1        $f20, 0x8($s1)
    ctx->pc = 0x17f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f88c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x17f88cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x17f890: 0x8c568a5c  lw          $s6, -0x75A4($v0)
    ctx->pc = 0x17f890u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x3F8A5Cu));
    // 0x17f894: 0xac408a5c  sw          $zero, -0x75A4($v0)
    ctx->pc = 0x17f894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F8A5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A5Cu, _value); } while (0);
    // 0x17f898: 0xc04549c  jal         func_115270
    ctx->pc = 0x17F898u;
    SET_GPR_U32(ctx, 31, 0x17F8A0u);
    ctx->pc = 0x17F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F898u;
    // 0x17f89c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115270u, 0x17F898u, 0x17F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8A0u;
label_17f8a0:
    // 0x17f8a0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x17f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17f8a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8a8: 0xc073644  jal         func_1CD910
    ctx->pc = 0x17F8A8u;
    SET_GPR_U32(ctx, 31, 0x17F8B0u);
    ctx->pc = 0x17F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8A8u;
    // 0x17f8ac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD910u, 0x17F8A8u, 0x17F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8B0u;
label_17f8b0:
    // 0x17f8b0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x17f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x17f8b4: 0x8e900fcc  lw          $s0, 0xFCC($s4)
    ctx->pc = 0x17f8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4044)));
    // 0x17f8b8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x17F8B8u;
    {
        const bool branch_taken_0x17f8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8B8u;
        // 0x17f8bc: 0x8e930fc8  lw          $s3, 0xFC8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8b8) {
            ctx->pc = 0x17F8E4u;
            goto label_17f8e4;
        }
    }
    ctx->pc = 0x17F8C0u;
    // 0x17f8c0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x17f8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17f8c4: 0xc047866  jal         func_11E198
    ctx->pc = 0x17F8C4u;
    SET_GPR_U32(ctx, 31, 0x17F8CCu);
    ctx->pc = 0x17F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8C4u;
    // 0x17f8c8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x17F8C4u, 0x17F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8CCu;
label_17f8cc:
    // 0x17f8cc: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F8CCu;
    {
        const bool branch_taken_0x17f8cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x17f8cc) {
            ctx->pc = 0x17F8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F8CCu;
            // 0x17f8d0: 0xafd68a5c  sw          $s6, -0x75A4($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 4294937180), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F8E8u;
            goto label_17f8e8;
        }
    }
    ctx->pc = 0x17F8D4u;
    // 0x17f8d4: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x17f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x17f8d8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17f8dc: 0xae820fc8  sw          $v0, 0xFC8($s4)
    ctx->pc = 0x17f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4040), GPR_U32(ctx, 2));
    // 0x17f8e0: 0xae800fcc  sw          $zero, 0xFCC($s4)
    ctx->pc = 0x17f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4044), GPR_U32(ctx, 0));
label_17f8e4:
    // 0x17f8e4: 0xafd68a5c  sw          $s6, -0x75A4($fp)
    ctx->pc = 0x17f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294937180), GPR_U32(ctx, 22));
label_17f8e8:
    // 0x17f8e8: 0xe6340008  swc1        $f20, 0x8($s1)
    ctx->pc = 0x17f8e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x17f8ec: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x17f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17f8f0: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x17f8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x17f8f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17f8f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17f8f8:
    // 0x17f8f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f8fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f8fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f900: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f904: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17f904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f908: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17f908u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f90c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17f90cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f910: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17f910u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f914: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17f914u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17f918: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17f918u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f91c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17f91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17f920: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x17f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17f924: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17f924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f928: 0x3e00008  jr          $ra
    ctx->pc = 0x17F928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F928u;
        // 0x17f92c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F930u;
}
