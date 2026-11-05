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

// Function: sub_00226928
// Address: 0x226928 - 0x226a70
void sub_00226928_0x226928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226928_0x226928");
#endif

    ctx->pc = 0x226928u;

    // 0x226928: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x226928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x22692c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x22692cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x226930: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x226930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x226934: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226938: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x226938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x22693c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22693cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x226940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x226940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226944: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x226944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x226948: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x226948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22694c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22694cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226950: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x226954: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x226954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x226958: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x226958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22695c: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x22695cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x226960: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x226960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x226964: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x226964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x226968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x226968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22696c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x22696cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x226970: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x226970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x226974: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x226974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x226978: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x226978u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x22697c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x22697cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x226980: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x226980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x226984: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x226984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x226988: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x226988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22698c: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x22698cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226990: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x226990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x226994: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x226994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x226998: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x226998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x22699c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x22699cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2269a0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2269a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2269a4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2269a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2269a8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2269a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2269ac: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2269acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2269b0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2269b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2269b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2269b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2269b8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2269b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2269bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2269bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2269c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2269c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2269c4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2269c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2269c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2269c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2269cc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2269ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2269d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2269d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2269d4: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2269d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x2269d8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2269d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2269dc: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x2269dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2269e0: 0xe486003c  swc1        $f6, 0x3C($a0)
    ctx->pc = 0x2269e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2269e4: 0xe4810044  swc1        $f1, 0x44($a0)
    ctx->pc = 0x2269e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2269e8: 0xe4840054  swc1        $f4, 0x54($a0)
    ctx->pc = 0x2269e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x2269ec: 0xe4870058  swc1        $f7, 0x58($a0)
    ctx->pc = 0x2269ecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x2269f0: 0xe4820060  swc1        $f2, 0x60($a0)
    ctx->pc = 0x2269f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x2269f4: 0xe4880070  swc1        $f8, 0x70($a0)
    ctx->pc = 0x2269f4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x2269f8: 0xe489007c  swc1        $f9, 0x7C($a0)
    ctx->pc = 0x2269f8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x2269fc: 0xe4830080  swc1        $f3, 0x80($a0)
    ctx->pc = 0x2269fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x226a00: 0xe4850084  swc1        $f5, 0x84($a0)
    ctx->pc = 0x226a00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x226a04: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x226a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x226a08: 0xe4860038  swc1        $f6, 0x38($a0)
    ctx->pc = 0x226a08u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x226a0c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x226a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x226a10: 0xe4870048  swc1        $f7, 0x48($a0)
    ctx->pc = 0x226a10u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x226a14: 0xe484004c  swc1        $f4, 0x4C($a0)
    ctx->pc = 0x226a14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x226a18: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x226a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x226a1c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x226a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x226a20: 0xe4880064  swc1        $f8, 0x64($a0)
    ctx->pc = 0x226a20u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x226a24: 0xe4890068  swc1        $f9, 0x68($a0)
    ctx->pc = 0x226a24u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x226a28: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x226a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x226a2c: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x226a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x226a30: 0xa0800078  sb          $zero, 0x78($a0)
    ctx->pc = 0x226a30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x226a34: 0xa0800088  sb          $zero, 0x88($a0)
    ctx->pc = 0x226a34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x226a38: 0xa0800089  sb          $zero, 0x89($a0)
    ctx->pc = 0x226a38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 137), (uint8_t)GPR_U32(ctx, 0));
    // 0x226a3c: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x226a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x226a40: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x226a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x226a44: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x226a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x226a48: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x226a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x226a4c: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x226a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x226a50: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x226a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x226a54: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x226a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x226a58: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x226a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x226a5c: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x226a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x226a60: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x226a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x226a64: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x226a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x226a68: 0x3e00008  jr          $ra
    ctx->pc = 0x226A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A68u;
        // 0x226a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226A70u;
}
