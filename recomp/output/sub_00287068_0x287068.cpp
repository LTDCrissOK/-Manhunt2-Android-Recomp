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

// Function: sub_00287068
// Address: 0x287068 - 0x287520
void sub_00287068_0x287068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287068_0x287068");
#endif

    switch (ctx->pc) {
        case 0x2870d4u: goto label_2870d4;
        case 0x2870dcu: goto label_2870dc;
        case 0x28711cu: goto label_28711c;
        case 0x287128u: goto label_287128;
        case 0x287144u: goto label_287144;
        case 0x287150u: goto label_287150;
        case 0x287164u: goto label_287164;
        case 0x28718cu: goto label_28718c;
        case 0x2871e4u: goto label_2871e4;
        case 0x287218u: goto label_287218;
        case 0x287234u: goto label_287234;
        case 0x287268u: goto label_287268;
        case 0x2872d4u: goto label_2872d4;
        case 0x2872fcu: goto label_2872fc;
        case 0x287324u: goto label_287324;
        case 0x287344u: goto label_287344;
        case 0x28735cu: goto label_28735c;
        case 0x287364u: goto label_287364;
        case 0x28737cu: goto label_28737c;
        case 0x287390u: goto label_287390;
        case 0x2873a8u: goto label_2873a8;
        case 0x2873d0u: goto label_2873d0;
        case 0x287424u: goto label_287424;
        case 0x287438u: goto label_287438;
        case 0x287454u: goto label_287454;
        case 0x28748cu: goto label_28748c;
        case 0x2874c8u: goto label_2874c8;
        case 0x2874d4u: goto label_2874d4;
        case 0x2874e0u: goto label_2874e0;
        default: break;
    }

    ctx->pc = 0x287068u;

    // 0x287068: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x287068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x28706c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x28706cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x287070: 0xffb00250  sd          $s0, 0x250($sp)
    ctx->pc = 0x287070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 16));
    // 0x287074: 0xffb10258  sd          $s1, 0x258($sp)
    ctx->pc = 0x287074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 17));
    // 0x287078: 0x2470a320  addiu       $s0, $v1, -0x5CE0
    ctx->pc = 0x287078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943520));
    // 0x28707c: 0xffb20260  sd          $s2, 0x260($sp)
    ctx->pc = 0x28707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 18));
    // 0x287080: 0xffb30268  sd          $s3, 0x268($sp)
    ctx->pc = 0x287080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 19));
    // 0x287084: 0xffb40270  sd          $s4, 0x270($sp)
    ctx->pc = 0x287084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
    // 0x287088: 0xffb50278  sd          $s5, 0x278($sp)
    ctx->pc = 0x287088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 21));
    // 0x28708c: 0xffb60280  sd          $s6, 0x280($sp)
    ctx->pc = 0x28708cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 22));
    // 0x287090: 0xffb70288  sd          $s7, 0x288($sp)
    ctx->pc = 0x287090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 23));
    // 0x287094: 0xffbe0290  sd          $fp, 0x290($sp)
    ctx->pc = 0x287094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 30));
    // 0x287098: 0xffbf0298  sd          $ra, 0x298($sp)
    ctx->pc = 0x287098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 31));
    // 0x28709c: 0xe7b602b0  swc1        $f22, 0x2B0($sp)
    ctx->pc = 0x28709cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x2870a0: 0xe7b502a8  swc1        $f21, 0x2A8($sp)
    ctx->pc = 0x2870a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2870a4: 0xe7b402a0  swc1        $f20, 0x2A0($sp)
    ctx->pc = 0x2870a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2870a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2870a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x66A324u));
    // 0x2870ac: 0x1040010c  beqz        $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x2870ACu;
    {
        const bool branch_taken_0x2870ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870ACu;
        // 0x2870b0: 0x8c62a320  lw          $v0, -0x5CE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870ac) {
            ctx->pc = 0x2874E0u;
            goto label_2874e0;
        }
    }
    ctx->pc = 0x2870B4u;
    // 0x2870b4: 0x1040010a  beqz        $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x2870B4u;
    {
        const bool branch_taken_0x2870b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870B4u;
        // 0x2870b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870b4) {
            ctx->pc = 0x2874E0u;
            goto label_2874e0;
        }
    }
    ctx->pc = 0x2870BCu;
    // 0x2870bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2870bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2870c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2870c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2870c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2870c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2870c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2870c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2870cc: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x2870CCu;
    SET_GPR_U32(ctx, 31, 0x2870D4u);
    ctx->pc = 0x2870D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870CCu;
    // 0x2870d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x2870CCu, 0x2870D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870D4u;
label_2870d4:
    // 0x2870d4: 0xc0a42a6  jal         func_290A98
    ctx->pc = 0x2870D4u;
    SET_GPR_U32(ctx, 31, 0x2870DCu);
    ctx->pc = 0x2870D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870D4u;
    // 0x2870d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A98u, 0x2870D4u, 0x2870DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870DCu;
label_2870dc:
    // 0x2870dc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2870dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2870e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2870e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2870e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2870e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2870e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2870e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2870ec: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2870ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2870f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2870f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2870f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2870f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2870f8: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x2870f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2870fc: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x2870fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x287100: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x287100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287104: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x287104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x287108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x287108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28710c: 0xe7b5007c  swc1        $f21, 0x7C($sp)
    ctx->pc = 0x28710cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x287110: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x287110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x287114: 0xc0f87c6  jal         func_3E1F18
    ctx->pc = 0x287114u;
    SET_GPR_U32(ctx, 31, 0x28711Cu);
    ctx->pc = 0x287118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287114u;
    // 0x287118: 0xe4610004  swc1        $f1, 0x4($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1F18u, 0x287114u, 0x28711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28711Cu;
label_28711c:
    // 0x28711c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x28711cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x287120: 0xc0a42e2  jal         func_290B88
    ctx->pc = 0x287120u;
    SET_GPR_U32(ctx, 31, 0x287128u);
    ctx->pc = 0x287124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287120u;
    // 0x287124: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290B88u, 0x287120u, 0x287128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287128u;
label_287128:
    // 0x287128: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x287128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x28712c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28712Cu;
    {
        const bool branch_taken_0x28712c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28712Cu;
        // 0x287130: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28712c) {
            ctx->pc = 0x287150u;
            goto label_287150;
        }
    }
    ctx->pc = 0x287134u;
    // 0x287134: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x287134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287138: 0x8c46a898  lw          $a2, -0x5768($v0)
    ctx->pc = 0x287138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944920)));
    // 0x28713c: 0xc0a42c4  jal         func_290B10
    ctx->pc = 0x28713Cu;
    SET_GPR_U32(ctx, 31, 0x287144u);
    ctx->pc = 0x287140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28713Cu;
    // 0x287140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290B10u, 0x28713Cu, 0x287144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287144u;
label_287144:
    // 0x287144: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x287144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x287148: 0xc0a42e2  jal         func_290B88
    ctx->pc = 0x287148u;
    SET_GPR_U32(ctx, 31, 0x287150u);
    ctx->pc = 0x28714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287148u;
    // 0x28714c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290B88u, 0x287148u, 0x287150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287150u;
label_287150:
    // 0x287150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x287154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287158: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x287158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x28715c: 0xc0a4488  jal         func_291220
    ctx->pc = 0x28715Cu;
    SET_GPR_U32(ctx, 31, 0x287164u);
    ctx->pc = 0x287160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28715Cu;
    // 0x287160: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291220u, 0x28715Cu, 0x287164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287164u;
label_287164:
    // 0x287164: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x287164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287168: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x287168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28716c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28716cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x287170: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x287170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x287174: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x287174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x287178: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x287178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x28717c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28717cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287180: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x287180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x287184: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x287184u;
    SET_GPR_U32(ctx, 31, 0x28718Cu);
    ctx->pc = 0x287188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287184u;
    // 0x287188: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x287184u, 0x28718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28718Cu;
label_28718c:
    // 0x28718c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x28718cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287190: 0xc7a201f4  lwc1        $f2, 0x1F4($sp)
    ctx->pc = 0x287190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287194: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x287194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287198: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x287198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x28719c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28719cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2871a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2871a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2871a4: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x2871a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2871a8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2871a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2871ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2871acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2871b0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2871b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2871b4: 0x3c01bd0f  lui         $at, 0xBD0F
    ctx->pc = 0x2871b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48399 << 16));
    // 0x2871b8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2871b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x2871bc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2871bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2871c0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2871c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2871c4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2871c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2871c8: 0xe7a10200  swc1        $f1, 0x200($sp)
    ctx->pc = 0x2871c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2871cc: 0x46001580  add.s       $f22, $f2, $f0
    ctx->pc = 0x2871ccu;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2871d0: 0x4616a001  sub.s       $f0, $f20, $f22
    ctx->pc = 0x2871d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x2871d4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2871d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2871d8: 0x46040540  add.s       $f21, $f0, $f4
    ctx->pc = 0x2871d8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2871dc: 0xc0f87c6  jal         func_3E1F18
    ctx->pc = 0x2871DCu;
    SET_GPR_U32(ctx, 31, 0x2871E4u);
    ctx->pc = 0x2871E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871DCu;
    // 0x2871e0: 0xe7b50204  swc1        $f21, 0x204($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1F18u, 0x2871DCu, 0x2871E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871E4u;
label_2871e4:
    // 0x2871e4: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x2871e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x2871e8: 0x27a3023c  addiu       $v1, $sp, 0x23C
    ctx->pc = 0x2871e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
    // 0x2871ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2871ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2871f0: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x2871f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2871f4: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x2871f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x2871f8: 0x27b60220  addiu       $s6, $sp, 0x220
    ctx->pc = 0x2871f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2871fc: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x2871fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x287200: 0x27b70230  addiu       $s7, $sp, 0x230
    ctx->pc = 0x287200u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x287204: 0xafa4024c  sw          $a0, 0x24C($sp)
    ctx->pc = 0x287204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
    // 0x287208: 0x27be0234  addiu       $fp, $sp, 0x234
    ctx->pc = 0x287208u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x28720c: 0xafa50248  sw          $a1, 0x248($sp)
    ctx->pc = 0x28720cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 5));
    // 0x287210: 0x27b00210  addiu       $s0, $sp, 0x210
    ctx->pc = 0x287210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x287214: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x287214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_287218:
    // 0x287218: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x287218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28721c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28721Cu;
    {
        const bool branch_taken_0x28721c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28721c) {
            ctx->pc = 0x287220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28721Cu;
            // 0x287220: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287280u;
            goto label_287280;
        }
    }
    ctx->pc = 0x287224u;
    // 0x287224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287228: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28722c: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x28722Cu;
    SET_GPR_U32(ctx, 31, 0x287234u);
    ctx->pc = 0x287230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28722Cu;
    // 0x287230: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x28722Cu, 0x287234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287234u;
label_287234:
    // 0x287234: 0x2711023  subu        $v0, $s3, $s1
    ctx->pc = 0x287234u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x287238: 0x4616a880  add.s       $f2, $f21, $f22
    ctx->pc = 0x287238u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x28723c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28723cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287240: 0x0  nop
    ctx->pc = 0x287240u;
    // NOP
    // 0x287244: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x287244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287248: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x287248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28724c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28724cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287250: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287254: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x287254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287258: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x287258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28725c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x28725cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x287260: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x287260u;
    SET_GPR_U32(ctx, 31, 0x287268u);
    ctx->pc = 0x287264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287260u;
    // 0x287264: 0xe602fff0  swc1        $f2, -0x10($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x287260u, 0x287268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287268u;
label_287268:
    // 0x287268: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x287268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28726c: 0x0  nop
    ctx->pc = 0x28726cu;
    // NOP
    // 0x287270: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x287270u;
    {
        const bool branch_taken_0x287270 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287270u;
        // 0x287274: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287270) {
            ctx->pc = 0x28727Cu;
            goto label_28727c;
        }
    }
    ctx->pc = 0x287278u;
    // 0x287278: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x287278u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_28727c:
    // 0x28727c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28727cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_287280:
    // 0x287280: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x287280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x287284: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x287284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x287288: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x287288u;
    {
        const bool branch_taken_0x287288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287288u;
        // 0x28728c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287288) {
            ctx->pc = 0x287218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287218;
        }
    }
    ctx->pc = 0x287290u;
    // 0x287290: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x287290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x287294: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287298: 0x24d3a320  addiu       $s3, $a2, -0x5CE0
    ctx->pc = 0x287298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943520));
    // 0x28729c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28729cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2872a0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2872a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2872a4: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x2872a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x66A354u));
    // 0x2872a8: 0x240300d9  addiu       $v1, $zero, 0xD9
    ctx->pc = 0x2872a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x2872ac: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2872acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2872b0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2872b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2872b4: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x2872b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x2872b8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2872b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2872bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2872bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2872c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2872c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2872c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872cc: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2872CCu;
    SET_GPR_U32(ctx, 31, 0x2872D4u);
    ctx->pc = 0x2872D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2872CCu;
    // 0x2872d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2872CCu, 0x2872D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2872D4u;
label_2872d4:
    // 0x2872d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2872d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2872d8: 0x2452a4b8  addiu       $s2, $v0, -0x5B48
    ctx->pc = 0x2872d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943928));
    // 0x2872dc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2872dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2872e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2872E0u;
    {
        const bool branch_taken_0x2872e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2872E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872E0u;
        // 0x2872e4: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872e0) {
            ctx->pc = 0x287300u;
            goto label_287300;
        }
    }
    ctx->pc = 0x2872E8u;
    // 0x2872e8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2872e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2872ec: 0x26a44ec0  addiu       $a0, $s5, 0x4EC0
    ctx->pc = 0x2872ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20160));
    // 0x2872f0: 0x24a5aa98  addiu       $a1, $a1, -0x5568
    ctx->pc = 0x2872f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945432));
    // 0x2872f4: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2872F4u;
    SET_GPR_U32(ctx, 31, 0x2872FCu);
    ctx->pc = 0x2872F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2872F4u;
    // 0x2872f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2872F4u, 0x2872FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2872FCu;
label_2872fc:
    // 0x2872fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2872fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287300:
    // 0x287300: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x287300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x287304: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x287304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x287308: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x287308u;
    {
        const bool branch_taken_0x287308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287308u;
        // 0x28730c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287308) {
            ctx->pc = 0x28732Cu;
            goto label_28732c;
        }
    }
    ctx->pc = 0x287310u;
    // 0x287310: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x287310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x287314: 0x26a44ec0  addiu       $a0, $s5, 0x4EC0
    ctx->pc = 0x287314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20160));
    // 0x287318: 0x24a5aaa0  addiu       $a1, $a1, -0x5560
    ctx->pc = 0x287318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945440));
    // 0x28731c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28731Cu;
    SET_GPR_U32(ctx, 31, 0x287324u);
    ctx->pc = 0x287320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28731Cu;
    // 0x287320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28731Cu, 0x287324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287324u;
label_287324:
    // 0x287324: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x287324u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287328: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x287328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_28732c:
    // 0x28732c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28732cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x287330: 0x2470a4b8  addiu       $s0, $v1, -0x5B48
    ctx->pc = 0x287330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943928));
    // 0x287334: 0x26a44ec0  addiu       $a0, $s5, 0x4EC0
    ctx->pc = 0x287334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20160));
    // 0x287338: 0x24a5aaa8  addiu       $a1, $a1, -0x5558
    ctx->pc = 0x287338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945448));
    // 0x28733c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28733Cu;
    SET_GPR_U32(ctx, 31, 0x287344u);
    ctx->pc = 0x287340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28733Cu;
    // 0x287340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28733Cu, 0x287344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287344u;
label_287344:
    // 0x287344: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x287344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287348: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x287348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28734c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28734cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287350: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x287350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287354: 0xc0a18c4  jal         func_286310
    ctx->pc = 0x287354u;
    SET_GPR_U32(ctx, 31, 0x28735Cu);
    ctx->pc = 0x287358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287354u;
    // 0x287358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286310u, 0x287354u, 0x28735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28735Cu;
label_28735c:
    // 0x28735c: 0xc0a75cc  jal         func_29D730
    ctx->pc = 0x28735Cu;
    SET_GPR_U32(ctx, 31, 0x287364u);
    ctx->pc = 0x287360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28735Cu;
    // 0x287360: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D730u, 0x28735Cu, 0x287364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287364u;
label_287364:
    // 0x287364: 0x8ba50223  lwl         $a1, 0x223($sp)
    ctx->pc = 0x287364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 547); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x287368: 0x9ba50220  lwr         $a1, 0x220($sp)
    ctx->pc = 0x287368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 544); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x28736c: 0xaba50017  swl         $a1, 0x17($sp)
    ctx->pc = 0x28736cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x287370: 0xbba50014  swr         $a1, 0x14($sp)
    ctx->pc = 0x287370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x287374: 0xc0a44e0  jal         func_291380
    ctx->pc = 0x287374u;
    SET_GPR_U32(ctx, 31, 0x28737Cu);
    ctx->pc = 0x287378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287374u;
    // 0x287378: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291380u, 0x287374u, 0x28737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28737Cu;
label_28737c:
    // 0x28737c: 0x8fa60240  lw          $a2, 0x240($sp)
    ctx->pc = 0x28737cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x287380: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287384: 0x8fa70244  lw          $a3, 0x244($sp)
    ctx->pc = 0x287384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x287388: 0xc0a5866  jal         func_296198
    ctx->pc = 0x287388u;
    SET_GPR_U32(ctx, 31, 0x287390u);
    ctx->pc = 0x28738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287388u;
    // 0x28738c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296198u, 0x287388u, 0x287390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287390u;
label_287390:
    // 0x287390: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x287390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x287394: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x287394u;
    {
        const bool branch_taken_0x287394 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x287398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287394u;
        // 0x287398: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287394) {
            ctx->pc = 0x28749Cu;
            goto label_28749c;
        }
    }
    ctx->pc = 0x28739Cu;
    // 0x28739c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28739cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2873a0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2873a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2873a4: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x2873a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2873a8:
    // 0x2873a8: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x2873a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2873ac: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x2873acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2873b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2873b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2873b4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2873b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2873b8: 0x14710021  bne         $v1, $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2873B8u;
    {
        const bool branch_taken_0x2873b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2873BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873B8u;
        // 0x2873bc: 0x4600ad01  sub.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873b8) {
            ctx->pc = 0x287440u;
            goto label_287440;
        }
    }
    ctx->pc = 0x2873C0u;
    // 0x2873c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2873c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2873c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2873c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2873c8: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x2873C8u;
    SET_GPR_U32(ctx, 31, 0x2873D0u);
    ctx->pc = 0x2873CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2873C8u;
    // 0x2873cc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x2873C8u, 0x2873D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873D0u;
label_2873d0:
    // 0x2873d0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2873d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2873d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2873d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873d8: 0xc7ac0230  lwc1        $f12, 0x230($sp)
    ctx->pc = 0x2873d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2873dc: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x2873dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2873e0: 0xc7a20234  lwc1        $f2, 0x234($sp)
    ctx->pc = 0x2873e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2873e4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2873e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2873e8: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2873e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2873ec: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x2873ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2873f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2873f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2873f4: 0xc7ae0238  lwc1        $f14, 0x238($sp)
    ctx->pc = 0x2873f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2873f8: 0xc7af023c  lwc1        $f15, 0x23C($sp)
    ctx->pc = 0x2873f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2873fc: 0x46026b41  sub.s       $f13, $f13, $f2
    ctx->pc = 0x2873fcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x287400: 0x460e0b80  add.s       $f14, $f1, $f14
    ctx->pc = 0x287400u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[14]);
    // 0x287404: 0x93a40220  lbu         $a0, 0x220($sp)
    ctx->pc = 0x287404u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x287408: 0x460f03c0  add.s       $f15, $f0, $f15
    ctx->pc = 0x287408u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
    // 0x28740c: 0x93a50221  lbu         $a1, 0x221($sp)
    ctx->pc = 0x28740cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 545)));
    // 0x287410: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x287410u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x287414: 0x93a60222  lbu         $a2, 0x222($sp)
    ctx->pc = 0x287414u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 546)));
    // 0x287418: 0x93a70223  lbu         $a3, 0x223($sp)
    ctx->pc = 0x287418u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 547)));
    // 0x28741c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28741Cu;
    SET_GPR_U32(ctx, 31, 0x287424u);
    ctx->pc = 0x287420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28741Cu;
    // 0x287420: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28741Cu, 0x287424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287424u;
label_287424:
    // 0x287424: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x287424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x287428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28742c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28742cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287430: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x287430u;
    SET_GPR_U32(ctx, 31, 0x287438u);
    ctx->pc = 0x287434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287430u;
    // 0x287434: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x287430u, 0x287438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287438u;
label_287438:
    // 0x287438: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x287438u;
    {
        const bool branch_taken_0x287438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287438u;
        // 0x28743c: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287438) {
            ctx->pc = 0x28745Cu;
            goto label_28745c;
        }
    }
    ctx->pc = 0x287440u;
label_287440:
    // 0x287440: 0x93a40220  lbu         $a0, 0x220($sp)
    ctx->pc = 0x287440u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x287444: 0x93a50221  lbu         $a1, 0x221($sp)
    ctx->pc = 0x287444u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 545)));
    // 0x287448: 0x93a60222  lbu         $a2, 0x222($sp)
    ctx->pc = 0x287448u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 546)));
    // 0x28744c: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x28744Cu;
    SET_GPR_U32(ctx, 31, 0x287454u);
    ctx->pc = 0x287450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28744Cu;
    // 0x287450: 0x93a70223  lbu         $a3, 0x223($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 547)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x28744Cu, 0x287454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287454u;
label_287454:
    // 0x287454: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x287454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x287458: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x287458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_28745c:
    // 0x28745c: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x28745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x287460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287464: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x287464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x287468: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x287468u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28746c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x28746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x287470: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x287470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287474: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x287474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x287478: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x287478u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x28747c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x28747cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x287480: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x287480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x287484: 0xc09f662  jal         func_27D988
    ctx->pc = 0x287484u;
    SET_GPR_U32(ctx, 31, 0x28748Cu);
    ctx->pc = 0x287488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287484u;
    // 0x287488: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x287484u, 0x28748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28748Cu;
label_28748c:
    // 0x28748c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x28748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x287490: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x287490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x287494: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x287494u;
    {
        const bool branch_taken_0x287494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287494u;
        // 0x287498: 0x27a20210  addiu       $v0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287494) {
            ctx->pc = 0x2873A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2873a8;
        }
    }
    ctx->pc = 0x28749Cu;
label_28749c:
    // 0x28749c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x28749cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2874a0: 0x8c82a320  lw          $v0, -0x5CE0($a0)
    ctx->pc = 0x2874a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x66A320u));
    // 0x2874a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2874A4u;
    {
        const bool branch_taken_0x2874a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2874A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874A4u;
        // 0x2874a8: 0x2483a320  addiu       $v1, $a0, -0x5CE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874a4) {
            ctx->pc = 0x2874B0u;
            goto label_2874b0;
        }
    }
    ctx->pc = 0x2874ACu;
    // 0x2874ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2874acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2874b0:
    // 0x2874b0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2874b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2874b4: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x2874b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2874b8: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x2874b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x2874bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2874bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2874c0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2874C0u;
    SET_GPR_U32(ctx, 31, 0x2874C8u);
    ctx->pc = 0x2874C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2874C0u;
    // 0x2874c4: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2874C0u, 0x2874C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2874C8u;
label_2874c8:
    // 0x2874c8: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x2874c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2874cc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2874CCu;
    SET_GPR_U32(ctx, 31, 0x2874D4u);
    ctx->pc = 0x2874D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2874CCu;
    // 0x2874d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2874CCu, 0x2874D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2874D4u;
label_2874d4:
    // 0x2874d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2874d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2874d8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2874D8u;
    SET_GPR_U32(ctx, 31, 0x2874E0u);
    ctx->pc = 0x2874DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2874D8u;
    // 0x2874dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2874D8u, 0x2874E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2874E0u;
label_2874e0:
    // 0x2874e0: 0xdfb00250  ld          $s0, 0x250($sp)
    ctx->pc = 0x2874e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2874e4: 0xdfb10258  ld          $s1, 0x258($sp)
    ctx->pc = 0x2874e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2874e8: 0xdfb20260  ld          $s2, 0x260($sp)
    ctx->pc = 0x2874e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2874ec: 0xdfb30268  ld          $s3, 0x268($sp)
    ctx->pc = 0x2874ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x2874f0: 0xdfb40270  ld          $s4, 0x270($sp)
    ctx->pc = 0x2874f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2874f4: 0xdfb50278  ld          $s5, 0x278($sp)
    ctx->pc = 0x2874f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x2874f8: 0xdfb60280  ld          $s6, 0x280($sp)
    ctx->pc = 0x2874f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2874fc: 0xdfb70288  ld          $s7, 0x288($sp)
    ctx->pc = 0x2874fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x287500: 0xdfbe0290  ld          $fp, 0x290($sp)
    ctx->pc = 0x287500u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x287504: 0xdfbf0298  ld          $ra, 0x298($sp)
    ctx->pc = 0x287504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x287508: 0xc7b602b0  lwc1        $f22, 0x2B0($sp)
    ctx->pc = 0x287508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28750c: 0xc7b502a8  lwc1        $f21, 0x2A8($sp)
    ctx->pc = 0x28750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x287510: 0xc7b402a0  lwc1        $f20, 0x2A0($sp)
    ctx->pc = 0x287510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x287514: 0x3e00008  jr          $ra
    ctx->pc = 0x287514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287514u;
        // 0x287518: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28751Cu;
    // 0x28751c: 0x0  nop
    ctx->pc = 0x28751cu;
    // NOP
    ctx->pc = 0x287520u;
}
