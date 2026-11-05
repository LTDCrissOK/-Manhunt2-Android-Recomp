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

// Function: sub_00369058
// Address: 0x369058 - 0x369148
void sub_00369058_0x369058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369058_0x369058");
#endif

    switch (ctx->pc) {
        case 0x369070u: goto label_369070;
        case 0x369078u: goto label_369078;
        case 0x369080u: goto label_369080;
        case 0x369088u: goto label_369088;
        case 0x369090u: goto label_369090;
        case 0x3690d8u: goto label_3690d8;
        case 0x3690f4u: goto label_3690f4;
        case 0x369110u: goto label_369110;
        case 0x36912cu: goto label_36912c;
        case 0x369134u: goto label_369134;
        default: break;
    }

    ctx->pc = 0x369058u;

    // 0x369058: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x369058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36905c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x36905cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x369060: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x369060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369064: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x369064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x369068: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x369068u;
    SET_GPR_U32(ctx, 31, 0x369070u);
    ctx->pc = 0x36906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369068u;
    // 0x36906c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x369068u, 0x369070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369070u;
label_369070:
    // 0x369070: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x369070u;
    SET_GPR_U32(ctx, 31, 0x369078u);
    ctx->pc = 0x369074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369070u;
    // 0x369074: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x369070u, 0x369078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369078u;
label_369078:
    // 0x369078: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x369078u;
    SET_GPR_U32(ctx, 31, 0x369080u);
    ctx->pc = 0x36907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369078u;
    // 0x36907c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x369078u, 0x369080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369080u;
label_369080:
    // 0x369080: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x369080u;
    SET_GPR_U32(ctx, 31, 0x369088u);
    ctx->pc = 0x369084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369080u;
    // 0x369084: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x369080u, 0x369088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369088u;
label_369088:
    // 0x369088: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x369088u;
    SET_GPR_U32(ctx, 31, 0x369090u);
    ctx->pc = 0x36908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369088u;
    // 0x36908c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x369088u, 0x369090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369090u;
label_369090:
    // 0x369090: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x369090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x369094: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x369094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x369098: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x369098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x36909c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x36909cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3690a0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3690a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3690a4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x3690a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3690a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3690a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3690ac: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x3690acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3690b0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x3690b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3690b4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3690b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3690b8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x3690b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3690bc: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x3690bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3690c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3690c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690c4: 0xc7ad0044  lwc1        $f13, 0x44($sp)
    ctx->pc = 0x3690c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3690c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3690c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3690cc: 0xc7ae0048  lwc1        $f14, 0x48($sp)
    ctx->pc = 0x3690ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3690d0: 0xc0dec42  jal         func_37B108
    ctx->pc = 0x3690D0u;
    SET_GPR_U32(ctx, 31, 0x3690D8u);
    ctx->pc = 0x3690D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690D0u;
    // 0x3690d4: 0xc7af004c  lwc1        $f15, 0x4C($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B108u, 0x3690D0u, 0x3690D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690D8u;
label_3690d8:
    // 0x3690d8: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x3690d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3690dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3690dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690e0: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x3690e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3690e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3690e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3690e8: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x3690e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3690ec: 0xc0dec42  jal         func_37B108
    ctx->pc = 0x3690ECu;
    SET_GPR_U32(ctx, 31, 0x3690F4u);
    ctx->pc = 0x3690F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690ECu;
    // 0x3690f0: 0xc7af005c  lwc1        $f15, 0x5C($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B108u, 0x3690ECu, 0x3690F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690F4u;
label_3690f4:
    // 0x3690f4: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x3690f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3690f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3690f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690fc: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x3690fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x369100: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x369100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x369104: 0xc7ae0068  lwc1        $f14, 0x68($sp)
    ctx->pc = 0x369104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369108: 0xc0dec42  jal         func_37B108
    ctx->pc = 0x369108u;
    SET_GPR_U32(ctx, 31, 0x369110u);
    ctx->pc = 0x36910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369108u;
    // 0x36910c: 0xc7af006c  lwc1        $f15, 0x6C($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B108u, 0x369108u, 0x369110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369110u;
label_369110:
    // 0x369110: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x369110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x369114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369118: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x369118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36911c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36911cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x369120: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x369120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369124: 0xc0dec42  jal         func_37B108
    ctx->pc = 0x369124u;
    SET_GPR_U32(ctx, 31, 0x36912Cu);
    ctx->pc = 0x369128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369124u;
    // 0x369128: 0xc7af007c  lwc1        $f15, 0x7C($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B108u, 0x369124u, 0x36912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36912Cu;
label_36912c:
    // 0x36912c: 0xc0dcec0  jal         func_373B00
    ctx->pc = 0x36912Cu;
    SET_GPR_U32(ctx, 31, 0x369134u);
    ctx->pc = 0x369130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36912Cu;
    // 0x369130: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B00u, 0x36912Cu, 0x369134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369134u;
label_369134:
    // 0x369134: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x369134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x369138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x369138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36913c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x36913cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x369140: 0x3e00008  jr          $ra
    ctx->pc = 0x369140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369140u;
        // 0x369144: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369148u;
}
