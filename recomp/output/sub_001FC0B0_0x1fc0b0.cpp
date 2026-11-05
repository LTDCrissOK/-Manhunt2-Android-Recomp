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

// Function: sub_001FC0B0
// Address: 0x1fc0b0 - 0x1fc290
void sub_001FC0B0_0x1fc0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC0B0_0x1fc0b0");
#endif

    switch (ctx->pc) {
        case 0x1fc118u: goto label_1fc118;
        case 0x1fc140u: goto label_1fc140;
        case 0x1fc154u: goto label_1fc154;
        case 0x1fc188u: goto label_1fc188;
        case 0x1fc1d8u: goto label_1fc1d8;
        case 0x1fc21cu: goto label_1fc21c;
        case 0x1fc25cu: goto label_1fc25c;
        default: break;
    }

    ctx->pc = 0x1fc0b0u;

    // 0x1fc0b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fc0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1fc0b4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1fc0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1fc0b8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1fc0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1fc0bc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1fc0bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc0c0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1fc0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1fc0c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fc0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc0c8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1fc0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1fc0cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fc0ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc0d0: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1fc0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1fc0d4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1fc0d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc0d8: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1fc0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1fc0dc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1fc0dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc0e0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1fc0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1fc0e4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1fc0e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc0e8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1fc0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1fc0ec: 0x2ac20009  slti        $v0, $s6, 0x9
    ctx->pc = 0x1fc0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1fc0f0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1fc0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1fc0f4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FC0F4u;
    {
        const bool branch_taken_0x1fc0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0F4u;
        // 0x1fc0f8: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0f4) {
            ctx->pc = 0x1FC1C0u;
            goto label_1fc1c0;
        }
    }
    ctx->pc = 0x1FC0FCu;
    // 0x1fc0fc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fc0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1fc100: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1fc100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc104: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1fc104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc108: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fc108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc10c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fc10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc110: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1FC110u;
    SET_GPR_U32(ctx, 31, 0x1FC118u);
    ctx->pc = 0x1FC114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC110u;
    // 0x1fc114: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1FC110u, 0x1FC118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC118u;
label_1fc118:
    // 0x1fc118: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x1fc118u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fc11c: 0x341080f0  ori         $s0, $zero, 0x80F0
    ctx->pc = 0x1fc11cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fc120: 0x93b10029  lbu         $s1, 0x29($sp)
    ctx->pc = 0x1fc120u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1fc124: 0x151827  nor         $v1, $zero, $s5
    ctx->pc = 0x1fc124u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 21)));
    // 0x1fc128: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1fc128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1fc12c: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x1fc12cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
    // 0x1fc130: 0x2a3880b  movn        $s1, $s5, $v1
    ctx->pc = 0x1fc130u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 21));
    // 0x1fc134: 0x282280b  movn        $a1, $s4, $v0
    ctx->pc = 0x1fc134u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 20));
    // 0x1fc138: 0xc07edfc  jal         func_1FB7F0
    ctx->pc = 0x1FC138u;
    SET_GPR_U32(ctx, 31, 0x1FC140u);
    ctx->pc = 0x1FC13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC138u;
    // 0x1fc13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F0u, 0x1FC138u, 0x1FC140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC140u;
label_1fc140:
    // 0x1fc140: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1fc140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1fc144: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fc144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc14c: 0xc07ee06  jal         func_1FB818
    ctx->pc = 0x1FC14Cu;
    SET_GPR_U32(ctx, 31, 0x1FC154u);
    ctx->pc = 0x1FC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC14Cu;
    // 0x1fc150: 0x2a603  sra         $s4, $v0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB818u, 0x1FC14Cu, 0x1FC154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC154u;
label_1fc154:
    // 0x1fc154: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x1fc154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fc158: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc15c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1fc15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fc160: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fc160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc164: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1fc164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fc168: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1fc168u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc16c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1fc16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc174: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1fc174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1fc178: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1fc178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1fc17c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1fc17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1fc180: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1FC180u;
    SET_GPR_U32(ctx, 31, 0x1FC188u);
    ctx->pc = 0x1FC184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC180u;
    // 0x1fc184: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1FC180u, 0x1FC188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC188u;
label_1fc188:
    // 0x1fc188: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1fc188u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1fc18c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1fc18cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc190: 0x0  nop
    ctx->pc = 0x1fc190u;
    // NOP
    // 0x1fc194: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fc194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fc198: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1fc198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1fc19c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1fc19cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fc1a0: 0x0  nop
    ctx->pc = 0x1fc1a0u;
    // NOP
    // 0x1fc1a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC1A4u;
    {
        const bool branch_taken_0x1fc1a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1A4u;
        // 0x1fc1a8: 0x34028380  ori         $v0, $zero, 0x8380 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33664);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1a4) {
            ctx->pc = 0x1FC1C8u;
            goto label_1fc1c8;
        }
    }
    ctx->pc = 0x1FC1ACu;
    // 0x1fc1ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fc1b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fc1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc1b4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fc1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fc1b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC1B8u;
    {
        const bool branch_taken_0x1fc1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1B8u;
        // 0x1fc1bc: 0x34048388  ori         $a0, $zero, 0x8388 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33672);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1b8) {
            ctx->pc = 0x1FC1CCu;
            goto label_1fc1cc;
        }
    }
    ctx->pc = 0x1FC1C0u;
label_1fc1c0:
    // 0x1fc1c0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1FC1C0u;
    {
        const bool branch_taken_0x1fc1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1C0u;
        // 0x1fc1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1c0) {
            ctx->pc = 0x1FC25Cu;
            goto label_1fc25c;
        }
    }
    ctx->pc = 0x1FC1C8u;
label_1fc1c8:
    // 0x1fc1c8: 0x34048388  ori         $a0, $zero, 0x8388
    ctx->pc = 0x1fc1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33672);
label_1fc1cc:
    // 0x1fc1cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1fc1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1d0: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1FC1D0u;
    SET_GPR_U32(ctx, 31, 0x1FC1D8u);
    ctx->pc = 0x1FC1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC1D0u;
    // 0x1fc1d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1FC1D0u, 0x1FC1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC1D8u;
label_1fc1d8:
    // 0x1fc1d8: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1fc1d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc1dc: 0x340283a0  ori         $v0, $zero, 0x83A0
    ctx->pc = 0x1fc1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33696);
    // 0x1fc1e0: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1fc1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1fc1e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fc1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fc1e8: 0xae160390  sw          $s6, 0x390($s0)
    ctx->pc = 0x1fc1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 22));
    // 0x1fc1ec: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1fc1ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fc1f0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fc1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc1f4: 0x0  nop
    ctx->pc = 0x1fc1f4u;
    // NOP
    // 0x1fc1f8: 0x0  nop
    ctx->pc = 0x1fc1f8u;
    // NOP
    // 0x1fc1fc: 0x46140304  c1          0x140304
    ctx->pc = 0x1fc1fcu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fc200: 0xa21403b8  sb          $s4, 0x3B8($s0)
    ctx->pc = 0x1fc200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 952), (uint8_t)GPR_U32(ctx, 20));
    // 0x1fc204: 0xa61103ba  sh          $s1, 0x3BA($s0)
    ctx->pc = 0x1fc204u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 954), (uint16_t)GPR_U32(ctx, 17));
    // 0x1fc208: 0x340480f0  ori         $a0, $zero, 0x80F0
    ctx->pc = 0x1fc208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fc20c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1fc20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1fc210: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x1fc210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1fc214: 0xc07ee10  jal         func_1FB840
    ctx->pc = 0x1FC214u;
    SET_GPR_U32(ctx, 31, 0x1FC21Cu);
    ctx->pc = 0x1FC218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC214u;
    // 0x1fc218: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB840u, 0x1FC214u, 0x1FC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC21Cu;
label_1fc21c:
    // 0x1fc21c: 0x93a2002a  lbu         $v0, 0x2A($sp)
    ctx->pc = 0x1fc21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 42)));
    // 0x1fc220: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC220u;
    {
        const bool branch_taken_0x1fc220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC220u;
        // 0x1fc224: 0xe60003b4  swc1        $f0, 0x3B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc220) {
            ctx->pc = 0x1FC23Cu;
            goto label_1fc23c;
        }
    }
    ctx->pc = 0x1FC228u;
    // 0x1fc228: 0x34038380  ori         $v1, $zero, 0x8380
    ctx->pc = 0x1fc228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33664);
    // 0x1fc22c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1fc22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1fc230: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1fc230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc234: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC234u;
    {
        const bool branch_taken_0x1fc234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC234u;
        // 0x1fc238: 0x304200fd  andi        $v0, $v0, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc234) {
            ctx->pc = 0x1FC24Cu;
            goto label_1fc24c;
        }
    }
    ctx->pc = 0x1FC23Cu;
label_1fc23c:
    // 0x1fc23c: 0x34038380  ori         $v1, $zero, 0x8380
    ctx->pc = 0x1fc23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33664);
    // 0x1fc240: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1fc240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1fc244: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1fc244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc248: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fc248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1fc24c:
    // 0x1fc24c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1fc24cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fc250: 0x340480f0  ori         $a0, $zero, 0x80F0
    ctx->pc = 0x1fc250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fc254: 0xc07ed94  jal         func_1FB650
    ctx->pc = 0x1FC254u;
    SET_GPR_U32(ctx, 31, 0x1FC25Cu);
    ctx->pc = 0x1FC258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC254u;
    // 0x1fc258: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB650u, 0x1FC254u, 0x1FC25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC25Cu;
label_1fc25c:
    // 0x1fc25c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1fc25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc260: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1fc260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc264: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1fc264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fc268: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1fc268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fc26c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1fc26cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fc270: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1fc270u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc274: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1fc274u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc278: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1fc278u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fc27c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1fc27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fc280: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1fc280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fc284: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC284u;
        // 0x1fc288: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC28Cu;
    // 0x1fc28c: 0x0  nop
    ctx->pc = 0x1fc28cu;
    // NOP
    ctx->pc = 0x1fc290u;
}
