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

// Function: sub_0035CB58
// Address: 0x35cb58 - 0x35cda0
void sub_0035CB58_0x35cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CB58_0x35cb58");
#endif

    switch (ctx->pc) {
        case 0x35cb84u: goto label_35cb84;
        case 0x35cbacu: goto label_35cbac;
        case 0x35cbb8u: goto label_35cbb8;
        case 0x35cca8u: goto label_35cca8;
        case 0x35cd24u: goto label_35cd24;
        case 0x35cd30u: goto label_35cd30;
        case 0x35cd40u: goto label_35cd40;
        case 0x35cd48u: goto label_35cd48;
        case 0x35cd50u: goto label_35cd50;
        case 0x35cd68u: goto label_35cd68;
        case 0x35cd74u: goto label_35cd74;
        case 0x35cd80u: goto label_35cd80;
        default: break;
    }

    ctx->pc = 0x35cb58u;

    // 0x35cb58: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x35cb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x35cb5c: 0xffb003a0  sd          $s0, 0x3A0($sp)
    ctx->pc = 0x35cb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 16));
    // 0x35cb60: 0xffb103a8  sd          $s1, 0x3A8($sp)
    ctx->pc = 0x35cb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 936), GPR_U64(ctx, 17));
    // 0x35cb64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35cb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb68: 0xffb203b0  sd          $s2, 0x3B0($sp)
    ctx->pc = 0x35cb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 18));
    // 0x35cb6c: 0xffbf03b8  sd          $ra, 0x3B8($sp)
    ctx->pc = 0x35cb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 952), GPR_U64(ctx, 31));
    // 0x35cb70: 0x8e0405e0  lw          $a0, 0x5E0($s0)
    ctx->pc = 0x35cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1504)));
    // 0x35cb74: 0x10800083  beqz        $a0, . + 4 + (0x83 << 2)
    ctx->pc = 0x35CB74u;
    {
        const bool branch_taken_0x35cb74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB74u;
        // 0x35cb78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb74) {
            ctx->pc = 0x35CD84u;
            goto label_35cd84;
        }
    }
    ctx->pc = 0x35CB7Cu;
    // 0x35cb7c: 0xc08dada  jal         func_236B68
    ctx->pc = 0x35CB7Cu;
    SET_GPR_U32(ctx, 31, 0x35CB84u);
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x35CB7Cu, 0x35CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB84u;
label_35cb84:
    // 0x35cb84: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x35CB84u;
    {
        const bool branch_taken_0x35cb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB84u;
        // 0x35cb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb84) {
            ctx->pc = 0x35CD84u;
            goto label_35cd84;
        }
    }
    ctx->pc = 0x35CB8Cu;
    // 0x35cb8c: 0x8e0205e0  lw          $v0, 0x5E0($s0)
    ctx->pc = 0x35cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1504)));
    // 0x35cb90: 0x8c4305b0  lw          $v1, 0x5B0($v0)
    ctx->pc = 0x35cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x35cb94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35CB94u;
    {
        const bool branch_taken_0x35cb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB94u;
        // 0x35cb98: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb94) {
            ctx->pc = 0x35CBA4u;
            goto label_35cba4;
        }
    }
    ctx->pc = 0x35CB9Cu;
    // 0x35cb9c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x35CB9Cu;
    {
        const bool branch_taken_0x35cb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB9Cu;
        // 0x35cba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb9c) {
            ctx->pc = 0x35CD84u;
            goto label_35cd84;
        }
    }
    ctx->pc = 0x35CBA4u;
label_35cba4:
    // 0x35cba4: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x35CBA4u;
    SET_GPR_U32(ctx, 31, 0x35CBACu);
    ctx->pc = 0x35CBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CBA4u;
    // 0x35cba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x35CBA4u, 0x35CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CBACu;
label_35cbac:
    // 0x35cbac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x35cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35cbb0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x35CBB0u;
    SET_GPR_U32(ctx, 31, 0x35CBB8u);
    ctx->pc = 0x35CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CBB0u;
    // 0x35cbb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x35CBB0u, 0x35CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CBB8u;
label_35cbb8:
    // 0x35cbb8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x35cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35cbbc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x35cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35cbc0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x35cbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35cbc4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x35cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x35cbc8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x35cbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cbcc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x35cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x35cbd0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x35cbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cbd4: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x35cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x35cbd8: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x35cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35cbdc: 0x24a57d90  addiu       $a1, $a1, 0x7D90
    ctx->pc = 0x35cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32144));
    // 0x35cbe0: 0xe7a30360  swc1        $f3, 0x360($sp)
    ctx->pc = 0x35cbe0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
    // 0x35cbe4: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x35cbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x35cbe8: 0xe7a40364  swc1        $f4, 0x364($sp)
    ctx->pc = 0x35cbe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 868), bits); }
    // 0x35cbec: 0xe7a20368  swc1        $f2, 0x368($sp)
    ctx->pc = 0x35cbecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
    // 0x35cbf0: 0xe7a1036c  swc1        $f1, 0x36C($sp)
    ctx->pc = 0x35cbf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 876), bits); }
    // 0x35cbf4: 0xe7a00370  swc1        $f0, 0x370($sp)
    ctx->pc = 0x35cbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
    // 0x35cbf8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x35cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cbfc: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x35cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35cc00: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x35cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35cc04: 0xe7a10374  swc1        $f1, 0x374($sp)
    ctx->pc = 0x35cc04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 884), bits); }
    // 0x35cc08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x35cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cc0c: 0xe7a00378  swc1        $f0, 0x378($sp)
    ctx->pc = 0x35cc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
    // 0x35cc10: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x35cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cc14: 0xe7a20380  swc1        $f2, 0x380($sp)
    ctx->pc = 0x35cc14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
    // 0x35cc18: 0xe7a1037c  swc1        $f1, 0x37C($sp)
    ctx->pc = 0x35cc18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 892), bits); }
    // 0x35cc1c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x35cc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cc20: 0xe7a00384  swc1        $f0, 0x384($sp)
    ctx->pc = 0x35cc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 900), bits); }
    // 0x35cc24: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x35cc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cc28: 0xe7a10388  swc1        $f1, 0x388($sp)
    ctx->pc = 0x35cc28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
    // 0x35cc2c: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x35cc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35cc30: 0xe7a30390  swc1        $f3, 0x390($sp)
    ctx->pc = 0x35cc30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
    // 0x35cc34: 0xe7a2038c  swc1        $f2, 0x38C($sp)
    ctx->pc = 0x35cc34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
    // 0x35cc38: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x35cc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cc3c: 0xe7a00394  swc1        $f0, 0x394($sp)
    ctx->pc = 0x35cc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
    // 0x35cc40: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x35cc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cc44: 0xe7a10398  swc1        $f1, 0x398($sp)
    ctx->pc = 0x35cc44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
    // 0x35cc48: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x35cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cc4c: 0xe7a0039c  swc1        $f0, 0x39C($sp)
    ctx->pc = 0x35cc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 924), bits); }
    // 0x35cc50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x35cc50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35cc54: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x35cc54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x5A7D90u));
    // 0x35cc58: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35cc58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35cc5c: 0xfba10390  sqc2        $vf1, 0x390($sp)
    ctx->pc = 0x35cc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35cc60: 0x92020620  lbu         $v0, 0x620($s0)
    ctx->pc = 0x35cc60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x35cc64: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x35CC64u;
    {
        const bool branch_taken_0x35cc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC64u;
        // 0x35cc68: 0x260e0048  addiu       $t6, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc64) {
            ctx->pc = 0x35CD68u;
            goto label_35cd68;
        }
    }
    ctx->pc = 0x35CC6Cu;
    // 0x35cc6c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x35cc6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x35cc70: 0x27b10360  addiu       $s1, $sp, 0x360
    ctx->pc = 0x35cc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x35cc74: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x35cc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x35cc78: 0x260d0054  addiu       $t5, $s0, 0x54
    ctx->pc = 0x35cc78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x35cc7c: 0x37ac0004  ori         $t4, $sp, 0x4
    ctx->pc = 0x35cc7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x35cc80: 0x260b0050  addiu       $t3, $s0, 0x50
    ctx->pc = 0x35cc80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x35cc84: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x35cc84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc88: 0x2609004c  addiu       $t1, $s0, 0x4C
    ctx->pc = 0x35cc88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x35cc8c: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x35cc8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35cc90: 0x26070044  addiu       $a3, $s0, 0x44
    ctx->pc = 0x35cc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x35cc94: 0x37a4000c  ori         $a0, $sp, 0xC
    ctx->pc = 0x35cc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x35cc98: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x35cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x35cc9c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x35cc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x35cca0: 0x27af0368  addiu       $t7, $sp, 0x368
    ctx->pc = 0x35cca0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 872));
    // 0x35cca4: 0x0  nop
    ctx->pc = 0x35cca4u;
    // NOP
label_35cca8:
    // 0x35cca8: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x35cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x35ccac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ccb0: 0x25ce0018  addiu       $t6, $t6, 0x18
    ctx->pc = 0x35ccb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 24));
    // 0x35ccb4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x35ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x35ccb8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x35ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x35ccbc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x35ccbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x35ccc0: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x35ccc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x35ccc4: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x35ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x35ccc8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x35ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cccc: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x35ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ccd0: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x35ccd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x35ccd4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x35ccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x35ccd8: 0x25290018  addiu       $t1, $t1, 0x18
    ctx->pc = 0x35ccd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
    // 0x35ccdc: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x35ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cce0: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x35cce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x35cce4: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x35cce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x35cce8: 0x256b0018  addiu       $t3, $t3, 0x18
    ctx->pc = 0x35cce8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
    // 0x35ccec: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x35ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x35ccf0: 0x254a0018  addiu       $t2, $t2, 0x18
    ctx->pc = 0x35ccf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x35ccf4: 0x258c0018  addiu       $t4, $t4, 0x18
    ctx->pc = 0x35ccf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
    // 0x35ccf8: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x35ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ccfc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x35ccfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x35cd00: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x35cd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x35cd04: 0xaf102a  slt         $v0, $a1, $t7
    ctx->pc = 0x35cd04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x35cd08: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x35CD08u;
    {
        const bool branch_taken_0x35cd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CD08u;
        // 0x35cd0c: 0x25ad0018  addiu       $t5, $t5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cd08) {
            ctx->pc = 0x35CCA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cca8;
        }
    }
    ctx->pc = 0x35CD10u;
    // 0x35cd10: 0x8e44cae4  lw          $a0, -0x351C($s2)
    ctx->pc = 0x35cd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953700)));
    // 0x35cd14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CD14u;
    {
        const bool branch_taken_0x35cd14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cd14) {
            ctx->pc = 0x35CD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CD14u;
            // 0x35cd18: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CD28u;
            goto label_35cd28;
        }
    }
    ctx->pc = 0x35CD1Cu;
    // 0x35cd1c: 0xc0c7b26  jal         func_31EC98
    ctx->pc = 0x35CD1Cu;
    SET_GPR_U32(ctx, 31, 0x35CD24u);
    ctx->pc = 0x31EC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC98u, 0x35CD1Cu, 0x35CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD24u;
label_35cd24:
    // 0x35cd24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35cd28:
    // 0x35cd28: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x35CD28u;
    SET_GPR_U32(ctx, 31, 0x35CD30u);
    ctx->pc = 0x35CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD28u;
    // 0x35cd2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x35CD28u, 0x35CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD30u;
label_35cd30:
    // 0x35cd30: 0x8e44cae4  lw          $a0, -0x351C($s2)
    ctx->pc = 0x35cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953700)));
    // 0x35cd34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35cd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd38: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x35CD38u;
    SET_GPR_U32(ctx, 31, 0x35CD40u);
    ctx->pc = 0x35CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD38u;
    // 0x35cd3c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x35CD38u, 0x35CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD40u;
label_35cd40:
    // 0x35cd40: 0x27b10198  addiu       $s1, $sp, 0x198
    ctx->pc = 0x35cd40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x35cd44: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x35cd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35cd48:
    // 0x35cd48: 0xc0dab86  jal         func_36AE18
    ctx->pc = 0x35CD48u;
    SET_GPR_U32(ctx, 31, 0x35CD50u);
    ctx->pc = 0x35CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD48u;
    // 0x35cd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AE18u, 0x35CD48u, 0x35CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD50u;
label_35cd50:
    // 0x35cd50: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x35cd50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x35cd54: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x35cd54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x35cd58: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35CD58u;
    {
        const bool branch_taken_0x35cd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35cd58) {
            ctx->pc = 0x35CD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cd48;
        }
    }
    ctx->pc = 0x35CD60u;
    // 0x35cd60: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x35CD60u;
    SET_GPR_U32(ctx, 31, 0x35CD68u);
    ctx->pc = 0x35CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD60u;
    // 0x35cd64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x35CD60u, 0x35CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD68u;
label_35cd68:
    // 0x35cd68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35cd6c: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x35CD6Cu;
    SET_GPR_U32(ctx, 31, 0x35CD74u);
    ctx->pc = 0x35CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD6Cu;
    // 0x35cd70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x35CD6Cu, 0x35CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD74u;
label_35cd74:
    // 0x35cd74: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x35cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35cd78: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x35CD78u;
    SET_GPR_U32(ctx, 31, 0x35CD80u);
    ctx->pc = 0x35CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD78u;
    // 0x35cd7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x35CD78u, 0x35CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD80u;
label_35cd80:
    // 0x35cd80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35cd84:
    // 0x35cd84: 0xdfb003a0  ld          $s0, 0x3A0($sp)
    ctx->pc = 0x35cd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x35cd88: 0xdfb103a8  ld          $s1, 0x3A8($sp)
    ctx->pc = 0x35cd88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 936)));
    // 0x35cd8c: 0xdfb203b0  ld          $s2, 0x3B0($sp)
    ctx->pc = 0x35cd8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x35cd90: 0xdfbf03b8  ld          $ra, 0x3B8($sp)
    ctx->pc = 0x35cd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 952)));
    // 0x35cd94: 0x3e00008  jr          $ra
    ctx->pc = 0x35CD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CD94u;
        // 0x35cd98: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CD9Cu;
    // 0x35cd9c: 0x0  nop
    ctx->pc = 0x35cd9cu;
    // NOP
    ctx->pc = 0x35cda0u;
}
