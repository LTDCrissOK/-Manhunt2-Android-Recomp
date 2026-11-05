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

// Function: sub_0023E988
// Address: 0x23e988 - 0x23eb88
void sub_0023E988_0x23e988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E988_0x23e988");
#endif

    switch (ctx->pc) {
        case 0x23e9bcu: goto label_23e9bc;
        case 0x23e9ccu: goto label_23e9cc;
        case 0x23e9dcu: goto label_23e9dc;
        case 0x23e9ecu: goto label_23e9ec;
        case 0x23e9fcu: goto label_23e9fc;
        case 0x23ea0cu: goto label_23ea0c;
        case 0x23ea34u: goto label_23ea34;
        case 0x23ea40u: goto label_23ea40;
        case 0x23ea48u: goto label_23ea48;
        case 0x23eae0u: goto label_23eae0;
        case 0x23eb20u: goto label_23eb20;
        case 0x23eb3cu: goto label_23eb3c;
        default: break;
    }

    ctx->pc = 0x23e988u;

    // 0x23e988: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23e988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23e98c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x23e98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x23e990: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x23e990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x23e994: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23e994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e998: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x23e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x23e99c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23e99cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9a0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x23e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x23e9a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23e9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9a8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x23e9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x23e9ac: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x23e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x23e9b0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x23e9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x23e9b4: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23E9B4u;
    SET_GPR_U32(ctx, 31, 0x23E9BCu);
    ctx->pc = 0x23E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9B4u;
    // 0x23e9b8: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x23E9B4u, 0x23E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9BCu;
label_23e9bc:
    // 0x23e9bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23e9bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9c4: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23E9C4u;
    SET_GPR_U32(ctx, 31, 0x23E9CCu);
    ctx->pc = 0x23E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9C4u;
    // 0x23e9c8: 0x24050436  addiu       $a1, $zero, 0x436 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1078));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x23E9C4u, 0x23E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9CCu;
label_23e9cc:
    // 0x23e9cc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E9CCu;
    {
        const bool branch_taken_0x23e9cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9CCu;
        // 0x23e9d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9cc) {
            ctx->pc = 0x23E9F4u;
            goto label_23e9f4;
        }
    }
    ctx->pc = 0x23E9D4u;
    // 0x23e9d4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x23E9D4u;
    SET_GPR_U32(ctx, 31, 0x23E9DCu);
    ctx->pc = 0x23E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9D4u;
    // 0x23e9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x23E9D4u, 0x23E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9DCu;
label_23e9dc:
    // 0x23e9dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23E9DCu;
    {
        const bool branch_taken_0x23e9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9DCu;
        // 0x23e9e0: 0x26500080  addiu       $s0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9dc) {
            ctx->pc = 0x23EA10u;
            goto label_23ea10;
        }
    }
    ctx->pc = 0x23E9E4u;
    // 0x23e9e4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x23E9E4u;
    SET_GPR_U32(ctx, 31, 0x23E9ECu);
    ctx->pc = 0x23E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9E4u;
    // 0x23e9e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x23E9E4u, 0x23E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9ECu;
label_23e9ec:
    // 0x23e9ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23E9ECu;
    {
        const bool branch_taken_0x23e9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9ECu;
        // 0x23e9f0: 0x26500080  addiu       $s0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9ec) {
            ctx->pc = 0x23EA10u;
            goto label_23ea10;
        }
    }
    ctx->pc = 0x23E9F4u;
label_23e9f4:
    // 0x23e9f4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x23E9F4u;
    SET_GPR_U32(ctx, 31, 0x23E9FCu);
    ctx->pc = 0x23E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9F4u;
    // 0x23e9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x23E9F4u, 0x23E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9FCu;
label_23e9fc:
    // 0x23e9fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E9FCu;
    {
        const bool branch_taken_0x23e9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9FCu;
        // 0x23ea00: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9fc) {
            ctx->pc = 0x23EA10u;
            goto label_23ea10;
        }
    }
    ctx->pc = 0x23EA04u;
    // 0x23ea04: 0xc0c4900  jal         func_312400
    ctx->pc = 0x23EA04u;
    SET_GPR_U32(ctx, 31, 0x23EA0Cu);
    ctx->pc = 0x23EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA04u;
    // 0x23ea08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x23EA04u, 0x23EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA0Cu;
label_23ea0c:
    // 0x23ea0c: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x23ea0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_23ea10:
    // 0x23ea10: 0x8e6204d0  lw          $v0, 0x4D0($s3)
    ctx->pc = 0x23ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1232)));
    // 0x23ea14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ea18: 0x244204bc  addiu       $v0, $v0, 0x4BC
    ctx->pc = 0x23ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1212));
    // 0x23ea1c: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x23ea1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23ea20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23ea24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23EA24u;
    {
        const bool branch_taken_0x23ea24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ea24) {
            ctx->pc = 0x23EA38u;
            goto label_23ea38;
        }
    }
    ctx->pc = 0x23EA2Cu;
    // 0x23ea2c: 0xc0b0f1a  jal         func_2C3C68
    ctx->pc = 0x23EA2Cu;
    SET_GPR_U32(ctx, 31, 0x23EA34u);
    ctx->pc = 0x2C3C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C68u, 0x23EA2Cu, 0x23EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA34u;
label_23ea34:
    // 0x23ea34: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x23ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_23ea38:
    // 0x23ea38: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x23EA38u;
    SET_GPR_U32(ctx, 31, 0x23EA40u);
    ctx->pc = 0x23EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA38u;
    // 0x23ea3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x23EA38u, 0x23EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA40u;
label_23ea40:
    // 0x23ea40: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x23EA40u;
    SET_GPR_U32(ctx, 31, 0x23EA48u);
    ctx->pc = 0x23EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA40u;
    // 0x23ea44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x23EA40u, 0x23EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA48u;
label_23ea48:
    // 0x23ea48: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x23ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ea4c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x23ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x23ea50: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23ea50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ea54: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x23ea54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23ea58: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x23ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ea5c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x23ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x23ea60: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x23ea60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x23ea64: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x23ea64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x23ea68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23ea68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23ea6c: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x23ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x23ea70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23ea70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23ea74: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x23ea74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x23ea78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23ea78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x23ea7c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x23ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23ea80: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x23ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x23ea84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ea88: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x23ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x23ea8c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23ea8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ea90: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x23ea90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23ea94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ea98: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x23ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x23ea9c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23ea9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eaa0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x23eaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23eaa4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x23EAA4u;
    {
        const bool branch_taken_0x23eaa4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAA4u;
        // 0x23eaa8: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eaa4) {
            ctx->pc = 0x23EAC0u;
            goto label_23eac0;
        }
    }
    ctx->pc = 0x23EAACu;
    // 0x23eaac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23eab0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x23eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x23eab4: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x23eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    // 0x23eab8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23EAB8u;
    {
        const bool branch_taken_0x23eab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAB8u;
        // 0x23eabc: 0x24a551b8  addiu       $a1, $a1, 0x51B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eab8) {
            ctx->pc = 0x23EAD0u;
            goto label_23ead0;
        }
    }
    ctx->pc = 0x23EAC0u;
label_23eac0:
    // 0x23eac0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23eac4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x23eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x23eac8: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x23eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    // 0x23eacc: 0x24a551c0  addiu       $a1, $a1, 0x51C0
    ctx->pc = 0x23eaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20928));
label_23ead0:
    // 0x23ead0: 0x26065b60  addiu       $a2, $s0, 0x5B60
    ctx->pc = 0x23ead0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 23392));
    // 0x23ead4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x23ead4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ead8: 0xc0b0a34  jal         func_2C28D0
    ctx->pc = 0x23EAD8u;
    SET_GPR_U32(ctx, 31, 0x23EAE0u);
    ctx->pc = 0x23EADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EAD8u;
    // 0x23eadc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28D0u, 0x23EAD8u, 0x23EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EAE0u;
label_23eae0:
    // 0x23eae0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x23eae4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23eae8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23EAE8u;
    {
        const bool branch_taken_0x23eae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAE8u;
        // 0x23eaec: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eae8) {
            ctx->pc = 0x23EB64u;
            goto label_23eb64;
        }
    }
    ctx->pc = 0x23EAF0u;
    // 0x23eaf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23eaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23eaf4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23eaf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23eaf8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x23eaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23eafc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23eafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23eb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x23eb04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x23eb08: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x23eb08u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x23eb0c: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x23eb0cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x23eb10: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x23eb10u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x23eb14: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x23eb14u;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
    // 0x23eb18: 0xc0b11c6  jal         func_2C4718
    ctx->pc = 0x23EB18u;
    SET_GPR_U32(ctx, 31, 0x23EB20u);
    ctx->pc = 0x23EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB18u;
    // 0x23eb1c: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4718u, 0x23EB18u, 0x23EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB20u;
label_23eb20:
    // 0x23eb20: 0x26455b60  addiu       $a1, $s2, 0x5B60
    ctx->pc = 0x23eb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 23392));
    // 0x23eb24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23eb28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23eb28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23eb2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23eb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23eb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb34: 0xc0b0f28  jal         func_2C3CA0
    ctx->pc = 0x23EB34u;
    SET_GPR_U32(ctx, 31, 0x23EB3Cu);
    ctx->pc = 0x23EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB34u;
    // 0x23eb38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3CA0u, 0x23EB34u, 0x23EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB3Cu;
label_23eb3c:
    // 0x23eb3c: 0xde6204d0  ld          $v0, 0x4D0($s3)
    ctx->pc = 0x23eb3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 1232)));
    // 0x23eb40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23eb44: 0x64440001  daddiu      $a0, $v0, 0x1
    ctx->pc = 0x23eb44u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x23eb48: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x23eb48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23eb4c: 0x64420004  daddiu      $v0, $v0, 0x4
    ctx->pc = 0x23eb4cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4);
    // 0x23eb50: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x23eb50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x23eb54: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x23eb54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x23eb58: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x23eb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x23eb5c: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x23eb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x23eb60: 0xfe6404d0  sd          $a0, 0x4D0($s3)
    ctx->pc = 0x23eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1232), GPR_U64(ctx, 4));
label_23eb64:
    // 0x23eb64: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x23eb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23eb68: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x23eb68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23eb6c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x23eb6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23eb70: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x23eb70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23eb74: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x23eb74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23eb78: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x23eb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23eb7c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x23eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23eb80: 0x3e00008  jr          $ra
    ctx->pc = 0x23EB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB80u;
        // 0x23eb84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EB88u;
}
