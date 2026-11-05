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

// Function: sub_002E6338
// Address: 0x2e6338 - 0x2e6da8
void sub_002E6338_0x2e6338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6338_0x2e6338");
#endif

    switch (ctx->pc) {
        case 0x2e6388u: goto label_2e6388;
        case 0x2e6390u: goto label_2e6390;
        case 0x2e6398u: goto label_2e6398;
        case 0x2e63a0u: goto label_2e63a0;
        case 0x2e6400u: goto label_2e6400;
        case 0x2e6408u: goto label_2e6408;
        case 0x2e6464u: goto label_2e6464;
        case 0x2e6478u: goto label_2e6478;
        case 0x2e6480u: goto label_2e6480;
        case 0x2e6488u: goto label_2e6488;
        case 0x2e6608u: goto label_2e6608;
        case 0x2e6610u: goto label_2e6610;
        case 0x2e66e8u: goto label_2e66e8;
        case 0x2e6700u: goto label_2e6700;
        case 0x2e670cu: goto label_2e670c;
        case 0x2e680cu: goto label_2e680c;
        case 0x2e6814u: goto label_2e6814;
        case 0x2e68d0u: goto label_2e68d0;
        case 0x2e68f4u: goto label_2e68f4;
        case 0x2e6900u: goto label_2e6900;
        case 0x2e69b8u: goto label_2e69b8;
        case 0x2e69d0u: goto label_2e69d0;
        case 0x2e69e8u: goto label_2e69e8;
        case 0x2e69f0u: goto label_2e69f0;
        case 0x2e6aecu: goto label_2e6aec;
        case 0x2e6af4u: goto label_2e6af4;
        case 0x2e6bc0u: goto label_2e6bc0;
        case 0x2e6bdcu: goto label_2e6bdc;
        case 0x2e6d00u: goto label_2e6d00;
        case 0x2e6d18u: goto label_2e6d18;
        case 0x2e6d30u: goto label_2e6d30;
        case 0x2e6d4cu: goto label_2e6d4c;
        default: break;
    }

    ctx->pc = 0x2e6338u;

    // 0x2e6338: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x2e6338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x2e633c: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x2e633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
    // 0x2e6340: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e6340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6344: 0xffb002a0  sd          $s0, 0x2A0($sp)
    ctx->pc = 0x2e6344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 16));
    // 0x2e6348: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e6348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e634c: 0xffb102a8  sd          $s1, 0x2A8($sp)
    ctx->pc = 0x2e634cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 17));
    // 0x2e6350: 0xffb302b8  sd          $s3, 0x2B8($sp)
    ctx->pc = 0x2e6350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 19));
    // 0x2e6354: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x2e6354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
    // 0x2e6358: 0xffb502c8  sd          $s5, 0x2C8($sp)
    ctx->pc = 0x2e6358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 21));
    // 0x2e635c: 0xffb602d0  sd          $s6, 0x2D0($sp)
    ctx->pc = 0x2e635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 22));
    // 0x2e6360: 0xffb702d8  sd          $s7, 0x2D8($sp)
    ctx->pc = 0x2e6360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 23));
    // 0x2e6364: 0xffbe02e0  sd          $fp, 0x2E0($sp)
    ctx->pc = 0x2e6364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 30));
    // 0x2e6368: 0xffbf02e8  sd          $ra, 0x2E8($sp)
    ctx->pc = 0x2e6368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 744), GPR_U64(ctx, 31));
    // 0x2e636c: 0xe7b90318  swc1        $f25, 0x318($sp)
    ctx->pc = 0x2e636cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x2e6370: 0xe7b80310  swc1        $f24, 0x310($sp)
    ctx->pc = 0x2e6370u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x2e6374: 0xe7b70308  swc1        $f23, 0x308($sp)
    ctx->pc = 0x2e6374u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x2e6378: 0xe7b60300  swc1        $f22, 0x300($sp)
    ctx->pc = 0x2e6378u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x2e637c: 0xe7b502f8  swc1        $f21, 0x2F8($sp)
    ctx->pc = 0x2e637cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x2e6380: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6380u;
    SET_GPR_U32(ctx, 31, 0x2E6388u);
    ctx->pc = 0x2E6384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6380u;
    // 0x2e6384: 0xe7b402f0  swc1        $f20, 0x2F0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6380u, 0x2E6388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6388u;
label_2e6388:
    // 0x2e6388: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6388u;
    SET_GPR_U32(ctx, 31, 0x2E6390u);
    ctx->pc = 0x2E638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6388u;
    // 0x2e638c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6388u, 0x2E6390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6390u;
label_2e6390:
    // 0x2e6390: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6390u;
    SET_GPR_U32(ctx, 31, 0x2E6398u);
    ctx->pc = 0x2E6394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6390u;
    // 0x2e6394: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6390u, 0x2E6398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6398u;
label_2e6398:
    // 0x2e6398: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6398u;
    SET_GPR_U32(ctx, 31, 0x2E63A0u);
    ctx->pc = 0x2E639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6398u;
    // 0x2e639c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6398u, 0x2E63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63A0u;
label_2e63a0:
    // 0x2e63a0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2e63a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2e63a4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2e63a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e63a8: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2e63a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2e63ac: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2e63acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2e63b0: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2e63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2e63b4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2e63b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e63b8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2e63b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2e63bc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2e63bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2e63c0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e63c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2e63c4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2e63c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2e63c8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2e63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2e63cc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2e63ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2e63d0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2e63d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e63d4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2e63d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e63d8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2e63d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2e63dc: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2e63dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2e63e0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2e63e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2e63e4: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2e63e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2e63e8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2e63e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e63ec: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2e63ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e63f0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e63f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e63f4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2e63f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2e63f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E63F8u;
    SET_GPR_U32(ctx, 31, 0x2E6400u);
    ctx->pc = 0x2E63FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E63F8u;
    // 0x2e63fc: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E63F8u, 0x2E6400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6400u;
label_2e6400:
    // 0x2e6400: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6400u;
    SET_GPR_U32(ctx, 31, 0x2E6408u);
    ctx->pc = 0x2E6404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6400u;
    // 0x2e6404: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6400u, 0x2E6408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6408u;
label_2e6408:
    // 0x2e6408: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2e6408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2e640c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2e640cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2e6410: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2e6410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2e6414: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2e6414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2e6418: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2e6418u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e641c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2e641cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2e6420: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2e6420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2e6424: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2e6424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2e6428: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2e6428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2e642c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2e642cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2e6430: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2e6430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2e6434: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2e6434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e6438: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2e6438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e643c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2e643cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2e6440: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2e6440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2e6444: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2e6444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2e6448: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2e6448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2e644c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2e644cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e6450: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2e6450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6454: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e6454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e6458: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2e6458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2e645c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x2E645Cu;
    SET_GPR_U32(ctx, 31, 0x2E6464u);
    ctx->pc = 0x2E6460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E645Cu;
    // 0x2e6460: 0xafa000e4  sw          $zero, 0xE4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2E645Cu, 0x2E6464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6464u;
label_2e6464:
    // 0x2e6464: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2e6464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2e6468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e646c: 0xc4601750  lwc1        $f0, 0x1750($v1)
    ctx->pc = 0x2e646cu;
    { uint32_t bits = FAST_READ32(0x471750u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6470: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6470u;
    SET_GPR_U32(ctx, 31, 0x2E6478u);
    ctx->pc = 0x2E6474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6470u;
    // 0x2e6474: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6470u, 0x2E6478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6478u;
label_2e6478:
    // 0x2e6478: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6478u;
    SET_GPR_U32(ctx, 31, 0x2E6480u);
    ctx->pc = 0x2E647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6478u;
    // 0x2e647c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6478u, 0x2E6480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6480u;
label_2e6480:
    // 0x2e6480: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6480u;
    SET_GPR_U32(ctx, 31, 0x2E6488u);
    ctx->pc = 0x2E6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6480u;
    // 0x2e6484: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6480u, 0x2E6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6488u;
label_2e6488:
    // 0x2e6488: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x2e6488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
    // 0x2e648c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2e648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2e6490: 0x54400233  bnel        $v0, $zero, . + 4 + (0x233 << 2)
    ctx->pc = 0x2E6490u;
    {
        const bool branch_taken_0x2e6490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6490) {
            ctx->pc = 0x2E6494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6490u;
            // 0x2e6494: 0xdfb002a0  ld          $s0, 0x2A0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6D60u;
            goto label_2e6d60;
        }
    }
    ctx->pc = 0x2E6498u;
    // 0x2e6498: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2e6498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x2e649c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e649cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e64a0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2e64a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e64a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e64a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e64a8: 0x0  nop
    ctx->pc = 0x2e64a8u;
    // NOP
    // 0x2e64ac: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E64ACu;
    {
        const bool branch_taken_0x2e64ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E64B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64ACu;
        // 0x2e64b0: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64ac) {
            ctx->pc = 0x2E64D8u;
            goto label_2e64d8;
        }
    }
    ctx->pc = 0x2E64B4u;
    // 0x2e64b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e64b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e64b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e64b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e64bc: 0x0  nop
    ctx->pc = 0x2e64bcu;
    // NOP
    // 0x2e64c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E64C0u;
    {
        const bool branch_taken_0x2e64c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e64c0) {
            ctx->pc = 0x2E64D8u;
            goto label_2e64d8;
        }
    }
    ctx->pc = 0x2E64C8u;
    // 0x2e64c8: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2e64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x2e64cc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2e64ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2e64d0: 0x10400223  beqz        $v0, . + 4 + (0x223 << 2)
    ctx->pc = 0x2E64D0u;
    {
        const bool branch_taken_0x2e64d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64D0u;
        // 0x2e64d4: 0xdfb002a0  ld          $s0, 0x2A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64d0) {
            ctx->pc = 0x2E6D60u;
            goto label_2e6d60;
        }
    }
    ctx->pc = 0x2E64D8u;
label_2e64d8:
    // 0x2e64d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e64d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e64dc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2e64dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2e64e0: 0x27b30170  addiu       $s3, $sp, 0x170
    ctx->pc = 0x2e64e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2e64e4: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x2e64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x2e64e8: 0xafa00294  sw          $zero, 0x294($sp)
    ctx->pc = 0x2e64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 0));
    // 0x2e64ec: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x2e64ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x2e64f0: 0xe6760008  swc1        $f22, 0x8($s3)
    ctx->pc = 0x2e64f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2e64f4: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x2e64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
    // 0x2e64f8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2e64f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e64fc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e64fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6500: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6504: 0xc440b7c4  lwc1        $f0, -0x483C($v0)
    ctx->pc = 0x2e6504u;
    { uint32_t bits = FAST_READ32(0x3FB7C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6508: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e6508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e650c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e650cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6510: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e6510u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e6514: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e6514u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6518: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e6518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e651c: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2e651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2e6520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e6520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6524: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2e6524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2e6528: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e6528u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e652c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e652cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6530: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e6530u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e6534: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e6534u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e6538: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e6538u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2e653c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e653cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e6540: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e6540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e6544: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e6544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2e6548: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x2e6548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2e654c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6550: 0x27b40180  addiu       $s4, $sp, 0x180
    ctx->pc = 0x2e6550u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e6554: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e6554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2e6558: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2e6558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2e655c: 0x27b70190  addiu       $s7, $sp, 0x190
    ctx->pc = 0x2e655cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2e6560: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x2e6560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x2e6564: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2e6564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e6568: 0xe6970004  swc1        $f23, 0x4($s4)
    ctx->pc = 0x2e6568u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2e656c: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x2e656cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x2e6570: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x2e6570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
    // 0x2e6574: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e6574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6578: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2e6578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e657c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e657cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6580: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2e6580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6584: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2e6584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6588: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2e6588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e658c: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2e658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6590: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2e6590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6594: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2e6594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2e6598: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x2e6598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x2e659c: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x2e659cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2e65a0: 0xe7a3017c  swc1        $f3, 0x17C($sp)
    ctx->pc = 0x2e65a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x2e65a4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2e65a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e65a8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2e65a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e65ac: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x2e65acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
    // 0x2e65b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e65b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e65b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e65b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e65b8: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x2e65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x2e65bc: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x2e65bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2e65c0: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x2e65c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x2e65c4: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x2e65c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
    // 0x2e65c8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e65c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e65cc: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2e65ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e65d0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e65d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e65d4: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2e65d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e65d8: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2e65d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e65dc: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2e65dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e65e0: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2e65e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e65e4: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2e65e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e65e8: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2e65e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2e65ec: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x2e65ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x2e65f0: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x2e65f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2e65f4: 0xe7a3017c  swc1        $f3, 0x17C($sp)
    ctx->pc = 0x2e65f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x2e65f8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2e65f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e65fc: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x2e65fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6600: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6600u;
    SET_GPR_U32(ctx, 31, 0x2E6608u);
    ctx->pc = 0x2E6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6600u;
    // 0x2e6604: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6600u, 0x2E6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6608u;
label_2e6608:
    // 0x2e6608: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6608u;
    SET_GPR_U32(ctx, 31, 0x2E6610u);
    ctx->pc = 0x2E660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6608u;
    // 0x2e660c: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6608u, 0x2E6610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6610u;
label_2e6610:
    // 0x2e6610: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x2e6610u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e6614: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x2e6614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2e6618: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x2e6618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2e661c: 0x27b601b0  addiu       $s6, $sp, 0x1B0
    ctx->pc = 0x2e661cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2e6620: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2e6620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2e6624: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x2e6624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
    // 0x2e6628: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x2e6628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x2e662c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e662cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6630: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x2e6630u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2e6634: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e6634u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6638: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x2e6638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e663c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2e663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6640: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2e6640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6644: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2e6644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e6648: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e6648u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e664c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e664cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e6650: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2e6650u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e6654: 0x0  nop
    ctx->pc = 0x2e6654u;
    // NOP
    // 0x2e6658: 0x0  nop
    ctx->pc = 0x2e6658u;
    // NOP
    // 0x2e665c: 0x46000044  c1          0x44
    ctx->pc = 0x2e665cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e6660: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2e6660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x2e6664: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e6664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e6668: 0x0  nop
    ctx->pc = 0x2e6668u;
    // NOP
    // 0x2e666c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2e666cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6670: 0x0  nop
    ctx->pc = 0x2e6670u;
    // NOP
    // 0x2e6674: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6674u;
    {
        const bool branch_taken_0x2e6674 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6674u;
        // 0x2e6678: 0xe7a101f0  swc1        $f1, 0x1F0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6674) {
            ctx->pc = 0x2E669Cu;
            goto label_2e669c;
        }
    }
    ctx->pc = 0x2E667Cu;
    // 0x2e667c: 0x0  nop
    ctx->pc = 0x2e667cu;
    // NOP
    // 0x2e6680: 0x0  nop
    ctx->pc = 0x2e6680u;
    // NOP
    // 0x2e6684: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x2e6684u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
    // 0x2e6688: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e6688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e668c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e668cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e6690: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e6690u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e6694: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e6694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6698: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x2e6698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e669c:
    // 0x2e669c: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x2e669cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e66a0: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x2e66a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2e66a4: 0x7ba301c0  lq          $v1, 0x1C0($sp)
    ctx->pc = 0x2e66a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2e66a8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e66a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2e66ac: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2e66acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2e66b0: 0xa3a40170  sb          $a0, 0x170($sp)
    ctx->pc = 0x2e66b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e66b4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e66b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e66b8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2e66b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e66bc: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x2e66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2e66c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e66c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e66c4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2e66c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e66c8: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2e66c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e66cc: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x2e66ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2e66d0: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x2e66d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e66d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e66d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66d8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e66d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e66dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e66dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66e0: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x2E66E0u;
    SET_GPR_U32(ctx, 31, 0x2E66E8u);
    ctx->pc = 0x2E66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E66E0u;
    // 0x2e66e4: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2E66E0u, 0x2E66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66E8u;
label_2e66e8:
    // 0x2e66e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e66ec: 0x27be0290  addiu       $fp, $sp, 0x290
    ctx->pc = 0x2e66ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2e66f0: 0xafa40298  sw          $a0, 0x298($sp)
    ctx->pc = 0x2e66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 4));
    // 0x2e66f4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2e66f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e66f8: 0xc07784e  jal         func_1DE138
    ctx->pc = 0x2E66F8u;
    SET_GPR_U32(ctx, 31, 0x2E6700u);
    ctx->pc = 0x2E66FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E66F8u;
    // 0x2e66fc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE138u, 0x2E66F8u, 0x2E6700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6700u;
label_2e6700:
    // 0x2e6700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6704: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x2E6704u;
    SET_GPR_U32(ctx, 31, 0x2E670Cu);
    ctx->pc = 0x2E6708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6704u;
    // 0x2e6708: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2E6704u, 0x2E670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E670Cu;
label_2e670c:
    // 0x2e670c: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x2e670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2e6710: 0x10400192  beqz        $v0, . + 4 + (0x192 << 2)
    ctx->pc = 0x2E6710u;
    {
        const bool branch_taken_0x2e6710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6710u;
        // 0x2e6714: 0x27b00160  addiu       $s0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6710) {
            ctx->pc = 0x2E6D5Cu;
            goto label_2e6d5c;
        }
    }
    ctx->pc = 0x2E6718u;
    // 0x2e6718: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2e6718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e671c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e671cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6720: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x2e6720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6724: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2e6724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2e6728: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2e6728u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e672c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6730: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2e6730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e6734: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e6734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6738: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x2e6738u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e673c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e673cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6740: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2e6740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6744: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x2e6744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6748: 0x27b101a0  addiu       $s1, $sp, 0x1A0
    ctx->pc = 0x2e6748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2e674c: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2e674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6750: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2e6750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6754: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x2e6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6758: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x2e6758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2e675c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x2e675cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x2e6760: 0xe7a20188  swc1        $f2, 0x188($sp)
    ctx->pc = 0x2e6760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2e6764: 0xe7a3018c  swc1        $f3, 0x18C($sp)
    ctx->pc = 0x2e6764u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2e6768: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2e6768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2e676c: 0xe6f70004  swc1        $f23, 0x4($s7)
    ctx->pc = 0x2e676cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2e6770: 0xe7b40198  swc1        $f20, 0x198($sp)
    ctx->pc = 0x2e6770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2e6774: 0xe7b4019c  swc1        $f20, 0x19C($sp)
    ctx->pc = 0x2e6774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x2e6778: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2e6778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e677c: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x2e677cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e6780: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e6780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6784: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x2e6784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6788: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2e6788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e678c: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x2e678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6790: 0xc7a201a8  lwc1        $f2, 0x1A8($sp)
    ctx->pc = 0x2e6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6794: 0xc7a301ac  lwc1        $f3, 0x1AC($sp)
    ctx->pc = 0x2e6794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6798: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2e6798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2e679c: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x2e679cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x2e67a0: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x2e67a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2e67a4: 0xe7a3017c  swc1        $f3, 0x17C($sp)
    ctx->pc = 0x2e67a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x2e67a8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2e67a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e67ac: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2e67acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e67b0: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x2e67b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x2e67b4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2e67b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2e67b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e67b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e67bc: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x2e67bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2e67c0: 0xe6980004  swc1        $f24, 0x4($s4)
    ctx->pc = 0x2e67c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2e67c4: 0xe7b40188  swc1        $f20, 0x188($sp)
    ctx->pc = 0x2e67c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2e67c8: 0xe7b4018c  swc1        $f20, 0x18C($sp)
    ctx->pc = 0x2e67c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2e67cc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e67ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e67d0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2e67d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e67d4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e67d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e67d8: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2e67d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e67dc: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2e67dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e67e0: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2e67e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e67e4: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2e67e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e67e8: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2e67e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e67ec: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2e67ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2e67f0: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x2e67f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x2e67f4: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x2e67f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2e67f8: 0xe7a3017c  swc1        $f3, 0x17C($sp)
    ctx->pc = 0x2e67f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x2e67fc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2e67fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e6800: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x2e6800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6804: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6804u;
    SET_GPR_U32(ctx, 31, 0x2E680Cu);
    ctx->pc = 0x2E6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6804u;
    // 0x2e6808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6804u, 0x2E680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E680Cu;
label_2e680c:
    // 0x2e680c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E680Cu;
    SET_GPR_U32(ctx, 31, 0x2E6814u);
    ctx->pc = 0x2E6810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E680Cu;
    // 0x2e6810: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E680Cu, 0x2E6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6814u;
label_2e6814:
    // 0x2e6814: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2e6814u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e6818: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x2e6818u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2e681c: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x2e681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x2e6820: 0x7fa30190  sq          $v1, 0x190($sp)
    ctx->pc = 0x2e6820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 3));
    // 0x2e6824: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2e6824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e6828: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2e6828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e682c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e682cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6830: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x2e6830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6834: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2e6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6838: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2e6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e683c: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x2e683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e6840: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e6840u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e6844: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e6844u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e6848: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2e6848u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e684c: 0x0  nop
    ctx->pc = 0x2e684cu;
    // NOP
    // 0x2e6850: 0x0  nop
    ctx->pc = 0x2e6850u;
    // NOP
    // 0x2e6854: 0x46000044  c1          0x44
    ctx->pc = 0x2e6854u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e6858: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x2e6858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x2e685c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2e685cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6860: 0x0  nop
    ctx->pc = 0x2e6860u;
    // NOP
    // 0x2e6864: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6864u;
    {
        const bool branch_taken_0x2e6864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6864u;
        // 0x2e6868: 0xe7a101c0  swc1        $f1, 0x1C0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6864) {
            ctx->pc = 0x2E688Cu;
            goto label_2e688c;
        }
    }
    ctx->pc = 0x2E686Cu;
    // 0x2e686c: 0x0  nop
    ctx->pc = 0x2e686cu;
    // NOP
    // 0x2e6870: 0x0  nop
    ctx->pc = 0x2e6870u;
    // NOP
    // 0x2e6874: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x2e6874u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
    // 0x2e6878: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e6878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e687c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2e687cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e6880: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e6880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e6884: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e6884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6888: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x2e6888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e688c:
    // 0x2e688c: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x2e688cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6890: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x2e6890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2e6894: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x2e6894u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2e6898: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e6898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2e689c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2e689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2e68a0: 0xa3a401d0  sb          $a0, 0x1D0($sp)
    ctx->pc = 0x2e68a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e68a4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2e68a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e68a8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2e68a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e68ac: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2e68acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2e68b0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2e68b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e68b4: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x2e68b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e68b8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2e68b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2e68bc: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x2e68bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e68c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e68c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68c4: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2e68c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e68c8: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x2E68C8u;
    SET_GPR_U32(ctx, 31, 0x2E68D0u);
    ctx->pc = 0x2E68CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68C8u;
    // 0x2e68cc: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2E68C8u, 0x2E68D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68D0u;
label_2e68d0:
    // 0x2e68d0: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x2e68d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x2e68d4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e68d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2e68d8: 0xc4991750  lwc1        $f25, 0x1750($a0)
    ctx->pc = 0x2e68d8u;
    { uint32_t bits = FAST_READ32(0x471750u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2e68dc: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2e68dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x2e68e0: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x2e68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2e68e4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2e68e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e68e8: 0xe7b90290  swc1        $f25, 0x290($sp)
    ctx->pc = 0x2e68e8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x2e68ec: 0xc077912  jal         func_1DE448
    ctx->pc = 0x2E68ECu;
    SET_GPR_U32(ctx, 31, 0x2E68F4u);
    ctx->pc = 0x2E68F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68ECu;
    // 0x2e68f0: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x2E68ECu, 0x2E68F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68F4u;
label_2e68f4:
    // 0x2e68f4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2e68f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2e68f8: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x2E68F8u;
    SET_GPR_U32(ctx, 31, 0x2E6900u);
    ctx->pc = 0x2E68FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68F8u;
    // 0x2e68fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2E68F8u, 0x2E6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6900u;
label_2e6900:
    // 0x2e6900: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x2e6900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6904: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2e6904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6908: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x2e6908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2e690c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e690cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e6910: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x2E6910u;
    {
        const bool branch_taken_0x2e6910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6910u;
        // 0x2e6914: 0x46000045  abs.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ABS_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6910) {
            ctx->pc = 0x2E6D30u;
            goto label_2e6d30;
        }
    }
    ctx->pc = 0x2E6918u;
    // 0x2e6918: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2e6918u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2e691c: 0xc620b7cc  lwc1        $f0, -0x4834($s1)
    ctx->pc = 0x2e691cu;
    { uint32_t bits = FAST_READ32(0x3FB7CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6920: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e6920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6924: 0x0  nop
    ctx->pc = 0x2e6924u;
    // NOP
    // 0x2e6928: 0x45000102  bc1f        . + 4 + (0x102 << 2)
    ctx->pc = 0x2E6928u;
    {
        const bool branch_taken_0x2e6928 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6928u;
        // 0x2e692c: 0x8fa40294  lw          $a0, 0x294($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6928) {
            ctx->pc = 0x2E6D34u;
            goto label_2e6d34;
        }
    }
    ctx->pc = 0x2E6930u;
    // 0x2e6930: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2e6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x2e6934: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e6934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e6938: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E6938u;
    {
        const bool branch_taken_0x2e6938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6938u;
        // 0x2e693c: 0x27a200f0  addiu       $v0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6938) {
            ctx->pc = 0x2E69D8u;
            goto label_2e69d8;
        }
    }
    ctx->pc = 0x2E6940u;
    // 0x2e6940: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2e6940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e6944: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e6944u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6948: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e6948u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e694c: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x2e694cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6950: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x2e6950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6954: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x2e6954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6958: 0xc7a20188  lwc1        $f2, 0x188($sp)
    ctx->pc = 0x2e6958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e695c: 0xc7a5018c  lwc1        $f5, 0x18C($sp)
    ctx->pc = 0x2e695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e6960: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2e6960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2e6964: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x2e6964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x2e6968: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x2e6968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2e696c: 0xe7a5017c  swc1        $f5, 0x17C($sp)
    ctx->pc = 0x2e696cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x2e6970: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2e6970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6974: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2e6974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6978: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2e6978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e697c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e697cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e6980: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e6980u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e6984: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2e6984u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e6988: 0x46010044  c1          0x10044
    ctx->pc = 0x2e6988u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e698c: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x2e698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6990: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6994: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2e6994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6998: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2e6998u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2e699c: 0x0  nop
    ctx->pc = 0x2e699cu;
    // NOP
    // 0x2e69a0: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x2e69a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x2e69a4: 0x460c6342  mul.s       $f13, $f12, $f12
    ctx->pc = 0x2e69a4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2e69a8: 0x460db341  sub.s       $f13, $f22, $f13
    ctx->pc = 0x2e69a8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[13]);
    // 0x2e69ac: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2e69acu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e69b0: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2E69B0u;
    SET_GPR_U32(ctx, 31, 0x2E69B8u);
    ctx->pc = 0x2E69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E69B0u;
    // 0x2e69b4: 0xafa40294  sw          $a0, 0x294($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2E69B0u, 0x2E69B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69B8u;
label_2e69b8:
    // 0x2e69b8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2e69b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2e69bc: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2e69bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2e69c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e69c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e69c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e69c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69c8: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x2E69C8u;
    SET_GPR_U32(ctx, 31, 0x2E69D0u);
    ctx->pc = 0x2E69CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E69C8u;
    // 0x2e69cc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x2E69C8u, 0x2E69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69D0u;
label_2e69d0:
    // 0x2e69d0: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x2E69D0u;
    {
        const bool branch_taken_0x2e69d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69D0u;
        // 0x2e69d4: 0x8fa40294  lw          $a0, 0x294($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69d0) {
            ctx->pc = 0x2E6D34u;
            goto label_2e6d34;
        }
    }
    ctx->pc = 0x2E69D8u;
label_2e69d8:
    // 0x2e69d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e69d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e69dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e69dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2e69e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E69E0u;
    SET_GPR_U32(ctx, 31, 0x2E69E8u);
    ctx->pc = 0x2E69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E69E0u;
    // 0x2e69e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E69E0u, 0x2E69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69E8u;
label_2e69e8:
    // 0x2e69e8: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x2E69E8u;
    SET_GPR_U32(ctx, 31, 0x2E69F0u);
    ctx->pc = 0x2E69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E69E8u;
    // 0x2e69ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2E69E8u, 0x2E69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69F0u;
label_2e69f0:
    // 0x2e69f0: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x2e69f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e69f4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2e69f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e69f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e69f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e69fc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e69fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6a00: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2e6a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6a04: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2e6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2e6a08: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2e6a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2e6a0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6a10: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2e6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e6a14: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e6a14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6a18: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x2e6a18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e6a1c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e6a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6a20: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x2e6a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6a24: 0xc7a20210  lwc1        $f2, 0x210($sp)
    ctx->pc = 0x2e6a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6a28: 0x27a30220  addiu       $v1, $sp, 0x220
    ctx->pc = 0x2e6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2e6a2c: 0xc7a30218  lwc1        $f3, 0x218($sp)
    ctx->pc = 0x2e6a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6a30: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x2e6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2e6a34: 0xc7a1021c  lwc1        $f1, 0x21C($sp)
    ctx->pc = 0x2e6a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6a38: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x2e6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6a3c: 0xe7a201f0  swc1        $f2, 0x1F0($sp)
    ctx->pc = 0x2e6a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2e6a40: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2e6a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x2e6a44: 0xe7a301f8  swc1        $f3, 0x1F8($sp)
    ctx->pc = 0x2e6a44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x2e6a48: 0xe7a101fc  swc1        $f1, 0x1FC($sp)
    ctx->pc = 0x2e6a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x2e6a4c: 0xe7b40210  swc1        $f20, 0x210($sp)
    ctx->pc = 0x2e6a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x2e6a50: 0xe4970004  swc1        $f23, 0x4($a0)
    ctx->pc = 0x2e6a50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2e6a54: 0xe7b40218  swc1        $f20, 0x218($sp)
    ctx->pc = 0x2e6a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x2e6a58: 0xe7b4021c  swc1        $f20, 0x21C($sp)
    ctx->pc = 0x2e6a58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x2e6a5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e6a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6a60: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2e6a60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6a64: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e6a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6a68: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x2e6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6a6c: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x2e6a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6a70: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x2e6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2e6a74: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x2e6a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6a78: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x2e6a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6a7c: 0xc7a3022c  lwc1        $f3, 0x22C($sp)
    ctx->pc = 0x2e6a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6a80: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2e6a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2e6a84: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x2e6a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x2e6a88: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x2e6a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2e6a8c: 0xe7a301ec  swc1        $f3, 0x1EC($sp)
    ctx->pc = 0x2e6a8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x2e6a90: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e6a90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6a94: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2e6a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6a98: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x2e6a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x2e6a9c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2e6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e6aa0: 0xe4780004  swc1        $f24, 0x4($v1)
    ctx->pc = 0x2e6aa0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e6aa4: 0xe7b40228  swc1        $f20, 0x228($sp)
    ctx->pc = 0x2e6aa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2e6aa8: 0xe7b4022c  swc1        $f20, 0x22C($sp)
    ctx->pc = 0x2e6aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    // 0x2e6aac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e6aacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6ab0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2e6ab0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6ab4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e6ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6ab8: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x2e6ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6abc: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2e6abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6ac0: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x2e6ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6ac4: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x2e6ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6ac8: 0xc7a301ec  lwc1        $f3, 0x1EC($sp)
    ctx->pc = 0x2e6ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6acc: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x2e6accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x2e6ad0: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x2e6ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x2e6ad4: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x2e6ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x2e6ad8: 0xe7a3021c  swc1        $f3, 0x21C($sp)
    ctx->pc = 0x2e6ad8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x2e6adc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e6adcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6ae0: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x2e6ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6ae4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6AE4u;
    SET_GPR_U32(ctx, 31, 0x2E6AECu);
    ctx->pc = 0x2E6AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6AE4u;
    // 0x2e6ae8: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6AE4u, 0x2E6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AECu;
label_2e6aec:
    // 0x2e6aec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E6AECu;
    SET_GPR_U32(ctx, 31, 0x2E6AF4u);
    ctx->pc = 0x2E6AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6AECu;
    // 0x2e6af0: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E6AECu, 0x2E6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AF4u;
label_2e6af4:
    // 0x2e6af4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2e6af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e6af8: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x2e6af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2e6afc: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x2e6afcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2e6b00: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x2e6b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2e6b04: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x2e6b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
    // 0x2e6b08: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2e6b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2e6b0c: 0x7fa30250  sq          $v1, 0x250($sp)
    ctx->pc = 0x2e6b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 3));
    // 0x2e6b10: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e6b10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e6b14: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2e6b14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6b18: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e6b18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6b1c: 0xfba10260  sqc2        $vf1, 0x260($sp)
    ctx->pc = 0x2e6b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6b20: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2e6b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6b24: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2e6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6b28: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2e6b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e6b2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e6b2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e6b30: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e6b30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e6b34: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2e6b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e6b38: 0x0  nop
    ctx->pc = 0x2e6b38u;
    // NOP
    // 0x2e6b3c: 0x0  nop
    ctx->pc = 0x2e6b3cu;
    // NOP
    // 0x2e6b40: 0x46000344  c1          0x344
    ctx->pc = 0x2e6b40u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e6b44: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x2e6b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
    // 0x2e6b48: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x2e6b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6b4c: 0x0  nop
    ctx->pc = 0x2e6b4cu;
    // NOP
    // 0x2e6b50: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6B50u;
    {
        const bool branch_taken_0x2e6b50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B50u;
        // 0x2e6b54: 0xe7ad0280  swc1        $f13, 0x280($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b50) {
            ctx->pc = 0x2E6B78u;
            goto label_2e6b78;
        }
    }
    ctx->pc = 0x2E6B58u;
    // 0x2e6b58: 0x0  nop
    ctx->pc = 0x2e6b58u;
    // NOP
    // 0x2e6b5c: 0x0  nop
    ctx->pc = 0x2e6b5cu;
    // NOP
    // 0x2e6b60: 0x460db003  div.s       $f0, $f22, $f13
    ctx->pc = 0x2e6b60u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[13]); }
    // 0x2e6b64: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2e6b64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e6b68: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2e6b68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e6b6c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2e6b6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2e6b70: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e6b70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6b74: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x2e6b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e6b78:
    // 0x2e6b78: 0x93a40090  lbu         $a0, 0x90($sp)
    ctx->pc = 0x2e6b78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e6b7c: 0x7ba20240  lq          $v0, 0x240($sp)
    ctx->pc = 0x2e6b7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2e6b80: 0x7ba30250  lq          $v1, 0x250($sp)
    ctx->pc = 0x2e6b80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2e6b84: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2e6b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2e6b88: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2e6b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x2e6b8c: 0xa3a40210  sb          $a0, 0x210($sp)
    ctx->pc = 0x2e6b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 528), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6b90: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2e6b90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e6b94: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2e6b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6b98: 0x27a20270  addiu       $v0, $sp, 0x270
    ctx->pc = 0x2e6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2e6b9c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e6b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6ba0: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2e6ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6ba4: 0xc7a10280  lwc1        $f1, 0x280($sp)
    ctx->pc = 0x2e6ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6ba8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2e6ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2e6bac: 0xc7a00284  lwc1        $f0, 0x284($sp)
    ctx->pc = 0x2e6bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6bb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e6bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6bb4: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x2e6bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2e6bb8: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x2E6BB8u;
    SET_GPR_U32(ctx, 31, 0x2E6BC0u);
    ctx->pc = 0x2E6BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6BB8u;
    // 0x2e6bbc: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2E6BB8u, 0x2E6BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6BC0u;
label_2e6bc0:
    // 0x2e6bc0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e6bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2e6bc4: 0xe7b90290  swc1        $f25, 0x290($sp)
    ctx->pc = 0x2e6bc4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x2e6bc8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e6bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6bcc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2e6bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6bd0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e6bd4: 0xc077912  jal         func_1DE448
    ctx->pc = 0x2E6BD4u;
    SET_GPR_U32(ctx, 31, 0x2E6BDCu);
    ctx->pc = 0x2E6BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6BD4u;
    // 0x2e6bd8: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x2E6BD4u, 0x2E6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6BDCu;
label_2e6bdc:
    // 0x2e6bdc: 0xc7a20164  lwc1        $f2, 0x164($sp)
    ctx->pc = 0x2e6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6be0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2e6be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6be4: 0xc621b7cc  lwc1        $f1, -0x4834($s1)
    ctx->pc = 0x2e6be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294948812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6be8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2e6be8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2e6bec: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x2e6becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2e6bf0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2e6bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2e6bf4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2e6bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2e6bf8: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2E6BF8u;
    {
        const bool branch_taken_0x2e6bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BF8u;
        // 0x2e6bfc: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bf8) {
            ctx->pc = 0x2E6D24u;
            goto label_2e6d24;
        }
    }
    ctx->pc = 0x2E6C00u;
    // 0x2e6c00: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x2e6c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2e6c04: 0xc7a30184  lwc1        $f3, 0x184($sp)
    ctx->pc = 0x2e6c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6c08: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2e6c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6c0c: 0x0  nop
    ctx->pc = 0x2e6c0cu;
    // NOP
    // 0x2e6c10: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x2E6C10u;
    {
        const bool branch_taken_0x2e6c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C10u;
        // 0x2e6c14: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c10) {
            ctx->pc = 0x2E6D28u;
            goto label_2e6d28;
        }
    }
    ctx->pc = 0x2E6C18u;
    // 0x2e6c18: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x2e6c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2e6c1c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2e6c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6c20: 0x0  nop
    ctx->pc = 0x2e6c20u;
    // NOP
    // 0x2e6c24: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x2E6C24u;
    {
        const bool branch_taken_0x2e6c24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C24u;
        // 0x2e6c28: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c24) {
            ctx->pc = 0x2E6D28u;
            goto label_2e6d28;
        }
    }
    ctx->pc = 0x2E6C2Cu;
    // 0x2e6c2c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2e6c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2e6c30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6C30u;
    {
        const bool branch_taken_0x2e6c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C30u;
        // 0x2e6c34: 0x8fa201b8  lw          $v0, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c30) {
            ctx->pc = 0x2E6C4Cu;
            goto label_2e6c4c;
        }
    }
    ctx->pc = 0x2E6C38u;
    // 0x2e6c38: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2e6c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2e6c3c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E6C3Cu;
    {
        const bool branch_taken_0x2e6c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C3Cu;
        // 0x2e6c40: 0x27a200f0  addiu       $v0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c3c) {
            ctx->pc = 0x2E6C78u;
            goto label_2e6c78;
        }
    }
    ctx->pc = 0x2E6C44u;
    // 0x2e6c44: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2E6C44u;
    {
        const bool branch_taken_0x2e6c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c44) {
            ctx->pc = 0x2E6D28u;
            goto label_2e6d28;
        }
    }
    ctx->pc = 0x2E6C4Cu;
label_2e6c4c:
    // 0x2e6c4c: 0x38430008  xori        $v1, $v0, 0x8
    ctx->pc = 0x2e6c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2e6c50: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2E6C50u;
    {
        const bool branch_taken_0x2e6c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C50u;
        // 0x2e6c54: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c50) {
            ctx->pc = 0x2E6D28u;
            goto label_2e6d28;
        }
    }
    ctx->pc = 0x2E6C58u;
    // 0x2e6c58: 0x8fa40294  lw          $a0, 0x294($sp)
    ctx->pc = 0x2e6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x2e6c5c: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x2e6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2e6c60: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2e6c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e6c64: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x2e6c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2e6c68: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2e6c68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2e6c6c: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E6C6Cu;
    {
        const bool branch_taken_0x2e6c6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C6Cu;
        // 0x2e6c70: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c6c) {
            ctx->pc = 0x2E6D28u;
            goto label_2e6d28;
        }
    }
    ctx->pc = 0x2E6C74u;
    // 0x2e6c74: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2e6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2e6c78:
    // 0x2e6c78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e6c78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6c7c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2e6c7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e6c80: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e6c80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e6c84: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x2e6c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e6c88: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2e6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6c8c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2e6c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2e6c90: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x2e6c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6c94: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x2e6c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6c98: 0xc7a501fc  lwc1        $f5, 0x1FC($sp)
    ctx->pc = 0x2e6c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e6c9c: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2e6c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2e6ca0: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x2e6ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x2e6ca4: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x2e6ca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2e6ca8: 0xe7a501ec  swc1        $f5, 0x1EC($sp)
    ctx->pc = 0x2e6ca8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x2e6cac: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2e6cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6cb0: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2e6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6cb4: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2e6cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e6cb8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e6cb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e6cbc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e6cbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e6cc0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2e6cc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e6cc4: 0x46010044  c1          0x10044
    ctx->pc = 0x2e6cc4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e6cc8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2e6cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6cd0: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x2e6cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6cd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e6cd8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2e6cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e6cdc: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2e6cdcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2e6ce0: 0x0  nop
    ctx->pc = 0x2e6ce0u;
    // NOP
    // 0x2e6ce4: 0x0  nop
    ctx->pc = 0x2e6ce4u;
    // NOP
    // 0x2e6ce8: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x2e6ce8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x2e6cec: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2e6cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2e6cf0: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x2e6cf0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2e6cf4: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2e6cf4u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e6cf8: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2E6CF8u;
    SET_GPR_U32(ctx, 31, 0x2E6D00u);
    ctx->pc = 0x2E6CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6CF8u;
    // 0x2e6cfc: 0xafa20294  sw          $v0, 0x294($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2E6CF8u, 0x2E6D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D00u;
label_2e6d00:
    // 0x2e6d00: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2e6d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2e6d04: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2e6d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2e6d08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e6d0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e6d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d10: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x2E6D10u;
    SET_GPR_U32(ctx, 31, 0x2E6D18u);
    ctx->pc = 0x2E6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D10u;
    // 0x2e6d14: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x2E6D10u, 0x2E6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D18u;
label_2e6d18:
    // 0x2e6d18: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2e6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x2e6d1c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2e6d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2e6d20: 0xae4211c0  sw          $v0, 0x11C0($s2)
    ctx->pc = 0x2e6d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4544), GPR_U32(ctx, 2));
label_2e6d24:
    // 0x2e6d24: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2e6d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2e6d28:
    // 0x2e6d28: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x2E6D28u;
    SET_GPR_U32(ctx, 31, 0x2E6D30u);
    ctx->pc = 0x2E6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D28u;
    // 0x2e6d2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2E6D28u, 0x2E6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D30u;
label_2e6d30:
    // 0x2e6d30: 0x8fa40294  lw          $a0, 0x294($sp)
    ctx->pc = 0x2e6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_2e6d34:
    // 0x2e6d34: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E6D34u;
    {
        const bool branch_taken_0x2e6d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D34u;
        // 0x2e6d38: 0xdfb002a0  ld          $s0, 0x2A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d34) {
            ctx->pc = 0x2E6D60u;
            goto label_2e6d60;
        }
    }
    ctx->pc = 0x2E6D3Cu;
    // 0x2e6d3c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2e6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2e6d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e6d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d44: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x2E6D44u;
    SET_GPR_U32(ctx, 31, 0x2E6D4Cu);
    ctx->pc = 0x2E6D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D44u;
    // 0x2e6d48: 0xc44c1750  lwc1        $f12, 0x1750($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x2E6D44u, 0x2E6D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D4Cu;
label_2e6d4c:
    // 0x2e6d4c: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2e6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x2e6d50: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x2e6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2e6d54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e6d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e6d58: 0xae4211c0  sw          $v0, 0x11C0($s2)
    ctx->pc = 0x2e6d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4544), GPR_U32(ctx, 2));
label_2e6d5c:
    // 0x2e6d5c: 0xdfb002a0  ld          $s0, 0x2A0($sp)
    ctx->pc = 0x2e6d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_2e6d60:
    // 0x2e6d60: 0xdfb102a8  ld          $s1, 0x2A8($sp)
    ctx->pc = 0x2e6d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2e6d64: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x2e6d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2e6d68: 0xdfb302b8  ld          $s3, 0x2B8($sp)
    ctx->pc = 0x2e6d68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2e6d6c: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x2e6d6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2e6d70: 0xdfb502c8  ld          $s5, 0x2C8($sp)
    ctx->pc = 0x2e6d70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2e6d74: 0xdfb602d0  ld          $s6, 0x2D0($sp)
    ctx->pc = 0x2e6d74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2e6d78: 0xdfb702d8  ld          $s7, 0x2D8($sp)
    ctx->pc = 0x2e6d78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2e6d7c: 0xdfbe02e0  ld          $fp, 0x2E0($sp)
    ctx->pc = 0x2e6d7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2e6d80: 0xdfbf02e8  ld          $ra, 0x2E8($sp)
    ctx->pc = 0x2e6d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2e6d84: 0xc7b90318  lwc1        $f25, 0x318($sp)
    ctx->pc = 0x2e6d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2e6d88: 0xc7b80310  lwc1        $f24, 0x310($sp)
    ctx->pc = 0x2e6d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e6d8c: 0xc7b70308  lwc1        $f23, 0x308($sp)
    ctx->pc = 0x2e6d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e6d90: 0xc7b60300  lwc1        $f22, 0x300($sp)
    ctx->pc = 0x2e6d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e6d94: 0xc7b502f8  lwc1        $f21, 0x2F8($sp)
    ctx->pc = 0x2e6d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e6d98: 0xc7b402f0  lwc1        $f20, 0x2F0($sp)
    ctx->pc = 0x2e6d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D9Cu;
        // 0x2e6da0: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6DA4u;
    // 0x2e6da4: 0x0  nop
    ctx->pc = 0x2e6da4u;
    // NOP
    ctx->pc = 0x2e6da8u;
}
