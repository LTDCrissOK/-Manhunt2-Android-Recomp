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

// Function: sub_002B62F0
// Address: 0x2b62f0 - 0x2b6390
void sub_002B62F0_0x2b62f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B62F0_0x2b62f0");
#endif

    switch (ctx->pc) {
        case 0x2b6320u: goto label_2b6320;
        case 0x2b6348u: goto label_2b6348;
        case 0x2b6368u: goto label_2b6368;
        default: break;
    }

    ctx->pc = 0x2b62f0u;

    // 0x2b62f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b62f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b62f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b62f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b62f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b62fc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2b62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2b6300: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b6300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b6304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6308: 0xae02590c  sw          $v0, 0x590C($s0)
    ctx->pc = 0x2b6308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 2));
    // 0x2b630c: 0x8c622b38  lw          $v0, 0x2B38($v1)
    ctx->pc = 0x2b630cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B38u));
    // 0x2b6310: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B6310u;
    {
        const bool branch_taken_0x2b6310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6310) {
            ctx->pc = 0x2B6340u;
            goto label_2b6340;
        }
    }
    ctx->pc = 0x2B6318u;
    // 0x2b6318: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6318u;
    SET_GPR_U32(ctx, 31, 0x2B6320u);
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6318u, 0x2B6320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6320u;
label_2b6320:
    // 0x2b6320: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b6320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b6324: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b6324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b6328: 0xa040a930  sb          $zero, -0x56D0($v0)
    ctx->pc = 0x2b6328u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA930u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA930u, _value); } while (0);
    // 0x2b632c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2b632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b6330: 0xa060a928  sb          $zero, -0x56D8($v1)
    ctx->pc = 0x2b6330u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b6334: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b6334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b6338: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B6338u;
    {
        const bool branch_taken_0x2b6338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6338u;
        // 0x2b633c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6338) {
            ctx->pc = 0x2B637Cu;
            goto label_2b637c;
        }
    }
    ctx->pc = 0x2B6340u;
label_2b6340:
    // 0x2b6340: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B6340u;
    SET_GPR_U32(ctx, 31, 0x2B6348u);
    ctx->pc = 0x2B6344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6340u;
    // 0x2b6344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B6340u, 0x2B6348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6348u;
label_2b6348:
    // 0x2b6348: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2B6348u;
    {
        const bool branch_taken_0x2b6348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6348) {
            ctx->pc = 0x2B634Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6348u;
            // 0x2b634c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6380u;
            goto label_2b6380;
        }
    }
    ctx->pc = 0x2B6350u;
    // 0x2b6350: 0x8e0358f8  lw          $v1, 0x58F8($s0)
    ctx->pc = 0x2b6350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b6354: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b6354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b6358: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6358u;
    {
        const bool branch_taken_0x2b6358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b6358) {
            ctx->pc = 0x2B635Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6358u;
            // 0x2b635c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6380u;
            goto label_2b6380;
        }
    }
    ctx->pc = 0x2B6360u;
    // 0x2b6360: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6360u;
    SET_GPR_U32(ctx, 31, 0x2B6368u);
    ctx->pc = 0x2B6364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6360u;
    // 0x2b6364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6360u, 0x2B6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6368u;
label_2b6368:
    // 0x2b6368: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b6368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b636c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2b636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b6370: 0xa060a928  sb          $zero, -0x56D8($v1)
    ctx->pc = 0x2b6370u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b6374: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b6374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b6378: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2b6378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2b637c:
    // 0x2b637c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b637cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6380:
    // 0x2b6380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b6380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6384: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6384u;
        // 0x2b6388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B638Cu;
    // 0x2b638c: 0x0  nop
    ctx->pc = 0x2b638cu;
    // NOP
    ctx->pc = 0x2b6390u;
}
