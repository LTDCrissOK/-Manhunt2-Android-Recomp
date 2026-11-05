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

// Function: sub_001F18E0
// Address: 0x1f18e0 - 0x1f19d0
void sub_001F18E0_0x1f18e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F18E0_0x1f18e0");
#endif

    switch (ctx->pc) {
        case 0x1f1924u: goto label_1f1924;
        case 0x1f19b4u: goto label_1f19b4;
        default: break;
    }

    ctx->pc = 0x1f18e0u;

    // 0x1f18e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f18e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f18e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f18e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f18e8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f18e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f18ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f18ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f18f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18f4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f18f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f18f8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1f18f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1f18fc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1f18fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1900: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1f1900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1904: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1f1904u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f1908: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f1908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f190c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f1910: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f1910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f1914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1918: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f1918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f191c: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F191Cu;
    SET_GPR_U32(ctx, 31, 0x1F1924u);
    ctx->pc = 0x1F1920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F191Cu;
    // 0x1f1920: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F191Cu, 0x1F1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1924u;
label_1f1924:
    // 0x1f1924: 0x93a30029  lbu         $v1, 0x29($sp)
    ctx->pc = 0x1f1924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f1928: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f1928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f192c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f1930: 0x93a60028  lbu         $a2, 0x28($sp)
    ctx->pc = 0x1f1930u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f1934: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f1934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1938: 0x0  nop
    ctx->pc = 0x1f1938u;
    // NOP
    // 0x1f193c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f193cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f1940: 0x8c451330  lw          $a1, 0x1330($v0)
    ctx->pc = 0x1f1940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4912)));
    // 0x1f1944: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f1944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f194c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f194cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f1950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f1950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1954: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f1954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1958: 0xa61200f4  sh          $s2, 0xF4($s0)
    ctx->pc = 0x1f1958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 18));
    // 0x1f195c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f195cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1960: 0xa21100fc  sb          $s1, 0xFC($s0)
    ctx->pc = 0x1f1960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f1964: 0xae130150  sw          $s3, 0x150($s0)
    ctx->pc = 0x1f1964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 19));
    // 0x1f1968: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1f1968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1f196c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f196cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f1970: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x1f1970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x1f1974: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f1974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f1978: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f1978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f197c: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f197cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1980: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f1980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f1984: 0xa2000154  sb          $zero, 0x154($s0)
    ctx->pc = 0x1f1984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 340), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1988: 0xae0500f0  sw          $a1, 0xF0($s0)
    ctx->pc = 0x1f1988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 5));
    // 0x1f198c: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1f198cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1f1990: 0xa206011c  sb          $a2, 0x11C($s0)
    ctx->pc = 0x1f1990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f1994: 0xe6010120  swc1        $f1, 0x120($s0)
    ctx->pc = 0x1f1994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f1998: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1f1998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1f199c: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1f199cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f19a0: 0xa2070170  sb          $a3, 0x170($s0)
    ctx->pc = 0x1f19a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f19a4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x1f19a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x1f19a8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1f19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1f19ac: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F19ACu;
    SET_GPR_U32(ctx, 31, 0x1F19B4u);
    ctx->pc = 0x1F19B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19ACu;
    // 0x1f19b0: 0xa206010c  sb          $a2, 0x10C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F19ACu, 0x1F19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19B4u;
label_1f19b4:
    // 0x1f19b4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f19b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f19b8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f19b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f19bc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f19bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f19c0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1f19c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f19c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f19c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f19c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F19C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19C8u;
        // 0x1f19cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F19C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F19D0u;
}
