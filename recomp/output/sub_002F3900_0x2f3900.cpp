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

// Function: sub_002F3900
// Address: 0x2f3900 - 0x2f3aa0
void sub_002F3900_0x2f3900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3900_0x2f3900");
#endif

    switch (ctx->pc) {
        case 0x2f3960u: goto label_2f3960;
        case 0x2f397cu: goto label_2f397c;
        case 0x2f398cu: goto label_2f398c;
        case 0x2f3994u: goto label_2f3994;
        case 0x2f39a8u: goto label_2f39a8;
        case 0x2f39ccu: goto label_2f39cc;
        case 0x2f39e4u: goto label_2f39e4;
        case 0x2f39f4u: goto label_2f39f4;
        default: break;
    }

    ctx->pc = 0x2f3900u;

    // 0x2f3900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f3900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f3904: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f3904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f3908: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2f3908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2f390c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2f390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2f3910: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f3910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3914: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2f3914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2f3918: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f3918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f391c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f3920: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2f3920u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3924: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2f3924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2f3928: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f3928u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f392c: 0x9043b838  lbu         $v1, -0x47C8($v0)
    ctx->pc = 0x2f392cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB838u));
    // 0x2f3930: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2f3930u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2f3934: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2f3934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2f3938: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2f3938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2f393c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2f393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2f3940: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2f3940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2f3944: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2F3944u;
    {
        const bool branch_taken_0x2f3944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3944u;
        // 0x2f3948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3944) {
            ctx->pc = 0x2F3A70u;
            goto label_2f3a70;
        }
    }
    ctx->pc = 0x2F394Cu;
    // 0x2f394c: 0x92620fb8  lbu         $v0, 0xFB8($s3)
    ctx->pc = 0x2f394cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4024)));
    // 0x2f3950: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F3950u;
    {
        const bool branch_taken_0x2f3950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3950u;
        // 0x2f3954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3950) {
            ctx->pc = 0x2F3A70u;
            goto label_2f3a70;
        }
    }
    ctx->pc = 0x2F3958u;
    // 0x2f3958: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F3958u;
    SET_GPR_U32(ctx, 31, 0x2F3960u);
    ctx->pc = 0x2F395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3958u;
    // 0x2f395c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F3958u, 0x2F3960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3960u;
label_2f3960:
    // 0x2f3960: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x2f3960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2f3964: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x2f3964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2f3968: 0x8c620220  lw          $v0, 0x220($v1)
    ctx->pc = 0x2f3968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x2f396c: 0x10440040  beq         $v0, $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2F396Cu;
    {
        const bool branch_taken_0x2f396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F396Cu;
        // 0x2f3970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f396c) {
            ctx->pc = 0x2F3A70u;
            goto label_2f3a70;
        }
    }
    ctx->pc = 0x2F3974u;
    // 0x2f3974: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F3974u;
    SET_GPR_U32(ctx, 31, 0x2F397Cu);
    ctx->pc = 0x2F3978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3974u;
    // 0x2f3978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F3974u, 0x2F397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F397Cu;
label_2f397c:
    // 0x2f397c: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x2f397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x2f3980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f3980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3984: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F3984u;
    SET_GPR_U32(ctx, 31, 0x2F398Cu);
    ctx->pc = 0x2F3988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3984u;
    // 0x2f3988: 0x8c740000  lw          $s4, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F3984u, 0x2F398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F398Cu;
label_2f398c:
    // 0x2f398c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F398Cu;
    SET_GPR_U32(ctx, 31, 0x2F3994u);
    ctx->pc = 0x2F3990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F398Cu;
    // 0x2f3990: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F398Cu, 0x2F3994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3994u;
label_2f3994:
    // 0x2f3994: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f3994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f399c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f399cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f39a0: 0xc0bcd58  jal         func_2F3560
    ctx->pc = 0x2F39A0u;
    SET_GPR_U32(ctx, 31, 0x2F39A8u);
    ctx->pc = 0x2F39A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39A0u;
    // 0x2f39a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F39A0u, 0x2F39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39A8u;
label_2f39a8:
    // 0x2f39a8: 0x8e70036c  lw          $s0, 0x36C($s3)
    ctx->pc = 0x2f39a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 876)));
    // 0x2f39ac: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2f39acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2f39b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f39b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f39b4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2f39b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2f39b8: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2f39b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2f39bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f39bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f39c0: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x2f39c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2f39c4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2F39C4u;
    SET_GPR_U32(ctx, 31, 0x2F39CCu);
    ctx->pc = 0x2F39C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39C4u;
    // 0x2f39c8: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F39C4u, 0x2F39CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39CCu;
label_2f39cc:
    // 0x2f39cc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2f39ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f39d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f39d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f39d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f39d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f39d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f39d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f39dc: 0xc0bcd58  jal         func_2F3560
    ctx->pc = 0x2F39DCu;
    SET_GPR_U32(ctx, 31, 0x2F39E4u);
    ctx->pc = 0x2F39E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39DCu;
    // 0x2f39e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F39DCu, 0x2F39E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39E4u;
label_2f39e4:
    // 0x2f39e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f39e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f39e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f39e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f39ec: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2F39ECu;
    SET_GPR_U32(ctx, 31, 0x2F39F4u);
    ctx->pc = 0x2F39F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39ECu;
    // 0x2f39f0: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F39ECu, 0x2F39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39F4u;
label_2f39f4:
    // 0x2f39f4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f39f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f39f8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2f39f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f39fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f39fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f3a00: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f3a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3a04: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2f3a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3a08: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2f3a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3a0c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2f3a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3a10: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x2f3a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3a14: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f3a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f3a18: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2f3a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2f3a1c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2f3a1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2f3a20: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3A20u;
    {
        const bool branch_taken_0x2f3a20 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A20u;
        // 0x2f3a24: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a20) {
            ctx->pc = 0x2F3A30u;
            goto label_2f3a30;
        }
    }
    ctx->pc = 0x2F3A28u;
    // 0x2f3a28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3A28u;
    {
        const bool branch_taken_0x2f3a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A28u;
        // 0x2f3a2c: 0xc6800060  lwc1        $f0, 0x60($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a28) {
            ctx->pc = 0x2F3A34u;
            goto label_2f3a34;
        }
    }
    ctx->pc = 0x2F3A30u;
label_2f3a30:
    // 0x2f3a30: 0xc6800064  lwc1        $f0, 0x64($s4)
    ctx->pc = 0x2f3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3a34:
    // 0x2f3a34: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2f3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f3a38: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2f3a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3a3c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2f3a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3a40: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2f3a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f3a44: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f3a44u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2f3a48: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f3a48u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2f3a4c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f3a4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2f3a50: 0x46010044  c1          0x10044
    ctx->pc = 0x2f3a50u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f3a54: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2f3a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2f3a58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f3a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3a5c: 0x0  nop
    ctx->pc = 0x2f3a5cu;
    // NOP
    // 0x2f3a60: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3A60u;
    {
        const bool branch_taken_0x2f3a60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A60u;
        // 0x2f3a64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a60) {
            ctx->pc = 0x2F3A70u;
            goto label_2f3a70;
        }
    }
    ctx->pc = 0x2F3A68u;
    // 0x2f3a68: 0xa2c0b838  sb          $zero, -0x47C8($s6)
    ctx->pc = 0x2f3a68u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294948920), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3a6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f3a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a70:
    // 0x2f3a70: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2f3a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3a74: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2f3a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f3a78: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2f3a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3a7c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2f3a7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f3a80: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2f3a80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f3a84: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2f3a84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2f3a88: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f3a88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f3a8c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2f3a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f3a90: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2f3a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f3a94: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A94u;
        // 0x2f3a98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3A9Cu;
    // 0x2f3a9c: 0x0  nop
    ctx->pc = 0x2f3a9cu;
    // NOP
    ctx->pc = 0x2f3aa0u;
}
