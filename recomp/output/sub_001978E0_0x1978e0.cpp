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

// Function: sub_001978E0
// Address: 0x1978e0 - 0x197b00
void sub_001978E0_0x1978e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001978E0_0x1978e0");
#endif

    switch (ctx->pc) {
        case 0x1978e0u: goto label_1978e0;
        case 0x1978e4u: goto label_1978e4;
        case 0x1978e8u: goto label_1978e8;
        case 0x1978ecu: goto label_1978ec;
        case 0x1978f0u: goto label_1978f0;
        case 0x1978f4u: goto label_1978f4;
        case 0x1978f8u: goto label_1978f8;
        case 0x1978fcu: goto label_1978fc;
        case 0x197900u: goto label_197900;
        case 0x197904u: goto label_197904;
        case 0x197908u: goto label_197908;
        case 0x19790cu: goto label_19790c;
        case 0x197910u: goto label_197910;
        case 0x197914u: goto label_197914;
        case 0x197918u: goto label_197918;
        case 0x19791cu: goto label_19791c;
        case 0x197920u: goto label_197920;
        case 0x197924u: goto label_197924;
        case 0x197928u: goto label_197928;
        case 0x19792cu: goto label_19792c;
        case 0x197930u: goto label_197930;
        case 0x197934u: goto label_197934;
        case 0x197938u: goto label_197938;
        case 0x19793cu: goto label_19793c;
        case 0x197940u: goto label_197940;
        case 0x197944u: goto label_197944;
        case 0x197948u: goto label_197948;
        case 0x19794cu: goto label_19794c;
        case 0x197950u: goto label_197950;
        case 0x197954u: goto label_197954;
        case 0x197958u: goto label_197958;
        case 0x19795cu: goto label_19795c;
        case 0x197960u: goto label_197960;
        case 0x197964u: goto label_197964;
        case 0x197968u: goto label_197968;
        case 0x19796cu: goto label_19796c;
        case 0x197970u: goto label_197970;
        case 0x197974u: goto label_197974;
        case 0x197978u: goto label_197978;
        case 0x19797cu: goto label_19797c;
        case 0x197980u: goto label_197980;
        case 0x197984u: goto label_197984;
        case 0x197988u: goto label_197988;
        case 0x19798cu: goto label_19798c;
        case 0x197990u: goto label_197990;
        case 0x197994u: goto label_197994;
        case 0x197998u: goto label_197998;
        case 0x19799cu: goto label_19799c;
        case 0x1979a0u: goto label_1979a0;
        case 0x1979a4u: goto label_1979a4;
        case 0x1979a8u: goto label_1979a8;
        case 0x1979acu: goto label_1979ac;
        case 0x1979b0u: goto label_1979b0;
        case 0x1979b4u: goto label_1979b4;
        case 0x1979b8u: goto label_1979b8;
        case 0x1979bcu: goto label_1979bc;
        case 0x1979c0u: goto label_1979c0;
        case 0x1979c4u: goto label_1979c4;
        case 0x1979c8u: goto label_1979c8;
        case 0x1979ccu: goto label_1979cc;
        case 0x1979d0u: goto label_1979d0;
        case 0x1979d4u: goto label_1979d4;
        case 0x1979d8u: goto label_1979d8;
        case 0x1979dcu: goto label_1979dc;
        case 0x1979e0u: goto label_1979e0;
        case 0x1979e4u: goto label_1979e4;
        case 0x1979e8u: goto label_1979e8;
        case 0x1979ecu: goto label_1979ec;
        case 0x1979f0u: goto label_1979f0;
        case 0x1979f4u: goto label_1979f4;
        case 0x1979f8u: goto label_1979f8;
        case 0x1979fcu: goto label_1979fc;
        case 0x197a00u: goto label_197a00;
        case 0x197a04u: goto label_197a04;
        case 0x197a08u: goto label_197a08;
        case 0x197a0cu: goto label_197a0c;
        case 0x197a10u: goto label_197a10;
        case 0x197a14u: goto label_197a14;
        case 0x197a18u: goto label_197a18;
        case 0x197a1cu: goto label_197a1c;
        case 0x197a20u: goto label_197a20;
        case 0x197a24u: goto label_197a24;
        case 0x197a28u: goto label_197a28;
        case 0x197a2cu: goto label_197a2c;
        case 0x197a30u: goto label_197a30;
        case 0x197a34u: goto label_197a34;
        case 0x197a38u: goto label_197a38;
        case 0x197a3cu: goto label_197a3c;
        case 0x197a40u: goto label_197a40;
        case 0x197a44u: goto label_197a44;
        case 0x197a48u: goto label_197a48;
        case 0x197a4cu: goto label_197a4c;
        case 0x197a50u: goto label_197a50;
        case 0x197a54u: goto label_197a54;
        case 0x197a58u: goto label_197a58;
        case 0x197a5cu: goto label_197a5c;
        case 0x197a60u: goto label_197a60;
        case 0x197a64u: goto label_197a64;
        case 0x197a68u: goto label_197a68;
        case 0x197a6cu: goto label_197a6c;
        case 0x197a70u: goto label_197a70;
        case 0x197a74u: goto label_197a74;
        case 0x197a78u: goto label_197a78;
        case 0x197a7cu: goto label_197a7c;
        case 0x197a80u: goto label_197a80;
        case 0x197a84u: goto label_197a84;
        case 0x197a88u: goto label_197a88;
        case 0x197a8cu: goto label_197a8c;
        case 0x197a90u: goto label_197a90;
        case 0x197a94u: goto label_197a94;
        case 0x197a98u: goto label_197a98;
        case 0x197a9cu: goto label_197a9c;
        case 0x197aa0u: goto label_197aa0;
        case 0x197aa4u: goto label_197aa4;
        case 0x197aa8u: goto label_197aa8;
        case 0x197aacu: goto label_197aac;
        case 0x197ab0u: goto label_197ab0;
        case 0x197ab4u: goto label_197ab4;
        case 0x197ab8u: goto label_197ab8;
        case 0x197abcu: goto label_197abc;
        case 0x197ac0u: goto label_197ac0;
        case 0x197ac4u: goto label_197ac4;
        case 0x197ac8u: goto label_197ac8;
        case 0x197accu: goto label_197acc;
        case 0x197ad0u: goto label_197ad0;
        case 0x197ad4u: goto label_197ad4;
        case 0x197ad8u: goto label_197ad8;
        case 0x197adcu: goto label_197adc;
        case 0x197ae0u: goto label_197ae0;
        case 0x197ae4u: goto label_197ae4;
        case 0x197ae8u: goto label_197ae8;
        case 0x197aecu: goto label_197aec;
        case 0x197af0u: goto label_197af0;
        case 0x197af4u: goto label_197af4;
        case 0x197af8u: goto label_197af8;
        case 0x197afcu: goto label_197afc;
        default: break;
    }

    ctx->pc = 0x1978e0u;

label_1978e0:
    // 0x1978e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1978e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1978e4:
    // 0x1978e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1978e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1978e8:
    // 0x1978e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1978e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1978ec:
    // 0x1978ec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1978ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1978f0:
    // 0x1978f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1978f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1978f4:
    // 0x1978f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1978f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1978f8:
    // 0x1978f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1978f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1978fc:
    // 0x1978fc: 0xc066078  jal         func_1981E0
label_197900:
    if (ctx->pc == 0x197900u) {
        ctx->pc = 0x197900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978FCu;
        // 0x197900: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x197904u;
        goto label_197904;
    }
    ctx->pc = 0x1978FCu;
    SET_GPR_U32(ctx, 31, 0x197904u);
    ctx->pc = 0x197900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978FCu;
    // 0x197900: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1981E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1981E0u, 0x1978FCu, 0x197904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197904u;
label_197904:
    // 0x197904: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_197908:
    if (ctx->pc == 0x197908u) {
        ctx->pc = 0x197908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197904u;
        // 0x197908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19790Cu;
        goto label_19790c;
    }
    ctx->pc = 0x197904u;
    {
        const bool branch_taken_0x197904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197904u;
        // 0x197908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197904) {
            ctx->pc = 0x19791Cu;
            goto label_19791c;
        }
    }
    ctx->pc = 0x19790Cu;
label_19790c:
    // 0x19790c: 0xc065f62  jal         func_197D88
label_197910:
    if (ctx->pc == 0x197910u) {
        ctx->pc = 0x197910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19790Cu;
        // 0x197910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197914u;
        goto label_197914;
    }
    ctx->pc = 0x19790Cu;
    SET_GPR_U32(ctx, 31, 0x197914u);
    ctx->pc = 0x197910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19790Cu;
    // 0x197910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197D88u, 0x19790Cu, 0x197914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197914u;
label_197914:
    // 0x197914: 0x10000076  b           . + 4 + (0x76 << 2)
label_197918:
    if (ctx->pc == 0x197918u) {
        ctx->pc = 0x197918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197914u;
        // 0x197918: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19791Cu;
        goto label_19791c;
    }
    ctx->pc = 0x197914u;
    {
        const bool branch_taken_0x197914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197914u;
        // 0x197918: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197914) {
            ctx->pc = 0x197AF0u;
            goto label_197af0;
        }
    }
    ctx->pc = 0x19791Cu;
label_19791c:
    // 0x19791c: 0xc061a12  jal         func_186848
label_197920:
    if (ctx->pc == 0x197920u) {
        ctx->pc = 0x197920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19791Cu;
        // 0x197920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197924u;
        goto label_197924;
    }
    ctx->pc = 0x19791Cu;
    SET_GPR_U32(ctx, 31, 0x197924u);
    ctx->pc = 0x197920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19791Cu;
    // 0x197920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19791Cu, 0x197924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197924u;
label_197924:
    // 0x197924: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x197924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_197928:
    // 0x197928: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x197928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_19792c:
    // 0x19792c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19792cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_197930:
    // 0x197930: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x197930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_197934:
    // 0x197934: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x197934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_197938:
    // 0x197938: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x197938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_19793c:
    // 0x19793c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197940:
    // 0x197940: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x197940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_197944:
    // 0x197944: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x197944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197948:
    // 0x197948: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x197948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19794c:
    // 0x19794c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19794cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_197950:
    // 0x197950: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x197950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_197954:
    // 0x197954: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x197954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_197958:
    // 0x197958: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x197958u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19795c:
    // 0x19795c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19795cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197960:
    // 0x197960: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x197960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197964:
    // 0x197964: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x197964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_197968:
    // 0x197968: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x197968u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_19796c:
    // 0x19796c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x19796cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_197970:
    // 0x197970: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x197970u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_197974:
    // 0x197974: 0x46140504  c1          0x140504
    ctx->pc = 0x197974u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_197978:
    // 0x197978: 0xc061a12  jal         func_186848
label_19797c:
    if (ctx->pc == 0x19797Cu) {
        ctx->pc = 0x19797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197978u;
        // 0x19797c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197980u;
        goto label_197980;
    }
    ctx->pc = 0x197978u;
    SET_GPR_U32(ctx, 31, 0x197980u);
    ctx->pc = 0x19797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197978u;
    // 0x19797c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197978u, 0x197980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197980u;
label_197980:
    // 0x197980: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x197980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_197984:
    // 0x197984: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_197988:
    if (ctx->pc == 0x197988u) {
        ctx->pc = 0x19798Cu;
        goto label_19798c;
    }
    ctx->pc = 0x197984u;
    {
        const bool branch_taken_0x197984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197984) {
            ctx->pc = 0x197A64u;
            goto label_197a64;
        }
    }
    ctx->pc = 0x19798Cu;
label_19798c:
    // 0x19798c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197990:
    // 0x197990: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x197990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197994:
    // 0x197994: 0x0  nop
    ctx->pc = 0x197994u;
    // NOP
label_197998:
    // 0x197998: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
label_19799c:
    if (ctx->pc == 0x19799Cu) {
        ctx->pc = 0x19799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197998u;
        // 0x19799c: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979A0u;
        goto label_1979a0;
    }
    ctx->pc = 0x197998u;
    {
        const bool branch_taken_0x197998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x197998) {
            ctx->pc = 0x19799Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197998u;
            // 0x19799c: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1979FCu;
            goto label_1979fc;
        }
    }
    ctx->pc = 0x1979A0u;
label_1979a0:
    // 0x1979a0: 0xc061a12  jal         func_186848
label_1979a4:
    if (ctx->pc == 0x1979A4u) {
        ctx->pc = 0x1979A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979A0u;
        // 0x1979a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979A8u;
        goto label_1979a8;
    }
    ctx->pc = 0x1979A0u;
    SET_GPR_U32(ctx, 31, 0x1979A8u);
    ctx->pc = 0x1979A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979A0u;
    // 0x1979a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1979A0u, 0x1979A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979A8u;
label_1979a8:
    // 0x1979a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1979a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1979ac:
    // 0x1979ac: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x1979acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1979b0:
    // 0x1979b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1979b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1979b4:
    // 0x1979b4: 0x0  nop
    ctx->pc = 0x1979b4u;
    // NOP
label_1979b8:
    // 0x1979b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1979bc:
    if (ctx->pc == 0x1979BCu) {
        ctx->pc = 0x1979BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979B8u;
        // 0x1979bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979C0u;
        goto label_1979c0;
    }
    ctx->pc = 0x1979B8u;
    {
        const bool branch_taken_0x1979b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1979BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979B8u;
        // 0x1979bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979b8) {
            ctx->pc = 0x1979C4u;
            goto label_1979c4;
        }
    }
    ctx->pc = 0x1979C0u;
label_1979c0:
    // 0x1979c0: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x1979c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_1979c4:
    // 0x1979c4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1979c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1979c8:
    // 0x1979c8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1979c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1979cc:
    // 0x1979cc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1979ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1979d0:
    // 0x1979d0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1979d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1979d4:
    // 0x1979d4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1979d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1979d8:
    // 0x1979d8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1979d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_1979dc:
    // 0x1979dc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1979dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1979e0:
    // 0x1979e0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1979e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1979e4:
    // 0x1979e4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1979e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1979e8:
    // 0x1979e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1979e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1979ec:
    // 0x1979ec: 0x0  nop
    ctx->pc = 0x1979ecu;
    // NOP
label_1979f0:
    // 0x1979f0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_1979f4:
    if (ctx->pc == 0x1979F4u) {
        ctx->pc = 0x1979F8u;
        goto label_1979f8;
    }
    ctx->pc = 0x1979F0u;
    {
        const bool branch_taken_0x1979f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1979f0) {
            ctx->pc = 0x197A64u;
            goto label_197a64;
        }
    }
    ctx->pc = 0x1979F8u;
label_1979f8:
    // 0x1979f8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1979f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1979fc:
    // 0x1979fc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1979fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197a00:
    // 0x197a00: 0x0  nop
    ctx->pc = 0x197a00u;
    // NOP
label_197a04:
    // 0x197a04: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_197a08:
    if (ctx->pc == 0x197A08u) {
        ctx->pc = 0x197A0Cu;
        goto label_197a0c;
    }
    ctx->pc = 0x197A04u;
    {
        const bool branch_taken_0x197a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x197a04) {
            ctx->pc = 0x197A74u;
            goto label_197a74;
        }
    }
    ctx->pc = 0x197A0Cu;
label_197a0c:
    // 0x197a0c: 0xc061a12  jal         func_186848
label_197a10:
    if (ctx->pc == 0x197A10u) {
        ctx->pc = 0x197A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A0Cu;
        // 0x197a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A14u;
        goto label_197a14;
    }
    ctx->pc = 0x197A0Cu;
    SET_GPR_U32(ctx, 31, 0x197A14u);
    ctx->pc = 0x197A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A0Cu;
    // 0x197a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197A0Cu, 0x197A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A14u;
label_197a14:
    // 0x197a14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x197a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_197a18:
    // 0x197a18: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x197a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197a1c:
    // 0x197a1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x197a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197a20:
    // 0x197a20: 0x0  nop
    ctx->pc = 0x197a20u;
    // NOP
label_197a24:
    // 0x197a24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_197a28:
    if (ctx->pc == 0x197A28u) {
        ctx->pc = 0x197A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A24u;
        // 0x197a28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A2Cu;
        goto label_197a2c;
    }
    ctx->pc = 0x197A24u;
    {
        const bool branch_taken_0x197a24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x197A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A24u;
        // 0x197a28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a24) {
            ctx->pc = 0x197A30u;
            goto label_197a30;
        }
    }
    ctx->pc = 0x197A2Cu;
label_197a2c:
    // 0x197a2c: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x197a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_197a30:
    // 0x197a30: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x197a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197a34:
    // 0x197a34: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x197a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197a38:
    // 0x197a38: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x197a38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_197a3c:
    // 0x197a3c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x197a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197a40:
    // 0x197a40: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x197a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197a44:
    // 0x197a44: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x197a44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_197a48:
    // 0x197a48: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x197a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197a4c:
    // 0x197a4c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x197a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197a50:
    // 0x197a50: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x197a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_197a54:
    // 0x197a54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x197a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197a58:
    // 0x197a58: 0x0  nop
    ctx->pc = 0x197a58u;
    // NOP
label_197a5c:
    // 0x197a5c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_197a60:
    if (ctx->pc == 0x197A60u) {
        ctx->pc = 0x197A64u;
        goto label_197a64;
    }
    ctx->pc = 0x197A5Cu;
    {
        const bool branch_taken_0x197a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x197a5c) {
            ctx->pc = 0x197A74u;
            goto label_197a74;
        }
    }
    ctx->pc = 0x197A64u;
label_197a64:
    // 0x197a64: 0xc06605c  jal         func_198170
label_197a68:
    if (ctx->pc == 0x197A68u) {
        ctx->pc = 0x197A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A64u;
        // 0x197a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A6Cu;
        goto label_197a6c;
    }
    ctx->pc = 0x197A64u;
    SET_GPR_U32(ctx, 31, 0x197A6Cu);
    ctx->pc = 0x197A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A64u;
    // 0x197a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198170u, 0x197A64u, 0x197A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A6Cu;
label_197a6c:
    // 0x197a6c: 0x10000020  b           . + 4 + (0x20 << 2)
label_197a70:
    if (ctx->pc == 0x197A70u) {
        ctx->pc = 0x197A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A6Cu;
        // 0x197a70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A74u;
        goto label_197a74;
    }
    ctx->pc = 0x197A6Cu;
    {
        const bool branch_taken_0x197a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A6Cu;
        // 0x197a70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a6c) {
            ctx->pc = 0x197AF0u;
            goto label_197af0;
        }
    }
    ctx->pc = 0x197A74u;
label_197a74:
    // 0x197a74: 0xc061a12  jal         func_186848
label_197a78:
    if (ctx->pc == 0x197A78u) {
        ctx->pc = 0x197A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A74u;
        // 0x197a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A7Cu;
        goto label_197a7c;
    }
    ctx->pc = 0x197A74u;
    SET_GPR_U32(ctx, 31, 0x197A7Cu);
    ctx->pc = 0x197A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A74u;
    // 0x197a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197A74u, 0x197A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A7Cu;
label_197a7c:
    // 0x197a7c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x197a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_197a80:
    // 0x197a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197a84:
    // 0x197a84: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x197a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_197a88:
    // 0x197a88: 0x40f809  jalr        $v0
label_197a8c:
    if (ctx->pc == 0x197A8Cu) {
        ctx->pc = 0x197A90u;
        goto label_197a90;
    }
    ctx->pc = 0x197A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197A90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197A88u, 0x197A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197A90u;
label_197a90:
    // 0x197a90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_197a94:
    if (ctx->pc == 0x197A94u) {
        ctx->pc = 0x197A98u;
        goto label_197a98;
    }
    ctx->pc = 0x197A90u;
    {
        const bool branch_taken_0x197a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197a90) {
            ctx->pc = 0x197AA8u;
            goto label_197aa8;
        }
    }
    ctx->pc = 0x197A98u;
label_197a98:
    // 0x197a98: 0xc066040  jal         func_198100
label_197a9c:
    if (ctx->pc == 0x197A9Cu) {
        ctx->pc = 0x197A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A98u;
        // 0x197a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AA0u;
        goto label_197aa0;
    }
    ctx->pc = 0x197A98u;
    SET_GPR_U32(ctx, 31, 0x197AA0u);
    ctx->pc = 0x197A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A98u;
    // 0x197a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198100u, 0x197A98u, 0x197AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AA0u;
label_197aa0:
    // 0x197aa0: 0x10000013  b           . + 4 + (0x13 << 2)
label_197aa4:
    if (ctx->pc == 0x197AA4u) {
        ctx->pc = 0x197AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AA0u;
        // 0x197aa4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AA8u;
        goto label_197aa8;
    }
    ctx->pc = 0x197AA0u;
    {
        const bool branch_taken_0x197aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AA0u;
        // 0x197aa4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197aa0) {
            ctx->pc = 0x197AF0u;
            goto label_197af0;
        }
    }
    ctx->pc = 0x197AA8u;
label_197aa8:
    // 0x197aa8: 0xc061a1e  jal         func_186878
label_197aac:
    if (ctx->pc == 0x197AACu) {
        ctx->pc = 0x197AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AA8u;
        // 0x197aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AB0u;
        goto label_197ab0;
    }
    ctx->pc = 0x197AA8u;
    SET_GPR_U32(ctx, 31, 0x197AB0u);
    ctx->pc = 0x197AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AA8u;
    // 0x197aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x197AA8u, 0x197AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AB0u;
label_197ab0:
    // 0x197ab0: 0xc06df10  jal         func_1B7C40
label_197ab4:
    if (ctx->pc == 0x197AB4u) {
        ctx->pc = 0x197AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AB0u;
        // 0x197ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AB8u;
        goto label_197ab8;
    }
    ctx->pc = 0x197AB0u;
    SET_GPR_U32(ctx, 31, 0x197AB8u);
    ctx->pc = 0x197AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AB0u;
    // 0x197ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C40u, 0x197AB0u, 0x197AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AB8u;
label_197ab8:
    // 0x197ab8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_197abc:
    if (ctx->pc == 0x197ABCu) {
        ctx->pc = 0x197AC0u;
        goto label_197ac0;
    }
    ctx->pc = 0x197AB8u;
    {
        const bool branch_taken_0x197ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197ab8) {
            ctx->pc = 0x197AD0u;
            goto label_197ad0;
        }
    }
    ctx->pc = 0x197AC0u;
label_197ac0:
    // 0x197ac0: 0xc066002  jal         func_198008
label_197ac4:
    if (ctx->pc == 0x197AC4u) {
        ctx->pc = 0x197AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AC0u;
        // 0x197ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AC8u;
        goto label_197ac8;
    }
    ctx->pc = 0x197AC0u;
    SET_GPR_U32(ctx, 31, 0x197AC8u);
    ctx->pc = 0x197AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AC0u;
    // 0x197ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198008u, 0x197AC0u, 0x197AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AC8u;
label_197ac8:
    // 0x197ac8: 0x10000009  b           . + 4 + (0x9 << 2)
label_197acc:
    if (ctx->pc == 0x197ACCu) {
        ctx->pc = 0x197ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AC8u;
        // 0x197acc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AD0u;
        goto label_197ad0;
    }
    ctx->pc = 0x197AC8u;
    {
        const bool branch_taken_0x197ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AC8u;
        // 0x197acc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ac8) {
            ctx->pc = 0x197AF0u;
            goto label_197af0;
        }
    }
    ctx->pc = 0x197AD0u;
label_197ad0:
    // 0x197ad0: 0xc061a12  jal         func_186848
label_197ad4:
    if (ctx->pc == 0x197AD4u) {
        ctx->pc = 0x197AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AD0u;
        // 0x197ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AD8u;
        goto label_197ad8;
    }
    ctx->pc = 0x197AD0u;
    SET_GPR_U32(ctx, 31, 0x197AD8u);
    ctx->pc = 0x197AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AD0u;
    // 0x197ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197AD0u, 0x197AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AD8u;
label_197ad8:
    // 0x197ad8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x197ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_197adc:
    // 0x197adc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x197adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_197ae0:
    // 0x197ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197ae4:
    // 0x197ae4: 0xc07072c  jal         func_1C1CB0
label_197ae8:
    if (ctx->pc == 0x197AE8u) {
        ctx->pc = 0x197AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AE4u;
        // 0x197ae8: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AECu;
        goto label_197aec;
    }
    ctx->pc = 0x197AE4u;
    SET_GPR_U32(ctx, 31, 0x197AECu);
    ctx->pc = 0x197AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AE4u;
    // 0x197ae8: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CB0u, 0x197AE4u, 0x197AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AECu;
label_197aec:
    // 0x197aec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x197aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_197af0:
    // 0x197af0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x197af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_197af4:
    // 0x197af4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x197af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_197af8:
    // 0x197af8: 0x3e00008  jr          $ra
label_197afc:
    if (ctx->pc == 0x197AFCu) {
        ctx->pc = 0x197AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AF8u;
        // 0x197afc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B00u;
        goto label_fallthrough_0x197af8;
    }
    ctx->pc = 0x197AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AF8u;
        // 0x197afc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197af8:
    ctx->pc = 0x197B00u;
}
