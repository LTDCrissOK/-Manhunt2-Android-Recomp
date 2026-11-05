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

// Function: sub_0027D988
// Address: 0x27d988 - 0x27dcd8
void sub_0027D988_0x27d988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D988_0x27d988");
#endif

    switch (ctx->pc) {
        case 0x27da14u: goto label_27da14;
        case 0x27da70u: goto label_27da70;
        case 0x27daccu: goto label_27dacc;
        case 0x27db28u: goto label_27db28;
        case 0x27db58u: goto label_27db58;
        case 0x27db84u: goto label_27db84;
        case 0x27dbc8u: goto label_27dbc8;
        case 0x27dbdcu: goto label_27dbdc;
        case 0x27dc30u: goto label_27dc30;
        case 0x27dc84u: goto label_27dc84;
        default: break;
    }

    ctx->pc = 0x27d988u;

    // 0x27d988: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x27d988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x27d98c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x27d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x27d990: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x27d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x27d994: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x27d994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x27d998: 0xe7bb0158  swc1        $f27, 0x158($sp)
    ctx->pc = 0x27d998u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x27d99c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x27d99cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9a0: 0xe7ba0150  swc1        $f26, 0x150($sp)
    ctx->pc = 0x27d9a0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x27d9a4: 0x46007ec6  mov.s       $f27, $f15
    ctx->pc = 0x27d9a4u;
    ctx->f[27] = FPU_MOV_S(ctx->f[15]);
    // 0x27d9a8: 0xe7b90148  swc1        $f25, 0x148($sp)
    ctx->pc = 0x27d9a8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x27d9ac: 0x46007686  mov.s       $f26, $f14
    ctx->pc = 0x27d9acu;
    ctx->f[26] = FPU_MOV_S(ctx->f[14]);
    // 0x27d9b0: 0xe7b80140  swc1        $f24, 0x140($sp)
    ctx->pc = 0x27d9b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x27d9b4: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x27d9b4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x27d9b8: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x27d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x27d9bc: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x27d9bcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x27d9c0: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x27d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x27d9c4: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x27d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x27d9c8: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x27d9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x27d9cc: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x27d9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x27d9d0: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x27d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x27d9d4: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x27d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x27d9d8: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x27d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x27d9dc: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x27d9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x27d9e0: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x27d9e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x27d9e4: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x27d9e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x27d9e8: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x27d9e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x27d9ec: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x27d9ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x27d9f0: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x27d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BB050u));
    // 0x27d9f4: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x27D9F4u;
    {
        const bool branch_taken_0x27d9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9F4u;
        // 0x27d9f8: 0xafa500c0  sw          $a1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9f4) {
            ctx->pc = 0x27DC5Cu;
            goto label_27dc5c;
        }
    }
    ctx->pc = 0x27D9FCu;
    // 0x27d9fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27d9fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da00: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x27da00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x27da04: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27DA04u;
    {
        const bool branch_taken_0x27da04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA04u;
        // 0x27da08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da04) {
            ctx->pc = 0x27DA68u;
            goto label_27da68;
        }
    }
    ctx->pc = 0x27DA0Cu;
    // 0x27da0c: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x27da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x27da10: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x27da10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27da14:
    // 0x27da14: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x27da14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x27da18: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x27da18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x27da1c: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x27da1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x27da20: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x27da20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x27da24: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x27da24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27da28: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x27da28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27da2c: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x27da2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27da30: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x27da30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27da34: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x27da34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27da38: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x27da38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27da3c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x27da3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27da40: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x27da40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27da44: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x27da44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27da48: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x27da48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27da4c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x27da4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27da50: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x27da50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27da54: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27da54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27da58: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27DA58u;
    {
        const bool branch_taken_0x27da58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA58u;
        // 0x27da5c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da58) {
            ctx->pc = 0x27DA14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27da14;
        }
    }
    ctx->pc = 0x27DA60u;
    // 0x27da60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27DA60u;
    {
        const bool branch_taken_0x27da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA60u;
        // 0x27da64: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da60) {
            ctx->pc = 0x27DAA0u;
            goto label_27daa0;
        }
    }
    ctx->pc = 0x27DA68u;
label_27da68:
    // 0x27da68: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x27da68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x27da6c: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x27da6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27da70:
    // 0x27da70: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x27da70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27da74: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x27da74u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27da78: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x27da78u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27da7c: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x27da7cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27da80: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x27da80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x27da84: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x27da84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x27da88: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x27da88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x27da8c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x27da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x27da90: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27da90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27da94: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27DA94u;
    {
        const bool branch_taken_0x27da94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA94u;
        // 0x27da98: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da94) {
            ctx->pc = 0x27DA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27da70;
        }
    }
    ctx->pc = 0x27DA9Cu;
    // 0x27da9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x27da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_27daa0:
    // 0x27daa0: 0x2450aff0  addiu       $s0, $v0, -0x5010
    ctx->pc = 0x27daa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x27daa4: 0xe61a0010  swc1        $f26, 0x10($s0)
    ctx->pc = 0x27daa4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x27daa8: 0xe61b0014  swc1        $f27, 0x14($s0)
    ctx->pc = 0x27daa8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x27daac: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x27daacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x27dab0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x27dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27dab4: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x27dab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x27dab8: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x27dab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x27dabc: 0x8e070078  lw          $a3, 0x78($s0)
    ctx->pc = 0x27dabcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x27dac0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x27dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x27dac4: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x27DAC4u;
    SET_GPR_U32(ctx, 31, 0x27DACCu);
    ctx->pc = 0x27DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DAC4u;
    // 0x27dac8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x27DAC4u, 0x27DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DACCu;
label_27dacc:
    // 0x27dacc: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x27daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x27dad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dad4: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x27DAD4u;
    {
        const bool branch_taken_0x27dad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAD4u;
        // 0x27dad8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dad4) {
            ctx->pc = 0x27DBA8u;
            goto label_27dba8;
        }
    }
    ctx->pc = 0x27DADCu;
    // 0x27dadc: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x27DADCu;
    {
        const bool branch_taken_0x27dadc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DADCu;
        // 0x27dae0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dadc) {
            ctx->pc = 0x27DBCCu;
            goto label_27dbcc;
        }
    }
    ctx->pc = 0x27DAE4u;
    // 0x27dae4: 0xc6170064  lwc1        $f23, 0x64($s0)
    ctx->pc = 0x27dae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27dae8: 0xc6160068  lwc1        $f22, 0x68($s0)
    ctx->pc = 0x27dae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27daec: 0x4617b800  add.s       $f0, $f23, $f23
    ctx->pc = 0x27daecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
    // 0x27daf0: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x27daf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x27daf4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27daf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27daf8: 0x4616b040  add.s       $f1, $f22, $f22
    ctx->pc = 0x27daf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x27dafc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27dafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27db00: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27db00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27db04: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27db04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x27db08: 0x44131000  mfc1        $s3, $f2
    ctx->pc = 0x27db08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x27db0c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27db0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27db10: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x27db10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x27db14: 0x660002c  bltz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x27DB14u;
    {
        const bool branch_taken_0x27db14 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x27DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB14u;
        // 0x27db18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db14) {
            ctx->pc = 0x27DBC8u;
            goto label_27dbc8;
        }
    }
    ctx->pc = 0x27DB1Cu;
    // 0x27db1c: 0x2a350000  slti        $s5, $s1, 0x0
    ctx->pc = 0x27db1cu;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x27db20: 0x3c1e006c  lui         $fp, 0x6C
    ctx->pc = 0x27db20u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
    // 0x27db24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27db24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27db28:
    // 0x27db28: 0x16a00019  bnez        $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x27DB28u;
    {
        const bool branch_taken_0x27db28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB28u;
        // 0x27db2c: 0x73a021  addu        $s4, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db28) {
            ctx->pc = 0x27DB90u;
            goto label_27db90;
        }
    }
    ctx->pc = 0x27DB30u;
    // 0x27db30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27db30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27db34: 0x0  nop
    ctx->pc = 0x27db34u;
    // NOP
    // 0x27db38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27db38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27db3c: 0x3c013acc  lui         $at, 0x3ACC
    ctx->pc = 0x27db3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15052 << 16));
    // 0x27db40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27db40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27db44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27db44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27db48: 0x27d2aff0  addiu       $s2, $fp, -0x5010
    ctx->pc = 0x27db48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946800));
    // 0x27db4c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27db4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27db50: 0x4600c800  add.s       $f0, $f25, $f0
    ctx->pc = 0x27db50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
    // 0x27db54: 0x46170501  sub.s       $f20, $f0, $f23
    ctx->pc = 0x27db54u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_27db58:
    // 0x27db58: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x27db58u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27db5c: 0x0  nop
    ctx->pc = 0x27db5cu;
    // NOP
    // 0x27db60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27db60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27db64: 0xe6540008  swc1        $f20, 0x8($s2)
    ctx->pc = 0x27db64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x27db68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db6c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x27db6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x27db70: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27db70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27db74: 0x4600c000  add.s       $f0, $f24, $f0
    ctx->pc = 0x27db74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x27db78: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x27db78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x27db7c: 0xc09f81a  jal         func_27E068
    ctx->pc = 0x27DB7Cu;
    SET_GPR_U32(ctx, 31, 0x27DB84u);
    ctx->pc = 0x27DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB7Cu;
    // 0x27db80: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E068u, 0x27DB7Cu, 0x27DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB84u;
label_27db84:
    // 0x27db84: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x27db84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x27db88: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x27DB88u;
    {
        const bool branch_taken_0x27db88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db88) {
            ctx->pc = 0x27DB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27db58;
        }
    }
    ctx->pc = 0x27DB90u;
label_27db90:
    // 0x27db90: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x27db90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db94: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x27db94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27db98: 0x5040ffe3  beql        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x27DB98u;
    {
        const bool branch_taken_0x27db98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db98) {
            ctx->pc = 0x27DB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DB98u;
            // 0x27db9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27db28;
        }
    }
    ctx->pc = 0x27DBA0u;
    // 0x27dba0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27DBA0u;
    {
        const bool branch_taken_0x27dba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBA0u;
        // 0x27dba4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dba0) {
            ctx->pc = 0x27DBCCu;
            goto label_27dbcc;
        }
    }
    ctx->pc = 0x27DBA8u;
label_27dba8:
    // 0x27dba8: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x27dba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dbac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27dbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dbb0: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x27dbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dbb4: 0x4601c840  add.s       $f1, $f25, $f1
    ctx->pc = 0x27dbb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[25], ctx->f[1]);
    // 0x27dbb8: 0x4600c000  add.s       $f0, $f24, $f0
    ctx->pc = 0x27dbb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x27dbbc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x27dbbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27dbc0: 0xc09f81a  jal         func_27E068
    ctx->pc = 0x27DBC0u;
    SET_GPR_U32(ctx, 31, 0x27DBC8u);
    ctx->pc = 0x27DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DBC0u;
    // 0x27dbc4: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E068u, 0x27DBC0u, 0x27DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBC8u;
label_27dbc8:
    // 0x27dbc8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x27dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_27dbcc:
    // 0x27dbcc: 0x2444aff0  addiu       $a0, $v0, -0x5010
    ctx->pc = 0x27dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x27dbd0: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x27dbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x27dbd4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27DBD4u;
    {
        const bool branch_taken_0x27dbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBD4u;
        // 0x27dbd8: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbd4) {
            ctx->pc = 0x27DC30u;
            goto label_27dc30;
        }
    }
    ctx->pc = 0x27DBDCu;
label_27dbdc:
    // 0x27dbdc: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x27dbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x27dbe0: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x27dbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x27dbe4: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x27dbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x27dbe8: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x27dbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x27dbec: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x27dbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27dbf0: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x27dbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27dbf4: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x27dbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27dbf8: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x27dbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27dbfc: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x27dbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dc00: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x27dc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dc04: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x27dc04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dc08: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x27dc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dc0c: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x27dc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dc10: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x27dc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dc14: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x27dc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dc18: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x27dc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dc1c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27dc20: 0x1477ffee  bne         $v1, $s7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27DC20u;
    {
        const bool branch_taken_0x27dc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x27DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC20u;
        // 0x27dc24: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc20) {
            ctx->pc = 0x27DBDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dbdc;
        }
    }
    ctx->pc = 0x27DC28u;
    // 0x27dc28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27DC28u;
    {
        const bool branch_taken_0x27dc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC28u;
        // 0x27dc2c: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc28) {
            ctx->pc = 0x27DC60u;
            goto label_27dc60;
        }
    }
    ctx->pc = 0x27DC30u;
label_27dc30:
    // 0x27dc30: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x27dc30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27dc34: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x27dc34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27dc38: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x27dc38u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27dc3c: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x27dc3cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27dc40: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x27dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x27dc44: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x27dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x27dc48: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x27dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x27dc4c: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x27dc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x27dc50: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27dc54: 0x1477fff6  bne         $v1, $s7, . + 4 + (-0xA << 2)
    ctx->pc = 0x27DC54u;
    {
        const bool branch_taken_0x27dc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x27DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC54u;
        // 0x27dc58: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc54) {
            ctx->pc = 0x27DC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dc30;
        }
    }
    ctx->pc = 0x27DC5Cu;
label_27dc5c:
    // 0x27dc5c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x27dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27dc60:
    // 0x27dc60: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x27dc60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x27dc64: 0x2502aff0  addiu       $v0, $t0, -0x5010
    ctx->pc = 0x27dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946800));
    // 0x27dc68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27dc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc6c: 0xe4590008  swc1        $f25, 0x8($v0)
    ctx->pc = 0x27dc6cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BAFF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BAFF8u, _value); } while (0); }
    // 0x27dc70: 0xe458000c  swc1        $f24, 0xC($v0)
    ctx->pc = 0x27dc70u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BAFFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BAFFCu, _value); } while (0); }
    // 0x27dc74: 0xe45a0010  swc1        $f26, 0x10($v0)
    ctx->pc = 0x27dc74u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BB000u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB000u, _value); } while (0); }
    // 0x27dc78: 0xe45b0014  swc1        $f27, 0x14($v0)
    ctx->pc = 0x27dc78u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BB004u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB004u, _value); } while (0); }
    // 0x27dc7c: 0xc09f81a  jal         func_27E068
    ctx->pc = 0x27DC7Cu;
    SET_GPR_U32(ctx, 31, 0x27DC84u);
    ctx->pc = 0x27DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC7Cu;
    // 0x27dc80: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E068u, 0x27DC7Cu, 0x27DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC84u;
label_27dc84:
    // 0x27dc84: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x27dc84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27dc88: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x27dc88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x27dc8c: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x27dc8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27dc90: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x27dc90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x27dc94: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x27dc94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27dc98: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x27dc98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x27dc9c: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x27dc9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27dca0: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x27dca0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x27dca4: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x27dca4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27dca8: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x27dca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x27dcac: 0xc7bb0158  lwc1        $f27, 0x158($sp)
    ctx->pc = 0x27dcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27dcb0: 0xc7ba0150  lwc1        $f26, 0x150($sp)
    ctx->pc = 0x27dcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x27dcb4: 0xc7b90148  lwc1        $f25, 0x148($sp)
    ctx->pc = 0x27dcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27dcb8: 0xc7b80140  lwc1        $f24, 0x140($sp)
    ctx->pc = 0x27dcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27dcbc: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x27dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27dcc0: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x27dcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27dcc4: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x27dcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27dcc8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x27dcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27dccc: 0x3e00008  jr          $ra
    ctx->pc = 0x27DCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCCCu;
        // 0x27dcd0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DCD4u;
    // 0x27dcd4: 0x0  nop
    ctx->pc = 0x27dcd4u;
    // NOP
    ctx->pc = 0x27dcd8u;
}
