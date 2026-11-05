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

// Function: sub_001F5908
// Address: 0x1f5908 - 0x1f5a10
void sub_001F5908_0x1f5908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5908_0x1f5908");
#endif

    switch (ctx->pc) {
        case 0x1f59c4u: goto label_1f59c4;
        case 0x1f59d4u: goto label_1f59d4;
        case 0x1f59f0u: goto label_1f59f0;
        default: break;
    }

    ctx->pc = 0x1f5908u;

    // 0x1f5908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f590c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f5910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f591c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f591cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5924: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x1f5924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f5928: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1f5928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f592c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1f592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f5930: 0x8e221338  lw          $v0, 0x1338($s1)
    ctx->pc = 0x1f5930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4920)));
    // 0x1f5934: 0x340383d0  ori         $v1, $zero, 0x83D0
    ctx->pc = 0x1f5934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33744);
    // 0x1f5938: 0xae050100  sw          $a1, 0x100($s0)
    ctx->pc = 0x1f5938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 5));
    // 0x1f593c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1f593cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f5940: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1f5940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1f5944: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1f5944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1f5948: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1f5948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1f594c: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f594cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f5950: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x1f5950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x1f5954: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f5954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5958: 0xc62003ec  lwc1        $f0, 0x3EC($s1)
    ctx->pc = 0x1f5958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f595c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f595cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f5960: 0xa60600f4  sh          $a2, 0xF4($s0)
    ctx->pc = 0x1f5960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f5964: 0x8e2203e8  lw          $v0, 0x3E8($s1)
    ctx->pc = 0x1f5964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x1f5968: 0xa204011c  sb          $a0, 0x11C($s0)
    ctx->pc = 0x1f5968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f596c: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1f596cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x1f5970: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1f5970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f5974: 0xa204010c  sb          $a0, 0x10C($s0)
    ctx->pc = 0x1f5974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f5978: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f5978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f597c: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1f597cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1f5980: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f5980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f5984: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1f5984u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f5988: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f5988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f598c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f598cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5990: 0x340283fc  ori         $v0, $zero, 0x83FC
    ctx->pc = 0x1f5990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33788);
    // 0x1f5994: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f5994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f5998: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f5998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f599c: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x1f599cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x1f59a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f59a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f59a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f59a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f59a8: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x1f59a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
    // 0x1f59ac: 0xae050124  sw          $a1, 0x124($s0)
    ctx->pc = 0x1f59acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 5));
    // 0x1f59b0: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1f59b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f59b4: 0xa2030170  sb          $v1, 0x170($s0)
    ctx->pc = 0x1f59b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f59b8: 0xa20500fc  sb          $a1, 0xFC($s0)
    ctx->pc = 0x1f59b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f59bc: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F59BCu;
    SET_GPR_U32(ctx, 31, 0x1F59C4u);
    ctx->pc = 0x1F59C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59BCu;
    // 0x1f59c0: 0xae050114  sw          $a1, 0x114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F59BCu, 0x1F59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59C4u;
label_1f59c4:
    // 0x1f59c4: 0x340283f0  ori         $v0, $zero, 0x83F0
    ctx->pc = 0x1f59c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33776);
    // 0x1f59c8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1f59c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f59cc: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1F59CCu;
    SET_GPR_U32(ctx, 31, 0x1F59D4u);
    ctx->pc = 0x1F59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59CCu;
    // 0x1f59d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1F59CCu, 0x1F59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59D4u;
label_1f59d4:
    // 0x1f59d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F59D4u;
    {
        const bool branch_taken_0x1f59d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59D4u;
        // 0x1f59d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59d4) {
            ctx->pc = 0x1F59F0u;
            goto label_1f59f0;
        }
    }
    ctx->pc = 0x1F59DCu;
    // 0x1f59dc: 0x8e2203e0  lw          $v0, 0x3E0($s1)
    ctx->pc = 0x1f59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
    // 0x1f59e0: 0x8e2503e8  lw          $a1, 0x3E8($s1)
    ctx->pc = 0x1f59e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x1f59e4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1f59e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f59e8: 0xc07f444  jal         func_1FD110
    ctx->pc = 0x1F59E8u;
    SET_GPR_U32(ctx, 31, 0x1F59F0u);
    ctx->pc = 0x1F59ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59E8u;
    // 0x1f59ec: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD110u, 0x1F59E8u, 0x1F59F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59F0u;
label_1f59f0:
    // 0x1f59f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f59f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f59f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f59f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f59f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f59f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f59fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F59FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59FCu;
        // 0x1f5a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F59FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5A04u;
    // 0x1f5a04: 0x0  nop
    ctx->pc = 0x1f5a04u;
    // NOP
    // 0x1f5a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5a0c: 0x0  nop
    ctx->pc = 0x1f5a0cu;
    // NOP
    ctx->pc = 0x1f5a10u;
}
