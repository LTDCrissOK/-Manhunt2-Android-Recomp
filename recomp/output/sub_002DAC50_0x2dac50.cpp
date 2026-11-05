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

// Function: sub_002DAC50
// Address: 0x2dac50 - 0x2dadb8
void sub_002DAC50_0x2dac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAC50_0x2dac50");
#endif

    switch (ctx->pc) {
        case 0x2dac74u: goto label_2dac74;
        case 0x2dad00u: goto label_2dad00;
        case 0x2dad10u: goto label_2dad10;
        default: break;
    }

    ctx->pc = 0x2dac50u;

    // 0x2dac50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dac54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dac58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2dac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2dac5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dac5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac60: 0x8e026394  lw          $v0, 0x6394($s0)
    ctx->pc = 0x2dac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25492)));
    // 0x2dac64: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2DAC64u;
    {
        const bool branch_taken_0x2dac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC64u;
        // 0x2dac68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac64) {
            ctx->pc = 0x2DADA4u;
            goto label_2dada4;
        }
    }
    ctx->pc = 0x2DAC6Cu;
    // 0x2dac6c: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2DAC6Cu;
    SET_GPR_U32(ctx, 31, 0x2DAC74u);
    ctx->pc = 0x2DAC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAC6Cu;
    // 0x2dac70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2DAC6Cu, 0x2DAC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC74u;
label_2dac74:
    // 0x2dac74: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x2dac74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
    // 0x2dac78: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x2dac78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x2dac7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dac7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dac80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dac84: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x2dac84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x2dac88: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2dac88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x2dac8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dac8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dac90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac94: 0x3c013c8b  lui         $at, 0x3C8B
    ctx->pc = 0x2dac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15499 << 16));
    // 0x2dac98: 0x34214396  ori         $at, $at, 0x4396
    ctx->pc = 0x2dac98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17302);
    // 0x2dac9c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2dac9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2daca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2daca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daca4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2daca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2daca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2daca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dacac: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x2dacacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x2dacb0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2dacb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2dacb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dacb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dacb8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2dacb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2dacbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dacbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2dacc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2dacc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dacc4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2dacc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2dacc8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dacc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2daccc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2dacccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dacd0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2dacd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2dacd4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2dacd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dacd8: 0xe60163cc  swc1        $f1, 0x63CC($s0)
    ctx->pc = 0x2dacd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 25548), bits); }
    // 0x2dacdc: 0xe60063d8  swc1        $f0, 0x63D8($s0)
    ctx->pc = 0x2dacdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 25560), bits); }
    // 0x2dace0: 0xe6020430  swc1        $f2, 0x430($s0)
    ctx->pc = 0x2dace0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1072), bits); }
    // 0x2dace4: 0xe6030438  swc1        $f3, 0x438($s0)
    ctx->pc = 0x2dace4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1080), bits); }
    // 0x2dace8: 0xe60163c8  swc1        $f1, 0x63C8($s0)
    ctx->pc = 0x2dace8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 25544), bits); }
    // 0x2dacec: 0xe602042c  swc1        $f2, 0x42C($s0)
    ctx->pc = 0x2dacecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1068), bits); }
    // 0x2dacf0: 0xe6030434  swc1        $f3, 0x434($s0)
    ctx->pc = 0x2dacf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
    // 0x2dacf4: 0xa202043c  sb          $v0, 0x43C($s0)
    ctx->pc = 0x2dacf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1084), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dacf8: 0xc0b6b86  jal         func_2DAE18
    ctx->pc = 0x2DACF8u;
    SET_GPR_U32(ctx, 31, 0x2DAD00u);
    ctx->pc = 0x2DACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DACF8u;
    // 0x2dacfc: 0xae0263c4  sw          $v0, 0x63C4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 25540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE18u, 0x2DACF8u, 0x2DAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD00u;
label_2dad00:
    // 0x2dad00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dad00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dad04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad08: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2DAD08u;
    SET_GPR_U32(ctx, 31, 0x2DAD10u);
    ctx->pc = 0x2DAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD08u;
    // 0x2dad0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2DAD08u, 0x2DAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD10u;
label_2dad10:
    // 0x2dad10: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x2dad10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2dad14: 0x240400e1  addiu       $a0, $zero, 0xE1
    ctx->pc = 0x2dad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x2dad18: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x2dad18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dad1c: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2dad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2dad20: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2dad20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2dad24: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x2dad24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x2dad28: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2dad28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2dad2c: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2dad2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2dad30: 0xaa0263d3  swl         $v0, 0x63D3($s0)
    ctx->pc = 0x2dad30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 25555); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dad34: 0xba0263d0  swr         $v0, 0x63D0($s0)
    ctx->pc = 0x2dad34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 25552); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dad38: 0xa3a40003  sb          $a0, 0x3($sp)
    ctx->pc = 0x2dad38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dad3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dad40: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x2dad40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dad44: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x2dad44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dad48: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x2dad48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dad4c: 0x8ba40003  lwl         $a0, 0x3($sp)
    ctx->pc = 0x2dad4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2dad50: 0x9ba40000  lwr         $a0, 0x0($sp)
    ctx->pc = 0x2dad50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2dad54: 0xaa0463d7  swl         $a0, 0x63D7($s0)
    ctx->pc = 0x2dad54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 25559); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dad58: 0xba0463d4  swr         $a0, 0x63D4($s0)
    ctx->pc = 0x2dad58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 25556); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dad5c: 0xae0563b8  sw          $a1, 0x63B8($s0)
    ctx->pc = 0x2dad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25528), GPR_U32(ctx, 5));
    // 0x2dad60: 0xae0363ec  sw          $v1, 0x63EC($s0)
    ctx->pc = 0x2dad60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25580), GPR_U32(ctx, 3));
    // 0x2dad64: 0xae0663e8  sw          $a2, 0x63E8($s0)
    ctx->pc = 0x2dad64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25576), GPR_U32(ctx, 6));
    // 0x2dad68: 0xae0063f0  sw          $zero, 0x63F0($s0)
    ctx->pc = 0x2dad68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25584), GPR_U32(ctx, 0));
    // 0x2dad6c: 0xae0063b0  sw          $zero, 0x63B0($s0)
    ctx->pc = 0x2dad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25520), GPR_U32(ctx, 0));
    // 0x2dad70: 0xae006394  sw          $zero, 0x6394($s0)
    ctx->pc = 0x2dad70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25492), GPR_U32(ctx, 0));
    // 0x2dad74: 0xae0063a4  sw          $zero, 0x63A4($s0)
    ctx->pc = 0x2dad74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25508), GPR_U32(ctx, 0));
    // 0x2dad78: 0xae00639c  sw          $zero, 0x639C($s0)
    ctx->pc = 0x2dad78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25500), GPR_U32(ctx, 0));
    // 0x2dad7c: 0xae0063a0  sw          $zero, 0x63A0($s0)
    ctx->pc = 0x2dad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25504), GPR_U32(ctx, 0));
    // 0x2dad80: 0xae0063c0  sw          $zero, 0x63C0($s0)
    ctx->pc = 0x2dad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25536), GPR_U32(ctx, 0));
    // 0x2dad84: 0xae0063ac  sw          $zero, 0x63AC($s0)
    ctx->pc = 0x2dad84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25516), GPR_U32(ctx, 0));
    // 0x2dad88: 0xae006398  sw          $zero, 0x6398($s0)
    ctx->pc = 0x2dad88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25496), GPR_U32(ctx, 0));
    // 0x2dad8c: 0xae0063dc  sw          $zero, 0x63DC($s0)
    ctx->pc = 0x2dad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25564), GPR_U32(ctx, 0));
    // 0x2dad90: 0xae0063e0  sw          $zero, 0x63E0($s0)
    ctx->pc = 0x2dad90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25568), GPR_U32(ctx, 0));
    // 0x2dad94: 0xa20063e4  sb          $zero, 0x63E4($s0)
    ctx->pc = 0x2dad94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25572), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dad98: 0xa20063e5  sb          $zero, 0x63E5($s0)
    ctx->pc = 0x2dad98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25573), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dad9c: 0xae000404  sw          $zero, 0x404($s0)
    ctx->pc = 0x2dad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
    // 0x2dada0: 0xae000400  sw          $zero, 0x400($s0)
    ctx->pc = 0x2dada0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 0));
label_2dada4:
    // 0x2dada4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dada4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dada8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2dada8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dadac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADACu;
        // 0x2dadb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DADB4u;
    // 0x2dadb4: 0x0  nop
    ctx->pc = 0x2dadb4u;
    // NOP
    ctx->pc = 0x2dadb8u;
}
