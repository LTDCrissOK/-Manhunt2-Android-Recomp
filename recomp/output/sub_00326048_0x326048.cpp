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

// Function: sub_00326048
// Address: 0x326048 - 0x326118
void sub_00326048_0x326048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326048_0x326048");
#endif

    switch (ctx->pc) {
        case 0x3260b8u: goto label_3260b8;
        case 0x3260c8u: goto label_3260c8;
        case 0x3260dcu: goto label_3260dc;
        case 0x3260f0u: goto label_3260f0;
        default: break;
    }

    ctx->pc = 0x326048u;

    // 0x326048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x326048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32604c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326050: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x326050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x326054: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x326054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x326058: 0xac45be7c  sw          $a1, -0x4184($v0)
    ctx->pc = 0x326058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3FBE7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE7Cu, _value); } while (0);
    // 0x32605c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32605cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x326060: 0xac65be44  sw          $a1, -0x41BC($v1)
    ctx->pc = 0x326060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3FBE44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE44u, _value); } while (0);
    // 0x326064: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x326064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32606c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x32606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x326070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x326070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x326074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x326074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x326078: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x326078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32607c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x32607cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x326080: 0xf8416d90  sqc2        $vf1, 0x6D90($v0)
    ctx->pc = 0x326080u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B6D90u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B6D90u, _value); } while (0);
    // 0x326084: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x326084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x326088: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x326088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32608c: 0xe44cbe48  swc1        $f12, -0x41B8($v0)
    ctx->pc = 0x32608cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBE48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE48u, _value); } while (0); }
    // 0x326090: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x326090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x326094: 0x8c82be28  lw          $v0, -0x41D8($a0)
    ctx->pc = 0x326094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBE28u));
    // 0x326098: 0x3c11005b  lui         $s1, 0x5B
    ctx->pc = 0x326098u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
    // 0x32609c: 0xe46cbe58  swc1        $f12, -0x41A8($v1)
    ctx->pc = 0x32609cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBE58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE58u, _value); } while (0); }
    // 0x3260a0: 0x26316da0  addiu       $s1, $s1, 0x6DA0
    ctx->pc = 0x3260a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28064));
    // 0x3260a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3260a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260a8: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x3260a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x3260ac: 0x8c500100  lw          $s0, 0x100($v0)
    ctx->pc = 0x3260acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3260b0: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x3260B0u;
    SET_GPR_U32(ctx, 31, 0x3260B8u);
    ctx->pc = 0x3260B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3260B0u;
    // 0x3260b4: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x3260B0u, 0x3260B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260B8u;
label_3260b8:
    // 0x3260b8: 0x8e462c64  lw          $a2, 0x2C64($s2)
    ctx->pc = 0x3260b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11364)));
    // 0x3260bc: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x3260bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x3260c0: 0xc0c984c  jal         func_326130
    ctx->pc = 0x3260C0u;
    SET_GPR_U32(ctx, 31, 0x3260C8u);
    ctx->pc = 0x3260C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3260C0u;
    // 0x3260c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326130u, 0x3260C0u, 0x3260C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260C8u;
label_3260c8:
    // 0x3260c8: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x3260c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    // 0x3260cc: 0x8e452c64  lw          $a1, 0x2C64($s2)
    ctx->pc = 0x3260ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11364)));
    // 0x3260d0: 0x26106db0  addiu       $s0, $s0, 0x6DB0
    ctx->pc = 0x3260d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28080));
    // 0x3260d4: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x3260D4u;
    SET_GPR_U32(ctx, 31, 0x3260DCu);
    ctx->pc = 0x3260D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3260D4u;
    // 0x3260d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x3260D4u, 0x3260DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260DCu;
label_3260dc:
    // 0x3260dc: 0x3c06005b  lui         $a2, 0x5B
    ctx->pc = 0x3260dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)91 << 16));
    // 0x3260e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3260e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3260e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260e8: 0xc0b19e2  jal         func_2C6788
    ctx->pc = 0x3260E8u;
    SET_GPR_U32(ctx, 31, 0x3260F0u);
    ctx->pc = 0x3260ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3260E8u;
    // 0x3260ec: 0x24c66dc0  addiu       $a2, $a2, 0x6DC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6788u, 0x3260E8u, 0x3260F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260F0u;
label_3260f0:
    // 0x3260f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3260f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3260f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3260f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3260f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3260f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3260fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3260fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326100: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x326100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x326104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326108: 0xac402c68  sw          $zero, 0x2C68($v0)
    ctx->pc = 0x326108u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C68u, _value); } while (0);
    // 0x32610c: 0x3e00008  jr          $ra
    ctx->pc = 0x32610Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32610Cu;
        // 0x326110: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32610Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326114u;
    // 0x326114: 0x0  nop
    ctx->pc = 0x326114u;
    // NOP
    ctx->pc = 0x326118u;
}
