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

// Function: sub_001DE940
// Address: 0x1de940 - 0x1deb18
void sub_001DE940_0x1de940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE940_0x1de940");
#endif

    switch (ctx->pc) {
        case 0x1de978u: goto label_1de978;
        case 0x1de990u: goto label_1de990;
        case 0x1de9a4u: goto label_1de9a4;
        case 0x1de9d8u: goto label_1de9d8;
        case 0x1de9f4u: goto label_1de9f4;
        case 0x1dea40u: goto label_1dea40;
        case 0x1dea5cu: goto label_1dea5c;
        case 0x1deaa8u: goto label_1deaa8;
        default: break;
    }

    ctx->pc = 0x1de940u;

    // 0x1de940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1de940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1de944: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1de944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1de948: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1de948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1de94c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1de94cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de950: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1de950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1de954: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1de954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de958: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1de958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1de95c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1de95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1de960: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1de960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1de964: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1de964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1de968: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1de968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1de96c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1de96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1de970: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DE970u;
    SET_GPR_U32(ctx, 31, 0x1DE978u);
    ctx->pc = 0x1DE974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE970u;
    // 0x1de974: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DE970u, 0x1DE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE978u;
label_1de978:
    // 0x1de978: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE978u;
    {
        const bool branch_taken_0x1de978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE978u;
        // 0x1de97c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de978) {
            ctx->pc = 0x1DE988u;
            goto label_1de988;
        }
    }
    ctx->pc = 0x1DE980u;
    // 0x1de980: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1DE980u;
    {
        const bool branch_taken_0x1de980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE980u;
        // 0x1de984: 0x8c6291c0  lw          $v0, -0x6E40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de980) {
            ctx->pc = 0x1DEAE8u;
            goto label_1deae8;
        }
    }
    ctx->pc = 0x1DE988u;
label_1de988:
    // 0x1de988: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DE988u;
    SET_GPR_U32(ctx, 31, 0x1DE990u);
    ctx->pc = 0x1DE98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE988u;
    // 0x1de98c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DE988u, 0x1DE990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE990u;
label_1de990:
    // 0x1de990: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1DE990u;
    {
        const bool branch_taken_0x1de990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE990u;
        // 0x1de994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de990) {
            ctx->pc = 0x1DEAE8u;
            goto label_1deae8;
        }
    }
    ctx->pc = 0x1DE998u;
    // 0x1de998: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1de998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de99c: 0xc077e7a  jal         func_1DF9E8
    ctx->pc = 0x1DE99Cu;
    SET_GPR_U32(ctx, 31, 0x1DE9A4u);
    ctx->pc = 0x1DE9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE99Cu;
    // 0x1de9a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9E8u, 0x1DE99Cu, 0x1DE9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9A4u;
label_1de9a4:
    // 0x1de9a4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1de9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1de9a8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1de9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de9ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1de9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1de9b0: 0x8c8391f4  lw          $v1, -0x6E0C($a0)
    ctx->pc = 0x1de9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1de9b4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1de9b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de9b8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1de9b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de9bc: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE9BCu;
    {
        const bool branch_taken_0x1de9bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1DE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9BCu;
        // 0x1de9c0: 0xe44091b0  swc1        $f0, -0x6E50($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294939056), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9bc) {
            ctx->pc = 0x1DEA04u;
            goto label_1dea04;
        }
    }
    ctx->pc = 0x1DE9C4u;
    // 0x1de9c4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1de9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1de9c8: 0x3c15001e  lui         $s5, 0x1E
    ctx->pc = 0x1de9c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)30 << 16));
    // 0x1de9cc: 0x2452c758  addiu       $s2, $v0, -0x38A8
    ctx->pc = 0x1de9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1de9d0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1de9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
    // 0x1de9d4: 0x0  nop
    ctx->pc = 0x1de9d4u;
    // NOP
label_1de9d8:
    // 0x1de9d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de9dc: 0x26a7ddf8  addiu       $a3, $s5, -0x2208
    ctx->pc = 0x1de9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958584));
    // 0x1de9e0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1de9e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de9e4: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1de9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1de9e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1de9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1de9ec: 0xc0dbdf4  jal         func_36F7D0
    ctx->pc = 0x1DE9ECu;
    SET_GPR_U32(ctx, 31, 0x1DE9F4u);
    ctx->pc = 0x1DE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE9ECu;
    // 0x1de9f0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F7D0u, 0x1DE9ECu, 0x1DE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9F4u;
label_1de9f4:
    // 0x1de9f4: 0x8ec391f4  lw          $v1, -0x6E0C($s6)
    ctx->pc = 0x1de9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294939124)));
    // 0x1de9f8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1de9f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1de9fc: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DE9FCu;
    {
        const bool branch_taken_0x1de9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de9fc) {
            ctx->pc = 0x1DEA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE9FCu;
            // 0x1dea00: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de9d8;
        }
    }
    ctx->pc = 0x1DEA04u;
label_1dea04:
    // 0x1dea04: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1dea04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1dea08: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEA08u;
    {
        const bool branch_taken_0x1dea08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA08u;
        // 0x1dea0c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea08) {
            ctx->pc = 0x1DEA18u;
            goto label_1dea18;
        }
    }
    ctx->pc = 0x1DEA10u;
    // 0x1dea10: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1DEA10u;
    {
        const bool branch_taken_0x1dea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA10u;
        // 0x1dea14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea10) {
            ctx->pc = 0x1DEAE8u;
            goto label_1deae8;
        }
    }
    ctx->pc = 0x1DEA18u;
label_1dea18:
    // 0x1dea18: 0xae330024  sw          $s3, 0x24($s1)
    ctx->pc = 0x1dea18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
    // 0x1dea1c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1dea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1dea20: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1dea20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1dea24: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1dea24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1dea28: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dea28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea2c: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1dea2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1dea30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea34: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x1dea34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1dea38: 0xc07a814  jal         func_1EA050
    ctx->pc = 0x1DEA38u;
    SET_GPR_U32(ctx, 31, 0x1DEA40u);
    ctx->pc = 0x1DEA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA38u;
    // 0x1dea3c: 0x8e470014  lw          $a3, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA050u, 0x1DEA38u, 0x1DEA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA40u;
label_1dea40:
    // 0x1dea40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dea44: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x1dea44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x1dea48: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1dea48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1dea4c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1dea4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dea50: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1dea50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dea54: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DEA54u;
    SET_GPR_U32(ctx, 31, 0x1DEA5Cu);
    ctx->pc = 0x1DEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA54u;
    // 0x1dea58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DEA54u, 0x1DEA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA5Cu;
label_1dea5c:
    // 0x1dea5c: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x1dea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1dea60: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x1dea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1dea64: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dea64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dea68: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1dea68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dea6c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dea6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dea70: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1dea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dea74: 0xc6e091b0  lwc1        $f0, -0x6E50($s7)
    ctx->pc = 0x1dea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294939056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dea78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1dea78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1dea7c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1dea7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1dea80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dea84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1dea84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dea88: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1dea88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dea8c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1dea8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea90: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1dea90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dea94: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dea94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dea98: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1dea98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dea9c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1deaa0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1DEAA0u;
    SET_GPR_U32(ctx, 31, 0x1DEAA8u);
    ctx->pc = 0x1DEAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAA0u;
    // 0x1deaa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1DEAA0u, 0x1DEAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAA8u;
label_1deaa8:
    // 0x1deaa8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1deaac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1deaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1deab0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1deab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1deab4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1deab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1deab8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1deab8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1deabc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1deabcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1deac0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1deac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1deac4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1deac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1deac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1deac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deacc: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1deaccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1dead0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1dead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dead4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1dead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dead8: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x1dead8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x1deadc: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1deadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1deae0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1deae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1deae4: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x1deae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_1deae8:
    // 0x1deae8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1deae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1deaec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1deaecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1deaf0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1deaf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1deaf4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1deaf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1deaf8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1deaf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1deafc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1deafcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1deb00: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1deb00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1deb04: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1deb04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1deb08: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1deb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1deb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB0Cu;
        // 0x1deb10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB14u;
    // 0x1deb14: 0x0  nop
    ctx->pc = 0x1deb14u;
    // NOP
    ctx->pc = 0x1deb18u;
}
