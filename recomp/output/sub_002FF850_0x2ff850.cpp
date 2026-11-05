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

// Function: sub_002FF850
// Address: 0x2ff850 - 0x2ff940
void sub_002FF850_0x2ff850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF850_0x2ff850");
#endif

    switch (ctx->pc) {
        case 0x2ff918u: goto label_2ff918;
        default: break;
    }

    ctx->pc = 0x2ff850u;

    // 0x2ff850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff854: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff858: 0x14a20035  bne         $a1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FF858u;
    {
        const bool branch_taken_0x2ff858 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF858u;
        // 0x2ff85c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff858) {
            ctx->pc = 0x2FF930u;
            goto label_2ff930;
        }
    }
    ctx->pc = 0x2FF860u;
    // 0x2ff860: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2FF860u;
    {
        const bool branch_taken_0x2ff860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF860u;
        // 0x2ff864: 0x3c080059  lui         $t0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff860) {
            ctx->pc = 0x2FF930u;
            goto label_2ff930;
        }
    }
    ctx->pc = 0x2FF868u;
    // 0x2ff868: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2ff868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2ff86c: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x2ff86cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
    // 0x2ff870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff874: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x2ff874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
    // 0x2ff878: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ff878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ff87c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ff87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff880: 0x3c090059  lui         $t1, 0x59
    ctx->pc = 0x2ff880u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)89 << 16));
    // 0x2ff884: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ff884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2ff888: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ff888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ff88c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ff88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ff890: 0x25054d80  addiu       $a1, $t0, 0x4D80
    ctx->pc = 0x2ff890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 19840));
    // 0x2ff894: 0xe5204d90  swc1        $f0, 0x4D90($t1)
    ctx->pc = 0x2ff894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x594D90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594D90u, _value); } while (0); }
    // 0x2ff898: 0x25224d90  addiu       $v0, $t1, 0x4D90
    ctx->pc = 0x2ff898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 19856));
    // 0x2ff89c: 0xe5014d80  swc1        $f1, 0x4D80($t0)
    ctx->pc = 0x2ff89cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 19840), bits); }
    // 0x2ff8a0: 0x3c0a0059  lui         $t2, 0x59
    ctx->pc = 0x2ff8a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)89 << 16));
    // 0x2ff8a4: 0x3c01be90  lui         $at, 0xBE90
    ctx->pc = 0x2ff8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48784 << 16));
    // 0x2ff8a8: 0x3421e560  ori         $at, $at, 0xE560
    ctx->pc = 0x2ff8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58720);
    // 0x2ff8ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ff8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ff8b0: 0x25434da0  addiu       $v1, $t2, 0x4DA0
    ctx->pc = 0x2ff8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 19872));
    // 0x2ff8b4: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x2ff8b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2ff8b8: 0x3c0b0059  lui         $t3, 0x59
    ctx->pc = 0x2ff8b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)89 << 16));
    // 0x2ff8bc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2ff8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2ff8c0: 0x25664db0  addiu       $a2, $t3, 0x4DB0
    ctx->pc = 0x2ff8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 19888));
    // 0x2ff8c4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2ff8c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x594D98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594D98u, _value); } while (0); }
    // 0x2ff8c8: 0x3c0c0059  lui         $t4, 0x59
    ctx->pc = 0x2ff8c8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)89 << 16));
    // 0x2ff8cc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2ff8ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594D9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594D9Cu, _value); } while (0);
    // 0x2ff8d0: 0x25874dc0  addiu       $a3, $t4, 0x4DC0
    ctx->pc = 0x2ff8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 19904));
    // 0x2ff8d4: 0xad404da0  sw          $zero, 0x4DA0($t2)
    ctx->pc = 0x2ff8d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DA0u, _value); } while (0);
    // 0x2ff8d8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2ff8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2ff8dc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2ff8dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DACu, _value); } while (0);
    // 0x2ff8e0: 0x24844dd0  addiu       $a0, $a0, 0x4DD0
    ctx->pc = 0x2ff8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
    // 0x2ff8e4: 0xad604db0  sw          $zero, 0x4DB0($t3)
    ctx->pc = 0x2ff8e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DB0u, _value); } while (0);
    // 0x2ff8e8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2ff8e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DBCu, _value); } while (0);
    // 0x2ff8ec: 0xad804dc0  sw          $zero, 0x4DC0($t4)
    ctx->pc = 0x2ff8ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DC0u, _value); } while (0);
    // 0x2ff8f0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x2ff8f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DCCu, _value); } while (0);
    // 0x2ff8f4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ff8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2ff8f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ff8f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594D94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594D94u, _value); } while (0);
    // 0x2ff8fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ff8fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DA4u, _value); } while (0);
    // 0x2ff900: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2ff900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DA8u, _value); } while (0);
    // 0x2ff904: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2ff904u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DB4u, _value); } while (0);
    // 0x2ff908: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2ff908u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DB8u, _value); } while (0);
    // 0x2ff90c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2ff90cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x594DC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594DC4u, _value); } while (0);
    // 0x2ff910: 0xc0abe7a  jal         func_2AF9E8
    ctx->pc = 0x2FF910u;
    SET_GPR_U32(ctx, 31, 0x2FF918u);
    ctx->pc = 0x2FF914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF910u;
    // 0x2ff914: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF9E8u, 0x2FF910u, 0x2FF918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF918u;
label_2ff918:
    // 0x2ff918: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2ff918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2ff91c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff920: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2ff920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x2ff924: 0x24625860  addiu       $v0, $v1, 0x5860
    ctx->pc = 0x2ff924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 22624));
    // 0x2ff928: 0xe4605860  swc1        $f0, 0x5860($v1)
    ctx->pc = 0x2ff928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x595860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x595860u, _value); } while (0); }
    // 0x2ff92c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ff92cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x595864u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x595864u, _value); } while (0);
label_2ff930:
    // 0x2ff930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff934: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF934u;
        // 0x2ff938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF93Cu;
    // 0x2ff93c: 0x0  nop
    ctx->pc = 0x2ff93cu;
    // NOP
    ctx->pc = 0x2ff940u;
}
