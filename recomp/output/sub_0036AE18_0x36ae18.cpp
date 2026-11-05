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

// Function: sub_0036AE18
// Address: 0x36ae18 - 0x36afd8
void sub_0036AE18_0x36ae18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AE18_0x36ae18");
#endif

    switch (ctx->pc) {
        case 0x36aee0u: goto label_36aee0;
        case 0x36afbcu: goto label_36afbc;
        default: break;
    }

    ctx->pc = 0x36ae18u;

    // 0x36ae18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ae18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ae1c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x36ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x36ae20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36ae24: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x36ae24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36ae2c: 0x24a5ca60  addiu       $a1, $a1, -0x35A0
    ctx->pc = 0x36ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953568));
    // 0x36ae30: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x36ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x36ae34: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36ae34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae38: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x36ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36ae3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ae3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae40: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x36ae40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36ae44: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x36ae44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36ae48: 0x6889000f  ldl         $t1, 0xF($a0)
    ctx->pc = 0x36ae48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x36ae4c: 0x6c890008  ldr         $t1, 0x8($a0)
    ctx->pc = 0x36ae4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x36ae50: 0x688b0017  ldl         $t3, 0x17($a0)
    ctx->pc = 0x36ae50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x36ae54: 0x6c8b0010  ldr         $t3, 0x10($a0)
    ctx->pc = 0x36ae54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x36ae58: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x36ae58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ae5c: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x36ae5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ae60: 0xb049000f  sdl         $t1, 0xF($v0)
    ctx->pc = 0x36ae60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ae64: 0xb4490008  sdr         $t1, 0x8($v0)
    ctx->pc = 0x36ae64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ae68: 0xb04b0017  sdl         $t3, 0x17($v0)
    ctx->pc = 0x36ae68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ae6c: 0xb44b0010  sdr         $t3, 0x10($v0)
    ctx->pc = 0x36ae6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ae70: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x36ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36ae74: 0x24697d90  addiu       $t1, $v1, 0x7D90
    ctx->pc = 0x36ae74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 32144));
    // 0x36ae78: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x36ae78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ae7c: 0x688d001f  ldl         $t5, 0x1F($a0)
    ctx->pc = 0x36ae7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x36ae80: 0x6c8d0018  ldr         $t5, 0x18($a0)
    ctx->pc = 0x36ae80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x36ae84: 0x68830027  ldl         $v1, 0x27($a0)
    ctx->pc = 0x36ae84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x36ae88: 0x6c830020  ldr         $v1, 0x20($a0)
    ctx->pc = 0x36ae88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x36ae8c: 0x688b002f  ldl         $t3, 0x2F($a0)
    ctx->pc = 0x36ae8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x36ae90: 0x6c8b0028  ldr         $t3, 0x28($a0)
    ctx->pc = 0x36ae90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x36ae94: 0xb04d001f  sdl         $t5, 0x1F($v0)
    ctx->pc = 0x36ae94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ae98: 0xb44d0018  sdr         $t5, 0x18($v0)
    ctx->pc = 0x36ae98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ae9c: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x36ae9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36aea0: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x36aea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36aea4: 0xb04b002f  sdl         $t3, 0x2F($v0)
    ctx->pc = 0x36aea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36aea8: 0xb44b0028  sdr         $t3, 0x28($v0)
    ctx->pc = 0x36aea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36aeac: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x36aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36aeb0: 0x688d0037  ldl         $t5, 0x37($a0)
    ctx->pc = 0x36aeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x36aeb4: 0x6c8d0030  ldr         $t5, 0x30($a0)
    ctx->pc = 0x36aeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x36aeb8: 0x6882003f  ldl         $v0, 0x3F($a0)
    ctx->pc = 0x36aeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36aebc: 0x6c820038  ldr         $v0, 0x38($a0)
    ctx->pc = 0x36aebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36aec0: 0x68850047  ldl         $a1, 0x47($a0)
    ctx->pc = 0x36aec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x36aec4: 0x6c850040  ldr         $a1, 0x40($a0)
    ctx->pc = 0x36aec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x36aec8: 0xb06d0037  sdl         $t5, 0x37($v1)
    ctx->pc = 0x36aec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36aecc: 0xb46d0030  sdr         $t5, 0x30($v1)
    ctx->pc = 0x36aeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36aed0: 0xb062003f  sdl         $v0, 0x3F($v1)
    ctx->pc = 0x36aed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36aed4: 0xb4620038  sdr         $v0, 0x38($v1)
    ctx->pc = 0x36aed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36aed8: 0xb0650047  sdl         $a1, 0x47($v1)
    ctx->pc = 0x36aed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36aedc: 0xb4650040  sdr         $a1, 0x40($v1)
    ctx->pc = 0x36aedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36aee0:
    // 0x36aee0: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x36aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x36aee4: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x36aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x36aee8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x36aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36aeec: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x36aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36aef0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36aef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36aef4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36aef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36aef8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36aef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36aefc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x36aefcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36af00: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x36af00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36af04: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x36AF04u;
    {
        const bool branch_taken_0x36af04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF04u;
        // 0x36af08: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36af04) {
            ctx->pc = 0x36AF34u;
            goto label_36af34;
        }
    }
    ctx->pc = 0x36AF0Cu;
    // 0x36af0c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36af0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36af10: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x36af10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36af14: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x36af14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x36af18: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x36af18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x36af1c: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x36af1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x36af20: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x36af20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36af24: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x36af24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36af28: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x36af28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36af2c: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x36af2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36af30: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36af30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_36af34:
    // 0x36af34: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36af34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36af38: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x36af38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36af3c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36af3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36af40: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36af40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36af44: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x36af44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x36af48: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x36af48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x36af4c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36af50: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36af50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36af54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36af54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36af58: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x36af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x36af5c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36af60: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x36af60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36af64: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36af64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x36af68: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x36af68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x36af6c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36af6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36af70: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36af70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36af74: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36af74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36af78: 0x501ffd9  bgez        $t0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x36AF78u;
    {
        const bool branch_taken_0x36af78 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x36AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF78u;
        // 0x36af7c: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36af78) {
            ctx->pc = 0x36AEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36aee0;
        }
    }
    ctx->pc = 0x36AF80u;
    // 0x36af80: 0x2550ca60  addiu       $s0, $t2, -0x35A0
    ctx->pc = 0x36af80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 4294953568));
    // 0x36af84: 0x3c04aaaa  lui         $a0, 0xAAAA
    ctx->pc = 0x36af84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43690 << 16));
    // 0x36af88: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x36af88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x36af8c: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x36af8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x36af90: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x36af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36af94: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x36af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x36af98: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x36af98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x36af9c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x36af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36afa0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x36afa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x36afa4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x36afa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x36afa8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x36afa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x36afac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36AFACu;
    {
        const bool branch_taken_0x36afac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AFACu;
        // 0x36afb0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36afac) {
            ctx->pc = 0x36AFC4u;
            goto label_36afc4;
        }
    }
    ctx->pc = 0x36AFB4u;
    // 0x36afb4: 0xc0daa80  jal         func_36AA00
    ctx->pc = 0x36AFB4u;
    SET_GPR_U32(ctx, 31, 0x36AFBCu);
    ctx->pc = 0x36AFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AFB4u;
    // 0x36afb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AA00u, 0x36AFB4u, 0x36AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AFBCu;
label_36afbc:
    // 0x36afbc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x36afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36afc0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x36afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_36afc4:
    // 0x36afc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36afc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36afc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36afc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36afcc: 0x3e00008  jr          $ra
    ctx->pc = 0x36AFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AFCCu;
        // 0x36afd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AFD4u;
    // 0x36afd4: 0x0  nop
    ctx->pc = 0x36afd4u;
    // NOP
    ctx->pc = 0x36afd8u;
}
