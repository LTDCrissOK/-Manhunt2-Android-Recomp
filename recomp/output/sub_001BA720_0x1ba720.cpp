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

// Function: sub_001BA720
// Address: 0x1ba720 - 0x1ba868
void sub_001BA720_0x1ba720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA720_0x1ba720");
#endif

    switch (ctx->pc) {
        case 0x1ba824u: goto label_1ba824;
        case 0x1ba84cu: goto label_1ba84c;
        default: break;
    }

    ctx->pc = 0x1ba720u;

    // 0x1ba720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba724: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ba724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ba728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba72c: 0x244213b0  addiu       $v0, $v0, 0x13B0
    ctx->pc = 0x1ba72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
    // 0x1ba730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba738: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba73c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1ba73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ba740: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1ba740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1ba744: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ba744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba748: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ba748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ba74c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ba74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ba750: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ba750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ba754: 0x24421390  addiu       $v0, $v0, 0x1390
    ctx->pc = 0x1ba754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5008));
    // 0x1ba758: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ba758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ba75c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ba75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba760: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ba760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ba764: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x1ba764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1ba768: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ba768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ba76c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1ba76cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1ba770: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ba770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ba774: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1ba774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1ba778: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1ba778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1ba77c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ba77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1ba780: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ba780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ba784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba788: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ba788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ba78c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ba78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba790: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1ba790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1ba794: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ba794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ba798: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ba798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ba79c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1ba79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1ba7a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ba7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1ba7a4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1ba7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1ba7a8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ba7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1ba7ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ba7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba7b0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ba7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1ba7b4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1ba7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1ba7b8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ba7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1ba7bc: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1ba7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1ba7c0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ba7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1ba7c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba7c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba7cc: 0xae110070  sw          $s1, 0x70($s0)
    ctx->pc = 0x1ba7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
    // 0x1ba7d0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ba7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ba7d4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ba7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ba7d8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1ba7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1ba7dc: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1ba7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1ba7e0: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1ba7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x1ba7e4: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1ba7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1ba7e8: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1ba7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1ba7ec: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x1ba7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1ba7f0: 0xe6020028  swc1        $f2, 0x28($s0)
    ctx->pc = 0x1ba7f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1ba7f4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1ba7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1ba7f8: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x1ba7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x1ba7fc: 0xe6030048  swc1        $f3, 0x48($s0)
    ctx->pc = 0x1ba7fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x1ba800: 0xe604004c  swc1        $f4, 0x4C($s0)
    ctx->pc = 0x1ba800u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1ba804: 0xe6050050  swc1        $f5, 0x50($s0)
    ctx->pc = 0x1ba804u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1ba808: 0xe6060054  swc1        $f6, 0x54($s0)
    ctx->pc = 0x1ba808u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1ba80c: 0xe6070060  swc1        $f7, 0x60($s0)
    ctx->pc = 0x1ba80cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1ba810: 0xe6080064  swc1        $f8, 0x64($s0)
    ctx->pc = 0x1ba810u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1ba814: 0xe6090068  swc1        $f9, 0x68($s0)
    ctx->pc = 0x1ba814u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x1ba818: 0xe6090058  swc1        $f9, 0x58($s0)
    ctx->pc = 0x1ba818u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1ba81c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BA81Cu;
    SET_GPR_U32(ctx, 31, 0x1BA824u);
    ctx->pc = 0x1BA820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA81Cu;
    // 0x1ba820: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BA81Cu, 0x1BA824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA824u;
label_1ba824:
    // 0x1ba824: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1ba824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1ba828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba82c: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1ba82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1ba830: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1ba830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1ba834: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x1ba834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x1ba838: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ba838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ba83c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ba83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ba840: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1ba840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1ba844: 0xc08dffa  jal         func_237FE8
    ctx->pc = 0x1BA844u;
    SET_GPR_U32(ctx, 31, 0x1BA84Cu);
    ctx->pc = 0x1BA848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA844u;
    // 0x1ba848: 0xae0000a4  sw          $zero, 0xA4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237FE8u, 0x1BA844u, 0x1BA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA84Cu;
label_1ba84c:
    // 0x1ba84c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1ba84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1ba850: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba85c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba860: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA860u;
        // 0x1ba864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA868u;
}
