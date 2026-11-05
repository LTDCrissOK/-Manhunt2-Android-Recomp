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

// Function: sub_00182068
// Address: 0x182068 - 0x1823a0
void sub_00182068_0x182068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182068_0x182068");
#endif

    switch (ctx->pc) {
        case 0x1820fcu: goto label_1820fc;
        case 0x182128u: goto label_182128;
        case 0x182154u: goto label_182154;
        case 0x182180u: goto label_182180;
        case 0x1821acu: goto label_1821ac;
        case 0x1821d0u: goto label_1821d0;
        case 0x1821f4u: goto label_1821f4;
        case 0x182218u: goto label_182218;
        case 0x18223cu: goto label_18223c;
        case 0x182260u: goto label_182260;
        case 0x182284u: goto label_182284;
        case 0x1822a8u: goto label_1822a8;
        case 0x1822ccu: goto label_1822cc;
        case 0x1822e8u: goto label_1822e8;
        case 0x18231cu: goto label_18231c;
        case 0x182334u: goto label_182334;
        case 0x182360u: goto label_182360;
        default: break;
    }

    ctx->pc = 0x182068u;

    // 0x182068: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x182068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18206c: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x18206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x182070: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x182070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182074: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x182074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x182078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18207c: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x18207cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x182080: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x182080u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x182084: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x182084u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x182088: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x182088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x18208c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x18208cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x182090: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x182090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x182094: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x182094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182098: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x182098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x18209c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x18209cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1820a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1820a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1820a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1820a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1820a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1820ac: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1820acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1820b0: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x1820b0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1820b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1820b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820b8: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x1820b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1820bc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1820bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1820c0: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x1820c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1820c4: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1820c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1820c8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1820c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1820cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1820ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1820d0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1820d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1820d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1820d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1820d8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1820d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1820dc: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1820dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1820e0: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1820e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1820e4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1820e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1820e8: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x1820e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x1820ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1820ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1820f0: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x1820f0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x1820f4: 0xc060498  jal         func_181260
    ctx->pc = 0x1820F4u;
    SET_GPR_U32(ctx, 31, 0x1820FCu);
    ctx->pc = 0x1820F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1820F4u;
    // 0x1820f8: 0xe460012c  swc1        $f0, 0x12C($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x1820F4u, 0x1820FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1820FCu;
label_1820fc:
    // 0x1820fc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1820fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x182100: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x182100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x182104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182108: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x182108u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x18210c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18210cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182110: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182110u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182114: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182114u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182118: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182118u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18211c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18211cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182120: 0xc060450  jal         func_181140
    ctx->pc = 0x182120u;
    SET_GPR_U32(ctx, 31, 0x182128u);
    ctx->pc = 0x182124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182120u;
    // 0x182124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182120u, 0x182128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182128u;
label_182128:
    // 0x182128: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x182128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x18212c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x18212cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x182130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182134: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x182134u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x182138: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x182138u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x18213c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18213cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182140: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182140u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182144: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182144u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182148: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182148u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18214c: 0xc060450  jal         func_181140
    ctx->pc = 0x18214Cu;
    SET_GPR_U32(ctx, 31, 0x182154u);
    ctx->pc = 0x182150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18214Cu;
    // 0x182150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18214Cu, 0x182154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182154u;
label_182154:
    // 0x182154: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x182154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x182158: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x182158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x18215c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182160: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x182160u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x182164: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x182164u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x182168: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182168u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18216c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18216cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182170: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182170u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182174: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182174u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182178: 0xc060450  jal         func_181140
    ctx->pc = 0x182178u;
    SET_GPR_U32(ctx, 31, 0x182180u);
    ctx->pc = 0x18217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182178u;
    // 0x18217c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182178u, 0x182180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182180u;
label_182180:
    // 0x182180: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x182180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x182184: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x182184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x182188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18218c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18218cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182190: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182190u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182194: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x182194u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x182198: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182198u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18219c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18219cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1821a0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1821a0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1821a4: 0xc060450  jal         func_181140
    ctx->pc = 0x1821A4u;
    SET_GPR_U32(ctx, 31, 0x1821ACu);
    ctx->pc = 0x1821A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1821A4u;
    // 0x1821a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1821A4u, 0x1821ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1821ACu;
label_1821ac:
    // 0x1821ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1821acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821b0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1821b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1821b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1821b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1821b8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1821b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1821bc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1821bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1821c0: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x1821c0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x1821c4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1821c4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1821c8: 0xc060450  jal         func_181140
    ctx->pc = 0x1821C8u;
    SET_GPR_U32(ctx, 31, 0x1821D0u);
    ctx->pc = 0x1821CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1821C8u;
    // 0x1821cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1821C8u, 0x1821D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1821D0u;
label_1821d0:
    // 0x1821d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1821d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821d4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1821d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1821d8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1821d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1821dc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1821dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1821e0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1821e0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1821e4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1821e4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1821e8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1821e8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1821ec: 0xc060450  jal         func_181140
    ctx->pc = 0x1821ECu;
    SET_GPR_U32(ctx, 31, 0x1821F4u);
    ctx->pc = 0x1821F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1821ECu;
    // 0x1821f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1821ECu, 0x1821F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1821F4u;
label_1821f4:
    // 0x1821f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1821f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1821f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1821fc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1821fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182200: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182200u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182204: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182204u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182208: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182208u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18220c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18220cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182210: 0xc060450  jal         func_181140
    ctx->pc = 0x182210u;
    SET_GPR_U32(ctx, 31, 0x182218u);
    ctx->pc = 0x182214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182210u;
    // 0x182214: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182210u, 0x182218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182218u;
label_182218:
    // 0x182218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18221c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x18221cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x182220: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182220u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182224: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182224u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182228: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182228u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18222c: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x18222cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x182230: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182230u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182234: 0xc060450  jal         func_181140
    ctx->pc = 0x182234u;
    SET_GPR_U32(ctx, 31, 0x18223Cu);
    ctx->pc = 0x182238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182234u;
    // 0x182238: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182234u, 0x18223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18223Cu;
label_18223c:
    // 0x18223c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182240: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182240u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182244: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x182244u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x182248: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182248u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18224c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18224cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182250: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x182250u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x182254: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182254u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182258: 0xc060450  jal         func_181140
    ctx->pc = 0x182258u;
    SET_GPR_U32(ctx, 31, 0x182260u);
    ctx->pc = 0x18225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182258u;
    // 0x18225c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182258u, 0x182260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182260u;
label_182260:
    // 0x182260: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x182260u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x182264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182268: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182268u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18226c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x18226cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x182270: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182270u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182274: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182274u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182278: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182278u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18227c: 0xc060450  jal         func_181140
    ctx->pc = 0x18227Cu;
    SET_GPR_U32(ctx, 31, 0x182284u);
    ctx->pc = 0x182280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18227Cu;
    // 0x182280: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18227Cu, 0x182284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182284u;
label_182284:
    // 0x182284: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182284u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18228c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x18228cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x182290: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182290u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182294: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182294u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182298: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182298u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18229c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18229cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1822a0: 0xc060450  jal         func_181140
    ctx->pc = 0x1822A0u;
    SET_GPR_U32(ctx, 31, 0x1822A8u);
    ctx->pc = 0x1822A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822A0u;
    // 0x1822a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1822A0u, 0x1822A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822A8u;
label_1822a8:
    // 0x1822a8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1822a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1822ac: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1822acu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1822b0: 0x4600c406  mov.s       $f16, $f24
    ctx->pc = 0x1822b0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[24]);
    // 0x1822b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1822b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822b8: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1822b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1822bc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1822bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1822c0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1822c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1822c4: 0xc060450  jal         func_181140
    ctx->pc = 0x1822C4u;
    SET_GPR_U32(ctx, 31, 0x1822CCu);
    ctx->pc = 0x1822C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822C4u;
    // 0x1822c8: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1822C4u, 0x1822CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822CCu;
label_1822cc:
    // 0x1822cc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1822ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1822d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1822d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822d4: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1822d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1822d8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1822d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1822dc: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x1822dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x1822e0: 0xc06049e  jal         func_181278
    ctx->pc = 0x1822E0u;
    SET_GPR_U32(ctx, 31, 0x1822E8u);
    ctx->pc = 0x1822E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822E0u;
    // 0x1822e4: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x1822E0u, 0x1822E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822E8u;
label_1822e8:
    // 0x1822e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1822e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1822ec: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1822ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1822f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1822f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822f4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1822f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1822f8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1822f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1822fc: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1822fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x182300: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x182300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x182304: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x182304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x182308: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x182308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18230c: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x18230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x182310: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x182310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x182314: 0xc0604a6  jal         func_181298
    ctx->pc = 0x182314u;
    SET_GPR_U32(ctx, 31, 0x18231Cu);
    ctx->pc = 0x182318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182314u;
    // 0x182318: 0x46007446  mov.s       $f17, $f14 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x182314u, 0x18231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18231Cu;
label_18231c:
    // 0x18231c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x18231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x182320: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x182320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x182324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182328: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18232c: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x18232Cu;
    SET_GPR_U32(ctx, 31, 0x182334u);
    ctx->pc = 0x182330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18232Cu;
    // 0x182330: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x18232Cu, 0x182334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182334u;
label_182334:
    // 0x182334: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x182334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x182338: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x182338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x18233c: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x18233cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x182340: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x182340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182344: 0xe4790104  swc1        $f25, 0x104($v1)
    ctx->pc = 0x182344u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x182348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x182348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18234c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x18234cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x182350: 0xe63a0108  swc1        $f26, 0x108($s1)
    ctx->pc = 0x182350u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x182354: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x182354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x182358: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x182358u;
    SET_GPR_U32(ctx, 31, 0x182360u);
    ctx->pc = 0x18235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182358u;
    // 0x18235c: 0x24a5f820  addiu       $a1, $a1, -0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x182358u, 0x182360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182360u;
label_182360:
    // 0x182360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182368: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18236c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18236cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182370: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x182370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x182374: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x182374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x182378: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x182378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18237c: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x18237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x182380: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x182380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x182384: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x182384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x182388: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x182388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18238c: 0x3e00008  jr          $ra
    ctx->pc = 0x18238Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18238Cu;
        // 0x182390: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18238Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182394u;
    // 0x182394: 0x0  nop
    ctx->pc = 0x182394u;
    // NOP
    // 0x182398: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x182398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18239c: 0x0  nop
    ctx->pc = 0x18239cu;
    // NOP
    ctx->pc = 0x1823a0u;
}
