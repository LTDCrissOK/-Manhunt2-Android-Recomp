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

// Function: sub_001A8330
// Address: 0x1a8330 - 0x1a8548
void sub_001A8330_0x1a8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8330_0x1a8330");
#endif

    switch (ctx->pc) {
        case 0x1a83fcu: goto label_1a83fc;
        case 0x1a8408u: goto label_1a8408;
        case 0x1a8418u: goto label_1a8418;
        case 0x1a8428u: goto label_1a8428;
        case 0x1a8434u: goto label_1a8434;
        case 0x1a8440u: goto label_1a8440;
        case 0x1a844cu: goto label_1a844c;
        case 0x1a8490u: goto label_1a8490;
        case 0x1a84a8u: goto label_1a84a8;
        case 0x1a84b4u: goto label_1a84b4;
        case 0x1a84c4u: goto label_1a84c4;
        case 0x1a84dcu: goto label_1a84dc;
        case 0x1a8518u: goto label_1a8518;
        default: break;
    }

    ctx->pc = 0x1a8330u;

    // 0x1a8330: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a8330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a8334: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a8334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a8338: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a8338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a833c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a833cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8340: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a8340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1a8344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a8344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8348: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a8348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a834c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a834cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a8350: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a8350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a8354: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a8354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a8358: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x1a8358u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1a835c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a835cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8360: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x1a8360u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a8364: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1a8364u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1a8368: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a8368u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a836c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8370: 0x10730064  beq         $v1, $s3, . + 4 + (0x64 << 2)
    ctx->pc = 0x1A8370u;
    {
        const bool branch_taken_0x1a8370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8370u;
        // 0x1a8374: 0x2a47004f  slti        $a3, $s2, 0x4F (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)79) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8370) {
            ctx->pc = 0x1A8504u;
            goto label_1a8504;
        }
    }
    ctx->pc = 0x1A8378u;
    // 0x1a8378: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8378u;
    {
        const bool branch_taken_0x1a8378 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8378u;
        // 0x1a837c: 0x26460001  addiu       $a2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8378) {
            ctx->pc = 0x1A83A0u;
            goto label_1a83a0;
        }
    }
    ctx->pc = 0x1A8380u;
    // 0x1a8380: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1a8380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a8384: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a8384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a8388: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x1a8388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a838c: 0x24426a00  addiu       $v0, $v0, 0x6A00
    ctx->pc = 0x1a838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
    // 0x1a8390: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x1a8390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1a8394: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a8394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a8398: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1a8398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a839c: 0xa3300b  movn        $a2, $a1, $v1
    ctx->pc = 0x1a839cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
label_1a83a0:
    // 0x1a83a0: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x1a83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1a83a4: 0x12420029  beq         $s2, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A83A4u;
    {
        const bool branch_taken_0x1a83a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83A4u;
        // 0x1a83a8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83a4) {
            ctx->pc = 0x1A844Cu;
            goto label_1a844c;
        }
    }
    ctx->pc = 0x1A83ACu;
    // 0x1a83ac: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1a83acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a83b0: 0x2451818  mult        $v1, $s2, $a1
    ctx->pc = 0x1a83b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a83b4: 0x24446a00  addiu       $a0, $v0, 0x6A00
    ctx->pc = 0x1a83b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
    // 0x1a83b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a83bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a83c0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1a83c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a83c4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A83C4u;
    {
        const bool branch_taken_0x1a83c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a83c4) {
            ctx->pc = 0x1A83F4u;
            goto label_1a83f4;
        }
    }
    ctx->pc = 0x1A83CCu;
    // 0x1a83cc: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A83CCu;
    {
        const bool branch_taken_0x1a83cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83CCu;
        // 0x1a83d0: 0xc51018  mult        $v0, $a2, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83cc) {
            ctx->pc = 0x1A83E8u;
            goto label_1a83e8;
        }
    }
    ctx->pc = 0x1A83D4u;
    // 0x1a83d4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1a83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a83d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a83dc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1a83dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a83e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A83E0u;
    {
        const bool branch_taken_0x1a83e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a83e0) {
            ctx->pc = 0x1A83F4u;
            goto label_1a83f4;
        }
    }
    ctx->pc = 0x1A83E8u;
label_1a83e8:
    // 0x1a83e8: 0x2a62080d  slti        $v0, $s3, 0x80D
    ctx->pc = 0x1a83e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2061) ? 1 : 0);
    // 0x1a83ec: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A83ECu;
    {
        const bool branch_taken_0x1a83ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83ECu;
        // 0x1a83f0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83ec) {
            ctx->pc = 0x1A8450u;
            goto label_1a8450;
        }
    }
    ctx->pc = 0x1A83F4u;
label_1a83f4:
    // 0x1a83f4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1A83F4u;
    SET_GPR_U32(ctx, 31, 0x1A83FCu);
    ctx->pc = 0x1A83F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83F4u;
    // 0x1a83f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1A83F4u, 0x1A83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83FCu;
label_1a83fc:
    // 0x1a83fc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1a83fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a8400: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1A8400u;
    SET_GPR_U32(ctx, 31, 0x1A8408u);
    ctx->pc = 0x1A8404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8400u;
    // 0x1a8404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1A8400u, 0x1A8408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8408u;
label_1a8408:
    // 0x1a8408: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a8408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a840c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8410: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1A8410u;
    SET_GPR_U32(ctx, 31, 0x1A8418u);
    ctx->pc = 0x1A8414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8410u;
    // 0x1a8414: 0x24a50d10  addiu       $a1, $a1, 0xD10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1A8410u, 0x1A8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8418u;
label_1a8418:
    // 0x1a8418: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a8418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a841c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a841cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8420: 0xc069e0e  jal         func_1A7838
    ctx->pc = 0x1A8420u;
    SET_GPR_U32(ctx, 31, 0x1A8428u);
    ctx->pc = 0x1A8424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8420u;
    // 0x1a8424: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7838u, 0x1A8420u, 0x1A8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8428u;
label_1a8428:
    // 0x1a8428: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a8428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a842c: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x1A842Cu;
    SET_GPR_U32(ctx, 31, 0x1A8434u);
    ctx->pc = 0x1A8430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A842Cu;
    // 0x1a8430: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x1A842Cu, 0x1A8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8434u;
label_1a8434:
    // 0x1a8434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8438: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1A8438u;
    SET_GPR_U32(ctx, 31, 0x1A8440u);
    ctx->pc = 0x1A843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8438u;
    // 0x1a843c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1A8438u, 0x1A8440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8440u;
label_1a8440:
    // 0x1a8440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a8440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8444: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1A8444u;
    SET_GPR_U32(ctx, 31, 0x1A844Cu);
    ctx->pc = 0x1A8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8444u;
    // 0x1a8448: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1A8444u, 0x1A844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A844Cu;
label_1a844c:
    // 0x1a844c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a844cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1a8450:
    // 0x1a8450: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a8450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a8454: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1a8454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1a8458: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1a8458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1a845c: 0x1472002a  bne         $v1, $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A845Cu;
    {
        const bool branch_taken_0x1a845c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A845Cu;
        // 0x1a8460: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a845c) {
            ctx->pc = 0x1A8508u;
            goto label_1a8508;
        }
    }
    ctx->pc = 0x1A8464u;
    // 0x1a8464: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x1a8464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1a8468: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A8468u;
    {
        const bool branch_taken_0x1a8468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8468u;
        // 0x1a846c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8468) {
            ctx->pc = 0x1A8508u;
            goto label_1a8508;
        }
    }
    ctx->pc = 0x1A8470u;
    // 0x1a8470: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1a8470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1a8474: 0xc477001c  lwc1        $f23, 0x1C($v1)
    ctx->pc = 0x1a8474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a8478: 0x262501e4  addiu       $a1, $s1, 0x1E4
    ctx->pc = 0x1a8478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 484));
    // 0x1a847c: 0xc4740014  lwc1        $f20, 0x14($v1)
    ctx->pc = 0x1a847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a8480: 0xc4760010  lwc1        $f22, 0x10($v1)
    ctx->pc = 0x1a8480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a8484: 0xc4750018  lwc1        $f21, 0x18($v1)
    ctx->pc = 0x1a8484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a8488: 0xc06a1b0  jal         func_1A86C0
    ctx->pc = 0x1A8488u;
    SET_GPR_U32(ctx, 31, 0x1A8490u);
    ctx->pc = 0x1A848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8488u;
    // 0x1a848c: 0x8c500110  lw          $s0, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x1A8488u, 0x1A8490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8490u;
label_1a8490:
    // 0x1a8490: 0x8e250150  lw          $a1, 0x150($s1)
    ctx->pc = 0x1a8490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1a8494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8498: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a8498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a849c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a84a0: 0xc06a152  jal         func_1A8548
    ctx->pc = 0x1A84A0u;
    SET_GPR_U32(ctx, 31, 0x1A84A8u);
    ctx->pc = 0x1A84A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84A0u;
    // 0x1a84a4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8548u, 0x1A84A0u, 0x1A84A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84A8u;
label_1a84a8:
    // 0x1a84a8: 0xae2201e4  sw          $v0, 0x1E4($s1)
    ctx->pc = 0x1a84a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 2));
    // 0x1a84ac: 0xc06a4c0  jal         func_1A9300
    ctx->pc = 0x1A84ACu;
    SET_GPR_U32(ctx, 31, 0x1A84B4u);
    ctx->pc = 0x1A84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84ACu;
    // 0x1a84b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9300u, 0x1A84ACu, 0x1A84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84B4u;
label_1a84b4:
    // 0x1a84b4: 0x8e2501e4  lw          $a1, 0x1E4($s1)
    ctx->pc = 0x1a84b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1a84b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a84b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84bc: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1A84BCu;
    SET_GPR_U32(ctx, 31, 0x1A84C4u);
    ctx->pc = 0x1A84C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84BCu;
    // 0x1a84c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1A84BCu, 0x1A84C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84C4u;
label_1a84c4:
    // 0x1a84c4: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x1a84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1a84c8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1a84c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1a84cc: 0xe4550018  swc1        $f21, 0x18($v0)
    ctx->pc = 0x1a84ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1a84d0: 0xe4560010  swc1        $f22, 0x10($v0)
    ctx->pc = 0x1a84d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1a84d4: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1A84D4u;
    SET_GPR_U32(ctx, 31, 0x1A84DCu);
    ctx->pc = 0x1A84D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84D4u;
    // 0x1a84d8: 0x8e2401e4  lw          $a0, 0x1E4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1A84D4u, 0x1A84DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84DCu;
label_1a84dc:
    // 0x1a84dc: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1a84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1a84e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a84e4: 0x9064018c  lbu         $a0, 0x18C($v1)
    ctx->pc = 0x1a84e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x1a84e8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A84E8u;
    {
        const bool branch_taken_0x1a84e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a84e8) {
            ctx->pc = 0x1A84F8u;
            goto label_1a84f8;
        }
    }
    ctx->pc = 0x1A84F0u;
    // 0x1a84f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A84F0u;
    {
        const bool branch_taken_0x1a84f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84F0u;
        // 0x1a84f4: 0xa060018c  sb          $zero, 0x18C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 396), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84f0) {
            ctx->pc = 0x1A8504u;
            goto label_1a8504;
        }
    }
    ctx->pc = 0x1A84F8u;
label_1a84f8:
    // 0x1a84f8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A84F8u;
    {
        const bool branch_taken_0x1a84f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84F8u;
        // 0x1a84fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84f8) {
            ctx->pc = 0x1A8504u;
            goto label_1a8504;
        }
    }
    ctx->pc = 0x1A8500u;
    // 0x1a8500: 0xa062018c  sb          $v0, 0x18C($v1)
    ctx->pc = 0x1a8500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 396), (uint8_t)GPR_U32(ctx, 2));
label_1a8504:
    // 0x1a8504: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1a8504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1a8508:
    // 0x1a8508: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8508u;
    {
        const bool branch_taken_0x1a8508 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8508u;
        // 0x1a850c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8508) {
            ctx->pc = 0x1A851Cu;
            goto label_1a851c;
        }
    }
    ctx->pc = 0x1A8510u;
    // 0x1a8510: 0xc08fe52  jal         func_23F948
    ctx->pc = 0x1A8510u;
    SET_GPR_U32(ctx, 31, 0x1A8518u);
    ctx->pc = 0x1A8514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8510u;
    // 0x1a8514: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F948u, 0x1A8510u, 0x1A8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8518u;
label_1a8518:
    // 0x1a8518: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a8518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a851c:
    // 0x1a851c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a851cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8520: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a8520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8524: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a8524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a8528: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a852c: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x1a852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a8530: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x1a8530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a8534: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1a8534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a8538: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a8538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a853c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A853Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A853Cu;
        // 0x1a8540: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A853Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8544u;
    // 0x1a8544: 0x0  nop
    ctx->pc = 0x1a8544u;
    // NOP
    ctx->pc = 0x1a8548u;
}
