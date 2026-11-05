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

// Function: sub_002CE388
// Address: 0x2ce388 - 0x2ce528
void sub_002CE388_0x2ce388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE388_0x2ce388");
#endif

    switch (ctx->pc) {
        case 0x2ce3b4u: goto label_2ce3b4;
        case 0x2ce3c8u: goto label_2ce3c8;
        case 0x2ce3dcu: goto label_2ce3dc;
        case 0x2ce3f0u: goto label_2ce3f0;
        case 0x2ce408u: goto label_2ce408;
        case 0x2ce418u: goto label_2ce418;
        case 0x2ce424u: goto label_2ce424;
        case 0x2ce434u: goto label_2ce434;
        case 0x2ce458u: goto label_2ce458;
        case 0x2ce460u: goto label_2ce460;
        case 0x2ce47cu: goto label_2ce47c;
        case 0x2ce4e0u: goto label_2ce4e0;
        case 0x2ce4f8u: goto label_2ce4f8;
        default: break;
    }

    ctx->pc = 0x2ce388u;

    // 0x2ce388: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ce388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ce38c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ce38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ce390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce394: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2ce394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2ce398: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ce398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ce39c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2ce39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2ce3a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ce3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ce3a4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2ce3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2ce3a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ce3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ce3ac: 0xc09dc80  jal         func_277200
    ctx->pc = 0x2CE3ACu;
    SET_GPR_U32(ctx, 31, 0x2CE3B4u);
    ctx->pc = 0x2CE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE3ACu;
    // 0x2ce3b0: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x277200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277200u, 0x2CE3ACu, 0x2CE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE3B4u;
label_2ce3b4:
    // 0x2ce3b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CE3B4u;
    {
        const bool branch_taken_0x2ce3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3B4u;
        // 0x2ce3b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3b4) {
            ctx->pc = 0x2CE3F8u;
            goto label_2ce3f8;
        }
    }
    ctx->pc = 0x2CE3BCu;
    // 0x2ce3bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ce3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3c0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2CE3C0u;
    SET_GPR_U32(ctx, 31, 0x2CE3C8u);
    ctx->pc = 0x2CE3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE3C0u;
    // 0x2ce3c4: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2CE3C0u, 0x2CE3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE3C8u;
label_2ce3c8:
    // 0x2ce3c8: 0x2612fe40  addiu       $s2, $s0, -0x1C0
    ctx->pc = 0x2ce3c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966848));
    // 0x2ce3cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ce3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3d4: 0xc09dd98  jal         func_277660
    ctx->pc = 0x2CE3D4u;
    SET_GPR_U32(ctx, 31, 0x2CE3DCu);
    ctx->pc = 0x2CE3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE3D4u;
    // 0x2ce3d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x2CE3D4u, 0x2CE3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE3DCu;
label_2ce3dc:
    // 0x2ce3dc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2ce3dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ce3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2CE3E8u;
    SET_GPR_U32(ctx, 31, 0x2CE3F0u);
    ctx->pc = 0x2CE3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE3E8u;
    // 0x2ce3ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2CE3E8u, 0x2CE3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE3F0u;
label_2ce3f0:
    // 0x2ce3f0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE3F0u;
    {
        const bool branch_taken_0x2ce3f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3F0u;
        // 0x2ce3f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3f0) {
            ctx->pc = 0x2CE400u;
            goto label_2ce400;
        }
    }
    ctx->pc = 0x2CE3F8u;
label_2ce3f8:
    // 0x2ce3f8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2CE3F8u;
    {
        const bool branch_taken_0x2ce3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3F8u;
        // 0x2ce3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3f8) {
            ctx->pc = 0x2CE4FCu;
            goto label_2ce4fc;
        }
    }
    ctx->pc = 0x2CE400u;
label_2ce400:
    // 0x2ce400: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2CE400u;
    SET_GPR_U32(ctx, 31, 0x2CE408u);
    ctx->pc = 0x2CE404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE400u;
    // 0x2ce404: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2CE400u, 0x2CE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE408u;
label_2ce408:
    // 0x2ce408: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2ce408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce410: 0xc09ddfc  jal         func_2777F0
    ctx->pc = 0x2CE410u;
    SET_GPR_U32(ctx, 31, 0x2CE418u);
    ctx->pc = 0x2CE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE410u;
    // 0x2ce414: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777F0u, 0x2CE410u, 0x2CE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE418u;
label_2ce418:
    // 0x2ce418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce41c: 0xc09e056  jal         func_278158
    ctx->pc = 0x2CE41Cu;
    SET_GPR_U32(ctx, 31, 0x2CE424u);
    ctx->pc = 0x2CE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE41Cu;
    // 0x2ce420: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2CE41Cu, 0x2CE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE424u;
label_2ce424:
    // 0x2ce424: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ce424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce428: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ce428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ce42c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2CE42Cu;
    SET_GPR_U32(ctx, 31, 0x2CE434u);
    ctx->pc = 0x2CE430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE42Cu;
    // 0x2ce430: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2CE42Cu, 0x2CE434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE434u;
label_2ce434:
    // 0x2ce434: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ce434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce438: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CE438u;
    {
        const bool branch_taken_0x2ce438 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE438u;
        // 0x2ce43c: 0xae022c30  sw          $v0, 0x2C30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce438) {
            ctx->pc = 0x2CE4C4u;
            goto label_2ce4c4;
        }
    }
    ctx->pc = 0x2CE440u;
    // 0x2ce440: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x2ce440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce444: 0x3c013f55  lui         $at, 0x3F55
    ctx->pc = 0x2ce444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16213 << 16));
    // 0x2ce448: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x2ce448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
    // 0x2ce44c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ce44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ce450: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2ce450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ce454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ce458:
    // 0x2ce458: 0xc09ddfc  jal         func_2777F0
    ctx->pc = 0x2CE458u;
    SET_GPR_U32(ctx, 31, 0x2CE460u);
    ctx->pc = 0x2CE45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE458u;
    // 0x2ce45c: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777F0u, 0x2CE458u, 0x2CE460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE460u;
label_2ce460:
    // 0x2ce460: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ce460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ce464: 0x8e452c30  lw          $a1, 0x2C30($s2)
    ctx->pc = 0x2ce464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11312)));
    // 0x2ce468: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ce468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce46c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2ce46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2ce470: 0x24a60008  addiu       $a2, $a1, 0x8
    ctx->pc = 0x2ce470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2ce474: 0xc09e1a0  jal         func_278680
    ctx->pc = 0x2CE474u;
    SET_GPR_U32(ctx, 31, 0x2CE47Cu);
    ctx->pc = 0x2CE478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE474u;
    // 0x2ce478: 0x24a7000c  addiu       $a3, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278680u, 0x2CE474u, 0x2CE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE47Cu;
label_2ce47c:
    // 0x2ce47c: 0x8e432c30  lw          $v1, 0x2C30($s2)
    ctx->pc = 0x2ce47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11312)));
    // 0x2ce480: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2ce480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ce484: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ce484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce488: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ce488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ce48c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2ce48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2ce490: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ce490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ce494: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2ce494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2ce498: 0x8e422c30  lw          $v0, 0x2C30($s2)
    ctx->pc = 0x2ce498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11312)));
    // 0x2ce49c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ce49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ce4a0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2ce4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce4a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ce4a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ce4a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2ce4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2ce4ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ce4acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ce4b0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2ce4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2ce4b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ce4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce4b8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2ce4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ce4bc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2CE4BCu;
    {
        const bool branch_taken_0x2ce4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4BCu;
        // 0x2ce4c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4bc) {
            ctx->pc = 0x2CE458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce458;
        }
    }
    ctx->pc = 0x2CE4C4u;
label_2ce4c4:
    // 0x2ce4c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ce4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce4c8: 0x26a4fe40  addiu       $a0, $s5, -0x1C0
    ctx->pc = 0x2ce4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966848));
    // 0x2ce4cc: 0x8e832c30  lw          $v1, 0x2C30($s4)
    ctx->pc = 0x2ce4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11312)));
    // 0x2ce4d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ce4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ce4d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ce4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce4d8: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x2CE4D8u;
    SET_GPR_U32(ctx, 31, 0x2CE4E0u);
    ctx->pc = 0x2CE4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE4D8u;
    // 0x2ce4dc: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x2CE4D8u, 0x2CE4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4E0u;
label_2ce4e0:
    // 0x2ce4e0: 0x8e832c30  lw          $v1, 0x2C30($s4)
    ctx->pc = 0x2ce4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11312)));
    // 0x2ce4e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ce4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ce4e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ce4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce4ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ce4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce4f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2CE4F0u;
    SET_GPR_U32(ctx, 31, 0x2CE4F8u);
    ctx->pc = 0x2CE4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE4F0u;
    // 0x2ce4f4: 0xac432c34  sw          $v1, 0x2C34($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 11316), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2CE4F0u, 0x2CE4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4F8u;
label_2ce4f8:
    // 0x2ce4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce4fc:
    // 0x2ce4fc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ce4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce500: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ce500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ce504: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ce504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce508: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2ce508u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ce50c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ce50cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ce510: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2ce510u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce514: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ce514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ce518: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2ce518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ce51c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE51Cu;
        // 0x2ce520: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE524u;
    // 0x2ce524: 0x0  nop
    ctx->pc = 0x2ce524u;
    // NOP
    ctx->pc = 0x2ce528u;
}
