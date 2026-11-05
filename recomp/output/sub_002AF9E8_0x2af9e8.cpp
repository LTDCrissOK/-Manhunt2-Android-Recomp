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

// Function: sub_002AF9E8
// Address: 0x2af9e8 - 0x2afd10
void sub_002AF9E8_0x2af9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF9E8_0x2af9e8");
#endif

    switch (ctx->pc) {
        case 0x2afa60u: goto label_2afa60;
        case 0x2afbc4u: goto label_2afbc4;
        case 0x2afc88u: goto label_2afc88;
        case 0x2afc90u: goto label_2afc90;
        case 0x2afca0u: goto label_2afca0;
        case 0x2afcb0u: goto label_2afcb0;
        default: break;
    }

    ctx->pc = 0x2af9e8u;

    // 0x2af9e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2af9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2af9ec: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2af9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2af9f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2af9f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2af9f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af9f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af9fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2af9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2afa00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2afa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2afa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2afa08: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2afa08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2afa0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2afa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2afa10: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2afa10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2afa14: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x2afa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2afa18: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2afa18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2afa1c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2afa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2afa20: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2afa20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2afa24: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2afa24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2afa28: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2afa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2afa2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2afa2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2afa30: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2afa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2afa34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2afa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2afa38: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2afa38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2afa3c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2afa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2afa40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2afa40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2afa44: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2afa44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2afa48: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2afa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2afa4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2afa4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2afa50: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x2afa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x2afa54: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2afa54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x2afa58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2afa58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2afa5c: 0x0  nop
    ctx->pc = 0x2afa5cu;
    // NOP
label_2afa60:
    // 0x2afa60: 0xe440ff50  swc1        $f0, -0xB0($v0)
    ctx->pc = 0x2afa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967120), bits); }
    // 0x2afa64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2afa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2afa68: 0xe440ff54  swc1        $f0, -0xAC($v0)
    ctx->pc = 0x2afa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967124), bits); }
    // 0x2afa6c: 0xe440ff58  swc1        $f0, -0xA8($v0)
    ctx->pc = 0x2afa6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967128), bits); }
    // 0x2afa70: 0xac40ff5c  sw          $zero, -0xA4($v0)
    ctx->pc = 0x2afa70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967132), GPR_U32(ctx, 0));
    // 0x2afa74: 0xe440ff60  swc1        $f0, -0xA0($v0)
    ctx->pc = 0x2afa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967136), bits); }
    // 0x2afa78: 0xe440ff64  swc1        $f0, -0x9C($v0)
    ctx->pc = 0x2afa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967140), bits); }
    // 0x2afa7c: 0xe440ff68  swc1        $f0, -0x98($v0)
    ctx->pc = 0x2afa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967144), bits); }
    // 0x2afa80: 0xac40ff6c  sw          $zero, -0x94($v0)
    ctx->pc = 0x2afa80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967148), GPR_U32(ctx, 0));
    // 0x2afa84: 0xe446ff70  swc1        $f6, -0x90($v0)
    ctx->pc = 0x2afa84u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967152), bits); }
    // 0x2afa88: 0xe446ff74  swc1        $f6, -0x8C($v0)
    ctx->pc = 0x2afa88u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967156), bits); }
    // 0x2afa8c: 0xe446ff78  swc1        $f6, -0x88($v0)
    ctx->pc = 0x2afa8cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967160), bits); }
    // 0x2afa90: 0xac40ff7c  sw          $zero, -0x84($v0)
    ctx->pc = 0x2afa90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967164), GPR_U32(ctx, 0));
    // 0x2afa94: 0xe445ff80  swc1        $f5, -0x80($v0)
    ctx->pc = 0x2afa94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967168), bits); }
    // 0x2afa98: 0xe445ff84  swc1        $f5, -0x7C($v0)
    ctx->pc = 0x2afa98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967172), bits); }
    // 0x2afa9c: 0xe445ff88  swc1        $f5, -0x78($v0)
    ctx->pc = 0x2afa9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967176), bits); }
    // 0x2afaa0: 0xac40ff8c  sw          $zero, -0x74($v0)
    ctx->pc = 0x2afaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), GPR_U32(ctx, 0));
    // 0x2afaa4: 0xe440ff90  swc1        $f0, -0x70($v0)
    ctx->pc = 0x2afaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), bits); }
    // 0x2afaa8: 0xe440ff94  swc1        $f0, -0x6C($v0)
    ctx->pc = 0x2afaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967188), bits); }
    // 0x2afaac: 0xac40ff98  sw          $zero, -0x68($v0)
    ctx->pc = 0x2afaacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967192), GPR_U32(ctx, 0));
    // 0x2afab0: 0xac40ff9c  sw          $zero, -0x64($v0)
    ctx->pc = 0x2afab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 0));
    // 0x2afab4: 0xe444ffa0  swc1        $f4, -0x60($v0)
    ctx->pc = 0x2afab4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967200), bits); }
    // 0x2afab8: 0xe444ffa4  swc1        $f4, -0x5C($v0)
    ctx->pc = 0x2afab8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967204), bits); }
    // 0x2afabc: 0xe444ffa8  swc1        $f4, -0x58($v0)
    ctx->pc = 0x2afabcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967208), bits); }
    // 0x2afac0: 0xac40ffac  sw          $zero, -0x54($v0)
    ctx->pc = 0x2afac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967212), GPR_U32(ctx, 0));
    // 0x2afac4: 0xe443ffb0  swc1        $f3, -0x50($v0)
    ctx->pc = 0x2afac4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967216), bits); }
    // 0x2afac8: 0xe443ffb4  swc1        $f3, -0x4C($v0)
    ctx->pc = 0x2afac8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967220), bits); }
    // 0x2afacc: 0xe443ffb8  swc1        $f3, -0x48($v0)
    ctx->pc = 0x2afaccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967224), bits); }
    // 0x2afad0: 0xac40ffbc  sw          $zero, -0x44($v0)
    ctx->pc = 0x2afad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967228), GPR_U32(ctx, 0));
    // 0x2afad4: 0xac40ffc0  sw          $zero, -0x40($v0)
    ctx->pc = 0x2afad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967232), GPR_U32(ctx, 0));
    // 0x2afad8: 0xac40ffc4  sw          $zero, -0x3C($v0)
    ctx->pc = 0x2afad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967236), GPR_U32(ctx, 0));
    // 0x2afadc: 0xac40ffc8  sw          $zero, -0x38($v0)
    ctx->pc = 0x2afadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967240), GPR_U32(ctx, 0));
    // 0x2afae0: 0xac40ffcc  sw          $zero, -0x34($v0)
    ctx->pc = 0x2afae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967244), GPR_U32(ctx, 0));
    // 0x2afae4: 0xac40ffd0  sw          $zero, -0x30($v0)
    ctx->pc = 0x2afae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967248), GPR_U32(ctx, 0));
    // 0x2afae8: 0xac40ffd4  sw          $zero, -0x2C($v0)
    ctx->pc = 0x2afae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967252), GPR_U32(ctx, 0));
    // 0x2afaec: 0xac40ffd8  sw          $zero, -0x28($v0)
    ctx->pc = 0x2afaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967256), GPR_U32(ctx, 0));
    // 0x2afaf0: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x2afaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
    // 0x2afaf4: 0xe442ffe0  swc1        $f2, -0x20($v0)
    ctx->pc = 0x2afaf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), bits); }
    // 0x2afaf8: 0xe442ffe4  swc1        $f2, -0x1C($v0)
    ctx->pc = 0x2afaf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), bits); }
    // 0x2afafc: 0xe442ffe8  swc1        $f2, -0x18($v0)
    ctx->pc = 0x2afafcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), bits); }
    // 0x2afb00: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x2afb00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
    // 0x2afb04: 0xe441fff0  swc1        $f1, -0x10($v0)
    ctx->pc = 0x2afb04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), bits); }
    // 0x2afb08: 0xe441fff4  swc1        $f1, -0xC($v0)
    ctx->pc = 0x2afb08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), bits); }
    // 0x2afb0c: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x2afb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2afb10: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x2afb10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x2afb14: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2afb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2afb18: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2afb18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2afb1c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2afb1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2afb20: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2afb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2afb24: 0x1464ffce  bne         $v1, $a0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2AFB24u;
    {
        const bool branch_taken_0x2afb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB24u;
        // 0x2afb28: 0x244200c0  addiu       $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb24) {
            ctx->pc = 0x2AFA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afa60;
        }
    }
    ctx->pc = 0x2AFB2Cu;
    // 0x2afb2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2afb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2afb30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2afb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2afb34: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2afb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2afb38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2afb38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2afb3c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2afb3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2afb40: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2afb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2afb44: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2afb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2afb48: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x2afb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x2afb4c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2afb4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x2afb50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2afb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2afb54: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x2afb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
    // 0x2afb58: 0x3421a993  ori         $at, $at, 0xA993
    ctx->pc = 0x2afb58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43411);
    // 0x2afb5c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2afb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2afb60: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2afb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2afb64: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2afb64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2afb68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2afb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2afb6c: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x2afb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
    // 0x2afb70: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2afb70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x2afb74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2afb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2afb78: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x2afb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x2afb7c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2afb7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2afb80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2afb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2afb84: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2afb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2afb88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afb88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afb8c: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x2afb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x2afb90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2afb90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2afb94: 0xa20003d0  sb          $zero, 0x3D0($s0)
    ctx->pc = 0x2afb94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 976), (uint8_t)GPR_U32(ctx, 0));
    // 0x2afb98: 0xe61403d8  swc1        $f20, 0x3D8($s0)
    ctx->pc = 0x2afb98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 984), bits); }
    // 0x2afb9c: 0xe61603dc  swc1        $f22, 0x3DC($s0)
    ctx->pc = 0x2afb9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 988), bits); }
    // 0x2afba0: 0xe60603e4  swc1        $f6, 0x3E4($s0)
    ctx->pc = 0x2afba0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 996), bits); }
    // 0x2afba4: 0xe60403f4  swc1        $f4, 0x3F4($s0)
    ctx->pc = 0x2afba4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1012), bits); }
    // 0x2afba8: 0xe605046c  swc1        $f5, 0x46C($s0)
    ctx->pc = 0x2afba8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1132), bits); }
    // 0x2afbac: 0xe60603e0  swc1        $f6, 0x3E0($s0)
    ctx->pc = 0x2afbacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
    // 0x2afbb0: 0xe60103e8  swc1        $f1, 0x3E8($s0)
    ctx->pc = 0x2afbb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1000), bits); }
    // 0x2afbb4: 0xe60203ec  swc1        $f2, 0x3EC($s0)
    ctx->pc = 0x2afbb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1004), bits); }
    // 0x2afbb8: 0xe60303f0  swc1        $f3, 0x3F0($s0)
    ctx->pc = 0x2afbb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1008), bits); }
    // 0x2afbbc: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2AFBBCu;
    SET_GPR_U32(ctx, 31, 0x2AFBC4u);
    ctx->pc = 0x2AFBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBBCu;
    // 0x2afbc0: 0xe60003d4  swc1        $f0, 0x3D4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 980), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2AFBBCu, 0x2AFBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBC4u;
label_2afbc4:
    // 0x2afbc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2afbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2afbc8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2afbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2afbcc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2afbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2afbd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2afbd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2afbd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2afbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2afbd8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2afbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2afbdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2afbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2afbe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2afbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afbe4: 0xe6000470  swc1        $f0, 0x470($s0)
    ctx->pc = 0x2afbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1136), bits); }
    // 0x2afbe8: 0x26020500  addiu       $v0, $s0, 0x500
    ctx->pc = 0x2afbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x2afbec: 0xe6010478  swc1        $f1, 0x478($s0)
    ctx->pc = 0x2afbecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1144), bits); }
    // 0x2afbf0: 0x26030530  addiu       $v1, $s0, 0x530
    ctx->pc = 0x2afbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x2afbf4: 0xe6020494  swc1        $f2, 0x494($s0)
    ctx->pc = 0x2afbf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1172), bits); }
    // 0x2afbf8: 0xae0504f4  sw          $a1, 0x4F4($s0)
    ctx->pc = 0x2afbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1268), GPR_U32(ctx, 5));
    // 0x2afbfc: 0xae040484  sw          $a0, 0x484($s0)
    ctx->pc = 0x2afbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1156), GPR_U32(ctx, 4));
    // 0x2afc00: 0xe6140488  swc1        $f20, 0x488($s0)
    ctx->pc = 0x2afc00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1160), bits); }
    // 0x2afc04: 0x26040540  addiu       $a0, $s0, 0x540
    ctx->pc = 0x2afc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
    // 0x2afc08: 0xae00048c  sw          $zero, 0x48C($s0)
    ctx->pc = 0x2afc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1164), GPR_U32(ctx, 0));
    // 0x2afc0c: 0xe6150490  swc1        $f21, 0x490($s0)
    ctx->pc = 0x2afc0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x2afc10: 0xae0004d8  sw          $zero, 0x4D8($s0)
    ctx->pc = 0x2afc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1240), GPR_U32(ctx, 0));
    // 0x2afc14: 0xae0004f0  sw          $zero, 0x4F0($s0)
    ctx->pc = 0x2afc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1264), GPR_U32(ctx, 0));
    // 0x2afc18: 0xae000500  sw          $zero, 0x500($s0)
    ctx->pc = 0x2afc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 0));
    // 0x2afc1c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2afc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x2afc20: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2afc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2afc24: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x2afc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x2afc28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afc2c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2afc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2afc30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2afc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2afc34: 0x46001b06  mov.s       $f12, $f3
    ctx->pc = 0x2afc34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[3]);
    // 0x2afc38: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2afc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2afc3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2afc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2afc40: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2afc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2afc44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2afc44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2afc48: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2afc48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2afc4c: 0xe6000510  swc1        $f0, 0x510($s0)
    ctx->pc = 0x2afc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
    // 0x2afc50: 0xe6010514  swc1        $f1, 0x514($s0)
    ctx->pc = 0x2afc50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1300), bits); }
    // 0x2afc54: 0xe602051c  swc1        $f2, 0x51C($s0)
    ctx->pc = 0x2afc54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
    // 0x2afc58: 0xe6030530  swc1        $f3, 0x530($s0)
    ctx->pc = 0x2afc58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1328), bits); }
    // 0x2afc5c: 0xe6160518  swc1        $f22, 0x518($s0)
    ctx->pc = 0x2afc5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1304), bits); }
    // 0x2afc60: 0xae000520  sw          $zero, 0x520($s0)
    ctx->pc = 0x2afc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x2afc64: 0xae000524  sw          $zero, 0x524($s0)
    ctx->pc = 0x2afc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 0));
    // 0x2afc68: 0xae000528  sw          $zero, 0x528($s0)
    ctx->pc = 0x2afc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 0));
    // 0x2afc6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2afc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2afc70: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2afc70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2afc74: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x2afc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2afc78: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2afc78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2afc7c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x2afc7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x2afc80: 0xc0b187c  jal         func_2C61F0
    ctx->pc = 0x2AFC80u;
    SET_GPR_U32(ctx, 31, 0x2AFC88u);
    ctx->pc = 0x2AFC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC80u;
    // 0x2afc84: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C61F0u, 0x2AFC80u, 0x2AFC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC88u;
label_2afc88:
    // 0x2afc88: 0xc0abf44  jal         func_2AFD10
    ctx->pc = 0x2AFC88u;
    SET_GPR_U32(ctx, 31, 0x2AFC90u);
    ctx->pc = 0x2AFC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC88u;
    // 0x2afc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFD10u, 0x2AFC88u, 0x2AFC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC90u;
label_2afc90:
    // 0x2afc90: 0x260603f8  addiu       $a2, $s0, 0x3F8
    ctx->pc = 0x2afc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1016));
    // 0x2afc94: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2afc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2afc98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2afc98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc9c: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x2afc9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2afca0:
    // 0x2afca0: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2afca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2afca4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2afca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2afca8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2afca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afcac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2afcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2afcb0:
    // 0x2afcb0: 0xe4550000  swc1        $f21, 0x0($v0)
    ctx->pc = 0x2afcb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2afcb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2afcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2afcb8: 0x0  nop
    ctx->pc = 0x2afcb8u;
    // NOP
    // 0x2afcbc: 0x0  nop
    ctx->pc = 0x2afcbcu;
    // NOP
    // 0x2afcc0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AFCC0u;
    {
        const bool branch_taken_0x2afcc0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2AFCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCC0u;
        // 0x2afcc4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afcc0) {
            ctx->pc = 0x2AFCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afcb0;
        }
    }
    ctx->pc = 0x2AFCC8u;
    // 0x2afcc8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2afcc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afccc: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x2afcccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2afcd0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2AFCD0u;
    {
        const bool branch_taken_0x2afcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afcd0) {
            ctx->pc = 0x2AFCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFCD0u;
            // 0x2afcd4: 0x652018  mult        $a0, $v1, $a1 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afca0;
        }
    }
    ctx->pc = 0x2AFCD8u;
    // 0x2afcd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2afcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2afcdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afcdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afce0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2afce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afce4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2afce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afce8: 0xe6000468  swc1        $f0, 0x468($s0)
    ctx->pc = 0x2afce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1128), bits); }
    // 0x2afcec: 0xe600045c  swc1        $f0, 0x45C($s0)
    ctx->pc = 0x2afcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1116), bits); }
    // 0x2afcf0: 0xe6000460  swc1        $f0, 0x460($s0)
    ctx->pc = 0x2afcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1120), bits); }
    // 0x2afcf4: 0xe6000464  swc1        $f0, 0x464($s0)
    ctx->pc = 0x2afcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1124), bits); }
    // 0x2afcf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2afcf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afcfc: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2afcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2afd00: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2afd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2afd04: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2afd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2afd08: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD08u;
        // 0x2afd0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFD10u;
}
