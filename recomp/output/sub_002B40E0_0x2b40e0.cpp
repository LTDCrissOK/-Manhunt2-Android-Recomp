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

// Function: sub_002B40E0
// Address: 0x2b40e0 - 0x2b42f8
void sub_002B40E0_0x2b40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B40E0_0x2b40e0");
#endif

    switch (ctx->pc) {
        case 0x2b4138u: goto label_2b4138;
        case 0x2b41a8u: goto label_2b41a8;
        case 0x2b4224u: goto label_2b4224;
        case 0x2b423cu: goto label_2b423c;
        case 0x2b424cu: goto label_2b424c;
        case 0x2b425cu: goto label_2b425c;
        case 0x2b426cu: goto label_2b426c;
        case 0x2b4280u: goto label_2b4280;
        case 0x2b42a4u: goto label_2b42a4;
        case 0x2b42bcu: goto label_2b42bc;
        case 0x2b42d0u: goto label_2b42d0;
        default: break;
    }

    ctx->pc = 0x2b40e0u;

    // 0x2b40e0: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x2b40e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x2b40e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b40e8: 0xffb20490  sd          $s2, 0x490($sp)
    ctx->pc = 0x2b40e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 18));
    // 0x2b40ec: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2b40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2b40f0: 0xffb00480  sd          $s0, 0x480($sp)
    ctx->pc = 0x2b40f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 16));
    // 0x2b40f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b40f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40f8: 0xffb30498  sd          $s3, 0x498($sp)
    ctx->pc = 0x2b40f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1176), GPR_U64(ctx, 19));
    // 0x2b40fc: 0xffb10488  sd          $s1, 0x488($sp)
    ctx->pc = 0x2b40fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1160), GPR_U64(ctx, 17));
    // 0x2b4100: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x2b4100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
    // 0x2b4104: 0x8c47cba8  lw          $a3, -0x3458($v0)
    ctx->pc = 0x2b4104u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FCBA8u));
    // 0x2b4108: 0x2466f8d0  addiu       $a2, $v1, -0x730
    ctx->pc = 0x2b4108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965456));
    // 0x2b410c: 0x88c20003  lwl         $v0, 0x3($a2)
    ctx->pc = 0x2b410cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2b4110: 0x98c20000  lwr         $v0, 0x0($a2)
    ctx->pc = 0x2b4110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2b4114: 0x80c40004  lb          $a0, 0x4($a2)
    ctx->pc = 0x2b4114u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x46F8D4u));
    // 0x2b4118: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x2b4118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2b411c: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x2b411cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2b4120: 0xa3a40004  sb          $a0, 0x4($sp)
    ctx->pc = 0x2b4120u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4124: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x2b4124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x2b4128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b412c: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x2b412cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b4130: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2B4130u;
    SET_GPR_U32(ctx, 31, 0x2B4138u);
    ctx->pc = 0x2B4134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4130u;
    // 0x2b4134: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2B4130u, 0x2B4138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4138u;
label_2b4138:
    // 0x2b4138: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2b4138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2b413c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2b413cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2b4140: 0x2442f8e0  addiu       $v0, $v0, -0x720
    ctx->pc = 0x2b4140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965472));
    // 0x2b4144: 0x2463f910  addiu       $v1, $v1, -0x6F0
    ctx->pc = 0x2b4144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965520));
    // 0x2b4148: 0x784b0020  lq          $t3, 0x20($v0)
    ctx->pc = 0x2b4148u;
    SET_GPR_VEC(ctx, 11, FAST_READ128(0x46F900u));
    // 0x2b414c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2b414cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4150: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x2b4150u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x46F8E0u));
    // 0x2b4154: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2b4154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b4158: 0x78480010  lq          $t0, 0x10($v0)
    ctx->pc = 0x2b4158u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x46F8F0u));
    // 0x2b415c: 0x240603c4  addiu       $a2, $zero, 0x3C4
    ctx->pc = 0x2b415cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x2b4160: 0x786c0020  lq          $t4, 0x20($v1)
    ctx->pc = 0x2b4160u;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x46F930u));
    // 0x2b4164: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b4164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4168: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x2b4168u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x46F910u));
    // 0x2b416c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b416cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4170: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x2b4170u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x46F920u));
    // 0x2b4174: 0xafa70418  sw          $a3, 0x418($sp)
    ctx->pc = 0x2b4174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1048), GPR_U32(ctx, 7));
    // 0x2b4178: 0x7faa0420  sq          $t2, 0x420($sp)
    ctx->pc = 0x2b4178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 10));
    // 0x2b417c: 0x7fa80430  sq          $t0, 0x430($sp)
    ctx->pc = 0x2b417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 8));
    // 0x2b4180: 0x7fab0440  sq          $t3, 0x440($sp)
    ctx->pc = 0x2b4180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 11));
    // 0x2b4184: 0x7fa90450  sq          $t1, 0x450($sp)
    ctx->pc = 0x2b4184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 9));
    // 0x2b4188: 0x7fac0470  sq          $t4, 0x470($sp)
    ctx->pc = 0x2b4188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 12));
    // 0x2b418c: 0xafa703e0  sw          $a3, 0x3E0($sp)
    ctx->pc = 0x2b418cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 7));
    // 0x2b4190: 0xafa703f4  sw          $a3, 0x3F4($sp)
    ctx->pc = 0x2b4190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1012), GPR_U32(ctx, 7));
    // 0x2b4194: 0xafa70408  sw          $a3, 0x408($sp)
    ctx->pc = 0x2b4194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 7));
    // 0x2b4198: 0xafa70410  sw          $a3, 0x410($sp)
    ctx->pc = 0x2b4198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 7));
    // 0x2b419c: 0xafa70414  sw          $a3, 0x414($sp)
    ctx->pc = 0x2b419cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 7));
    // 0x2b41a0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2B41A0u;
    SET_GPR_U32(ctx, 31, 0x2B41A8u);
    ctx->pc = 0x2B41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41A0u;
    // 0x2b41a4: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2B41A0u, 0x2B41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41A8u;
label_2b41a8:
    // 0x2b41a8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b41ac: 0x7ba60420  lq          $a2, 0x420($sp)
    ctx->pc = 0x2b41acu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2b41b0: 0x2463acd0  addiu       $v1, $v1, -0x5330
    ctx->pc = 0x2b41b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946000));
    // 0x2b41b4: 0x7bad03e0  lq          $t5, 0x3E0($sp)
    ctx->pc = 0x2b41b4u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x2b41b8: 0x786e0000  lq          $t6, 0x0($v1)
    ctx->pc = 0x2b41b8u;
    SET_GPR_VEC(ctx, 14, FAST_READ128(0x3FACD0u));
    // 0x2b41bc: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x2b41bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b41c0: 0x7bac03f0  lq          $t4, 0x3F0($sp)
    ctx->pc = 0x2b41c0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x2b41c4: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x2b41c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b41c8: 0x7bab0400  lq          $t3, 0x400($sp)
    ctx->pc = 0x2b41c8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2b41cc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2b41ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b41d0: 0x7baa0410  lq          $t2, 0x410($sp)
    ctx->pc = 0x2b41d0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2b41d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b41d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41d8: 0x7ba90450  lq          $t1, 0x450($sp)
    ctx->pc = 0x2b41d8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2b41dc: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x2b41dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2b41e0: 0x7ba30470  lq          $v1, 0x470($sp)
    ctx->pc = 0x2b41e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2b41e4: 0x7ba70430  lq          $a3, 0x430($sp)
    ctx->pc = 0x2b41e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2b41e8: 0x7ba80440  lq          $t0, 0x440($sp)
    ctx->pc = 0x2b41e8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2b41ec: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x2b41ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x2b41f0: 0xa7b00016  sh          $s0, 0x16($sp)
    ctx->pc = 0x2b41f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 16));
    // 0x2b41f4: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x2b41f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
    // 0x2b41f8: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x2b41f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
    // 0x2b41fc: 0x7fab0040  sq          $t3, 0x40($sp)
    ctx->pc = 0x2b41fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 11));
    // 0x2b4200: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x2b4200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
    // 0x2b4204: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x2b4204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x2b4208: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2b4208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2b420c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2b420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x2b4210: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x2b4210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
    // 0x2b4214: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x2b4214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x2b4218: 0x7fae00c0  sq          $t6, 0xC0($sp)
    ctx->pc = 0x2b4218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 14));
    // 0x2b421c: 0xc0ad578  jal         func_2B55E0
    ctx->pc = 0x2B421Cu;
    SET_GPR_U32(ctx, 31, 0x2B4224u);
    ctx->pc = 0x2B4220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B421Cu;
    // 0x2b4220: 0xafaf001c  sw          $t7, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B55E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B55E0u, 0x2B421Cu, 0x2B4224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4224u;
label_2b4224:
    // 0x2b4224: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2b4224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2b4228: 0x27a40114  addiu       $a0, $sp, 0x114
    ctx->pc = 0x2b4228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x2b422c: 0x2610ac30  addiu       $s0, $s0, -0x53D0
    ctx->pc = 0x2b422cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945840));
    // 0x2b4230: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x2b4230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2b4234: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x2B4234u;
    SET_GPR_U32(ctx, 31, 0x2B423Cu);
    ctx->pc = 0x2B4238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4234u;
    // 0x2b4238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x2B4234u, 0x2B423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B423Cu;
label_2b423c:
    // 0x2b423c: 0x27a40154  addiu       $a0, $sp, 0x154
    ctx->pc = 0x2b423cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x2b4240: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2b4240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b4244: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x2B4244u;
    SET_GPR_U32(ctx, 31, 0x2B424Cu);
    ctx->pc = 0x2B4248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4244u;
    // 0x2b4248: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x2B4244u, 0x2B424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B424Cu;
label_2b424c:
    // 0x2b424c: 0x27a40194  addiu       $a0, $sp, 0x194
    ctx->pc = 0x2b424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2b4250: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x2b4250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b4254: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x2B4254u;
    SET_GPR_U32(ctx, 31, 0x2B425Cu);
    ctx->pc = 0x2B4258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4254u;
    // 0x2b4258: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x2B4254u, 0x2B425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B425Cu;
label_2b425c:
    // 0x2b425c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b425cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4260: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b4260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4264: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x2B4264u;
    SET_GPR_U32(ctx, 31, 0x2B426Cu);
    ctx->pc = 0x2B4268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4264u;
    // 0x2b4268: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x2B4264u, 0x2B426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B426Cu;
label_2b426c:
    // 0x2b426c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b426cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b4270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b4270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4274: 0x24a5f8b0  addiu       $a1, $a1, -0x750
    ctx->pc = 0x2b4274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
    // 0x2b4278: 0xc0ad114  jal         func_2B4450
    ctx->pc = 0x2B4278u;
    SET_GPR_U32(ctx, 31, 0x2B4280u);
    ctx->pc = 0x2B427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4278u;
    // 0x2b427c: 0x24060203  addiu       $a2, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4450u, 0x2B4278u, 0x2B4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4280u;
label_2b4280:
    // 0x2b4280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4284: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2b4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b4288: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B4288u;
    {
        const bool branch_taken_0x2b4288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4288u;
        // 0x2b428c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4288) {
            ctx->pc = 0x2B42D8u;
            goto label_2b42d8;
        }
    }
    ctx->pc = 0x2B4290u;
    // 0x2b4290: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b4290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b4294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b429c: 0xc0ad184  jal         func_2B4610
    ctx->pc = 0x2B429Cu;
    SET_GPR_U32(ctx, 31, 0x2B42A4u);
    ctx->pc = 0x2B42A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B429Cu;
    // 0x2b42a0: 0x240703c4  addiu       $a3, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4610u, 0x2B429Cu, 0x2B42A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B42A4u;
label_2b42a4:
    // 0x2b42a4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2b42a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b42a8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B42A8u;
    {
        const bool branch_taken_0x2b42a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42A8u;
        // 0x2b42ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42a8) {
            ctx->pc = 0x2B42D8u;
            goto label_2b42d8;
        }
    }
    ctx->pc = 0x2B42B0u;
    // 0x2b42b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b42b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b42b4: 0xc0ad164  jal         func_2B4590
    ctx->pc = 0x2B42B4u;
    SET_GPR_U32(ctx, 31, 0x2B42BCu);
    ctx->pc = 0x2B42B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B42B4u;
    // 0x2b42b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4590u, 0x2B42B4u, 0x2B42BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B42BCu;
label_2b42bc:
    // 0x2b42bc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2b42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b42c0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B42C0u;
    {
        const bool branch_taken_0x2b42c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b42c0) {
            ctx->pc = 0x2B42C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B42C0u;
            // 0x2b42c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B42D8u;
            goto label_2b42d8;
        }
    }
    ctx->pc = 0x2B42C8u;
    // 0x2b42c8: 0xc0ad0be  jal         func_2B42F8
    ctx->pc = 0x2B42C8u;
    SET_GPR_U32(ctx, 31, 0x2B42D0u);
    ctx->pc = 0x2B42CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B42C8u;
    // 0x2b42cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42F8u, 0x2B42C8u, 0x2B42D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B42D0u;
label_2b42d0:
    // 0x2b42d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b42d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b42d4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b42d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b42d8:
    // 0x2b42d8: 0xdfb00480  ld          $s0, 0x480($sp)
    ctx->pc = 0x2b42d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2b42dc: 0xdfb10488  ld          $s1, 0x488($sp)
    ctx->pc = 0x2b42dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1160)));
    // 0x2b42e0: 0xdfb20490  ld          $s2, 0x490($sp)
    ctx->pc = 0x2b42e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2b42e4: 0xdfb30498  ld          $s3, 0x498($sp)
    ctx->pc = 0x2b42e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x2b42e8: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x2b42e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2b42ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B42ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42ECu;
        // 0x2b42f0: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B42ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B42F4u;
    // 0x2b42f4: 0x0  nop
    ctx->pc = 0x2b42f4u;
    // NOP
    ctx->pc = 0x2b42f8u;
}
