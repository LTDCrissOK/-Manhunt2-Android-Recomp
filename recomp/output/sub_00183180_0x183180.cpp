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

// Function: sub_00183180
// Address: 0x183180 - 0x183530
void sub_00183180_0x183180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183180_0x183180");
#endif

    switch (ctx->pc) {
        case 0x18323cu: goto label_18323c;
        case 0x183270u: goto label_183270;
        case 0x18329cu: goto label_18329c;
        case 0x1832c8u: goto label_1832c8;
        case 0x1832f8u: goto label_1832f8;
        case 0x18331cu: goto label_18331c;
        case 0x183340u: goto label_183340;
        case 0x183364u: goto label_183364;
        case 0x183388u: goto label_183388;
        case 0x1833acu: goto label_1833ac;
        case 0x1833d0u: goto label_1833d0;
        case 0x1833f4u: goto label_1833f4;
        case 0x183418u: goto label_183418;
        case 0x183434u: goto label_183434;
        case 0x183464u: goto label_183464;
        case 0x183478u: goto label_183478;
        case 0x1834e8u: goto label_1834e8;
        default: break;
    }

    ctx->pc = 0x183180u;

    // 0x183180: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x183180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x183184: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x183184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x183188: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x183188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18318c: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x18318cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x183190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x183190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x183194: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x183194u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x183198: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x183198u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18319c: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x18319cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1831a0: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x1831a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x1831a4: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x1831a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1831a8: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x1831a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1831ac: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1831acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1831b0: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1831b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1831b4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1831b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831b8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1831b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1831bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1831bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1831c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1831c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1831c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1831c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1831c8: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1831c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1831cc: 0xe7bf0078  swc1        $f31, 0x78($sp)
    ctx->pc = 0x1831ccu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1831d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1831d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831d4: 0xe7be0070  swc1        $f30, 0x70($sp)
    ctx->pc = 0x1831d4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1831d8: 0xe7bd0068  swc1        $f29, 0x68($sp)
    ctx->pc = 0x1831d8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1831dc: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x1831dcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1831e0: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x1831e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1831e4: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1831e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1831e8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1831e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1831ec: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1831ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1831f0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1831f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1831f4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1831f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1831f8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1831f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1831fc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1831fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x183200: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x183200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x183204: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x183204u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x183208: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x183208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x18320c: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x18320cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x183210: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x183210u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x183214: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x183214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x183218: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x183218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x18321c: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x18321cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x183220: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x183220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x183224: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x183224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x183228: 0x4600dbc6  mov.s       $f15, $f27
    ctx->pc = 0x183228u;
    ctx->f[15] = FPU_MOV_S(ctx->f[27]);
    // 0x18322c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x18322cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x183230: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x183230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x183234: 0xc060498  jal         func_181260
    ctx->pc = 0x183234u;
    SET_GPR_U32(ctx, 31, 0x18323Cu);
    ctx->pc = 0x183238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183234u;
    // 0x183238: 0xe45c012c  swc1        $f28, 0x12C($v0) (Delay Slot)
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x183234u, 0x18323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18323Cu;
label_18323c:
    // 0x18323c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x18323cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x183240: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x183240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x183244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183248: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x183248u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x18324c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x18324cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x183250: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x183250u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x183254: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183254u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183258: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183258u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18325c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18325cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183260: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x183260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x183264: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x183264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x183268: 0xc060450  jal         func_181140
    ctx->pc = 0x183268u;
    SET_GPR_U32(ctx, 31, 0x183270u);
    ctx->pc = 0x18326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183268u;
    // 0x18326c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183268u, 0x183270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183270u;
label_183270:
    // 0x183270: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x183270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x183274: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x183274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x183278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18327c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x18327cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x183280: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x183280u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x183284: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x183284u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x183288: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x183288u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x18328c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18328cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183290: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183290u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183294: 0xc060450  jal         func_181140
    ctx->pc = 0x183294u;
    SET_GPR_U32(ctx, 31, 0x18329Cu);
    ctx->pc = 0x183298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183294u;
    // 0x183298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183294u, 0x18329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18329Cu;
label_18329c:
    // 0x18329c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x18329cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1832a0: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x1832a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x1832a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1832a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832a8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1832a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1832ac: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x1832acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x1832b0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1832b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1832b4: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x1832b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x1832b8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1832b8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1832bc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1832bcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1832c0: 0xc060450  jal         func_181140
    ctx->pc = 0x1832C0u;
    SET_GPR_U32(ctx, 31, 0x1832C8u);
    ctx->pc = 0x1832C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1832C0u;
    // 0x1832c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1832C0u, 0x1832C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1832C8u;
label_1832c8:
    // 0x1832c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1832c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1832cc: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x1832ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x1832d0: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x1832d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x1832d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1832d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1832d8: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x1832d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x1832dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1832dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832e0: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x1832e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x1832e4: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x1832e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x1832e8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1832e8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1832ec: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1832ecu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1832f0: 0xc060450  jal         func_181140
    ctx->pc = 0x1832F0u;
    SET_GPR_U32(ctx, 31, 0x1832F8u);
    ctx->pc = 0x1832F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1832F0u;
    // 0x1832f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1832F0u, 0x1832F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1832F8u;
label_1832f8:
    // 0x1832f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1832f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832fc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1832fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x183300: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183300u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183304: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183304u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183308: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183308u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18330c: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x18330cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x183310: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183310u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183314: 0xc060450  jal         func_181140
    ctx->pc = 0x183314u;
    SET_GPR_U32(ctx, 31, 0x18331Cu);
    ctx->pc = 0x183318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183314u;
    // 0x183318: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183314u, 0x18331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18331Cu;
label_18331c:
    // 0x18331c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183320: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x183320u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x183324: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x183324u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x183328: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x183328u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x18332c: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x18332cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x183330: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183330u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183334: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183334u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183338: 0xc060450  jal         func_181140
    ctx->pc = 0x183338u;
    SET_GPR_U32(ctx, 31, 0x183340u);
    ctx->pc = 0x18333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183338u;
    // 0x18333c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183338u, 0x183340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183340u;
label_183340:
    // 0x183340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183344: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x183344u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x183348: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x183348u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x18334c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x18334cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x183350: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183350u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183354: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183354u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183358: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183358u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18335c: 0xc060450  jal         func_181140
    ctx->pc = 0x18335Cu;
    SET_GPR_U32(ctx, 31, 0x183364u);
    ctx->pc = 0x183360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18335Cu;
    // 0x183360: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18335Cu, 0x183364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183364u;
label_183364:
    // 0x183364: 0x4600c406  mov.s       $f16, $f24
    ctx->pc = 0x183364u;
    ctx->f[16] = FPU_MOV_S(ctx->f[24]);
    // 0x183368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18336c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x18336cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x183370: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183370u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183374: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183374u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183378: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183378u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18337c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18337cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183380: 0xc060450  jal         func_181140
    ctx->pc = 0x183380u;
    SET_GPR_U32(ctx, 31, 0x183388u);
    ctx->pc = 0x183384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183380u;
    // 0x183384: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183380u, 0x183388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183388u;
label_183388:
    // 0x183388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18338c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x18338cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x183390: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x183390u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x183394: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183394u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183398: 0x4600dbc6  mov.s       $f15, $f27
    ctx->pc = 0x183398u;
    ctx->f[15] = FPU_MOV_S(ctx->f[27]);
    // 0x18339c: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x18339cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x1833a0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1833a0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1833a4: 0xc060450  jal         func_181140
    ctx->pc = 0x1833A4u;
    SET_GPR_U32(ctx, 31, 0x1833ACu);
    ctx->pc = 0x1833A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833A4u;
    // 0x1833a8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1833A4u, 0x1833ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833ACu;
label_1833ac:
    // 0x1833ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1833acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833b0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1833b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1833b4: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x1833b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x1833b8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1833b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1833bc: 0x4600dbc6  mov.s       $f15, $f27
    ctx->pc = 0x1833bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[27]);
    // 0x1833c0: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x1833c0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x1833c4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1833c4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1833c8: 0xc060450  jal         func_181140
    ctx->pc = 0x1833C8u;
    SET_GPR_U32(ctx, 31, 0x1833D0u);
    ctx->pc = 0x1833CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833C8u;
    // 0x1833cc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1833C8u, 0x1833D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833D0u;
label_1833d0:
    // 0x1833d0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1833d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1833d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1833d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1833d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1833dc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1833dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1833e0: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x1833e0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x1833e4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1833e4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1833e8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1833e8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1833ec: 0xc060450  jal         func_181140
    ctx->pc = 0x1833ECu;
    SET_GPR_U32(ctx, 31, 0x1833F4u);
    ctx->pc = 0x1833F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833ECu;
    // 0x1833f0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1833ECu, 0x1833F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833F4u;
label_1833f4:
    // 0x1833f4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1833f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1833f8: 0x4600e446  mov.s       $f17, $f28
    ctx->pc = 0x1833f8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[28]);
    // 0x1833fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1833fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183400: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x183400u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x183404: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x183404u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x183408: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183408u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18340c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18340cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183410: 0xc060450  jal         func_181140
    ctx->pc = 0x183410u;
    SET_GPR_U32(ctx, 31, 0x183418u);
    ctx->pc = 0x183414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183410u;
    // 0x183414: 0x4600bc06  mov.s       $f16, $f23 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183410u, 0x183418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183418u;
label_183418:
    // 0x183418: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x183418u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18341c: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x18341cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x183420: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x183420u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x183424: 0x4600dbc6  mov.s       $f15, $f27
    ctx->pc = 0x183424u;
    ctx->f[15] = FPU_MOV_S(ctx->f[27]);
    // 0x183428: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x183428u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x18342c: 0xc06049e  jal         func_181278
    ctx->pc = 0x18342Cu;
    SET_GPR_U32(ctx, 31, 0x183434u);
    ctx->pc = 0x183430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18342Cu;
    // 0x183430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x18342Cu, 0x183434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183434u;
label_183434:
    // 0x183434: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x183434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x183438: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x183438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x18343c: 0x4600fc46  mov.s       $f17, $f31
    ctx->pc = 0x18343cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[31]);
    // 0x183440: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x183440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x183444: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x183444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x183448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18344c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18344cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x183450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183454: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x183454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x183458: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x183458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18345c: 0xc0604a6  jal         func_181298
    ctx->pc = 0x18345Cu;
    SET_GPR_U32(ctx, 31, 0x183464u);
    ctx->pc = 0x183460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18345Cu;
    // 0x183460: 0x4600f386  mov.s       $f14, $f30 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x18345Cu, 0x183464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183464u;
label_183464:
    // 0x183464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183468: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x183468u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18346c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18346cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183470: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x183470u;
    SET_GPR_U32(ctx, 31, 0x183478u);
    ctx->pc = 0x183474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183470u;
    // 0x183474: 0x4600f386  mov.s       $f14, $f30 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x183470u, 0x183478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183478u;
label_183478:
    // 0x183478: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x183478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x18347c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18347cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x183480: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x183480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x183484: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x183484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183488: 0xe47c0104  swc1        $f28, 0x104($v1)
    ctx->pc = 0x183488u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x18348c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183490: 0xe49c0108  swc1        $f28, 0x108($a0)
    ctx->pc = 0x183490u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x183494: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x183494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18349c: 0xa205013b  sb          $a1, 0x13B($s0)
    ctx->pc = 0x18349cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 5));
    // 0x1834a0: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x1834a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x1834a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1834a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834a8: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x1834a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x1834ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1834acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834b0: 0xa2050138  sb          $a1, 0x138($s0)
    ctx->pc = 0x1834b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 5));
    // 0x1834b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1834b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834b8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1834b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1834bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1834bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1834c0: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x1834c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x1834c4: 0xe4df013c  swc1        $f31, 0x13C($a2)
    ctx->pc = 0x1834c4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 316), bits); }
    // 0x1834c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1834c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834cc: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1834ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1834d0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1834d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1834d4: 0xe4600144  swc1        $f0, 0x144($v1)
    ctx->pc = 0x1834d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x1834d8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1834d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1834dc: 0xe63e0148  swc1        $f30, 0x148($s1)
    ctx->pc = 0x1834dcu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x1834e0: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1834E0u;
    SET_GPR_U32(ctx, 31, 0x1834E8u);
    ctx->pc = 0x1834E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834E0u;
    // 0x1834e4: 0x24a5f850  addiu       $a1, $a1, -0x7B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1834E0u, 0x1834E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834E8u;
label_1834e8:
    // 0x1834e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1834e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1834ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1834ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1834f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1834f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1834f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1834f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1834f8: 0xc7bf0078  lwc1        $f31, 0x78($sp)
    ctx->pc = 0x1834f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x1834fc: 0xc7be0070  lwc1        $f30, 0x70($sp)
    ctx->pc = 0x1834fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x183500: 0xc7bd0068  lwc1        $f29, 0x68($sp)
    ctx->pc = 0x183500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x183504: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x183504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x183508: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x183508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x18350c: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x18350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x183510: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x183510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x183514: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x183514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x183518: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x183518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18351c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x18351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x183520: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x183520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x183524: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x183524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183528: 0x3e00008  jr          $ra
    ctx->pc = 0x183528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183528u;
        // 0x18352c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183530u;
}
