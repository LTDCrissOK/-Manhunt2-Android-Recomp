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

// Function: sub_002A1090
// Address: 0x2a1090 - 0x2a11b0
void sub_002A1090_0x2a1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1090_0x2a1090");
#endif

    switch (ctx->pc) {
        case 0x2a10bcu: goto label_2a10bc;
        case 0x2a10ccu: goto label_2a10cc;
        case 0x2a1114u: goto label_2a1114;
        case 0x2a1194u: goto label_2a1194;
        default: break;
    }

    ctx->pc = 0x2a1090u;

    // 0x2a1090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a1090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a1094: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2a1094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a1098: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2a1098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2a109c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a109cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a10a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2a10a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2a10a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a10a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a10a8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2a10a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2a10ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a10acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a10b0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a10b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a10b4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2A10B4u;
    SET_GPR_U32(ctx, 31, 0x2A10BCu);
    ctx->pc = 0x2A10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10B4u;
    // 0x2a10b8: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2A10B4u, 0x2A10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10BCu;
label_2a10bc:
    // 0x2a10bc: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2a10bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2a10c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a10c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a10c4: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x2A10C4u;
    SET_GPR_U32(ctx, 31, 0x2A10CCu);
    ctx->pc = 0x2A10C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10C4u;
    // 0x2a10c8: 0x24a51868  addiu       $a1, $a1, 0x1868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x2A10C4u, 0x2A10CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10CCu;
label_2a10cc:
    // 0x2a10cc: 0xae62a978  sw          $v0, -0x5688($s3)
    ctx->pc = 0x2a10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294945144), GPR_U32(ctx, 2));
    // 0x2a10d0: 0x8a220017  lwl         $v0, 0x17($s1)
    ctx->pc = 0x2a10d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2a10d4: 0x9a220014  lwr         $v0, 0x14($s1)
    ctx->pc = 0x2a10d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2a10d8: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x2a10d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a10dc: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x2a10dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a10e0: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A10E0u;
    {
        const bool branch_taken_0x2a10e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10E0u;
        // 0x2a10e4: 0x93a20003  lbu         $v0, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10e0) {
            ctx->pc = 0x2A1144u;
            goto label_2a1144;
        }
    }
    ctx->pc = 0x2A10E8u;
    // 0x2a10e8: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2a10e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2a10ec: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2a10ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2a10f0: 0xaba20023  swl         $v0, 0x23($sp)
    ctx->pc = 0x2a10f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a10f4: 0xbba20020  swr         $v0, 0x20($sp)
    ctx->pc = 0x2a10f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a10f8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2a10f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2a10fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1100: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a1100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a1104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1108: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2a1108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a110c: 0xc0a83ba  jal         func_2A0EE8
    ctx->pc = 0x2A110Cu;
    SET_GPR_U32(ctx, 31, 0x2A1114u);
    ctx->pc = 0x2A1110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A110Cu;
    // 0x2a1110: 0xa22824  and         $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0EE8u, 0x2A110Cu, 0x2A1114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1114u;
label_2a1114:
    // 0x2a1114: 0x22e3a  dsrl        $a1, $v0, 24
    ctx->pc = 0x2a1114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 24);
    // 0x2a1118: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2a1118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2a111c: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x2a111cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x2a1120: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x2a1120u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1124: 0xa3a40012  sb          $a0, 0x12($sp)
    ctx->pc = 0x2a1124u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1128: 0xa3a50013  sb          $a1, 0x13($sp)
    ctx->pc = 0x2a1128u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a112c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x2a112cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a1130: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x2a1130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2a1134: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x2a1134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2a1138: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x2a1138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a113c: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x2a113cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a1140: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x2a1140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_2a1144:
    // 0x2a1144: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2a1144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2a1148: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2a1148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a114c: 0x24641860  addiu       $a0, $v1, 0x1860
    ctx->pc = 0x2a114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6240));
    // 0x2a1150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1154: 0x0  nop
    ctx->pc = 0x2a1154u;
    // NOP
    // 0x2a1158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a1158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a115c: 0xc48f0004  lwc1        $f15, 0x4($a0)
    ctx->pc = 0x2a115cu;
    { uint32_t bits = FAST_READ32(0x4C1864u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a1160: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x2a1160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a1164: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a1164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1168: 0x8e68a978  lw          $t0, -0x5688($s3)
    ctx->pc = 0x2a1168u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945144)));
    // 0x2a116c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a116cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a1170: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2a1170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1174: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x2a1174u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2a1178: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x2a1178u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2a117c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a117cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a1180: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2a1180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2a1184: 0xc46e1860  lwc1        $f14, 0x1860($v1)
    ctx->pc = 0x2a1184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a1188: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x2a1188u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a118c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2A118Cu;
    SET_GPR_U32(ctx, 31, 0x2A1194u);
    ctx->pc = 0x2A1190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A118Cu;
    // 0x2a1190: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2A118Cu, 0x2A1194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1194u;
label_2a1194:
    // 0x2a1194: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2a1194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1198: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2a1198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a119c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2a119cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a11a0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2a11a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a11a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a11a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a11a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A11A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11A8u;
        // 0x2a11ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A11A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A11B0u;
}
