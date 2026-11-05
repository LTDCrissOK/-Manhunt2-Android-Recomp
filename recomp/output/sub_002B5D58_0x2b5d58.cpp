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

// Function: sub_002B5D58
// Address: 0x2b5d58 - 0x2b5df8
void sub_002B5D58_0x2b5d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5D58_0x2b5d58");
#endif

    switch (ctx->pc) {
        case 0x2b5d78u: goto label_2b5d78;
        case 0x2b5d80u: goto label_2b5d80;
        default: break;
    }

    ctx->pc = 0x2b5d58u;

    // 0x2b5d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5d60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b5d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5d6c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b5d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5d70: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B5D70u;
    SET_GPR_U32(ctx, 31, 0x2B5D78u);
    ctx->pc = 0x2B5D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D70u;
    // 0x2b5d74: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B5D70u, 0x2B5D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D78u;
label_2b5d78:
    // 0x2b5d78: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B5D78u;
    SET_GPR_U32(ctx, 31, 0x2B5D80u);
    ctx->pc = 0x2B5D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D78u;
    // 0x2b5d7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B5D78u, 0x2B5D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D80u;
label_2b5d80:
    // 0x2b5d80: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b5d84: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2b5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2b5d88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b5d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b5d8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5D8Cu;
    {
        const bool branch_taken_0x2b5d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D8Cu;
        // 0x2b5d90: 0x8c632b38  lw          $v1, 0x2B38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d8c) {
            ctx->pc = 0x2B5DB4u;
            goto label_2b5db4;
        }
    }
    ctx->pc = 0x2B5D94u;
    // 0x2b5d94: 0xae115910  sw          $s1, 0x5910($s0)
    ctx->pc = 0x2b5d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 17));
    // 0x2b5d98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b5d9c: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b5d9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b5da0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b5da4: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b5da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b5da8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5dac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B5DACu;
    {
        const bool branch_taken_0x2b5dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DACu;
        // 0x2b5db0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dac) {
            ctx->pc = 0x2B5DE4u;
            goto label_2b5de4;
        }
    }
    ctx->pc = 0x2B5DB4u;
label_2b5db4:
    // 0x2b5db4: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5DB4u;
    {
        const bool branch_taken_0x2b5db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DB4u;
        // 0x2b5db8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5db4) {
            ctx->pc = 0x2B5DC8u;
            goto label_2b5dc8;
        }
    }
    ctx->pc = 0x2B5DBCu;
    // 0x2b5dbc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2b5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2b5dc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5DC0u;
    {
        const bool branch_taken_0x2b5dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DC0u;
        // 0x2b5dc4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dc0) {
            ctx->pc = 0x2B5DE4u;
            goto label_2b5de4;
        }
    }
    ctx->pc = 0x2B5DC8u;
label_2b5dc8:
    // 0x2b5dc8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5DC8u;
    {
        const bool branch_taken_0x2b5dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DC8u;
        // 0x2b5dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dc8) {
            ctx->pc = 0x2B5DE4u;
            goto label_2b5de4;
        }
    }
    ctx->pc = 0x2B5DD0u;
    // 0x2b5dd0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b5dd4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2b5dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b5dd8: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b5dd8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b5ddc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b5ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b5de0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2b5de4:
    // 0x2b5de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5dec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5df0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DF0u;
        // 0x2b5df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5DF8u;
}
