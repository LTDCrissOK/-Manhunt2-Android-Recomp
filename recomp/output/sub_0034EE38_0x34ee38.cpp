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

// Function: sub_0034EE38
// Address: 0x34ee38 - 0x34ef38
void sub_0034EE38_0x34ee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EE38_0x34ee38");
#endif

    switch (ctx->pc) {
        case 0x34ee70u: goto label_34ee70;
        default: break;
    }

    ctx->pc = 0x34ee38u;

    // 0x34ee38: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x34ee38u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x34ee3c: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x34ee3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x34ee40: 0x2543e148  addiu       $v1, $t2, -0x1EB8
    ctx->pc = 0x34ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959432));
    // 0x34ee44: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x34ee44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x34ee48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34ee4c: 0x24660054  addiu       $a2, $v1, 0x54
    ctx->pc = 0x34ee4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x34ee50: 0x252debc8  addiu       $t5, $t1, -0x1438
    ctx->pc = 0x34ee50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962120));
    // 0x34ee54: 0x250cec20  addiu       $t4, $t0, -0x13E0
    ctx->pc = 0x34ee54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962208));
    // 0x34ee58: 0x2447e0f4  addiu       $a3, $v0, -0x1F0C
    ctx->pc = 0x34ee58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959348));
    // 0x34ee5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34ee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee60: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x34ee60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x34ee64: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x34ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x34ee68: 0x3c0b0001  lui         $t3, 0x1
    ctx->pc = 0x34ee68u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1 << 16));
    // 0x34ee6c: 0x0  nop
    ctx->pc = 0x34ee6cu;
    // NOP
label_34ee70:
    // 0x34ee70: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x34ee70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34ee74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EE74u;
    {
        const bool branch_taken_0x34ee74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE74u;
        // 0x34ee78: 0xa060ffd4  sb          $zero, -0x2C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294967252), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee74) {
            ctx->pc = 0x34EE84u;
            goto label_34ee84;
        }
    }
    ctx->pc = 0x34EE7Cu;
    // 0x34ee7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34EE7Cu;
    {
        const bool branch_taken_0x34ee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE7Cu;
        // 0x34ee80: 0xac66fffc  sw          $a2, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee7c) {
            ctx->pc = 0x34EE88u;
            goto label_34ee88;
        }
    }
    ctx->pc = 0x34EE84u;
label_34ee84:
    // 0x34ee84: 0xac6dfffc  sw          $t5, -0x4($v1)
    ctx->pc = 0x34ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 13));
label_34ee88:
    // 0x34ee88: 0x58800002  blezl       $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34EE88u;
    {
        const bool branch_taken_0x34ee88 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x34ee88) {
            ctx->pc = 0x34EE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EE88u;
            // 0x34ee8c: 0xac6c0000  sw          $t4, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EE94u;
            goto label_34ee94;
        }
    }
    ctx->pc = 0x34EE90u;
    // 0x34ee90: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x34ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_34ee94:
    // 0x34ee94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34ee94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee98: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x34ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x34ee9c: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x34ee9cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x34eea0: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x34eea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x34eea4: 0x24e70054  addiu       $a3, $a3, 0x54
    ctx->pc = 0x34eea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 84));
    // 0x34eea8: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x34eea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x34eeac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x34EEACu;
    {
        const bool branch_taken_0x34eeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EEACu;
        // 0x34eeb0: 0x24c60054  addiu       $a2, $a2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eeac) {
            ctx->pc = 0x34EE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ee70;
        }
    }
    ctx->pc = 0x34EEB4u;
    // 0x34eeb4: 0x254ae148  addiu       $t2, $t2, -0x1EB8
    ctx->pc = 0x34eeb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959432));
    // 0x34eeb8: 0x2529ebc8  addiu       $t1, $t1, -0x1438
    ctx->pc = 0x34eeb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962120));
    // 0x34eebc: 0x25420a2c  addiu       $v0, $t2, 0xA2C
    ctx->pc = 0x34eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 2604));
    // 0x34eec0: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x34eec0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x34eec4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x34eec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x34eec8: 0xad220050  sw          $v0, 0x50($t1)
    ctx->pc = 0x34eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 2));
    // 0x34eecc: 0x24e7ec78  addiu       $a3, $a3, -0x1388
    ctx->pc = 0x34eeccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962296));
    // 0x34eed0: 0x24a5ecd0  addiu       $a1, $a1, -0x1330
    ctx->pc = 0x34eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962384));
    // 0x34eed4: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x34eed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x34eed8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x34eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x34eedc: 0xaca70050  sw          $a3, 0x50($a1)
    ctx->pc = 0x34eedcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BED20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BED20u, _value); } while (0);
    // 0x34eee0: 0x24c6ed28  addiu       $a2, $a2, -0x12D8
    ctx->pc = 0x34eee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962472));
    // 0x34eee4: 0x2484ed80  addiu       $a0, $a0, -0x1280
    ctx->pc = 0x34eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962560));
    // 0x34eee8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34eeec: 0xac860050  sw          $a2, 0x50($a0)
    ctx->pc = 0x34eeecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BEDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEDD0u, _value); } while (0);
    // 0x34eef0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34eef4: 0xac432cf8  sw          $v1, 0x2CF8($v0)
    ctx->pc = 0x34eef4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x482CF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CF8u, _value); } while (0);
    // 0x34eef8: 0x2508ec20  addiu       $t0, $t0, -0x13E0
    ctx->pc = 0x34eef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962208));
    // 0x34eefc: 0xad000050  sw          $zero, 0x50($t0)
    ctx->pc = 0x34eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 0));
    // 0x34ef00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34ef04: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34ef08: 0xa0402cfc  sb          $zero, 0x2CFC($v0)
    ctx->pc = 0x34ef08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CFCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482CFCu, _value); } while (0);
    // 0x34ef0c: 0xa0602cfd  sb          $zero, 0x2CFD($v1)
    ctx->pc = 0x34ef0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CFDu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482CFDu, _value); } while (0);
    // 0x34ef10: 0xad0a004c  sw          $t2, 0x4C($t0)
    ctx->pc = 0x34ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 10));
    // 0x34ef14: 0xad20004c  sw          $zero, 0x4C($t1)
    ctx->pc = 0x34ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 76), GPR_U32(ctx, 0));
    // 0x34ef18: 0xace5004c  sw          $a1, 0x4C($a3)
    ctx->pc = 0x34ef18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BECC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BECC4u, _value); } while (0);
    // 0x34ef1c: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x34ef1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BECC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BECC8u, _value); } while (0);
    // 0x34ef20: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x34ef20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BED1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BED1Cu, _value); } while (0);
    // 0x34ef24: 0xacc4004c  sw          $a0, 0x4C($a2)
    ctx->pc = 0x34ef24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BED74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BED74u, _value); } while (0);
    // 0x34ef28: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x34ef28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BED78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BED78u, _value); } while (0);
    // 0x34ef2c: 0x3e00008  jr          $ra
    ctx->pc = 0x34EF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF2Cu;
        // 0x34ef30: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EF34u;
    // 0x34ef34: 0x0  nop
    ctx->pc = 0x34ef34u;
    // NOP
    ctx->pc = 0x34ef38u;
}
