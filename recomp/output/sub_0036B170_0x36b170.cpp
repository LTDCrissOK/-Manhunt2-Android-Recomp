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

// Function: sub_0036B170
// Address: 0x36b170 - 0x36b3d0
void sub_0036B170_0x36b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B170_0x36b170");
#endif

    switch (ctx->pc) {
        case 0x36b2d8u: goto label_36b2d8;
        case 0x36b3b4u: goto label_36b3b4;
        default: break;
    }

    ctx->pc = 0x36b170u;

    // 0x36b170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36b174: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x36b174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x36b178: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36b17c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x36b17cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b180: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36b184: 0x24a5ca60  addiu       $a1, $a1, -0x35A0
    ctx->pc = 0x36b184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953568));
    // 0x36b188: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x36b188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x36b18c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36b18cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b190: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x36b190u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36b194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36b194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b198: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x36b198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36b19c: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x36b19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36b1a0: 0x6889000f  ldl         $t1, 0xF($a0)
    ctx->pc = 0x36b1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x36b1a4: 0x6c890008  ldr         $t1, 0x8($a0)
    ctx->pc = 0x36b1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x36b1a8: 0x688b0017  ldl         $t3, 0x17($a0)
    ctx->pc = 0x36b1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x36b1ac: 0x6c8b0010  ldr         $t3, 0x10($a0)
    ctx->pc = 0x36b1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x36b1b0: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x36b1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b1b4: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x36b1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b1b8: 0xb049000f  sdl         $t1, 0xF($v0)
    ctx->pc = 0x36b1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b1bc: 0xb4490008  sdr         $t1, 0x8($v0)
    ctx->pc = 0x36b1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b1c0: 0xb04b0017  sdl         $t3, 0x17($v0)
    ctx->pc = 0x36b1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b1c4: 0xb44b0010  sdr         $t3, 0x10($v0)
    ctx->pc = 0x36b1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b1c8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x36b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36b1cc: 0x24697d90  addiu       $t1, $v1, 0x7D90
    ctx->pc = 0x36b1ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 32144));
    // 0x36b1d0: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x36b1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36b1d4: 0x688d001f  ldl         $t5, 0x1F($a0)
    ctx->pc = 0x36b1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x36b1d8: 0x6c8d0018  ldr         $t5, 0x18($a0)
    ctx->pc = 0x36b1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x36b1dc: 0x68830027  ldl         $v1, 0x27($a0)
    ctx->pc = 0x36b1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x36b1e0: 0x6c830020  ldr         $v1, 0x20($a0)
    ctx->pc = 0x36b1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x36b1e4: 0x688b002f  ldl         $t3, 0x2F($a0)
    ctx->pc = 0x36b1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x36b1e8: 0x6c8b0028  ldr         $t3, 0x28($a0)
    ctx->pc = 0x36b1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x36b1ec: 0xb04d001f  sdl         $t5, 0x1F($v0)
    ctx->pc = 0x36b1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b1f0: 0xb44d0018  sdr         $t5, 0x18($v0)
    ctx->pc = 0x36b1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b1f4: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x36b1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b1f8: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x36b1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b1fc: 0xb04b002f  sdl         $t3, 0x2F($v0)
    ctx->pc = 0x36b1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b200: 0xb44b0028  sdr         $t3, 0x28($v0)
    ctx->pc = 0x36b200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b204: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x36b204u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36b208: 0x688d0037  ldl         $t5, 0x37($a0)
    ctx->pc = 0x36b208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x36b20c: 0x6c8d0030  ldr         $t5, 0x30($a0)
    ctx->pc = 0x36b20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x36b210: 0x6882003f  ldl         $v0, 0x3F($a0)
    ctx->pc = 0x36b210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36b214: 0x6c820038  ldr         $v0, 0x38($a0)
    ctx->pc = 0x36b214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36b218: 0x688b0047  ldl         $t3, 0x47($a0)
    ctx->pc = 0x36b218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x36b21c: 0x6c8b0040  ldr         $t3, 0x40($a0)
    ctx->pc = 0x36b21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x36b220: 0xb06d0037  sdl         $t5, 0x37($v1)
    ctx->pc = 0x36b220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b224: 0xb46d0030  sdr         $t5, 0x30($v1)
    ctx->pc = 0x36b224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b228: 0xb062003f  sdl         $v0, 0x3F($v1)
    ctx->pc = 0x36b228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b22c: 0xb4620038  sdr         $v0, 0x38($v1)
    ctx->pc = 0x36b22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b230: 0xb06b0047  sdl         $t3, 0x47($v1)
    ctx->pc = 0x36b230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b234: 0xb46b0040  sdr         $t3, 0x40($v1)
    ctx->pc = 0x36b234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b238: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x36b238u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36b23c: 0x688d0007  ldl         $t5, 0x7($a0)
    ctx->pc = 0x36b23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x36b240: 0x6c8d0000  ldr         $t5, 0x0($a0)
    ctx->pc = 0x36b240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x36b244: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x36b244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x36b248: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x36b248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x36b24c: 0x688b0017  ldl         $t3, 0x17($a0)
    ctx->pc = 0x36b24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x36b250: 0x6c8b0010  ldr         $t3, 0x10($a0)
    ctx->pc = 0x36b250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x36b254: 0xb04d004f  sdl         $t5, 0x4F($v0)
    ctx->pc = 0x36b254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b258: 0xb44d0048  sdr         $t5, 0x48($v0)
    ctx->pc = 0x36b258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b25c: 0xb0430057  sdl         $v1, 0x57($v0)
    ctx->pc = 0x36b25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b260: 0xb4430050  sdr         $v1, 0x50($v0)
    ctx->pc = 0x36b260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b264: 0xb04b005f  sdl         $t3, 0x5F($v0)
    ctx->pc = 0x36b264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b268: 0xb44b0058  sdr         $t3, 0x58($v0)
    ctx->pc = 0x36b268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b26c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x36b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36b270: 0x688d0037  ldl         $t5, 0x37($a0)
    ctx->pc = 0x36b270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x36b274: 0x6c8d0030  ldr         $t5, 0x30($a0)
    ctx->pc = 0x36b274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x36b278: 0x6882003f  ldl         $v0, 0x3F($a0)
    ctx->pc = 0x36b278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36b27c: 0x6c820038  ldr         $v0, 0x38($a0)
    ctx->pc = 0x36b27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36b280: 0x688b0047  ldl         $t3, 0x47($a0)
    ctx->pc = 0x36b280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x36b284: 0x6c8b0040  ldr         $t3, 0x40($a0)
    ctx->pc = 0x36b284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x36b288: 0xb06d0067  sdl         $t5, 0x67($v1)
    ctx->pc = 0x36b288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b28c: 0xb46d0060  sdr         $t5, 0x60($v1)
    ctx->pc = 0x36b28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b290: 0xb062006f  sdl         $v0, 0x6F($v1)
    ctx->pc = 0x36b290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b294: 0xb4620068  sdr         $v0, 0x68($v1)
    ctx->pc = 0x36b294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b298: 0xb06b0077  sdl         $t3, 0x77($v1)
    ctx->pc = 0x36b298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b29c: 0xb46b0070  sdr         $t3, 0x70($v1)
    ctx->pc = 0x36b29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b2a0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x36b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36b2a4: 0x688d004f  ldl         $t5, 0x4F($a0)
    ctx->pc = 0x36b2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x36b2a8: 0x6c8d0048  ldr         $t5, 0x48($a0)
    ctx->pc = 0x36b2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x36b2ac: 0x68830057  ldl         $v1, 0x57($a0)
    ctx->pc = 0x36b2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x36b2b0: 0x6c830050  ldr         $v1, 0x50($a0)
    ctx->pc = 0x36b2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x36b2b4: 0x6885005f  ldl         $a1, 0x5F($a0)
    ctx->pc = 0x36b2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x36b2b8: 0x6c850058  ldr         $a1, 0x58($a0)
    ctx->pc = 0x36b2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x36b2bc: 0xb04d007f  sdl         $t5, 0x7F($v0)
    ctx->pc = 0x36b2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b2c0: 0xb44d0078  sdr         $t5, 0x78($v0)
    ctx->pc = 0x36b2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b2c4: 0xb0430087  sdl         $v1, 0x87($v0)
    ctx->pc = 0x36b2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b2c8: 0xb4430080  sdr         $v1, 0x80($v0)
    ctx->pc = 0x36b2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b2cc: 0xb045008f  sdl         $a1, 0x8F($v0)
    ctx->pc = 0x36b2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b2d0: 0xb4450088  sdr         $a1, 0x88($v0)
    ctx->pc = 0x36b2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36b2d4: 0x0  nop
    ctx->pc = 0x36b2d4u;
    // NOP
label_36b2d8:
    // 0x36b2d8: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x36b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x36b2dc: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x36b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x36b2e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x36b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36b2e4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x36b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36b2e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b2ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b2f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36b2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36b2f4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x36b2f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36b2f8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x36b2f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36b2fc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x36B2FCu;
    {
        const bool branch_taken_0x36b2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B2FCu;
        // 0x36b300: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b2fc) {
            ctx->pc = 0x36B32Cu;
            goto label_36b32c;
        }
    }
    ctx->pc = 0x36B304u;
    // 0x36b304: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36b304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b308: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x36b308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36b30c: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x36b30cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x36b310: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x36b310u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x36b314: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x36b314u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x36b318: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x36b318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36b31c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x36b31cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36b320: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x36b320u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36b324: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x36b324u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b328: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_36b32c:
    // 0x36b32c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36b32cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b330: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x36b330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36b334: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36b334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b338: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b33c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x36b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x36b340: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x36b340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x36b344: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36b344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b348: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36b348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36b34c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36b34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36b350: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x36b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x36b354: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36b354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b358: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x36b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36b35c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36b35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x36b360: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x36b360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x36b364: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36b364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b368: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36b36c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36b36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36b370: 0x501ffd9  bgez        $t0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x36B370u;
    {
        const bool branch_taken_0x36b370 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x36B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B370u;
        // 0x36b374: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b370) {
            ctx->pc = 0x36B2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b2d8;
        }
    }
    ctx->pc = 0x36B378u;
    // 0x36b378: 0x2550ca60  addiu       $s0, $t2, -0x35A0
    ctx->pc = 0x36b378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 4294953568));
    // 0x36b37c: 0x3c04aaaa  lui         $a0, 0xAAAA
    ctx->pc = 0x36b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43690 << 16));
    // 0x36b380: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x36b380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x36b384: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x36b384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x36b388: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x36b388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36b38c: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x36b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x36b390: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x36b390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x36b394: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x36b394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36b398: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x36b398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x36b39c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x36b39cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x36b3a0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x36b3a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x36b3a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36B3A4u;
    {
        const bool branch_taken_0x36b3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B3A4u;
        // 0x36b3a8: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b3a4) {
            ctx->pc = 0x36B3BCu;
            goto label_36b3bc;
        }
    }
    ctx->pc = 0x36B3ACu;
    // 0x36b3ac: 0xc0daa80  jal         func_36AA00
    ctx->pc = 0x36B3ACu;
    SET_GPR_U32(ctx, 31, 0x36B3B4u);
    ctx->pc = 0x36B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B3ACu;
    // 0x36b3b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AA00u, 0x36B3ACu, 0x36B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B3B4u;
label_36b3b4:
    // 0x36b3b4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x36b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36b3b8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x36b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_36b3bc:
    // 0x36b3bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36b3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b3c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36b3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x36B3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B3C4u;
        // 0x36b3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B3CCu;
    // 0x36b3cc: 0x0  nop
    ctx->pc = 0x36b3ccu;
    // NOP
    ctx->pc = 0x36b3d0u;
}
