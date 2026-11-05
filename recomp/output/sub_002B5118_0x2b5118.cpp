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

// Function: sub_002B5118
// Address: 0x2b5118 - 0x2b5468
void sub_002B5118_0x2b5118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5118_0x2b5118");
#endif

    switch (ctx->pc) {
        case 0x2b5158u: goto label_2b5158;
        case 0x2b5348u: goto label_2b5348;
        case 0x2b5368u: goto label_2b5368;
        case 0x2b5384u: goto label_2b5384;
        case 0x2b539cu: goto label_2b539c;
        case 0x2b53a8u: goto label_2b53a8;
        case 0x2b53b0u: goto label_2b53b0;
        case 0x2b53bcu: goto label_2b53bc;
        case 0x2b53c8u: goto label_2b53c8;
        case 0x2b53e0u: goto label_2b53e0;
        case 0x2b53f0u: goto label_2b53f0;
        case 0x2b53fcu: goto label_2b53fc;
        case 0x2b5408u: goto label_2b5408;
        case 0x2b5414u: goto label_2b5414;
        case 0x2b541cu: goto label_2b541c;
        case 0x2b542cu: goto label_2b542c;
        default: break;
    }

    ctx->pc = 0x2b5118u;

    // 0x2b5118: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b5118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b511c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2b511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2b5120: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2b5120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2b5124: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b5124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5128: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2b5128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2b512c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b512cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5130: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2b5130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2b5134: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b5134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5138: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2b5138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2b513c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x2b513cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b5140: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2b5140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2b5144: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2b5144u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5148: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2b5148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2b514c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2b514cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2b5150: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x2b5150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b5154: 0x0  nop
    ctx->pc = 0x2b5154u;
    // NOP
label_2b5158:
    // 0x2b5158: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x2b5158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b515c: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x2b515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b5160: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2b5160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2b5164: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b5164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b5168: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2B5168u;
    {
        const bool branch_taken_0x2b5168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5168u;
        // 0x2b516c: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5168) {
            ctx->pc = 0x2B538Cu;
            goto label_2b538c;
        }
    }
    ctx->pc = 0x2B5170u;
    // 0x2b5170: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2b5170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2b5174: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2b5174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b5178: 0x8443a  dsrl        $t0, $t0, 16
    ctx->pc = 0x2b5178u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 16);
    // 0x2b517c: 0x6882011f  ldl         $v0, 0x11F($a0)
    ctx->pc = 0x2b517cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b5180: 0x6c820118  ldr         $v0, 0x118($a0)
    ctx->pc = 0x2b5180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b5184: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x2b5184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5188: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x2b5188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b518c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b518cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b5190: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2b5190u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2b5194: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x2b5194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x2b5198: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2b5198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2b519c: 0x97a50060  lhu         $a1, 0x60($sp)
    ctx->pc = 0x2b519cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b51a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2b51a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b51a4: 0x97a20062  lhu         $v0, 0x62($sp)
    ctx->pc = 0x2b51a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 98)));
    // 0x2b51a8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2b51a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2b51ac: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x2b51acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x2b51b0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2b51b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2b51b4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2b51b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2b51b8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2b51b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2b51bc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2b51bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2b51c0: 0x97a40064  lhu         $a0, 0x64($sp)
    ctx->pc = 0x2b51c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2b51c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b51c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2b51c8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2b51c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2b51cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b51ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b51d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2b51d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b51d4: 0x97a20066  lhu         $v0, 0x66($sp)
    ctx->pc = 0x2b51d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 102)));
    // 0x2b51d8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x2b51d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2b51dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b51dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b51e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b51e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b51e4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x2b51e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2b51e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b51e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b51ec: 0x3143a  dsrl        $v0, $v1, 16
    ctx->pc = 0x2b51ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 16);
    // 0x2b51f0: 0x3203e  dsrl32      $a0, $v1, 0
    ctx->pc = 0x2b51f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2b51f4: 0x32c3e  dsrl32      $a1, $v1, 16
    ctx->pc = 0x2b51f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> (32 + 16));
    // 0x2b51f8: 0xa7a20062  sh          $v0, 0x62($sp)
    ctx->pc = 0x2b51f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b51fc: 0xa7a40064  sh          $a0, 0x64($sp)
    ctx->pc = 0x2b51fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b5200: 0xa7a30060  sh          $v1, 0x60($sp)
    ctx->pc = 0x2b5200u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b5204: 0xa7a50066  sh          $a1, 0x66($sp)
    ctx->pc = 0x2b5204u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 102), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b5208: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x2b5208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b520c: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x2b520cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b5210: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x2b5210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5214: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x2b5214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5218: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x2b5218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b521c: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x2b521cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b5220: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2b5220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5224: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2b5224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5228: 0x93a20005  lbu         $v0, 0x5($sp)
    ctx->pc = 0x2b5228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x2b522c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2b522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b5230: 0x2c83000c  sltiu       $v1, $a0, 0xC
    ctx->pc = 0x2b5230u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2b5234: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2B5234u;
    {
        const bool branch_taken_0x2b5234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5234u;
        // 0x2b5238: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5234) {
            ctx->pc = 0x2B534Cu;
            goto label_2b534c;
        }
    }
    ctx->pc = 0x2B523Cu;
    // 0x2b523c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b523cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5240: 0x2442f9e0  addiu       $v0, $v0, -0x620
    ctx->pc = 0x2b5240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x2b5244: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b5244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b5248: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b5248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b524c: 0x800008  jr          $a0
    ctx->pc = 0x2B524Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5254u: goto label_2b5254;
            case 0x2B5268u: goto label_2b5268;
            case 0x2B527Cu: goto label_2b527c;
            case 0x2B5290u: goto label_2b5290;
            case 0x2B52A4u: goto label_2b52a4;
            case 0x2B52B8u: goto label_2b52b8;
            case 0x2B52CCu: goto label_2b52cc;
            case 0x2B52E0u: goto label_2b52e0;
            case 0x2B52F4u: goto label_2b52f4;
            case 0x2B5308u: goto label_2b5308;
            case 0x2B531Cu: goto label_2b531c;
            case 0x2B5330u: goto label_2b5330;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B524Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B5254u;
label_2b5254:
    // 0x2b5254: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b5254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b5258: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b5258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b525c: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b5260: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2B5260u;
    {
        const bool branch_taken_0x2b5260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5260u;
        // 0x2b5264: 0x24a5f958  addiu       $a1, $a1, -0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5260) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B5268u;
label_2b5268:
    // 0x2b5268: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b5268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b526c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b526cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b5270: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b5270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b5274: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2B5274u;
    {
        const bool branch_taken_0x2b5274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5274u;
        // 0x2b5278: 0x24a5f960  addiu       $a1, $a1, -0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5274) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B527Cu;
label_2b527c:
    // 0x2b527c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b527cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b5280: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b5280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b5284: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b5284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b5288: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2B5288u;
    {
        const bool branch_taken_0x2b5288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5288u;
        // 0x2b528c: 0x24a5f968  addiu       $a1, $a1, -0x698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5288) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B5290u;
label_2b5290:
    // 0x2b5290: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b5290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b5294: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b5294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b5298: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b5298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b529c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2B529Cu;
    {
        const bool branch_taken_0x2b529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B529Cu;
        // 0x2b52a0: 0x24a5f970  addiu       $a1, $a1, -0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b529c) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B52A4u;
label_2b52a4:
    // 0x2b52a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b52a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b52a8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b52a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b52ac: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b52acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b52b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2B52B0u;
    {
        const bool branch_taken_0x2b52b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52B0u;
        // 0x2b52b4: 0x24a5f978  addiu       $a1, $a1, -0x688 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52b0) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B52B8u;
label_2b52b8:
    // 0x2b52b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b52b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b52bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b52bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b52c0: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b52c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b52c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B52C4u;
    {
        const bool branch_taken_0x2b52c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52C4u;
        // 0x2b52c8: 0x24a5f980  addiu       $a1, $a1, -0x680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52c4) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B52CCu;
label_2b52cc:
    // 0x2b52cc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b52ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b52d0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b52d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b52d4: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b52d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b52d8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B52D8u;
    {
        const bool branch_taken_0x2b52d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52D8u;
        // 0x2b52dc: 0x24a5f988  addiu       $a1, $a1, -0x678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52d8) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B52E0u;
label_2b52e0:
    // 0x2b52e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b52e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b52e4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b52e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b52e8: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b52e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b52ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B52ECu;
    {
        const bool branch_taken_0x2b52ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52ECu;
        // 0x2b52f0: 0x24a5f990  addiu       $a1, $a1, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52ec) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B52F4u;
label_2b52f4:
    // 0x2b52f4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b52f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b52f8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b52f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b52fc: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b52fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b5300: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B5300u;
    {
        const bool branch_taken_0x2b5300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5300u;
        // 0x2b5304: 0x24a5f998  addiu       $a1, $a1, -0x668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5300) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B5308u;
label_2b5308:
    // 0x2b5308: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b5308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b530c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b530cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b5310: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b5310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b5314: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B5314u;
    {
        const bool branch_taken_0x2b5314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5314u;
        // 0x2b5318: 0x24a5f9a0  addiu       $a1, $a1, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5314) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B531Cu;
label_2b531c:
    // 0x2b531c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b531cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b5320: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b5320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b5324: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b5324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b5328: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5328u;
    {
        const bool branch_taken_0x2b5328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5328u;
        // 0x2b532c: 0x24a5f9a8  addiu       $a1, $a1, -0x658 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5328) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B5330u;
label_2b5330:
    // 0x2b5330: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b5330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b5334: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b5334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b5338: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2b5338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2b533c: 0x24a5f9b0  addiu       $a1, $a1, -0x650
    ctx->pc = 0x2b533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965680));
label_2b5340:
    // 0x2b5340: 0xc0aebbc  jal         func_2BAEF0
    ctx->pc = 0x2B5340u;
    SET_GPR_U32(ctx, 31, 0x2B5348u);
    ctx->pc = 0x2B5344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5340u;
    // 0x2b5344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAEF0u, 0x2B5340u, 0x2B5348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5348u;
label_2b5348:
    // 0x2b5348: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b5348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b534c:
    // 0x2b534c: 0x93a60004  lbu         $a2, 0x4($sp)
    ctx->pc = 0x2b534cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b5350: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b5350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b5354: 0x97a80006  lhu         $t0, 0x6($sp)
    ctx->pc = 0x2b5354u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x2b5358: 0x24a5f9b8  addiu       $a1, $a1, -0x648
    ctx->pc = 0x2b5358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965688));
    // 0x2b535c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5360: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2B5360u;
    SET_GPR_U32(ctx, 31, 0x2B5368u);
    ctx->pc = 0x2B5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5360u;
    // 0x2b5364: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2B5360u, 0x2B5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5368u;
label_2b5368:
    // 0x2b5368: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b5368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b536c: 0x93a60003  lbu         $a2, 0x3($sp)
    ctx->pc = 0x2b536cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2b5370: 0x93a70002  lbu         $a3, 0x2($sp)
    ctx->pc = 0x2b5370u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b5374: 0x24a5f9c8  addiu       $a1, $a1, -0x638
    ctx->pc = 0x2b5374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965704));
    // 0x2b5378: 0x93a80001  lbu         $t0, 0x1($sp)
    ctx->pc = 0x2b5378u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2b537c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2B537Cu;
    SET_GPR_U32(ctx, 31, 0x2B5384u);
    ctx->pc = 0x2B5380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B537Cu;
    // 0x2b5380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2B537Cu, 0x2B5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5384u;
label_2b5384:
    // 0x2b5384: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5384u;
    {
        const bool branch_taken_0x2b5384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5384) {
            ctx->pc = 0x2B53A8u;
            goto label_2b53a8;
        }
    }
    ctx->pc = 0x2B538Cu;
label_2b538c:
    // 0x2b538c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b538cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5390: 0x2610fb18  addiu       $s0, $s0, -0x4E8
    ctx->pc = 0x2b5390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966040));
    // 0x2b5394: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2B5394u;
    SET_GPR_U32(ctx, 31, 0x2B539Cu);
    ctx->pc = 0x2B5398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5394u;
    // 0x2b5398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2B5394u, 0x2B539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B539Cu;
label_2b539c:
    // 0x2b539c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b539cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53a0: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2B53A0u;
    SET_GPR_U32(ctx, 31, 0x2B53A8u);
    ctx->pc = 0x2B53A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53A0u;
    // 0x2b53a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2B53A0u, 0x2B53A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53A8u;
label_2b53a8:
    // 0x2b53a8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2B53A8u;
    SET_GPR_U32(ctx, 31, 0x2B53B0u);
    ctx->pc = 0x2B53ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53A8u;
    // 0x2b53ac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2B53A8u, 0x2B53B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53B0u;
label_2b53b0:
    // 0x2b53b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2b53b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b53b4: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2B53B4u;
    SET_GPR_U32(ctx, 31, 0x2B53BCu);
    ctx->pc = 0x2B53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53B4u;
    // 0x2b53b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB670u, 0x2B53B4u, 0x2B53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53BCu;
label_2b53bc:
    // 0x2b53bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b53bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53c0: 0xc0aedbe  jal         func_2BB6F8
    ctx->pc = 0x2B53C0u;
    SET_GPR_U32(ctx, 31, 0x2B53C8u);
    ctx->pc = 0x2B53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53C0u;
    // 0x2b53c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6F8u, 0x2B53C0u, 0x2B53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53C8u;
label_2b53c8:
    // 0x2b53c8: 0x24110110  addiu       $s1, $zero, 0x110
    ctx->pc = 0x2b53c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b53cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b53ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53d0: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x2b53d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b53d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b53d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b53d8: 0xc0aedb0  jal         func_2BB6C0
    ctx->pc = 0x2B53D8u;
    SET_GPR_U32(ctx, 31, 0x2B53E0u);
    ctx->pc = 0x2B53DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53D8u;
    // 0x2b53dc: 0x548821  addu        $s1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6C0u, 0x2B53D8u, 0x2B53E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53E0u;
label_2b53e0:
    // 0x2b53e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b53e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b53e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53e8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2B53E8u;
    SET_GPR_U32(ctx, 31, 0x2B53F0u);
    ctx->pc = 0x2B53ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53E8u;
    // 0x2b53ec: 0x262400c8  addiu       $a0, $s1, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2B53E8u, 0x2B53F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53F0u;
label_2b53f0:
    // 0x2b53f0: 0x263100f0  addiu       $s1, $s1, 0xF0
    ctx->pc = 0x2b53f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2b53f4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2B53F4u;
    SET_GPR_U32(ctx, 31, 0x2B53FCu);
    ctx->pc = 0x2B53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53F4u;
    // 0x2b53f8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2B53F4u, 0x2B53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53FCu;
label_2b53fc:
    // 0x2b53fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2b53fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b5400: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2B5400u;
    SET_GPR_U32(ctx, 31, 0x2B5408u);
    ctx->pc = 0x2B5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5400u;
    // 0x2b5404: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB670u, 0x2B5400u, 0x2B5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5408u;
label_2b5408:
    // 0x2b5408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b540c: 0xc0aedbe  jal         func_2BB6F8
    ctx->pc = 0x2B540Cu;
    SET_GPR_U32(ctx, 31, 0x2B5414u);
    ctx->pc = 0x2B5410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B540Cu;
    // 0x2b5410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6F8u, 0x2B540Cu, 0x2B5414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5414u;
label_2b5414:
    // 0x2b5414: 0xc0aedb0  jal         func_2BB6C0
    ctx->pc = 0x2B5414u;
    SET_GPR_U32(ctx, 31, 0x2B541Cu);
    ctx->pc = 0x2B5418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5414u;
    // 0x2b5418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6C0u, 0x2B5414u, 0x2B541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B541Cu;
label_2b541c:
    // 0x2b541c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b5420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5424: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2B5424u;
    SET_GPR_U32(ctx, 31, 0x2B542Cu);
    ctx->pc = 0x2B5428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5424u;
    // 0x2b5428: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2B5424u, 0x2B542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B542Cu;
label_2b542c:
    // 0x2b542c: 0x2e630008  sltiu       $v1, $s3, 0x8
    ctx->pc = 0x2b542cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b5430: 0x1460ff49  bnez        $v1, . + 4 + (-0xB7 << 2)
    ctx->pc = 0x2B5430u;
    {
        const bool branch_taken_0x2b5430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5430u;
        // 0x2b5434: 0x24020110  addiu       $v0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5430) {
            ctx->pc = 0x2B5158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5158;
        }
    }
    ctx->pc = 0x2B5438u;
    // 0x2b5438: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2b5438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b543c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2b543cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2b5440: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2b5440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b5444: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2b5444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2b5448: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2b5448u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b544c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2b544cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2b5450: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2b5450u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b5454: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2b5454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2b5458: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5458u;
        // 0x2b545c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5460u;
    // 0x2b5460: 0x0  nop
    ctx->pc = 0x2b5460u;
    // NOP
    // 0x2b5464: 0x0  nop
    ctx->pc = 0x2b5464u;
    // NOP
    ctx->pc = 0x2b5468u;
}
