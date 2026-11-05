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

// Function: sub_001C74E8
// Address: 0x1c74e8 - 0x1c7868
void sub_001C74E8_0x1c74e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C74E8_0x1c74e8");
#endif

    switch (ctx->pc) {
        case 0x1c7528u: goto label_1c7528;
        case 0x1c7584u: goto label_1c7584;
        case 0x1c75b0u: goto label_1c75b0;
        case 0x1c75f8u: goto label_1c75f8;
        case 0x1c76b4u: goto label_1c76b4;
        case 0x1c76dcu: goto label_1c76dc;
        case 0x1c76f8u: goto label_1c76f8;
        case 0x1c7724u: goto label_1c7724;
        case 0x1c77a4u: goto label_1c77a4;
        case 0x1c77e0u: goto label_1c77e0;
        case 0x1c77f4u: goto label_1c77f4;
        case 0x1c7830u: goto label_1c7830;
        default: break;
    }

    ctx->pc = 0x1c74e8u;

    // 0x1c74e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c74e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c74ec: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1c74ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x1c74f0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1c74f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74f4: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1c74f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1c74f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c74f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74fc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1c74fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1c7500: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1c7500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1c7504: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1c7504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1c7508: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1c7508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1c750c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1c750cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1c7510: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1c7510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x1c7514: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x1c7514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x1c7518: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1c7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1c751c: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1c751cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1c7520: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C7520u;
    SET_GPR_U32(ctx, 31, 0x1C7528u);
    ctx->pc = 0x1C7524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7520u;
    // 0x1c7524: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C7520u, 0x1C7528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7528u;
label_1c7528:
    // 0x1c7528: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1c7528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x1c752c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c752cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c7530: 0x7ac20320  lq          $v0, 0x320($s6)
    ctx->pc = 0x1c7530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 800)));
    // 0x1c7534: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1c7534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7538: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x1c7538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x1c753c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c753cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7540: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c7540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c7544: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c7544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1c7548: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c7548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c754c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1c754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7550: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1c7550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c7554: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1c7554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c7558: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1c7558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c755c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c755cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c7560: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c7560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7564: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1c7564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c7568: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1c7568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c756c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1c756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1c7570: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1c7570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c7574: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c7574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c757c: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1C757Cu;
    SET_GPR_U32(ctx, 31, 0x1C7584u);
    ctx->pc = 0x1C7580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C757Cu;
    // 0x1c7580: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1C757Cu, 0x1C7584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7584u;
label_1c7584:
    // 0x1c7584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7588: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1c758c: 0xac6291ac  sw          $v0, -0x6E54($v1)
    ctx->pc = 0x1c758cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F91ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91ACu, _value); } while (0);
    // 0x1c7590: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1c7590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c7594: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x1c7594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1c7598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c7598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c759c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1c759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1c75a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c75a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c75a4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1c75a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1c75a8: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x1C75A8u;
    SET_GPR_U32(ctx, 31, 0x1C75B0u);
    ctx->pc = 0x1C75ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75A8u;
    // 0x1c75ac: 0xe2280b  movn        $a1, $a3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x1C75A8u, 0x1C75B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75B0u;
label_1c75b0:
    // 0x1c75b0: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x1C75B0u;
    {
        const bool branch_taken_0x1c75b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75B0u;
        // 0x1c75b4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75b0) {
            ctx->pc = 0x1C781Cu;
            goto label_1c781c;
        }
    }
    ctx->pc = 0x1C75B8u;
    // 0x1c75b8: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1c75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x1c75bc: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x1C75BCu;
    {
        const bool branch_taken_0x1c75bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75BCu;
        // 0x1c75c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75bc) {
            ctx->pc = 0x1C781Cu;
            goto label_1c781c;
        }
    }
    ctx->pc = 0x1C75C4u;
    // 0x1c75c4: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x1c75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x1c75c8: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x1c75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1c75cc: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1c75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x1c75d0: 0x3c1e0020  lui         $fp, 0x20
    ctx->pc = 0x1c75d0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32 << 16));
    // 0x1c75d4: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1c75d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x1c75d8: 0x27a2006c  addiu       $v0, $sp, 0x6C
    ctx->pc = 0x1c75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c75dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1c75dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c75e0: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x1c75e0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x1c75e4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1c75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1c75e8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1c75e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1c75ec: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1c75ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1c75f0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1c75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1c75f4: 0x0  nop
    ctx->pc = 0x1c75f4u;
    // NOP
label_1c75f8:
    // 0x1c75f8: 0x8c622b20  lw          $v0, 0x2B20($v1)
    ctx->pc = 0x1c75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11040)));
    // 0x1c75fc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1c75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1c7600: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x1c7600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x1c7604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c7604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c7608: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c7608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c760c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1c760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1c7610: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1c7610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1c7614: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7614u;
    {
        const bool branch_taken_0x1c7614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7614) {
            ctx->pc = 0x1C7618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7614u;
            // 0x1c7618: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7624u;
            goto label_1c7624;
        }
    }
    ctx->pc = 0x1C761Cu;
    // 0x1c761c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1c761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1c7620: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1c7620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1c7624:
    // 0x1c7624: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x1c7624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1c7628: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x1c7628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x1c762c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c762cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c7630: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1C7630u;
    {
        const bool branch_taken_0x1c7630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7630u;
        // 0x1c7634: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7630) {
            ctx->pc = 0x1C7804u;
            goto label_1c7804;
        }
    }
    ctx->pc = 0x1C7638u;
    // 0x1c7638: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c7638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1c763c: 0x54400072  bnel        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x1C763Cu;
    {
        const bool branch_taken_0x1c763c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c763c) {
            ctx->pc = 0x1C7640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C763Cu;
            // 0x1c7640: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7808u;
            goto label_1c7808;
        }
    }
    ctx->pc = 0x1C7644u;
    // 0x1c7644: 0x26d10034  addiu       $s1, $s6, 0x34
    ctx->pc = 0x1c7644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 52));
    // 0x1c7648: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1c7648u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c764c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c7650: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7650u;
    {
        const bool branch_taken_0x1c7650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7650u;
        // 0x1c7654: 0x27b50064  addiu       $s5, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7650) {
            ctx->pc = 0x1C7670u;
            goto label_1c7670;
        }
    }
    ctx->pc = 0x1C7658u;
    // 0x1c7658: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C7658u;
    {
        const bool branch_taken_0x1c7658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7658) {
            ctx->pc = 0x1C765Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7658u;
            // 0x1c765c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7660u;
            goto label_1c7660;
        }
    }
    ctx->pc = 0x1C7660u;
label_1c7660:
    // 0x1c7660: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c7660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c7664: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c7664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c7668: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C7668u;
    {
        const bool branch_taken_0x1c7668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7668u;
        // 0x1c766c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7668) {
            ctx->pc = 0x1C7734u;
            goto label_1c7734;
        }
    }
    ctx->pc = 0x1C7670u;
label_1c7670:
    // 0x1c7670: 0x8ec30034  lw          $v1, 0x34($s6)
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x1c7674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7678: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1c7678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1c767c: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x1c767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1c7680: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c7680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c7684: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c7684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7688: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c7688u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c768c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c768cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c7690: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1c7690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1c7694: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c7694u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1c7698: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c769c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c76a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C76A0u;
    {
        const bool branch_taken_0x1c76a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76A0u;
        // 0x1c76a4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76a0) {
            ctx->pc = 0x1C76BCu;
            goto label_1c76bc;
        }
    }
    ctx->pc = 0x1C76A8u;
    // 0x1c76a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c76a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76ac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C76ACu;
    SET_GPR_U32(ctx, 31, 0x1C76B4u);
    ctx->pc = 0x1C76B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76ACu;
    // 0x1c76b0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C76ACu, 0x1C76B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76B4u;
label_1c76b4:
    // 0x1c76b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C76B4u;
    {
        const bool branch_taken_0x1c76b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76B4u;
        // 0x1c76b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76b4) {
            ctx->pc = 0x1C76C4u;
            goto label_1c76c4;
        }
    }
    ctx->pc = 0x1C76BCu;
label_1c76bc:
    // 0x1c76bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c76bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c76c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c76c4:
    // 0x1c76c4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1c76c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c76c8: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C76C8u;
    {
        const bool branch_taken_0x1c76c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76C8u;
        // 0x1c76cc: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76c8) {
            ctx->pc = 0x1C76E4u;
            goto label_1c76e4;
        }
    }
    ctx->pc = 0x1C76D0u;
    // 0x1c76d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c76d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76d4: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1C76D4u;
    SET_GPR_U32(ctx, 31, 0x1C76DCu);
    ctx->pc = 0x1C76D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76D4u;
    // 0x1c76d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1C76D4u, 0x1C76DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76DCu;
label_1c76dc:
    // 0x1c76dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C76DCu;
    {
        const bool branch_taken_0x1c76dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76DCu;
        // 0x1c76e0: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76dc) {
            ctx->pc = 0x1C76E8u;
            goto label_1c76e8;
        }
    }
    ctx->pc = 0x1C76E4u;
label_1c76e4:
    // 0x1c76e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c76e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c76e8:
    // 0x1c76e8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c76ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c76ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C76F0u;
    {
        const bool branch_taken_0x1c76f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76F0u;
        // 0x1c76f4: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76f0) {
            ctx->pc = 0x1C7710u;
            goto label_1c7710;
        }
    }
    ctx->pc = 0x1C76F8u;
label_1c76f8:
    // 0x1c76f8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1c76f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c76fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c7700: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c7700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c7704: 0x0  nop
    ctx->pc = 0x1c7704u;
    // NOP
    // 0x1c7708: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7708u;
    {
        const bool branch_taken_0x1c7708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7708u;
        // 0x1c770c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7708) {
            ctx->pc = 0x1C76F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c76f8;
        }
    }
    ctx->pc = 0x1C7710u;
label_1c7710:
    // 0x1c7710: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c7710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7714: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7714u;
    {
        const bool branch_taken_0x1c7714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7714u;
        // 0x1c7718: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7714) {
            ctx->pc = 0x1C7728u;
            goto label_1c7728;
        }
    }
    ctx->pc = 0x1C771Cu;
    // 0x1c771c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C771Cu;
    SET_GPR_U32(ctx, 31, 0x1C7724u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C771Cu, 0x1C7724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7724u;
label_1c7724:
    // 0x1c7724: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1c7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1c7728:
    // 0x1c7728: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c7728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c772c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c772cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1c7730: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1c7730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_1c7734:
    // 0x1c7734: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x1c7734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1c7738: 0x8c4400bc  lw          $a0, 0xBC($v0)
    ctx->pc = 0x1c7738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1c773c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1c773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c7740: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x1c7740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c7744: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C7744u;
    {
        const bool branch_taken_0x1c7744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7744u;
        // 0x1c7748: 0x9e1024  and         $v0, $a0, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7744) {
            ctx->pc = 0x1C7804u;
            goto label_1c7804;
        }
    }
    ctx->pc = 0x1C774Cu;
    // 0x1c774c: 0x105e002d  beq         $v0, $fp, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C774Cu;
    {
        const bool branch_taken_0x1c774c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x1C7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C774Cu;
        // 0x1c7750: 0x30821001  andi        $v0, $a0, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4097);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c774c) {
            ctx->pc = 0x1C7804u;
            goto label_1c7804;
        }
    }
    ctx->pc = 0x1C7754u;
    // 0x1c7754: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x1c7754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
    // 0x1c7758: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C7758u;
    {
        const bool branch_taken_0x1c7758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7758u;
        // 0x1c775c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7758) {
            ctx->pc = 0x1C7804u;
            goto label_1c7804;
        }
    }
    ctx->pc = 0x1C7760u;
    // 0x1c7760: 0x8c432b20  lw          $v1, 0x2B20($v0)
    ctx->pc = 0x1c7760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11040)));
    // 0x1c7764: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1c7764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1c7768: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c7768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c776c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7770: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1c7770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1c7774: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1c7774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1c7778: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1c7778u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c777c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C777Cu;
    {
        const bool branch_taken_0x1c777c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C777Cu;
        // 0x1c7780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c777c) {
            ctx->pc = 0x1C7788u;
            goto label_1c7788;
        }
    }
    ctx->pc = 0x1C7784u;
    // 0x1c7784: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x1c7784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1c7788:
    // 0x1c7788: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x1c7788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x1c778c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1c778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c7790: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x1c7790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1c7794: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7794u;
    {
        const bool branch_taken_0x1c7794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7794) {
            ctx->pc = 0x1C77ACu;
            goto label_1c77ac;
        }
    }
    ctx->pc = 0x1C779Cu;
    // 0x1c779c: 0xc0719ee  jal         func_1C67B8
    ctx->pc = 0x1C779Cu;
    SET_GPR_U32(ctx, 31, 0x1C77A4u);
    ctx->pc = 0x1C77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C779Cu;
    // 0x1c77a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C67B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C67B8u, 0x1C779Cu, 0x1C77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77A4u;
label_1c77a4:
    // 0x1c77a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C77A4u;
    {
        const bool branch_taken_0x1c77a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77A4u;
        // 0x1c77a8: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77a4) {
            ctx->pc = 0x1C7808u;
            goto label_1c7808;
        }
    }
    ctx->pc = 0x1C77ACu;
label_1c77ac:
    // 0x1c77ac: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C77ACu;
    {
        const bool branch_taken_0x1c77ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77ACu;
        // 0x1c77b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77ac) {
            ctx->pc = 0x1C77B8u;
            goto label_1c77b8;
        }
    }
    ctx->pc = 0x1C77B4u;
    // 0x1c77b4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1c77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1c77b8:
    // 0x1c77b8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1c77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1c77bc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1c77bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c77c0: 0x8c710010  lw          $s1, 0x10($v1)
    ctx->pc = 0x1c77c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c77c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C77C4u;
    {
        const bool branch_taken_0x1c77c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77C4u;
        // 0x1c77c8: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77c4) {
            ctx->pc = 0x1C7808u;
            goto label_1c7808;
        }
    }
    ctx->pc = 0x1C77CCu;
    // 0x1c77cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c77d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C77D0u;
    {
        const bool branch_taken_0x1c77d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77D0u;
        // 0x1c77d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77d0) {
            ctx->pc = 0x1C7808u;
            goto label_1c7808;
        }
    }
    ctx->pc = 0x1C77D8u;
    // 0x1c77d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c77d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77dc: 0x0  nop
    ctx->pc = 0x1c77dcu;
    // NOP
label_1c77e0:
    // 0x1c77e0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1c77e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c77e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c77e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c77e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c77ec: 0xc071ad8  jal         func_1C6B60
    ctx->pc = 0x1C77ECu;
    SET_GPR_U32(ctx, 31, 0x1C77F4u);
    ctx->pc = 0x1C77F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77ECu;
    // 0x1c77f0: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B60u, 0x1C77ECu, 0x1C77F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77F4u;
label_1c77f4:
    // 0x1c77f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c77f8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c77f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c77fc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C77FCu;
    {
        const bool branch_taken_0x1c77fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77FCu;
        // 0x1c7800: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77fc) {
            ctx->pc = 0x1C77E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77e0;
        }
    }
    ctx->pc = 0x1C7804u;
label_1c7804:
    // 0x1c7804: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1c7804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1c7808:
    // 0x1c7808: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x1c7808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c780c: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1c780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x1c7810: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1c7810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c7814: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x1C7814u;
    {
        const bool branch_taken_0x1c7814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7814u;
        // 0x1c7818: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7814) {
            ctx->pc = 0x1C75F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c75f8;
        }
    }
    ctx->pc = 0x1C781Cu;
label_1c781c:
    // 0x1c781c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c781cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1c7820: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c7820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c7824: 0xac4091ac  sw          $zero, -0x6E54($v0)
    ctx->pc = 0x1c7824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F91ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91ACu, _value); } while (0);
    // 0x1c7828: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1C7828u;
    SET_GPR_U32(ctx, 31, 0x1C7830u);
    ctx->pc = 0x1C782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7828u;
    // 0x1c782c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1C7828u, 0x1C7830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7830u;
label_1c7830:
    // 0x1c7830: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1c7830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c7834: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1c7834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c7838: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1c7838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c783c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1c783cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c7840: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1c7840u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c7844: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1c7844u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1c7848: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1c7848u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c784c: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1c784cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1c7850: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1c7850u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c7854: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1c7854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1c7858: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1c7858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c785c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C785Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C785Cu;
        // 0x1c7860: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C785Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7864u;
    // 0x1c7864: 0x0  nop
    ctx->pc = 0x1c7864u;
    // NOP
    ctx->pc = 0x1c7868u;
}
