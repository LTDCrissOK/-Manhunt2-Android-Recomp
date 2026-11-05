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

// Function: sub_002167A0
// Address: 0x2167a0 - 0x216828
void sub_002167A0_0x2167a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002167A0_0x2167a0");
#endif

    switch (ctx->pc) {
        case 0x2167f0u: goto label_2167f0;
        case 0x2167f8u: goto label_2167f8;
        default: break;
    }

    ctx->pc = 0x2167a0u;

    // 0x2167a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2167a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2167a4: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2167A4u;
    {
        const bool branch_taken_0x2167a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2167A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167A4u;
        // 0x2167a8: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167a4) {
            ctx->pc = 0x216820u;
            goto label_216820;
        }
    }
    ctx->pc = 0x2167ACu;
    // 0x2167ac: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2167ACu;
    {
        const bool branch_taken_0x2167ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2167ac) {
            ctx->pc = 0x216820u;
            goto label_216820;
        }
    }
    ctx->pc = 0x2167B4u;
    // 0x2167b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2167b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2167b8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2167b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2167bc: 0x2482e4b0  addiu       $v0, $a0, -0x1B50
    ctx->pc = 0x2167bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960304));
    // 0x2167c0: 0x3c01c0d9  lui         $at, 0xC0D9
    ctx->pc = 0x2167c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49369 << 16));
    // 0x2167c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2167c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2167c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2167c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2167cc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2167ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x49E4BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x49E4BCu, _value); } while (0); }
    // 0x2167d0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2167d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2167d4: 0xe480e4b0  swc1        $f0, -0x1B50($a0)
    ctx->pc = 0x2167d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x49E4B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x49E4B0u, _value); } while (0); }
    // 0x2167d8: 0x2463e4c0  addiu       $v1, $v1, -0x1B40
    ctx->pc = 0x2167d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960320));
    // 0x2167dc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2167dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x49E4B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x49E4B4u, _value); } while (0); }
    // 0x2167e0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x2167e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2167e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2167e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x49E4B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x49E4B8u, _value); } while (0); }
    // 0x2167e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2167e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2167ec: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x2167ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2167f0:
    // 0x2167f0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2167f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2167f4: 0x24640280  addiu       $a0, $v1, 0x280
    ctx->pc = 0x2167f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
label_2167f8:
    // 0x2167f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2167f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2167fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2167fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x216800: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x216800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x216804: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x216804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x216808: 0x1446fffb  bne         $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x216808u;
    {
        const bool branch_taken_0x216808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x21680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216808u;
        // 0x21680c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216808) {
            ctx->pc = 0x2167F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2167f8;
        }
    }
    ctx->pc = 0x216810u;
    // 0x216810: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x216810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216814: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x216814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216818: 0x1486fff5  bne         $a0, $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x216818u;
    {
        const bool branch_taken_0x216818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x21681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216818u;
        // 0x21681c: 0x2485ffff  addiu       $a1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216818) {
            ctx->pc = 0x2167F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2167f0;
        }
    }
    ctx->pc = 0x216820u;
label_216820:
    // 0x216820: 0x3e00008  jr          $ra
    ctx->pc = 0x216820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216820u;
        // 0x216824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216828u;
}
