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

// Function: sub_0020D6A8
// Address: 0x20d6a8 - 0x20db08
void sub_0020D6A8_0x20d6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D6A8_0x20d6a8");
#endif

    switch (ctx->pc) {
        case 0x20d6e0u: goto label_20d6e0;
        case 0x20d6e8u: goto label_20d6e8;
        case 0x20d704u: goto label_20d704;
        case 0x20d764u: goto label_20d764;
        case 0x20d838u: goto label_20d838;
        case 0x20d844u: goto label_20d844;
        case 0x20d870u: goto label_20d870;
        case 0x20d898u: goto label_20d898;
        case 0x20d8acu: goto label_20d8ac;
        case 0x20d8dcu: goto label_20d8dc;
        case 0x20d8ecu: goto label_20d8ec;
        case 0x20d8fcu: goto label_20d8fc;
        case 0x20d918u: goto label_20d918;
        case 0x20d928u: goto label_20d928;
        case 0x20d998u: goto label_20d998;
        case 0x20d9acu: goto label_20d9ac;
        case 0x20d9bcu: goto label_20d9bc;
        case 0x20d9d0u: goto label_20d9d0;
        case 0x20d9e0u: goto label_20d9e0;
        case 0x20da44u: goto label_20da44;
        case 0x20da64u: goto label_20da64;
        case 0x20da70u: goto label_20da70;
        case 0x20da80u: goto label_20da80;
        case 0x20daa0u: goto label_20daa0;
        case 0x20dab0u: goto label_20dab0;
        default: break;
    }

    ctx->pc = 0x20d6a8u;

    // 0x20d6a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d6ac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x20d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x20d6b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20d6b4: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x20d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x20d6b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20d6bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20d6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20d6c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20d6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20d6c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20d6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20d6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20d6d0: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x20d6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x20d6d4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x20d6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x20d6d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20D6D8u;
    SET_GPR_U32(ctx, 31, 0x20D6E0u);
    ctx->pc = 0x20D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D6D8u;
    // 0x20d6dc: 0xae220218  sw          $v0, 0x218($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20D6D8u, 0x20D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6E0u;
label_20d6e0:
    // 0x20d6e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20D6E0u;
    SET_GPR_U32(ctx, 31, 0x20D6E8u);
    ctx->pc = 0x20D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D6E0u;
    // 0x20d6e4: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20D6E0u, 0x20D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6E8u;
label_20d6e8:
    // 0x20d6e8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x20d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x20d6ec: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x20d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x20d6f0: 0x7e200020  sq          $zero, 0x20($s1)
    ctx->pc = 0x20d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 0));
    // 0x20d6f4: 0x7e200050  sq          $zero, 0x50($s1)
    ctx->pc = 0x20d6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 0));
    // 0x20d6f8: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x20d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x20d6fc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20D6FCu;
    SET_GPR_U32(ctx, 31, 0x20D704u);
    ctx->pc = 0x20D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D6FCu;
    // 0x20d700: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20D6FCu, 0x20D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D704u;
label_20d704:
    // 0x20d704: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x20d704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x20d708: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x20d708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x20d70c: 0x7e200070  sq          $zero, 0x70($s1)
    ctx->pc = 0x20d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 0));
    // 0x20d710: 0x7e2000a0  sq          $zero, 0xA0($s1)
    ctx->pc = 0x20d710u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 0));
    // 0x20d714: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x20d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x20d718: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x20d718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x20d71c: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x20d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x20d720: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x20d720u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x20d724: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x20d724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x20d728: 0x261013e0  addiu       $s0, $s0, 0x13E0
    ctx->pc = 0x20d728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5088));
    // 0x20d72c: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x20d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x20d730: 0x262400f8  addiu       $a0, $s1, 0xF8
    ctx->pc = 0x20d730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    // 0x20d734: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x20d734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
    // 0x20d738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d73c: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x20d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x20d740: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x20d740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x20d744: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x20d744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
    // 0x20d748: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x20d748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x20d74c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x20d74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x20d750: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20d750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20d754: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x20d754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x20d758: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x20d758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x20d75c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x20D75Cu;
    SET_GPR_U32(ctx, 31, 0x20D764u);
    ctx->pc = 0x20D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D75Cu;
    // 0x20d760: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x20D75Cu, 0x20D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D764u;
label_20d764:
    // 0x20d764: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20d764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20d768: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x20d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20d76c: 0xae230140  sw          $v1, 0x140($s1)
    ctx->pc = 0x20d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 3));
    // 0x20d770: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x20d770u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x20d774: 0xae220144  sw          $v0, 0x144($s1)
    ctx->pc = 0x20d774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 2));
    // 0x20d778: 0x24e65b60  addiu       $a2, $a3, 0x5B60
    ctx->pc = 0x20d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 23392));
    // 0x20d77c: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x20d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x20d780: 0x26230170  addiu       $v1, $s1, 0x170
    ctx->pc = 0x20d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x20d784: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x20d784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
    // 0x20d788: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x20d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x20d78c: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x20d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
    // 0x20d790: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x20d790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d794: 0xa2200114  sb          $zero, 0x114($s1)
    ctx->pc = 0x20d794u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 276), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d79c: 0xa2200115  sb          $zero, 0x115($s1)
    ctx->pc = 0x20d79cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 277), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d7a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20d7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7a4: 0xa2200116  sb          $zero, 0x116($s1)
    ctx->pc = 0x20d7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 278), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d7a8: 0xa2200117  sb          $zero, 0x117($s1)
    ctx->pc = 0x20d7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 279), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d7ac: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x20d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x20d7b0: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x20d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
    // 0x20d7b4: 0xae200130  sw          $zero, 0x130($s1)
    ctx->pc = 0x20d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
    // 0x20d7b8: 0xa2200134  sb          $zero, 0x134($s1)
    ctx->pc = 0x20d7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 308), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d7bc: 0xae200138  sw          $zero, 0x138($s1)
    ctx->pc = 0x20d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
    // 0x20d7c0: 0xae20013c  sw          $zero, 0x13C($s1)
    ctx->pc = 0x20d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 0));
    // 0x20d7c4: 0xae200150  sw          $zero, 0x150($s1)
    ctx->pc = 0x20d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 0));
    // 0x20d7c8: 0xc4e05b60  lwc1        $f0, 0x5B60($a3)
    ctx->pc = 0x20d7c8u;
    { uint32_t bits = FAST_READ32(0x575B60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d7cc: 0xe6200170  swc1        $f0, 0x170($s1)
    ctx->pc = 0x20d7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
    // 0x20d7d0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x20d7d0u;
    { uint32_t bits = FAST_READ32(0x575B64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d7d4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x20d7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x20d7d8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x20d7d8u;
    { uint32_t bits = FAST_READ32(0x575B68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d7dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x20d7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x20d7e0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x20d7e0u;
    { uint32_t bits = FAST_READ32(0x575B6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d7e4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x20d7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x20d7e8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x20d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x20d7ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20d7f0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x20d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x20d7f4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x20d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x20d7f8: 0xae280190  sw          $t0, 0x190($s1)
    ctx->pc = 0x20d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 8));
    // 0x20d7fc: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x20d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
    // 0x20d800: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x20d800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
    // 0x20d804: 0xae200188  sw          $zero, 0x188($s1)
    ctx->pc = 0x20d804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 0));
    // 0x20d808: 0xae200194  sw          $zero, 0x194($s1)
    ctx->pc = 0x20d808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 0));
    // 0x20d80c: 0xae200198  sw          $zero, 0x198($s1)
    ctx->pc = 0x20d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 0));
    // 0x20d810: 0xae20019c  sw          $zero, 0x19C($s1)
    ctx->pc = 0x20d810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 412), GPR_U32(ctx, 0));
    // 0x20d814: 0xae2001a8  sw          $zero, 0x1A8($s1)
    ctx->pc = 0x20d814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 0));
    // 0x20d818: 0xae2001ac  sw          $zero, 0x1AC($s1)
    ctx->pc = 0x20d818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 0));
    // 0x20d81c: 0xae2001b0  sw          $zero, 0x1B0($s1)
    ctx->pc = 0x20d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 0));
    // 0x20d820: 0xae2001b4  sw          $zero, 0x1B4($s1)
    ctx->pc = 0x20d820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 0));
    // 0x20d824: 0xa22001b8  sb          $zero, 0x1B8($s1)
    ctx->pc = 0x20d824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 440), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d828: 0xae2001d0  sw          $zero, 0x1D0($s1)
    ctx->pc = 0x20d828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
    // 0x20d82c: 0xae2001d4  sw          $zero, 0x1D4($s1)
    ctx->pc = 0x20d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
    // 0x20d830: 0xc083bba  jal         func_20EEE8
    ctx->pc = 0x20D830u;
    SET_GPR_U32(ctx, 31, 0x20D838u);
    ctx->pc = 0x20D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D830u;
    // 0x20d834: 0xae2801a0  sw          $t0, 0x1A0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEE8u, 0x20D830u, 0x20D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D838u;
label_20d838:
    // 0x20d838: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d83c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D83Cu;
    SET_GPR_U32(ctx, 31, 0x20D844u);
    ctx->pc = 0x20D840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D83Cu;
    // 0x20d840: 0x2644017c  addiu       $a0, $s2, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D83Cu, 0x20D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D844u;
label_20d844:
    // 0x20d844: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20d844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20d848: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d84c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D84Cu;
    {
        const bool branch_taken_0x20d84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D84Cu;
        // 0x20d850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d84c) {
            ctx->pc = 0x20D860u;
            goto label_20d860;
        }
    }
    ctx->pc = 0x20D854u;
    // 0x20d854: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x20d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x20d858: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x20d858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x20d85c: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x20d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_20d860:
    // 0x20d860: 0x2633018c  addiu       $s3, $s1, 0x18C
    ctx->pc = 0x20d860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 396));
    // 0x20d864: 0x263401d8  addiu       $s4, $s1, 0x1D8
    ctx->pc = 0x20d864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
    // 0x20d868: 0x262501bc  addiu       $a1, $s1, 0x1BC
    ctx->pc = 0x20d868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x20d86c: 0x0  nop
    ctx->pc = 0x20d86cu;
    // NOP
label_20d870:
    // 0x20d870: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x20d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20d874: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20d874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20d878: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20d87c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x20d87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d880: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x20d880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x20d884: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20D884u;
    {
        const bool branch_taken_0x20d884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D884u;
        // 0x20d888: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d884) {
            ctx->pc = 0x20D870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d870;
        }
    }
    ctx->pc = 0x20D88Cu;
    // 0x20d88c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x20d88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x20d890: 0xc083942  jal         func_20E508
    ctx->pc = 0x20D890u;
    SET_GPR_U32(ctx, 31, 0x20D898u);
    ctx->pc = 0x20D894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D890u;
    // 0x20d894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x20D890u, 0x20D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D898u;
label_20d898:
    // 0x20d898: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x20d898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x20d89c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20D89Cu;
    {
        const bool branch_taken_0x20d89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d89c) {
            ctx->pc = 0x20D910u;
            goto label_20d910;
        }
    }
    ctx->pc = 0x20D8A4u;
    // 0x20d8a4: 0xc0c3028  jal         func_30C0A0
    ctx->pc = 0x20D8A4u;
    SET_GPR_U32(ctx, 31, 0x20D8ACu);
    ctx->pc = 0x30C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C0A0u, 0x20D8A4u, 0x20D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8ACu;
label_20d8ac:
    // 0x20d8ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20D8ACu;
    {
        const bool branch_taken_0x20d8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d8ac) {
            ctx->pc = 0x20D8D4u;
            goto label_20d8d4;
        }
    }
    ctx->pc = 0x20D8B4u;
    // 0x20d8b4: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x20d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x20d8b8: 0x38620401  xori        $v0, $v1, 0x401
    ctx->pc = 0x20d8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1025);
    // 0x20d8bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D8BCu;
    {
        const bool branch_taken_0x20d8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8BCu;
        // 0x20d8c0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8bc) {
            ctx->pc = 0x20D8D4u;
            goto label_20d8d4;
        }
    }
    ctx->pc = 0x20D8C4u;
    // 0x20d8c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20d8c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20d8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20d8cc: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20D8CCu;
    {
        const bool branch_taken_0x20d8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d8cc) {
            ctx->pc = 0x20D8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D8CCu;
            // 0x20d8d0: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D904u;
            goto label_20d904;
        }
    }
    ctx->pc = 0x20D8D4u;
label_20d8d4:
    // 0x20d8d4: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x20D8D4u;
    SET_GPR_U32(ctx, 31, 0x20D8DCu);
    ctx->pc = 0x20D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D8D4u;
    // 0x20d8d8: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x20D8D4u, 0x20D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8DCu;
label_20d8dc:
    // 0x20d8dc: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x20d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x20d8e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d8e4: 0xc085ea2  jal         func_217A88
    ctx->pc = 0x20D8E4u;
    SET_GPR_U32(ctx, 31, 0x20D8ECu);
    ctx->pc = 0x20D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D8E4u;
    // 0x20d8e8: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A88u, 0x20D8E4u, 0x20D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8ECu;
label_20d8ec:
    // 0x20d8ec: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x20d8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20d8f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d8f4: 0xc0849de  jal         func_212778
    ctx->pc = 0x20D8F4u;
    SET_GPR_U32(ctx, 31, 0x20D8FCu);
    ctx->pc = 0x20D8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D8F4u;
    // 0x20d8f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212778u, 0x20D8F4u, 0x20D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8FCu;
label_20d8fc:
    // 0x20d8fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20D8FCu;
    {
        const bool branch_taken_0x20d8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8FCu;
        // 0x20d900: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8fc) {
            ctx->pc = 0x20D934u;
            goto label_20d934;
        }
    }
    ctx->pc = 0x20D904u;
label_20d904:
    // 0x20d904: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D904u;
    {
        const bool branch_taken_0x20d904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D904u;
        // 0x20d908: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d904) {
            ctx->pc = 0x20D910u;
            goto label_20d910;
        }
    }
    ctx->pc = 0x20D90Cu;
    // 0x20d90c: 0xa2220116  sb          $v0, 0x116($s1)
    ctx->pc = 0x20d90cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 278), (uint8_t)GPR_U32(ctx, 2));
label_20d910:
    // 0x20d910: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20D910u;
    SET_GPR_U32(ctx, 31, 0x20D918u);
    ctx->pc = 0x20D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D910u;
    // 0x20d914: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20D910u, 0x20D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D918u;
label_20d918:
    // 0x20d918: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20d918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20d91c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20d91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d920: 0xc0c31f4  jal         func_30C7D0
    ctx->pc = 0x20D920u;
    SET_GPR_U32(ctx, 31, 0x20D928u);
    ctx->pc = 0x20D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D920u;
    // 0x20d924: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C7D0u, 0x20D920u, 0x20D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D928u;
label_20d928:
    // 0x20d928: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x20d928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x20d92c: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x20d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x20d930: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x20d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20d934:
    // 0x20d934: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x20d934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x20d938: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20D938u;
    {
        const bool branch_taken_0x20d938 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D938u;
        // 0x20d93c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d938) {
            ctx->pc = 0x20D954u;
            goto label_20d954;
        }
    }
    ctx->pc = 0x20D940u;
    // 0x20d940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d944: 0x0  nop
    ctx->pc = 0x20d944u;
    // NOP
    // 0x20d948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20d948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20d94c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20D94Cu;
    {
        const bool branch_taken_0x20d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D94Cu;
        // 0x20d950: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d94c) {
            ctx->pc = 0x20D970u;
            goto label_20d970;
        }
    }
    ctx->pc = 0x20D954u;
label_20d954:
    // 0x20d954: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20d954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20d958: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20d958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20d95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d960: 0x0  nop
    ctx->pc = 0x20d960u;
    // NOP
    // 0x20d964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20d964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20d968: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20d968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x20d96c: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x20d96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_20d970:
    // 0x20d970: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x20d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x20d974: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x20D974u;
    {
        const bool branch_taken_0x20d974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d974) {
            ctx->pc = 0x20D978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D974u;
            // 0x20d978: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D9ECu;
            goto label_20d9ec;
        }
    }
    ctx->pc = 0x20D97Cu;
    // 0x20d97c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x20d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x20d980: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20d984: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x20d984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x20d988: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20D988u;
    {
        const bool branch_taken_0x20d988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d988) {
            ctx->pc = 0x20D9B4u;
            goto label_20d9b4;
        }
    }
    ctx->pc = 0x20D990u;
    // 0x20d990: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20D990u;
    SET_GPR_U32(ctx, 31, 0x20D998u);
    ctx->pc = 0x20D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D990u;
    // 0x20d994: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20D990u, 0x20D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D998u;
label_20d998:
    // 0x20d998: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x20d998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20d99c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d9a0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x20d9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d9a4: 0xc0769a6  jal         func_1DA698
    ctx->pc = 0x20D9A4u;
    SET_GPR_U32(ctx, 31, 0x20D9ACu);
    ctx->pc = 0x20D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D9A4u;
    // 0x20d9a8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x20D9A4u, 0x20D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D9ACu;
label_20d9ac:
    // 0x20d9ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20D9ACu;
    {
        const bool branch_taken_0x20d9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9ACu;
        // 0x20d9b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9ac) {
            ctx->pc = 0x20D9D4u;
            goto label_20d9d4;
        }
    }
    ctx->pc = 0x20D9B4u;
label_20d9b4:
    // 0x20d9b4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20D9B4u;
    SET_GPR_U32(ctx, 31, 0x20D9BCu);
    ctx->pc = 0x20D9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D9B4u;
    // 0x20d9b8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20D9B4u, 0x20D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D9BCu;
label_20d9bc:
    // 0x20d9bc: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x20d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20d9c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d9c4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x20d9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d9c8: 0xc076442  jal         func_1D9108
    ctx->pc = 0x20D9C8u;
    SET_GPR_U32(ctx, 31, 0x20D9D0u);
    ctx->pc = 0x20D9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D9C8u;
    // 0x20d9cc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9108u, 0x20D9C8u, 0x20D9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D9D0u;
label_20d9d0:
    // 0x20d9d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20d9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d9d4:
    // 0x20d9d4: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x20d9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x20d9d8: 0xc076574  jal         func_1D95D0
    ctx->pc = 0x20D9D8u;
    SET_GPR_U32(ctx, 31, 0x20D9E0u);
    ctx->pc = 0x20D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D9D8u;
    // 0x20d9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x20D9D8u, 0x20D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D9E0u;
label_20d9e0:
    // 0x20d9e0: 0xae3000c4  sw          $s0, 0xC4($s1)
    ctx->pc = 0x20d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
    // 0x20d9e4: 0xae3000c8  sw          $s0, 0xC8($s1)
    ctx->pc = 0x20d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 16));
    // 0x20d9e8: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x20d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20d9ec:
    // 0x20d9ec: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x20d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x20d9f0: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x20d9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20d9f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D9F4u;
    {
        const bool branch_taken_0x20d9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9F4u;
        // 0x20d9f8: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9f4) {
            ctx->pc = 0x20DA04u;
            goto label_20da04;
        }
    }
    ctx->pc = 0x20D9FCu;
    // 0x20d9fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D9FCu;
    {
        const bool branch_taken_0x20d9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9FCu;
        // 0x20da00: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9fc) {
            ctx->pc = 0x20DA0Cu;
            goto label_20da0c;
        }
    }
    ctx->pc = 0x20DA04u;
label_20da04:
    // 0x20da04: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x20da04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x20da08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20da08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20da0c:
    // 0x20da0c: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x20da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x20da10: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x20da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x20da14: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20DA14u;
    {
        const bool branch_taken_0x20da14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20da14) {
            ctx->pc = 0x20DA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DA14u;
            // 0x20da18: 0xac440028  sw          $a0, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DA1Cu;
            goto label_20da1c;
        }
    }
    ctx->pc = 0x20DA1Cu;
label_20da1c:
    // 0x20da1c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x20da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20da20: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20DA20u;
    {
        const bool branch_taken_0x20da20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20da20) {
            ctx->pc = 0x20DA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DA20u;
            // 0x20da24: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DA4Cu;
            goto label_20da4c;
        }
    }
    ctx->pc = 0x20DA28u;
    // 0x20da28: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x20da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x20da2c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x20da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20da30: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20DA30u;
    {
        const bool branch_taken_0x20da30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20da30) {
            ctx->pc = 0x20DA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DA30u;
            // 0x20da34: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DA4Cu;
            goto label_20da4c;
        }
    }
    ctx->pc = 0x20DA38u;
    // 0x20da38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x20da38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20da3c: 0xc0831c6  jal         func_20C718
    ctx->pc = 0x20DA3Cu;
    SET_GPR_U32(ctx, 31, 0x20DA44u);
    ctx->pc = 0x20DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA3Cu;
    // 0x20da40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C718u, 0x20DA3Cu, 0x20DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA44u;
label_20da44:
    // 0x20da44: 0xae22010c  sw          $v0, 0x10C($s1)
    ctx->pc = 0x20da44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
    // 0x20da48: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x20da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_20da4c:
    // 0x20da4c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20da4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20da50: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x20da50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x20da54: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DA54u;
    {
        const bool branch_taken_0x20da54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20da54) {
            ctx->pc = 0x20DA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DA54u;
            // 0x20da58: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DA78u;
            goto label_20da78;
        }
    }
    ctx->pc = 0x20DA5Cu;
    // 0x20da5c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20DA5Cu;
    SET_GPR_U32(ctx, 31, 0x20DA64u);
    ctx->pc = 0x20DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA5Cu;
    // 0x20da60: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20DA5Cu, 0x20DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA64u;
label_20da64:
    // 0x20da64: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x20da64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20da68: 0xc07571e  jal         func_1D5C78
    ctx->pc = 0x20DA68u;
    SET_GPR_U32(ctx, 31, 0x20DA70u);
    ctx->pc = 0x20DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA68u;
    // 0x20da6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C78u, 0x20DA68u, 0x20DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA70u;
label_20da70:
    // 0x20da70: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x20da70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
    // 0x20da74: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x20da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20da78:
    // 0x20da78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20da78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20da7c: 0x0  nop
    ctx->pc = 0x20da7cu;
    // NOP
label_20da80:
    // 0x20da80: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x20da80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x20da84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20da84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20da88: 0x0  nop
    ctx->pc = 0x20da88u;
    // NOP
    // 0x20da8c: 0x0  nop
    ctx->pc = 0x20da8cu;
    // NOP
    // 0x20da90: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20DA90u;
    {
        const bool branch_taken_0x20da90 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA90u;
        // 0x20da94: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da90) {
            ctx->pc = 0x20DA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20da80;
        }
    }
    ctx->pc = 0x20DA98u;
    // 0x20da98: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x20DA98u;
    SET_GPR_U32(ctx, 31, 0x20DAA0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x20DA98u, 0x20DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAA0u;
label_20daa0:
    // 0x20daa0: 0xa62200d8  sh          $v0, 0xD8($s1)
    ctx->pc = 0x20daa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x20daa4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x20daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20daa8: 0x2682003c  addiu       $v0, $s4, 0x3C
    ctx->pc = 0x20daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
    // 0x20daac: 0x0  nop
    ctx->pc = 0x20daacu;
    // NOP
label_20dab0:
    // 0x20dab0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20dab4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20dab8: 0x0  nop
    ctx->pc = 0x20dab8u;
    // NOP
    // 0x20dabc: 0x0  nop
    ctx->pc = 0x20dabcu;
    // NOP
    // 0x20dac0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20DAC0u;
    {
        const bool branch_taken_0x20dac0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAC0u;
        // 0x20dac4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dac0) {
            ctx->pc = 0x20DAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20dab0;
        }
    }
    ctx->pc = 0x20DAC8u;
    // 0x20dac8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x20dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20dacc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DACCu;
    {
        const bool branch_taken_0x20dacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dacc) {
            ctx->pc = 0x20DAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DACCu;
            // 0x20dad0: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DAE0u;
            goto label_20dae0;
        }
    }
    ctx->pc = 0x20DAD4u;
    // 0x20dad4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20dad8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x20dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x20dadc: 0xae220100  sw          $v0, 0x100($s1)
    ctx->pc = 0x20dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
label_20dae0:
    // 0x20dae0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20dae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dae4: 0xae2001a4  sw          $zero, 0x1A4($s1)
    ctx->pc = 0x20dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 0));
    // 0x20dae8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20dae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20daec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20daecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20daf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20daf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20daf4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20daf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20daf8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20daf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20dafc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20dafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db00: 0x3e00008  jr          $ra
    ctx->pc = 0x20DB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB00u;
        // 0x20db04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DB08u;
}
