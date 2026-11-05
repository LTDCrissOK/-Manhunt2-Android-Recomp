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

// Function: sub_002B5CA8
// Address: 0x2b5ca8 - 0x2b5d58
void sub_002B5CA8_0x2b5ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5CA8_0x2b5ca8");
#endif

    switch (ctx->pc) {
        case 0x2b5cc8u: goto label_2b5cc8;
        case 0x2b5cd0u: goto label_2b5cd0;
        case 0x2b5d28u: goto label_2b5d28;
        default: break;
    }

    ctx->pc = 0x2b5ca8u;

    // 0x2b5ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5cb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b5cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5cb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5cbc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b5cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5cc0: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B5CC0u;
    SET_GPR_U32(ctx, 31, 0x2B5CC8u);
    ctx->pc = 0x2B5CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5CC0u;
    // 0x2b5cc4: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B5CC0u, 0x2B5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5CC8u;
label_2b5cc8:
    // 0x2b5cc8: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B5CC8u;
    SET_GPR_U32(ctx, 31, 0x2B5CD0u);
    ctx->pc = 0x2B5CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5CC8u;
    // 0x2b5ccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B5CC8u, 0x2B5CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5CD0u;
label_2b5cd0:
    // 0x2b5cd0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b5cd4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2b5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2b5cd8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b5cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b5cdc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5CDCu;
    {
        const bool branch_taken_0x2b5cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CDCu;
        // 0x2b5ce0: 0x8c632b38  lw          $v1, 0x2B38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cdc) {
            ctx->pc = 0x2B5D04u;
            goto label_2b5d04;
        }
    }
    ctx->pc = 0x2B5CE4u;
    // 0x2b5ce4: 0xae115910  sw          $s1, 0x5910($s0)
    ctx->pc = 0x2b5ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 17));
    // 0x2b5ce8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b5cec: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b5cecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b5cf0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b5cf4: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b5cf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b5cf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5cfc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B5CFCu;
    {
        const bool branch_taken_0x2b5cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CFCu;
        // 0x2b5d00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cfc) {
            ctx->pc = 0x2B5D44u;
            goto label_2b5d44;
        }
    }
    ctx->pc = 0x2B5D04u;
label_2b5d04:
    // 0x2b5d04: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5D04u;
    {
        const bool branch_taken_0x2b5d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B5D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D04u;
        // 0x2b5d08: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d04) {
            ctx->pc = 0x2B5D18u;
            goto label_2b5d18;
        }
    }
    ctx->pc = 0x2B5D0Cu;
    // 0x2b5d0c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b5d10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B5D10u;
    {
        const bool branch_taken_0x2b5d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D10u;
        // 0x2b5d14: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d10) {
            ctx->pc = 0x2B5D44u;
            goto label_2b5d44;
        }
    }
    ctx->pc = 0x2B5D18u;
label_2b5d18:
    // 0x2b5d18: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5D18u;
    {
        const bool branch_taken_0x2b5d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D18u;
        // 0x2b5d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d18) {
            ctx->pc = 0x2B5D44u;
            goto label_2b5d44;
        }
    }
    ctx->pc = 0x2B5D20u;
    // 0x2b5d20: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B5D20u;
    SET_GPR_U32(ctx, 31, 0x2B5D28u);
    ctx->pc = 0x2B5D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D20u;
    // 0x2b5d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B5D20u, 0x2B5D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D28u;
label_2b5d28:
    // 0x2b5d28: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b5d2c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b5d30: 0xac40a320  sw          $zero, -0x5CE0($v0)
    ctx->pc = 0x2b5d30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b5d34: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x2b5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2b5d38: 0xa060a928  sb          $zero, -0x56D8($v1)
    ctx->pc = 0x2b5d38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b5d3c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2b5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2b5d40: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2b5d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2b5d44:
    // 0x2b5d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5d48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5d50: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D50u;
        // 0x2b5d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5D58u;
}
