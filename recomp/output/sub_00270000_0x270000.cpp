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

// Function: sub_00270000
// Address: 0x270000 - 0x2701f0
void sub_00270000_0x270000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270000_0x270000");
#endif

    switch (ctx->pc) {
        case 0x27007cu: goto label_27007c;
        case 0x270088u: goto label_270088;
        case 0x2700c8u: goto label_2700c8;
        case 0x2700d8u: goto label_2700d8;
        case 0x2700f8u: goto label_2700f8;
        case 0x270108u: goto label_270108;
        case 0x270160u: goto label_270160;
        case 0x270170u: goto label_270170;
        case 0x2701c4u: goto label_2701c4;
        case 0x2701ccu: goto label_2701cc;
        case 0x2701d4u: goto label_2701d4;
        default: break;
    }

    ctx->pc = 0x270000u;

    // 0x270000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x270004: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x270004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x270008: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x270008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27000c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27000cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270010: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x270010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x270014: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x270014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x270018: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x270018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27001c: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x27001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x270020: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x270020u;
    {
        const bool branch_taken_0x270020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270020) {
            ctx->pc = 0x2701CCu;
            goto label_2701cc;
        }
    }
    ctx->pc = 0x270028u;
    // 0x270028: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x270028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x27002c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x27002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x270030: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x270030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270034: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x270034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270038: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x270038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x27003c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x27003cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270040: 0xf8a10040  sqc2        $vf1, 0x40($a1)
    ctx->pc = 0x270040u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270044: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x270044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x270048: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x270048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27004c: 0xf8a10050  sqc2        $vf1, 0x50($a1)
    ctx->pc = 0x27004cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270050: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x270050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x270054: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x270054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270058: 0xf8a10060  sqc2        $vf1, 0x60($a1)
    ctx->pc = 0x270058u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27005c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x27005cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x270060: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x270060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x270064: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x270064u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270068: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x270068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x27006c: 0x8e25024c  lw          $a1, 0x24C($s1)
    ctx->pc = 0x27006cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x270070: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x270070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270074: 0xc0b160a  jal         func_2C5828
    ctx->pc = 0x270074u;
    SET_GPR_U32(ctx, 31, 0x27007Cu);
    ctx->pc = 0x270078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270074u;
    // 0x270078: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x270074u, 0x27007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27007Cu;
label_27007c:
    // 0x27007c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x27007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x270080: 0xc0c48da  jal         func_312368
    ctx->pc = 0x270080u;
    SET_GPR_U32(ctx, 31, 0x270088u);
    ctx->pc = 0x270084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270080u;
    // 0x270084: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x270080u, 0x270088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270088u;
label_270088:
    // 0x270088: 0x8e3200b8  lw          $s2, 0xB8($s1)
    ctx->pc = 0x270088u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x27008c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27008cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270090: 0xc64001b0  lwc1        $f0, 0x1B0($s2)
    ctx->pc = 0x270090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270094: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x270094u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270098: 0x0  nop
    ctx->pc = 0x270098u;
    // NOP
    // 0x27009c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x27009Cu;
    {
        const bool branch_taken_0x27009c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27009c) {
            ctx->pc = 0x2700A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27009Cu;
            // 0x2700a0: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2700BCu;
            goto label_2700bc;
        }
    }
    ctx->pc = 0x2700A4u;
    // 0x2700a4: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x2700a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700a8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2700a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2700ac: 0x0  nop
    ctx->pc = 0x2700acu;
    // NOP
    // 0x2700b0: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x2700B0u;
    {
        const bool branch_taken_0x2700b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2700b0) {
            ctx->pc = 0x2701BCu;
            goto label_2701bc;
        }
    }
    ctx->pc = 0x2700B8u;
    // 0x2700b8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2700b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2700bc:
    // 0x2700bc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2700bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2700c0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2700C0u;
    SET_GPR_U32(ctx, 31, 0x2700C8u);
    ctx->pc = 0x2700C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2700C0u;
    // 0x2700c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2700C0u, 0x2700C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700C8u;
label_2700c8:
    // 0x2700c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2700C8u;
    {
        const bool branch_taken_0x2700c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700C8u;
        // 0x2700cc: 0x260300b0  addiu       $v1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700c8) {
            ctx->pc = 0x2700DCu;
            goto label_2700dc;
        }
    }
    ctx->pc = 0x2700D0u;
    // 0x2700d0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2700D0u;
    SET_GPR_U32(ctx, 31, 0x2700D8u);
    ctx->pc = 0x2700D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2700D0u;
    // 0x2700d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2700D0u, 0x2700D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700D8u;
label_2700d8:
    // 0x2700d8: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2700d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2700dc:
    // 0x2700dc: 0x26330230  addiu       $s3, $s1, 0x230
    ctx->pc = 0x2700dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x2700e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2700e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2700e4: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x2700e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2700e8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2700e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2700ec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2700ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2700f0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2700F0u;
    SET_GPR_U32(ctx, 31, 0x2700F8u);
    ctx->pc = 0x2700F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2700F0u;
    // 0x2700f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2700F0u, 0x2700F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700F8u;
label_2700f8:
    // 0x2700f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2700F8u;
    {
        const bool branch_taken_0x2700f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700F8u;
        // 0x2700fc: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700f8) {
            ctx->pc = 0x27010Cu;
            goto label_27010c;
        }
    }
    ctx->pc = 0x270100u;
    // 0x270100: 0xc0c4900  jal         func_312400
    ctx->pc = 0x270100u;
    SET_GPR_U32(ctx, 31, 0x270108u);
    ctx->pc = 0x270104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270100u;
    // 0x270104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x270100u, 0x270108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270108u;
label_270108:
    // 0x270108: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x270108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_27010c:
    // 0x27010c: 0xc64001b0  lwc1        $f0, 0x1B0($s2)
    ctx->pc = 0x27010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270110: 0xc60300a0  lwc1        $f3, 0xA0($s0)
    ctx->pc = 0x270110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270114: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x270114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270118: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x270118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27011c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x27011cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x270120: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x270120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x270124: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x270124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x270128: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x270128u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27012c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27012cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x270130: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x270130u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x270134: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x270134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x270138: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x270138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27013c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x27013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x270140: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x270140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x270144: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x270144u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270148: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x270148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x27014c: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x27014cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270150: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x270150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x270154: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x270154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270158: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x270158u;
    SET_GPR_U32(ctx, 31, 0x270160u);
    ctx->pc = 0x27015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270158u;
    // 0x27015c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x270158u, 0x270160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270160u;
label_270160:
    // 0x270160: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270160u;
    {
        const bool branch_taken_0x270160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270160u;
        // 0x270164: 0x26020090  addiu       $v0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270160) {
            ctx->pc = 0x270174u;
            goto label_270174;
        }
    }
    ctx->pc = 0x270168u;
    // 0x270168: 0xc0c4900  jal         func_312400
    ctx->pc = 0x270168u;
    SET_GPR_U32(ctx, 31, 0x270170u);
    ctx->pc = 0x27016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270168u;
    // 0x27016c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x270168u, 0x270170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270170u;
label_270170:
    // 0x270170: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x270170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_270174:
    // 0x270174: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x270174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270178: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x270178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27017c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x27017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270180: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x270180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270184: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x270184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x270188: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x270188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27018c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x27018cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x270190: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x270190u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x270194: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x270194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x270198: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x270198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27019c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x27019cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2701a0: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2701a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2701a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2701a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2701a8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2701a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2701ac: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2701acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2701b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2701b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2701b4: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x2701b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2701b8: 0xae330224  sw          $s3, 0x224($s1)
    ctx->pc = 0x2701b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 19));
label_2701bc:
    // 0x2701bc: 0xc0843ea  jal         func_210FA8
    ctx->pc = 0x2701BCu;
    SET_GPR_U32(ctx, 31, 0x2701C4u);
    ctx->pc = 0x2701C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2701BCu;
    // 0x2701c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FA8u, 0x2701BCu, 0x2701C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701C4u;
label_2701c4:
    // 0x2701c4: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2701C4u;
    SET_GPR_U32(ctx, 31, 0x2701CCu);
    ctx->pc = 0x2701C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2701C4u;
    // 0x2701c8: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2701C4u, 0x2701CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701CCu;
label_2701cc:
    // 0x2701cc: 0xc084172  jal         func_2105C8
    ctx->pc = 0x2701CCu;
    SET_GPR_U32(ctx, 31, 0x2701D4u);
    ctx->pc = 0x2701D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2701CCu;
    // 0x2701d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C8u, 0x2701CCu, 0x2701D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701D4u;
label_2701d4:
    // 0x2701d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2701d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2701d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2701d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2701dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2701dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2701e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2701e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2701e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2701e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2701e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2701E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2701ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701E8u;
        // 0x2701ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2701E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2701F0u;
}
