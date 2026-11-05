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

// Function: sub_0023A598
// Address: 0x23a598 - 0x23ac48
void sub_0023A598_0x23a598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A598_0x23a598");
#endif

    switch (ctx->pc) {
        case 0x23a5d0u: goto label_23a5d0;
        case 0x23a5dcu: goto label_23a5dc;
        case 0x23a5ecu: goto label_23a5ec;
        case 0x23a634u: goto label_23a634;
        case 0x23a6b0u: goto label_23a6b0;
        case 0x23a710u: goto label_23a710;
        case 0x23a7e8u: goto label_23a7e8;
        case 0x23a81cu: goto label_23a81c;
        case 0x23abe8u: goto label_23abe8;
        case 0x23ac14u: goto label_23ac14;
        default: break;
    }

    ctx->pc = 0x23a598u;

    // 0x23a598: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23a598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x23a59c: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x23a59cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x23a5a0: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x23a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x23a5a4: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x23a5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x23a5a8: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x23a5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x23a5ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23a5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a5b0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x23a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x23a5b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23a5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a5b8: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x23a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x23a5bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23a5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x23a5c0: 0x14400199  bnez        $v0, . + 4 + (0x199 << 2)
    ctx->pc = 0x23A5C0u;
    {
        const bool branch_taken_0x23a5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5C0u;
        // 0x23a5c4: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5c0) {
            ctx->pc = 0x23AC28u;
            goto label_23ac28;
        }
    }
    ctx->pc = 0x23A5C8u;
    // 0x23a5c8: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23A5C8u;
    SET_GPR_U32(ctx, 31, 0x23A5D0u);
    ctx->pc = 0x23A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A5C8u;
    // 0x23a5cc: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x23A5C8u, 0x23A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A5D0u;
label_23a5d0:
    // 0x23a5d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a5d4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x23A5D4u;
    SET_GPR_U32(ctx, 31, 0x23A5DCu);
    ctx->pc = 0x23A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A5D4u;
    // 0x23a5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x23A5D4u, 0x23A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A5DCu;
label_23a5dc:
    // 0x23a5dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A5DCu;
    {
        const bool branch_taken_0x23a5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a5dc) {
            ctx->pc = 0x23A5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A5DCu;
            // 0x23a5e0: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A5F0u;
            goto label_23a5f0;
        }
    }
    ctx->pc = 0x23A5E4u;
    // 0x23a5e4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x23A5E4u;
    SET_GPR_U32(ctx, 31, 0x23A5ECu);
    ctx->pc = 0x23A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A5E4u;
    // 0x23a5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x23A5E4u, 0x23A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A5ECu;
label_23a5ec:
    // 0x23a5ec: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x23a5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a5f0:
    // 0x23a5f0: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x23a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x23a5f4: 0x9223036c  lbu         $v1, 0x36C($s1)
    ctx->pc = 0x23a5f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x23a5f8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23a5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23a5fc: 0x319fa  dsrl        $v1, $v1, 7
    ctx->pc = 0x23a5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 7);
    // 0x23a600: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x23a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a604: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x23a604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23a608: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23a608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a60c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x23a60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23a610: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x23a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a614: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x23A614u;
    {
        const bool branch_taken_0x23a614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A614u;
        // 0x23a618: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a614) {
            ctx->pc = 0x23A798u;
            goto label_23a798;
        }
    }
    ctx->pc = 0x23A61Cu;
    // 0x23a61c: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x23a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x23a620: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x23a620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x23a624: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A624u;
    {
        const bool branch_taken_0x23a624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A624u;
        // 0x23a628: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a624) {
            ctx->pc = 0x23A63Cu;
            goto label_23a63c;
        }
    }
    ctx->pc = 0x23A62Cu;
    // 0x23a62c: 0xc076824  jal         func_1DA090
    ctx->pc = 0x23A62Cu;
    SET_GPR_U32(ctx, 31, 0x23A634u);
    ctx->pc = 0x1DA090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA090u, 0x23A62Cu, 0x23A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A634u;
label_23a634:
    // 0x23a634: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A634u;
    {
        const bool branch_taken_0x23a634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a634) {
            ctx->pc = 0x23A638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A634u;
            // 0x23a638: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A644u;
            goto label_23a644;
        }
    }
    ctx->pc = 0x23A63Cu;
label_23a63c:
    // 0x23a63c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23a63cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a640: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x23a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23a644:
    // 0x23a644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23a644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a648: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x23a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a64c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x23a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x23a650: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x23a650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23a654: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x23a654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a658: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x23a658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23a65c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x23a65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a660: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x23a660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23a664: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x23a664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a668: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x23A668u;
    {
        const bool branch_taken_0x23a668 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A668u;
        // 0x23a66c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a668) {
            ctx->pc = 0x23A6A8u;
            goto label_23a6a8;
        }
    }
    ctx->pc = 0x23A670u;
    // 0x23a670: 0x5600004a  bnel        $s0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x23A670u;
    {
        const bool branch_taken_0x23a670 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a670) {
            ctx->pc = 0x23A674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A670u;
            // 0x23a674: 0x9222036d  lbu         $v0, 0x36D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 877)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A79Cu;
            goto label_23a79c;
        }
    }
    ctx->pc = 0x23A678u;
    // 0x23a678: 0x8e22048c  lw          $v0, 0x48C($s1)
    ctx->pc = 0x23a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x23a67c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x23a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a680: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x23a680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x23a684: 0x8e23048c  lw          $v1, 0x48C($s1)
    ctx->pc = 0x23a684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x23a688: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x23a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a68c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x23a68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x23a690: 0x8e22048c  lw          $v0, 0x48C($s1)
    ctx->pc = 0x23a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x23a694: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x23a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x23a698: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23a698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a69c: 0xfa210490  sqc2        $vf1, 0x490($s1)
    ctx->pc = 0x23a69cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1168), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a6a0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x23A6A0u;
    {
        const bool branch_taken_0x23a6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6A0u;
        // 0x23a6a4: 0x9222036d  lbu         $v0, 0x36D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6a0) {
            ctx->pc = 0x23A79Cu;
            goto label_23a79c;
        }
    }
    ctx->pc = 0x23A6A8u;
label_23a6a8:
    // 0x23a6a8: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x23A6A8u;
    SET_GPR_U32(ctx, 31, 0x23A6B0u);
    ctx->pc = 0x23A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A6A8u;
    // 0x23a6ac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x23A6A8u, 0x23A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A6B0u;
label_23a6b0:
    // 0x23a6b0: 0x5600003a  bnel        $s0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x23A6B0u;
    {
        const bool branch_taken_0x23a6b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a6b0) {
            ctx->pc = 0x23A6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A6B0u;
            // 0x23a6b4: 0x9222036d  lbu         $v0, 0x36D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 877)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A79Cu;
            goto label_23a79c;
        }
    }
    ctx->pc = 0x23A6B8u;
    // 0x23a6b8: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x23a6bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x23a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x23a6c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23a6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23a6c4: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x23A6C4u;
    {
        const bool branch_taken_0x23a6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6C4u;
        // 0x23a6c8: 0x26230490  addiu       $v1, $s1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6c4) {
            ctx->pc = 0x23A798u;
            goto label_23a798;
        }
    }
    ctx->pc = 0x23A6CCu;
    // 0x23a6cc: 0x8e22048c  lw          $v0, 0x48C($s1)
    ctx->pc = 0x23a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x23a6d0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x23a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x23a6d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23a6d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a6d8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x23a6d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a6dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a6dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a6e0: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x23a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a6e4: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x23a6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a6e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23a6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a6ec: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x23a6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a6f0: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x23a6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23a6f4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x23a6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a6f8: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x23a6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a6fc: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x23a6fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x23a700: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x23a700u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x23a704: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x23a704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x23a708: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x23A708u;
    SET_GPR_U32(ctx, 31, 0x23A710u);
    ctx->pc = 0x23A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A708u;
    // 0x23a70c: 0xe7a1008c  swc1        $f1, 0x8C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x23A708u, 0x23A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A710u;
label_23a710:
    // 0x23a710: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23a710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23a714: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x23a714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a718: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x23a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a71c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x23a71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23a720: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23a720u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x23a724: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23a724u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x23a728: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x23a728u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x23a72c: 0x46010044  c1          0x10044
    ctx->pc = 0x23a72cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x23a730: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x23a730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x23a734: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x23a734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x23a738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a73c: 0x0  nop
    ctx->pc = 0x23a73cu;
    // NOP
    // 0x23a740: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23a740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a744: 0x0  nop
    ctx->pc = 0x23a744u;
    // NOP
    // 0x23a748: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x23A748u;
    {
        const bool branch_taken_0x23a748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a748) {
            ctx->pc = 0x23A74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A748u;
            // 0x23a74c: 0x9222036d  lbu         $v0, 0x36D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 877)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A79Cu;
            goto label_23a79c;
        }
    }
    ctx->pc = 0x23A750u;
    // 0x23a750: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x23a750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x23a754: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a758: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23a758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23a75c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23a75cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a760: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x23a760u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a764: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a768: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x23a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a76c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x23a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a770: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x23a770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a774: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x23a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a778: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x23a778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a77c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x23a77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x23a780: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x23a780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x23a784: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x23a784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x23a788: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x23a788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x23a78c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a790: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x23a790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a794: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x23a794u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_23a798:
    // 0x23a798: 0x9222036d  lbu         $v0, 0x36D($s1)
    ctx->pc = 0x23a798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 877)));
label_23a79c:
    // 0x23a79c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23a79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23a7a0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23A7A0u;
    {
        const bool branch_taken_0x23a7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7A0u;
        // 0x23a7a4: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7a0) {
            ctx->pc = 0x23A7F0u;
            goto label_23a7f0;
        }
    }
    ctx->pc = 0x23A7A8u;
    // 0x23a7a8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x23a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x23a7ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a7b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23a7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23a7b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23a7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23a7b8: 0xc4610074  lwc1        $f1, 0x74($v1)
    ctx->pc = 0x23a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a7bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23a7bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23a7c0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x23a7c0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x23a7c4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x23a7c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a7c8: 0x0  nop
    ctx->pc = 0x23a7c8u;
    // NOP
    // 0x23a7cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x23A7CCu;
    {
        const bool branch_taken_0x23a7cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a7cc) {
            ctx->pc = 0x23A7E0u;
            goto label_23a7e0;
        }
    }
    ctx->pc = 0x23A7D4u;
    // 0x23a7d4: 0x8e2204a8  lw          $v0, 0x4A8($s1)
    ctx->pc = 0x23a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1192)));
    // 0x23a7d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A7D8u;
    {
        const bool branch_taken_0x23a7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a7d8) {
            ctx->pc = 0x23A7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A7D8u;
            // 0x23a7dc: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A7F4u;
            goto label_23a7f4;
        }
    }
    ctx->pc = 0x23A7E0u;
label_23a7e0:
    // 0x23a7e0: 0xc08e61a  jal         func_239868
    ctx->pc = 0x23A7E0u;
    SET_GPR_U32(ctx, 31, 0x23A7E8u);
    ctx->pc = 0x23A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A7E0u;
    // 0x23a7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239868u, 0x23A7E0u, 0x23A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A7E8u;
label_23a7e8:
    // 0x23a7e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23A7E8u;
    {
        const bool branch_taken_0x23a7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a7e8) {
            ctx->pc = 0x23A82Cu;
            goto label_23a82c;
        }
    }
    ctx->pc = 0x23A7F0u;
label_23a7f0:
    // 0x23a7f0: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x23a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23a7f4:
    // 0x23a7f4: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x23a7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x23a7f8: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x23a7f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x23a7fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a800: 0x0  nop
    ctx->pc = 0x23a800u;
    // NOP
    // 0x23a804: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23a804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a808: 0x0  nop
    ctx->pc = 0x23a808u;
    // NOP
    // 0x23a80c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23A80Cu;
    {
        const bool branch_taken_0x23a80c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a80c) {
            ctx->pc = 0x23A82Cu;
            goto label_23a82c;
        }
    }
    ctx->pc = 0x23A814u;
    // 0x23a814: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x23A814u;
    SET_GPR_U32(ctx, 31, 0x23A81Cu);
    ctx->pc = 0x23A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A814u;
    // 0x23a818: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x23A814u, 0x23A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A81Cu;
label_23a81c:
    // 0x23a81c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A81Cu;
    {
        const bool branch_taken_0x23a81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a81c) {
            ctx->pc = 0x23A82Cu;
            goto label_23a82c;
        }
    }
    ctx->pc = 0x23A824u;
    // 0x23a824: 0xae2004a0  sw          $zero, 0x4A0($s1)
    ctx->pc = 0x23a824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1184), GPR_U32(ctx, 0));
    // 0x23a828: 0xae2004ac  sw          $zero, 0x4AC($s1)
    ctx->pc = 0x23a828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1196), GPR_U32(ctx, 0));
label_23a82c:
    // 0x23a82c: 0x164000ff  bnez        $s2, . + 4 + (0xFF << 2)
    ctx->pc = 0x23A82Cu;
    {
        const bool branch_taken_0x23a82c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A82Cu;
        // 0x23a830: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a82c) {
            ctx->pc = 0x23AC2Cu;
            goto label_23ac2c;
        }
    }
    ctx->pc = 0x23A834u;
    // 0x23a834: 0x8e2203a4  lw          $v0, 0x3A4($s1)
    ctx->pc = 0x23a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x23a838: 0x544000fd  bnel        $v0, $zero, . + 4 + (0xFD << 2)
    ctx->pc = 0x23A838u;
    {
        const bool branch_taken_0x23a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a838) {
            ctx->pc = 0x23A83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A838u;
            // 0x23a83c: 0xdfb100b8  ld          $s1, 0xB8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AC30u;
            goto label_23ac30;
        }
    }
    ctx->pc = 0x23A840u;
    // 0x23a840: 0x8e22048c  lw          $v0, 0x48C($s1)
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x23a844: 0x504000fa  beql        $v0, $zero, . + 4 + (0xFA << 2)
    ctx->pc = 0x23A844u;
    {
        const bool branch_taken_0x23a844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a844) {
            ctx->pc = 0x23A848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A844u;
            // 0x23a848: 0xdfb100b8  ld          $s1, 0xB8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AC30u;
            goto label_23ac30;
        }
    }
    ctx->pc = 0x23A84Cu;
    // 0x23a84c: 0xc62204a0  lwc1        $f2, 0x4A0($s1)
    ctx->pc = 0x23a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a850: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x23a850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x23a854: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x23a854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x23a858: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23a858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23a85c: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x23a85cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x23a860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a864: 0x0  nop
    ctx->pc = 0x23a864u;
    // NOP
    // 0x23a868: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x23A868u;
    {
        const bool branch_taken_0x23a868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a868) {
            ctx->pc = 0x23A86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A868u;
            // 0x23a86c: 0x9222036c  lbu         $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A8C4u;
            goto label_23a8c4;
        }
    }
    ctx->pc = 0x23A870u;
    // 0x23a870: 0xc62304ac  lwc1        $f3, 0x4AC($s1)
    ctx->pc = 0x23a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a874: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x23a874u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x23a878: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a87c: 0x0  nop
    ctx->pc = 0x23a87cu;
    // NOP
    // 0x23a880: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x23A880u;
    {
        const bool branch_taken_0x23a880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a880) {
            ctx->pc = 0x23A884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A880u;
            // 0x23a884: 0x9222036c  lbu         $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A8C4u;
            goto label_23a8c4;
        }
    }
    ctx->pc = 0x23A888u;
    // 0x23a888: 0xc62004a4  lwc1        $f0, 0x4A4($s1)
    ctx->pc = 0x23a888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a88c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x23a88cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x23a890: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x23a890u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x23a894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a898: 0x0  nop
    ctx->pc = 0x23a898u;
    // NOP
    // 0x23a89c: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x23A89Cu;
    {
        const bool branch_taken_0x23a89c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a89c) {
            ctx->pc = 0x23A8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A89Cu;
            // 0x23a8a0: 0x9222036c  lbu         $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A8C4u;
            goto label_23a8c4;
        }
    }
    ctx->pc = 0x23A8A4u;
    // 0x23a8a4: 0xc62004b0  lwc1        $f0, 0x4B0($s1)
    ctx->pc = 0x23a8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a8a8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x23a8a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x23a8ac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x23a8acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x23a8b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a8b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a8b4: 0x0  nop
    ctx->pc = 0x23a8b4u;
    // NOP
    // 0x23a8b8: 0x450200dd  bc1fl       . + 4 + (0xDD << 2)
    ctx->pc = 0x23A8B8u;
    {
        const bool branch_taken_0x23a8b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a8b8) {
            ctx->pc = 0x23A8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A8B8u;
            // 0x23a8bc: 0xdfb100b8  ld          $s1, 0xB8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AC30u;
            goto label_23ac30;
        }
    }
    ctx->pc = 0x23A8C0u;
    // 0x23a8c0: 0x9222036c  lbu         $v0, 0x36C($s1)
    ctx->pc = 0x23a8c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 876)));
label_23a8c4:
    // 0x23a8c4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x23a8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x23a8c8: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x23A8C8u;
    {
        const bool branch_taken_0x23a8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a8c8) {
            ctx->pc = 0x23A8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A8C8u;
            // 0x23a8cc: 0xc62104a4  lwc1        $f1, 0x4A4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA84u;
            goto label_23aa84;
        }
    }
    ctx->pc = 0x23A8D0u;
    // 0x23a8d0: 0xc62004a0  lwc1        $f0, 0x4A0($s1)
    ctx->pc = 0x23a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a8d4: 0xc62404a4  lwc1        $f4, 0x4A4($s1)
    ctx->pc = 0x23a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23a8d8: 0xc62204ac  lwc1        $f2, 0x4AC($s1)
    ctx->pc = 0x23a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a8dc: 0xc62104b0  lwc1        $f1, 0x4B0($s1)
    ctx->pc = 0x23a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a8e0: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x23a8e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x23a8e4: 0x8e2304a8  lw          $v1, 0x4A8($s1)
    ctx->pc = 0x23a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1192)));
    // 0x23a8e8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x23A8E8u;
    {
        const bool branch_taken_0x23a8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8E8u;
        // 0x23a8ec: 0x46011081  sub.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8e8) {
            ctx->pc = 0x23A928u;
            goto label_23a928;
        }
    }
    ctx->pc = 0x23A8F0u;
    // 0x23a8f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a8f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23a8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23a8f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23a8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23a8fc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x23a8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a900: 0x0  nop
    ctx->pc = 0x23a900u;
    // NOP
    // 0x23a904: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23A904u;
    {
        const bool branch_taken_0x23a904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a904) {
            ctx->pc = 0x23A914u;
            goto label_23a914;
        }
    }
    ctx->pc = 0x23A90Cu;
    // 0x23a90c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23a90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x23a910: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23a910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23a914:
    // 0x23a914: 0x0  nop
    ctx->pc = 0x23a914u;
    // NOP
    // 0x23a918: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23a918u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23a91c: 0xe62004a8  swc1        $f0, 0x4A8($s1)
    ctx->pc = 0x23a91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1192), bits); }
    // 0x23a920: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x23A920u;
    {
        const bool branch_taken_0x23a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A920u;
        // 0x23a924: 0x8e2304b4  lw          $v1, 0x4B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a920) {
            ctx->pc = 0x23A9B4u;
            goto label_23a9b4;
        }
    }
    ctx->pc = 0x23A928u;
label_23a928:
    // 0x23a928: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a92c: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x23A92Cu;
    {
        const bool branch_taken_0x23a92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A92Cu;
        // 0x23a930: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a92c) {
            ctx->pc = 0x23A96Cu;
            goto label_23a96c;
        }
    }
    ctx->pc = 0x23A934u;
    // 0x23a934: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x23a934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x23a938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a93c: 0x0  nop
    ctx->pc = 0x23a93cu;
    // NOP
    // 0x23a940: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x23a940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a944: 0x0  nop
    ctx->pc = 0x23a944u;
    // NOP
    // 0x23a948: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23A948u;
    {
        const bool branch_taken_0x23a948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a948) {
            ctx->pc = 0x23A958u;
            goto label_23a958;
        }
    }
    ctx->pc = 0x23A950u;
    // 0x23a950: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23A950u;
    {
        const bool branch_taken_0x23a950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A950u;
        // 0x23a954: 0xae2204a8  sw          $v0, 0x4A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a950) {
            ctx->pc = 0x23A9B0u;
            goto label_23a9b0;
        }
    }
    ctx->pc = 0x23A958u;
label_23a958:
    // 0x23a958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a95c: 0x0  nop
    ctx->pc = 0x23a95cu;
    // NOP
    // 0x23a960: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x23a960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a964: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23A964u;
    {
        const bool branch_taken_0x23a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a964) {
            ctx->pc = 0x23A9A4u;
            goto label_23a9a4;
        }
    }
    ctx->pc = 0x23A96Cu;
label_23a96c:
    // 0x23a96c: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23A96Cu;
    {
        const bool branch_taken_0x23a96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a96c) {
            ctx->pc = 0x23A970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A96Cu;
            // 0x23a970: 0x8e2304b4  lw          $v1, 0x4B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A9B4u;
            goto label_23a9b4;
        }
    }
    ctx->pc = 0x23A974u;
    // 0x23a974: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23a974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23a978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a97c: 0x0  nop
    ctx->pc = 0x23a97cu;
    // NOP
    // 0x23a980: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x23a980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a984: 0x0  nop
    ctx->pc = 0x23a984u;
    // NOP
    // 0x23a988: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23A988u;
    {
        const bool branch_taken_0x23a988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a988) {
            ctx->pc = 0x23A998u;
            goto label_23a998;
        }
    }
    ctx->pc = 0x23A990u;
    // 0x23a990: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23A990u;
    {
        const bool branch_taken_0x23a990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A990u;
        // 0x23a994: 0xae2404a8  sw          $a0, 0x4A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a990) {
            ctx->pc = 0x23A9B0u;
            goto label_23a9b0;
        }
    }
    ctx->pc = 0x23A998u;
label_23a998:
    // 0x23a998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a99c: 0x0  nop
    ctx->pc = 0x23a99cu;
    // NOP
    // 0x23a9a0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x23a9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23a9a4:
    // 0x23a9a4: 0x0  nop
    ctx->pc = 0x23a9a4u;
    // NOP
    // 0x23a9a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23A9A8u;
    {
        const bool branch_taken_0x23a9a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a9a8) {
            ctx->pc = 0x23A9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A9A8u;
            // 0x23a9ac: 0xe62404a0  swc1        $f4, 0x4A0($s1) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1184), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A9B0u;
            goto label_23a9b0;
        }
    }
    ctx->pc = 0x23A9B0u;
label_23a9b0:
    // 0x23a9b0: 0x8e2304b4  lw          $v1, 0x4B4($s1)
    ctx->pc = 0x23a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1204)));
label_23a9b4:
    // 0x23a9b4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x23A9B4u;
    {
        const bool branch_taken_0x23a9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9B4u;
        // 0x23a9b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9b4) {
            ctx->pc = 0x23A9F4u;
            goto label_23a9f4;
        }
    }
    ctx->pc = 0x23A9BCu;
    // 0x23a9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a9c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23a9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23a9c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23a9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23a9c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23a9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a9cc: 0x0  nop
    ctx->pc = 0x23a9ccu;
    // NOP
    // 0x23a9d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23A9D0u;
    {
        const bool branch_taken_0x23a9d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a9d0) {
            ctx->pc = 0x23A9E0u;
            goto label_23a9e0;
        }
    }
    ctx->pc = 0x23A9D8u;
    // 0x23a9d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23a9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x23a9dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23a9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23a9e0:
    // 0x23a9e0: 0x0  nop
    ctx->pc = 0x23a9e0u;
    // NOP
    // 0x23a9e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23a9e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23a9e8: 0xe62004b4  swc1        $f0, 0x4B4($s1)
    ctx->pc = 0x23a9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1204), bits); }
    // 0x23a9ec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x23A9ECu;
    {
        const bool branch_taken_0x23a9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9ECu;
        // 0x23a9f0: 0xc62104a4  lwc1        $f1, 0x4A4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9ec) {
            ctx->pc = 0x23AA84u;
            goto label_23aa84;
        }
    }
    ctx->pc = 0x23A9F4u;
label_23a9f4:
    // 0x23a9f4: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x23A9F4u;
    {
        const bool branch_taken_0x23a9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9F4u;
        // 0x23a9f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9f4) {
            ctx->pc = 0x23AA34u;
            goto label_23aa34;
        }
    }
    ctx->pc = 0x23A9FCu;
    // 0x23a9fc: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x23a9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x23aa00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23aa00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa04: 0x0  nop
    ctx->pc = 0x23aa04u;
    // NOP
    // 0x23aa08: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23aa08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23aa0c: 0x0  nop
    ctx->pc = 0x23aa0cu;
    // NOP
    // 0x23aa10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23AA10u;
    {
        const bool branch_taken_0x23aa10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23aa10) {
            ctx->pc = 0x23AA20u;
            goto label_23aa20;
        }
    }
    ctx->pc = 0x23AA18u;
    // 0x23aa18: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23AA18u;
    {
        const bool branch_taken_0x23aa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA18u;
        // 0x23aa1c: 0xae2204b4  sw          $v0, 0x4B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa18) {
            ctx->pc = 0x23AA80u;
            goto label_23aa80;
        }
    }
    ctx->pc = 0x23AA20u;
label_23aa20:
    // 0x23aa20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23aa20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa24: 0x0  nop
    ctx->pc = 0x23aa24u;
    // NOP
    // 0x23aa28: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23aa28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23aa2c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23AA2Cu;
    {
        const bool branch_taken_0x23aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aa2c) {
            ctx->pc = 0x23AA6Cu;
            goto label_23aa6c;
        }
    }
    ctx->pc = 0x23AA34u;
label_23aa34:
    // 0x23aa34: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23AA34u;
    {
        const bool branch_taken_0x23aa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23aa34) {
            ctx->pc = 0x23AA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AA34u;
            // 0x23aa38: 0xc62104a4  lwc1        $f1, 0x4A4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA84u;
            goto label_23aa84;
        }
    }
    ctx->pc = 0x23AA3Cu;
    // 0x23aa3c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23aa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23aa40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23aa40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa44: 0x0  nop
    ctx->pc = 0x23aa44u;
    // NOP
    // 0x23aa48: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23aa48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23aa4c: 0x0  nop
    ctx->pc = 0x23aa4cu;
    // NOP
    // 0x23aa50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23AA50u;
    {
        const bool branch_taken_0x23aa50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23aa50) {
            ctx->pc = 0x23AA60u;
            goto label_23aa60;
        }
    }
    ctx->pc = 0x23AA58u;
    // 0x23aa58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23AA58u;
    {
        const bool branch_taken_0x23aa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA58u;
        // 0x23aa5c: 0xae2404b4  sw          $a0, 0x4B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa58) {
            ctx->pc = 0x23AA80u;
            goto label_23aa80;
        }
    }
    ctx->pc = 0x23AA60u;
label_23aa60:
    // 0x23aa60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23aa60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa64: 0x0  nop
    ctx->pc = 0x23aa64u;
    // NOP
    // 0x23aa68: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23aa68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23aa6c:
    // 0x23aa6c: 0x0  nop
    ctx->pc = 0x23aa6cu;
    // NOP
    // 0x23aa70: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x23AA70u;
    {
        const bool branch_taken_0x23aa70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23aa70) {
            ctx->pc = 0x23AA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AA70u;
            // 0x23aa74: 0xc62104a4  lwc1        $f1, 0x4A4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA84u;
            goto label_23aa84;
        }
    }
    ctx->pc = 0x23AA78u;
    // 0x23aa78: 0xc62004b0  lwc1        $f0, 0x4B0($s1)
    ctx->pc = 0x23aa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23aa7c: 0xe62004ac  swc1        $f0, 0x4AC($s1)
    ctx->pc = 0x23aa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1196), bits); }
label_23aa80:
    // 0x23aa80: 0xc62104a4  lwc1        $f1, 0x4A4($s1)
    ctx->pc = 0x23aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23aa84:
    // 0x23aa84: 0xc62204a0  lwc1        $f2, 0x4A0($s1)
    ctx->pc = 0x23aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23aa88: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x23aa88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23aa8c: 0x0  nop
    ctx->pc = 0x23aa8cu;
    // NOP
    // 0x23aa90: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23AA90u;
    {
        const bool branch_taken_0x23aa90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23aa90) {
            ctx->pc = 0x23AAB4u;
            goto label_23aab4;
        }
    }
    ctx->pc = 0x23AA98u;
    // 0x23aa98: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x23aa98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x23aa9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23aa9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aaa0: 0x0  nop
    ctx->pc = 0x23aaa0u;
    // NOP
    // 0x23aaa4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23aaa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23aaa8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23aaa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23aaac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23AAACu;
    {
        const bool branch_taken_0x23aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aaac) {
            ctx->pc = 0x23AAD8u;
            goto label_23aad8;
        }
    }
    ctx->pc = 0x23AAB4u;
label_23aab4:
    // 0x23aab4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x23aab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23aab8: 0x0  nop
    ctx->pc = 0x23aab8u;
    // NOP
    // 0x23aabc: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x23AABCu;
    {
        const bool branch_taken_0x23aabc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23aabc) {
            ctx->pc = 0x23AAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AABCu;
            // 0x23aac0: 0xc62104b0  lwc1        $f1, 0x4B0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AAECu;
            goto label_23aaec;
        }
    }
    ctx->pc = 0x23AAC4u;
    // 0x23aac4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x23aac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x23aac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23aac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aacc: 0x0  nop
    ctx->pc = 0x23aaccu;
    // NOP
    // 0x23aad0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23aad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23aad4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23aad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23aad8:
    // 0x23aad8: 0x0  nop
    ctx->pc = 0x23aad8u;
    // NOP
    // 0x23aadc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23AADCu;
    {
        const bool branch_taken_0x23aadc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23aadc) {
            ctx->pc = 0x23AAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AADCu;
            // 0x23aae0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AAE4u;
            goto label_23aae4;
        }
    }
    ctx->pc = 0x23AAE4u;
label_23aae4:
    // 0x23aae4: 0xe62004a4  swc1        $f0, 0x4A4($s1)
    ctx->pc = 0x23aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1188), bits); }
    // 0x23aae8: 0xc62104b0  lwc1        $f1, 0x4B0($s1)
    ctx->pc = 0x23aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23aaec:
    // 0x23aaec: 0xc62204ac  lwc1        $f2, 0x4AC($s1)
    ctx->pc = 0x23aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23aaf0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x23aaf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23aaf4: 0x0  nop
    ctx->pc = 0x23aaf4u;
    // NOP
    // 0x23aaf8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23AAF8u;
    {
        const bool branch_taken_0x23aaf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23aaf8) {
            ctx->pc = 0x23AB1Cu;
            goto label_23ab1c;
        }
    }
    ctx->pc = 0x23AB00u;
    // 0x23ab00: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x23ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x23ab04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ab08: 0x0  nop
    ctx->pc = 0x23ab08u;
    // NOP
    // 0x23ab0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23ab0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23ab10: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23ab10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ab14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23AB14u;
    {
        const bool branch_taken_0x23ab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ab14) {
            ctx->pc = 0x23AB40u;
            goto label_23ab40;
        }
    }
    ctx->pc = 0x23AB1Cu;
label_23ab1c:
    // 0x23ab1c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x23ab1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ab20: 0x0  nop
    ctx->pc = 0x23ab20u;
    // NOP
    // 0x23ab24: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x23AB24u;
    {
        const bool branch_taken_0x23ab24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ab24) {
            ctx->pc = 0x23AB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AB24u;
            // 0x23ab28: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AB54u;
            goto label_23ab54;
        }
    }
    ctx->pc = 0x23AB2Cu;
    // 0x23ab2c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x23ab2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x23ab30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ab30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ab34: 0x0  nop
    ctx->pc = 0x23ab34u;
    // NOP
    // 0x23ab38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23ab38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ab3c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23ab3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23ab40:
    // 0x23ab40: 0x0  nop
    ctx->pc = 0x23ab40u;
    // NOP
    // 0x23ab44: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23AB44u;
    {
        const bool branch_taken_0x23ab44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ab44) {
            ctx->pc = 0x23AB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AB44u;
            // 0x23ab48: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AB4Cu;
            goto label_23ab4c;
        }
    }
    ctx->pc = 0x23AB4Cu;
label_23ab4c:
    // 0x23ab4c: 0xe62004b0  swc1        $f0, 0x4B0($s1)
    ctx->pc = 0x23ab4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1200), bits); }
    // 0x23ab50: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23ab54:
    // 0x23ab54: 0x8e25048c  lw          $a1, 0x48C($s1)
    ctx->pc = 0x23ab54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x23ab58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ab5c: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x23ab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ab60: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23ab64: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x23ab64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23ab68: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x23ab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ab6c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x23ab6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23ab70: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ab74: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x23ab74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23ab78: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x23ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ab7c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x23ab7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23ab80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ab84: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x23ab84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23ab88: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x23ab88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23ab8c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23ab90: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23ab90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ab94: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x23ab94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23ab98: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x23ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x23ab9c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23ab9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23aba0: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x23aba0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23aba4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x23aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x23aba8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x23aba8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23abac: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x23abacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23abb0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x23abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x23abb4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x23abb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23abb8: 0xc62c04a4  lwc1        $f12, 0x4A4($s1)
    ctx->pc = 0x23abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23abbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23abbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23abc4: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x23abc4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x23abc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23abc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23abcc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23abccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23abd0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x23abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x23abd4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x23abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x23abd8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x23abd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23abdc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x23abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x23abe0: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x23ABE0u;
    SET_GPR_U32(ctx, 31, 0x23ABE8u);
    ctx->pc = 0x23ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ABE0u;
    // 0x23abe4: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x23ABE0u, 0x23ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABE8u;
label_23abe8:
    // 0x23abe8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x23abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x23abec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23abecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abf0: 0xc62c04b0  lwc1        $f12, 0x4B0($s1)
    ctx->pc = 0x23abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23abf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23abf8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x23abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x23abfc: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x23abfcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x23ac00: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x23ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x23ac04: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x23ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x23ac08: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x23ac08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x23ac0c: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x23AC0Cu;
    SET_GPR_U32(ctx, 31, 0x23AC14u);
    ctx->pc = 0x23AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC0Cu;
    // 0x23ac10: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x23AC0Cu, 0x23AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC14u;
label_23ac14:
    // 0x23ac14: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x23ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x23ac18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23ac1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ac20: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x23ac20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ac24: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x23ac24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_23ac28:
    // 0x23ac28: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x23ac28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23ac2c:
    // 0x23ac2c: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x23ac2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_23ac30:
    // 0x23ac30: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x23ac30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23ac34: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x23ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x23ac38: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x23ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23ac3c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC3Cu;
        // 0x23ac40: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC44u;
    // 0x23ac44: 0x0  nop
    ctx->pc = 0x23ac44u;
    // NOP
    ctx->pc = 0x23ac48u;
}
