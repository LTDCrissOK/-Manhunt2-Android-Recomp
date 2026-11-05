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

// Function: sub_0017E450
// Address: 0x17e450 - 0x17e720
void sub_0017E450_0x17e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E450_0x17e450");
#endif

    switch (ctx->pc) {
        case 0x17e49cu: goto label_17e49c;
        case 0x17e4a8u: goto label_17e4a8;
        case 0x17e4c4u: goto label_17e4c4;
        case 0x17e500u: goto label_17e500;
        case 0x17e518u: goto label_17e518;
        case 0x17e530u: goto label_17e530;
        case 0x17e544u: goto label_17e544;
        case 0x17e550u: goto label_17e550;
        case 0x17e5b0u: goto label_17e5b0;
        case 0x17e5f0u: goto label_17e5f0;
        case 0x17e600u: goto label_17e600;
        case 0x17e648u: goto label_17e648;
        case 0x17e668u: goto label_17e668;
        case 0x17e674u: goto label_17e674;
        case 0x17e69cu: goto label_17e69c;
        case 0x17e6d0u: goto label_17e6d0;
        case 0x17e6dcu: goto label_17e6dc;
        default: break;
    }

    ctx->pc = 0x17e450u;

    // 0x17e450: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17e450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17e454: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x17e454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17e458: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x17e458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x17e45c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17e45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e460: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x17e460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17e464: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x17e464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17e468: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x17e468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x17e46c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x17e46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x17e470: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x17e470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x17e474: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x17e474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x17e478: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17e478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17e47c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x17e47cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x17e480: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x17e480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17e484: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x17e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x17e488: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x17E488u;
    {
        const bool branch_taken_0x17e488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E488u;
        // 0x17e48c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e488) {
            ctx->pc = 0x17E6E8u;
            goto label_17e6e8;
        }
    }
    ctx->pc = 0x17E490u;
    // 0x17e490: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e494: 0xc046002  jal         func_118008
    ctx->pc = 0x17E494u;
    SET_GPR_U32(ctx, 31, 0x17E49Cu);
    ctx->pc = 0x17E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E494u;
    // 0x17e498: 0x26360020  addiu       $s6, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x17E494u, 0x17E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E49Cu;
label_17e49c:
    // 0x17e49c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4a0: 0xc046086  jal         func_118218
    ctx->pc = 0x17E4A0u;
    SET_GPR_U32(ctx, 31, 0x17E4A8u);
    ctx->pc = 0x17E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4A0u;
    // 0x17e4a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x17E4A0u, 0x17E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4A8u;
label_17e4a8:
    // 0x17e4a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17e4a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4ac: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x17e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17e4b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17E4B0u;
    {
        const bool branch_taken_0x17e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4B0u;
        // 0x17e4b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4b0) {
            ctx->pc = 0x17E500u;
            goto label_17e500;
        }
    }
    ctx->pc = 0x17E4B8u;
    // 0x17e4b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4bc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17E4BCu;
    SET_GPR_U32(ctx, 31, 0x17E4C4u);
    ctx->pc = 0x17E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4BCu;
    // 0x17e4c0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17E4BCu, 0x17E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4C4u;
label_17e4c4:
    // 0x17e4c4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17e4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17e4c8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x17e4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17e4cc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17e4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17e4d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17e4d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17e4d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17e4d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17e4d8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x17e4d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17e4dc: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x17e4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x17e4e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e4e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e4e4: 0x0  nop
    ctx->pc = 0x17e4e4u;
    // NOP
    // 0x17e4e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17e4e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e4ec: 0x0  nop
    ctx->pc = 0x17e4ecu;
    // NOP
    // 0x17e4f0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x17E4F0u;
    {
        const bool branch_taken_0x17e4f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e4f0) {
            ctx->pc = 0x17E4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E4F0u;
            // 0x17e4f4: 0xae30001c  sw          $s0, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E504u;
            goto label_17e504;
        }
    }
    ctx->pc = 0x17E4F8u;
    // 0x17e4f8: 0xc05f5ee  jal         func_17D7B8
    ctx->pc = 0x17E4F8u;
    SET_GPR_U32(ctx, 31, 0x17E500u);
    ctx->pc = 0x17E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4F8u;
    // 0x17e4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7B8u, 0x17E4F8u, 0x17E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E500u;
label_17e500:
    // 0x17e500: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x17e500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
label_17e504:
    // 0x17e504: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x17e504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17e508: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x17e508u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17e50c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x17e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x17e510: 0xc0462ec  jal         func_118BB0
    ctx->pc = 0x17E510u;
    SET_GPR_U32(ctx, 31, 0x17E518u);
    ctx->pc = 0x17E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E510u;
    // 0x17e514: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BB0u, 0x17E510u, 0x17E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E518u;
label_17e518:
    // 0x17e518: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17e518u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e520: 0x56a20071  bnel        $s5, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x17E520u;
    {
        const bool branch_taken_0x17e520 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e520) {
            ctx->pc = 0x17E524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E520u;
            // 0x17e524: 0xae2000c8  sw          $zero, 0xC8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E6E8u;
            goto label_17e6e8;
        }
    }
    ctx->pc = 0x17E528u;
    // 0x17e528: 0xc0461b0  jal         func_1186C0
    ctx->pc = 0x17E528u;
    SET_GPR_U32(ctx, 31, 0x17E530u);
    ctx->pc = 0x17E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E528u;
    // 0x17e52c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186C0u, 0x17E528u, 0x17E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E530u;
label_17e530:
    // 0x17e530: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17e534: 0x1043006b  beq         $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x17E534u;
    {
        const bool branch_taken_0x17e534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x17E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E534u;
        // 0x17e538: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e534) {
            ctx->pc = 0x17E6E4u;
            goto label_17e6e4;
        }
    }
    ctx->pc = 0x17E53Cu;
    // 0x17e53c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17E53Cu;
    SET_GPR_U32(ctx, 31, 0x17E544u);
    ctx->pc = 0x17E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E53Cu;
    // 0x17e540: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17E53Cu, 0x17E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E544u;
label_17e544:
    // 0x17e544: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x17e544u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e548: 0xc046086  jal         func_118218
    ctx->pc = 0x17E548u;
    SET_GPR_U32(ctx, 31, 0x17E550u);
    ctx->pc = 0x17E54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E548u;
    // 0x17e54c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x17E548u, 0x17E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E550u;
label_17e550:
    // 0x17e550: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e554: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17e554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e558: 0x8e07bd50  lw          $a3, -0x42B0($s0)
    ctx->pc = 0x17e558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x17e55c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x17e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17e560: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x17e560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17e564: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17e564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17e568: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x17e568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e56c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x17e56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17e570: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x17e570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e574: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x17e574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17e578: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x17e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e57c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17e57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x17e580: 0x8ce20104  lw          $v0, 0x104($a3)
    ctx->pc = 0x17e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
    // 0x17e584: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17e584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e588: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x17e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e58c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x17e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x17e590: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x17e590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17e594: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17e594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e598: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17e598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17e59c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x17e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e5a0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x17e5a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17e5a4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x17e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e5a8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17E5A8u;
    SET_GPR_U32(ctx, 31, 0x17E5B0u);
    ctx->pc = 0x17E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E5A8u;
    // 0x17e5ac: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17E5A8u, 0x17E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5B0u;
label_17e5b0:
    // 0x17e5b0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x17e5b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e5b4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x17e5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17e5b8: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x17e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17e5bc: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x17e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17e5c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17e5c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17e5c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17e5c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17e5c8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x17e5c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17e5cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17e5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17e5d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e5d4: 0x0  nop
    ctx->pc = 0x17e5d4u;
    // NOP
    // 0x17e5d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17e5d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e5dc: 0x0  nop
    ctx->pc = 0x17e5dcu;
    // NOP
    // 0x17e5e0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x17E5E0u;
    {
        const bool branch_taken_0x17e5e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e5e0) {
            ctx->pc = 0x17E650u;
            goto label_17e650;
        }
    }
    ctx->pc = 0x17E5E8u;
    // 0x17e5e8: 0xc0bf6e6  jal         func_2FDB98
    ctx->pc = 0x17E5E8u;
    SET_GPR_U32(ctx, 31, 0x17E5F0u);
    ctx->pc = 0x17E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E5E8u;
    // 0x17e5ec: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB98u, 0x17E5E8u, 0x17E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5F0u;
label_17e5f0:
    // 0x17e5f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17E5F0u;
    {
        const bool branch_taken_0x17e5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5F0u;
        // 0x17e5f4: 0x8e05bd50  lw          $a1, -0x42B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5f0) {
            ctx->pc = 0x17E650u;
            goto label_17e650;
        }
    }
    ctx->pc = 0x17E5F8u;
    // 0x17e5f8: 0xc0bf744  jal         func_2FDD10
    ctx->pc = 0x17E5F8u;
    SET_GPR_U32(ctx, 31, 0x17E600u);
    ctx->pc = 0x17E5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E5F8u;
    // 0x17e5fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDD10u, 0x17E5F8u, 0x17E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E600u;
label_17e600:
    // 0x17e600: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x17e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17e604: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x17e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17e608: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x17e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17e60c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17e60cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17e610: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17e610u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17e614: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x17e614u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17e618: 0x46010044  c1          0x10044
    ctx->pc = 0x17e618u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x17e61c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e620: 0x0  nop
    ctx->pc = 0x17e620u;
    // NOP
    // 0x17e624: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17e624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e628: 0x0  nop
    ctx->pc = 0x17e628u;
    // NOP
    // 0x17e62c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x17E62Cu;
    {
        const bool branch_taken_0x17e62c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e62c) {
            ctx->pc = 0x17E650u;
            goto label_17e650;
        }
    }
    ctx->pc = 0x17E634u;
    // 0x17e634: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x17e634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17e638: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x17e638u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17e63c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17e63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e640: 0xc040d5c  jal         func_103570
    ctx->pc = 0x17E640u;
    SET_GPR_U32(ctx, 31, 0x17E648u);
    ctx->pc = 0x17E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E640u;
    // 0x17e644: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103570u, 0x17E640u, 0x17E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E648u;
label_17e648:
    // 0x17e648: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x17e648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x17e64c: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x17e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
label_17e650:
    // 0x17e650: 0x56e00025  bnel        $s7, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x17E650u;
    {
        const bool branch_taken_0x17e650 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e650) {
            ctx->pc = 0x17E654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E650u;
            // 0x17e654: 0xae2000c8  sw          $zero, 0xC8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E6E8u;
            goto label_17e6e8;
        }
    }
    ctx->pc = 0x17E658u;
    // 0x17e658: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17e658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17e65c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17e65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17e660: 0xc095368  jal         func_254DA0
    ctx->pc = 0x17E660u;
    SET_GPR_U32(ctx, 31, 0x17E668u);
    ctx->pc = 0x17E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E660u;
    // 0x17e664: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x17E660u, 0x17E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E668u;
label_17e668:
    // 0x17e668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e66c: 0xc0414a2  jal         func_105288
    ctx->pc = 0x17E66Cu;
    SET_GPR_U32(ctx, 31, 0x17E674u);
    ctx->pc = 0x17E670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E66Cu;
    // 0x17e670: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x17E66Cu, 0x17E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E674u;
label_17e674:
    // 0x17e674: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E674u;
    {
        const bool branch_taken_0x17e674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E674u;
        // 0x17e678: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e674) {
            ctx->pc = 0x17E68Cu;
            goto label_17e68c;
        }
    }
    ctx->pc = 0x17E67Cu;
    // 0x17e67c: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x17e67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
    // 0x17e680: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17e680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17e684: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17e684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17e688: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17e688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_17e68c:
    // 0x17e68c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x17e68cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x17e690: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x17e690u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x17e694: 0xc09c920  jal         func_272480
    ctx->pc = 0x17E694u;
    SET_GPR_U32(ctx, 31, 0x17E69Cu);
    ctx->pc = 0x17E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E694u;
    // 0x17e698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272480u, 0x17E694u, 0x17E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E69Cu;
label_17e69c:
    // 0x17e69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6a0: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E6A0u;
    {
        const bool branch_taken_0x17e6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e6a0) {
            ctx->pc = 0x17E6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E6A0u;
            // 0x17e6a4: 0xae2000c8  sw          $zero, 0xC8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E6E8u;
            goto label_17e6e8;
        }
    }
    ctx->pc = 0x17E6A8u;
    // 0x17e6a8: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x17e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x17e6ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e6b0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x17e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x17e6b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x17e6b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e6b8: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x17e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17e6bc: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x17e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x17e6c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17e6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e6c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6c8: 0xc0460c4  jal         func_118310
    ctx->pc = 0x17E6C8u;
    SET_GPR_U32(ctx, 31, 0x17E6D0u);
    ctx->pc = 0x17E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E6C8u;
    // 0x17e6cc: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x17E6C8u, 0x17E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E6D0u;
label_17e6d0:
    // 0x17e6d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6d4: 0xc046226  jal         func_118898
    ctx->pc = 0x17E6D4u;
    SET_GPR_U32(ctx, 31, 0x17E6DCu);
    ctx->pc = 0x17E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E6D4u;
    // 0x17e6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x17E6D4u, 0x17E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E6DCu;
label_17e6dc:
    // 0x17e6dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e6e0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x17e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_17e6e4:
    // 0x17e6e4: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x17e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_17e6e8:
    // 0x17e6e8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x17e6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e6ec: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x17e6ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17e6f0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x17e6f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e6f4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x17e6f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17e6f8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x17e6f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e6fc: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x17e6fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e700: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x17e700u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e704: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x17e704u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17e708: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17e708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17e70c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x17e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17e710: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x17e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e714: 0x3e00008  jr          $ra
    ctx->pc = 0x17E714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E714u;
        // 0x17e718: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E71Cu;
    // 0x17e71c: 0x0  nop
    ctx->pc = 0x17e71cu;
    // NOP
    ctx->pc = 0x17e720u;
}
