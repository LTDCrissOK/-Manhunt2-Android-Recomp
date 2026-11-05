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

// Function: sub_00324E80
// Address: 0x324e80 - 0x324fb0
void sub_00324E80_0x324e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324E80_0x324e80");
#endif

    ctx->pc = 0x324e80u;

    // 0x324e80: 0x8ca70040  lw          $a3, 0x40($a1)
    ctx->pc = 0x324e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x324e84: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x324e84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x324e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x324e8c: 0x8ca80038  lw          $t0, 0x38($a1)
    ctx->pc = 0x324e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x324e90: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x324e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x324e94: 0x3c013aaa  lui         $at, 0x3AAA
    ctx->pc = 0x324e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15018 << 16));
    // 0x324e98: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x324e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x324e9c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x324e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x324ea0: 0x94e60000  lhu         $a2, 0x0($a3)
    ctx->pc = 0x324ea0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x324ea4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x324ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ea8: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x324ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x324eac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x324eacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x324eb0: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x324eb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x324eb4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x324eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x324eb8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x324eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x324ebc: 0x94e50004  lhu         $a1, 0x4($a3)
    ctx->pc = 0x324ebcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x324ec0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x324ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x324ec4: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x324ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x324ec8: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x324ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x324ecc: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x324eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x324ed0: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x324ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x324ed4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x324ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x324ed8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x324ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324edc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x324edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x324ee0: 0x88650003  lwl         $a1, 0x3($v1)
    ctx->pc = 0x324ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x324ee4: 0x98650000  lwr         $a1, 0x0($v1)
    ctx->pc = 0x324ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x324ee8: 0xaba50017  swl         $a1, 0x17($sp)
    ctx->pc = 0x324ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x324eec: 0xbba50014  swr         $a1, 0x14($sp)
    ctx->pc = 0x324eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x324ef0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x324ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324ef4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x324ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x324ef8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x324ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x324efc: 0x88a30003  lwl         $v1, 0x3($a1)
    ctx->pc = 0x324efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x324f00: 0x98a30000  lwr         $v1, 0x0($a1)
    ctx->pc = 0x324f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x324f04: 0xaba3001b  swl         $v1, 0x1B($sp)
    ctx->pc = 0x324f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x324f08: 0xbba30018  swr         $v1, 0x18($sp)
    ctx->pc = 0x324f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x324f0c: 0x93a70014  lbu         $a3, 0x14($sp)
    ctx->pc = 0x324f0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x324f10: 0x93a60010  lbu         $a2, 0x10($sp)
    ctx->pc = 0x324f10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324f14: 0x93a80015  lbu         $t0, 0x15($sp)
    ctx->pc = 0x324f14u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x324f18: 0x93a50011  lbu         $a1, 0x11($sp)
    ctx->pc = 0x324f18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x324f1c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x324f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x324f20: 0x93a30012  lbu         $v1, 0x12($sp)
    ctx->pc = 0x324f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x324f24: 0x93a70016  lbu         $a3, 0x16($sp)
    ctx->pc = 0x324f24u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x324f28: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x324f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x324f2c: 0x93a90018  lbu         $t1, 0x18($sp)
    ctx->pc = 0x324f2cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324f30: 0x93a80019  lbu         $t0, 0x19($sp)
    ctx->pc = 0x324f30u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 25)));
    // 0x324f34: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x324f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x324f38: 0x93aa001a  lbu         $t2, 0x1A($sp)
    ctx->pc = 0x324f38u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 26)));
    // 0x324f3c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x324f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x324f40: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x324f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x324f44: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x324f44u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x324f48: 0x0  nop
    ctx->pc = 0x324f48u;
    // NOP
    // 0x324f4c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x324f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x324f50: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x324f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x324f54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x324f54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324f58: 0x0  nop
    ctx->pc = 0x324f58u;
    // NOP
    // 0x324f5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324f60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x324f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f64: 0x0  nop
    ctx->pc = 0x324f64u;
    // NOP
    // 0x324f68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x324f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x324f6c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x324f6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x324f70: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x324f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x324f74: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x324f74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x324f78: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x324f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x324f7c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x324f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x324f80: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x324f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x324f84: 0x6ba90027  ldl         $t1, 0x27($sp)
    ctx->pc = 0x324f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x324f88: 0x6fa90020  ldr         $t1, 0x20($sp)
    ctx->pc = 0x324f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x324f8c: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x324f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x324f90: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x324f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x324f94: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x324f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x324f98: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x324f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x324f9c: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x324f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x324fa0: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x324fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x324fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x324FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FA4u;
        // 0x324fa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324FACu;
    // 0x324fac: 0x0  nop
    ctx->pc = 0x324facu;
    // NOP
    ctx->pc = 0x324fb0u;
}
