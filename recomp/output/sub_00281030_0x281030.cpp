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

// Function: sub_00281030
// Address: 0x281030 - 0x281108
void sub_00281030_0x281030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281030_0x281030");
#endif

    switch (ctx->pc) {
        case 0x281044u: goto label_281044;
        case 0x281050u: goto label_281050;
        case 0x281058u: goto label_281058;
        case 0x281064u: goto label_281064;
        case 0x281074u: goto label_281074;
        case 0x281080u: goto label_281080;
        case 0x2810c0u: goto label_2810c0;
        case 0x2810ccu: goto label_2810cc;
        case 0x2810d4u: goto label_2810d4;
        case 0x2810f8u: goto label_2810f8;
        default: break;
    }

    ctx->pc = 0x281030u;

    // 0x281030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x281038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28103c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x28103Cu;
    SET_GPR_U32(ctx, 31, 0x281044u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x28103Cu, 0x281044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281044u;
label_281044:
    // 0x281044: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281048: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x281048u;
    SET_GPR_U32(ctx, 31, 0x281050u);
    ctx->pc = 0x28104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281048u;
    // 0x28104c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x281048u, 0x281050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281050u;
label_281050:
    // 0x281050: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x281050u;
    SET_GPR_U32(ctx, 31, 0x281058u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x281050u, 0x281058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281058u;
label_281058:
    // 0x281058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28105c: 0xc0a6dea  jal         func_29B7A8
    ctx->pc = 0x28105Cu;
    SET_GPR_U32(ctx, 31, 0x281064u);
    ctx->pc = 0x281060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28105Cu;
    // 0x281060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7A8u, 0x28105Cu, 0x281064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281064u;
label_281064:
    // 0x281064: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x281064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281068: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x281068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28106c: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x28106Cu;
    SET_GPR_U32(ctx, 31, 0x281074u);
    ctx->pc = 0x281070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28106Cu;
    // 0x281070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x28106Cu, 0x281074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281074u;
label_281074:
    // 0x281074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281078: 0xc0a754c  jal         func_29D530
    ctx->pc = 0x281078u;
    SET_GPR_U32(ctx, 31, 0x281080u);
    ctx->pc = 0x28107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281078u;
    // 0x28107c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D530u, 0x281078u, 0x281080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281080u;
label_281080:
    // 0x281080: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x281080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x281084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x281084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281088: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x281088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x28108c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28108cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x281090: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x281090u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x66CB38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CB38u, _value); } while (0);
    // 0x281094: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x281094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x281098: 0xac60a310  sw          $zero, -0x5CF0($v1)
    ctx->pc = 0x281098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA310u, _value); } while (0);
    // 0x28109c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28109cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2810a0: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2810a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66CB6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CB6Cu, _value); } while (0);
    // 0x2810a4: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2810a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x2810a8: 0xacc0a308  sw          $zero, -0x5CF8($a2)
    ctx->pc = 0x2810a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA308u, _value); } while (0);
    // 0x2810ac: 0x26109b28  addiu       $s0, $s0, -0x64D8
    ctx->pc = 0x2810acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941480));
    // 0x2810b0: 0xaca0a30c  sw          $zero, -0x5CF4($a1)
    ctx->pc = 0x2810b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA30Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA30Cu, _value); } while (0);
    // 0x2810b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2810b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810b8: 0xc07fafc  jal         func_1FEBF0
    ctx->pc = 0x2810B8u;
    SET_GPR_U32(ctx, 31, 0x2810C0u);
    ctx->pc = 0x2810BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810B8u;
    // 0x2810bc: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEBF0u, 0x2810B8u, 0x2810C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810C0u;
label_2810c0:
    // 0x2810c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2810c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810c4: 0xc07fb1e  jal         func_1FEC78
    ctx->pc = 0x2810C4u;
    SET_GPR_U32(ctx, 31, 0x2810CCu);
    ctx->pc = 0x2810C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810C4u;
    // 0x2810c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC78u, 0x2810C4u, 0x2810CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810CCu;
label_2810cc:
    // 0x2810cc: 0xc0a0442  jal         func_281108
    ctx->pc = 0x2810CCu;
    SET_GPR_U32(ctx, 31, 0x2810D4u);
    ctx->pc = 0x281108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281108u, 0x2810CCu, 0x2810D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810D4u;
label_2810d4:
    // 0x2810d4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2810d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2810d8: 0x8c43f250  lw          $v1, -0xDB0($v0)
    ctx->pc = 0x2810d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BF250u));
    // 0x2810dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2810DCu;
    {
        const bool branch_taken_0x2810dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2810E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810DCu;
        // 0x2810e0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810dc) {
            ctx->pc = 0x2810F8u;
            goto label_2810f8;
        }
    }
    ctx->pc = 0x2810E4u;
    // 0x2810e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2810e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2810e8: 0x24a59788  addiu       $a1, $a1, -0x6878
    ctx->pc = 0x2810e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940552));
    // 0x2810ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2810ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810f0: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x2810F0u;
    SET_GPR_U32(ctx, 31, 0x2810F8u);
    ctx->pc = 0x2810F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810F0u;
    // 0x2810f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x2810F0u, 0x2810F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810F8u;
label_2810f8:
    // 0x2810f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2810f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2810fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2810fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x281100: 0x3e00008  jr          $ra
    ctx->pc = 0x281100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281100u;
        // 0x281104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281108u;
}
