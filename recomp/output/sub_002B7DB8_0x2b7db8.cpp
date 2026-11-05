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

// Function: sub_002B7DB8
// Address: 0x2b7db8 - 0x2b7e68
void sub_002B7DB8_0x2b7db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7DB8_0x2b7db8");
#endif

    switch (ctx->pc) {
        case 0x2b7dd8u: goto label_2b7dd8;
        case 0x2b7de0u: goto label_2b7de0;
        case 0x2b7e28u: goto label_2b7e28;
        case 0x2b7e50u: goto label_2b7e50;
        default: break;
    }

    ctx->pc = 0x2b7db8u;

    // 0x2b7db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7dc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7dc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7dcc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b7dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7dd0: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7DD0u;
    SET_GPR_U32(ctx, 31, 0x2B7DD8u);
    ctx->pc = 0x2B7DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7DD0u;
    // 0x2b7dd4: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7DD0u, 0x2B7DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7DD8u;
label_2b7dd8:
    // 0x2b7dd8: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B7DD8u;
    SET_GPR_U32(ctx, 31, 0x2B7DE0u);
    ctx->pc = 0x2B7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7DD8u;
    // 0x2b7ddc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B7DD8u, 0x2B7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7DE0u;
label_2b7de0:
    // 0x2b7de0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b7de4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2b7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2b7de8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b7de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b7dec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7DECu;
    {
        const bool branch_taken_0x2b7dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DECu;
        // 0x2b7df0: 0x8c632b38  lw          $v1, 0x2B38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7dec) {
            ctx->pc = 0x2B7E14u;
            goto label_2b7e14;
        }
    }
    ctx->pc = 0x2B7DF4u;
    // 0x2b7df4: 0xae115910  sw          $s1, 0x5910($s0)
    ctx->pc = 0x2b7df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 17));
    // 0x2b7df8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b7df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b7dfc: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b7dfcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b7e00: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b7e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b7e04: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b7e04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b7e08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7e0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7E0Cu;
    {
        const bool branch_taken_0x2b7e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E0Cu;
        // 0x2b7e10: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e0c) {
            ctx->pc = 0x2B7E50u;
            goto label_2b7e50;
        }
    }
    ctx->pc = 0x2B7E14u;
label_2b7e14:
    // 0x2b7e14: 0x14710008  bne         $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7E14u;
    {
        const bool branch_taken_0x2b7e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E14u;
        // 0x2b7e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e14) {
            ctx->pc = 0x2B7E38u;
            goto label_2b7e38;
        }
    }
    ctx->pc = 0x2B7E1Cu;
    // 0x2b7e1c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2b7e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b7e20: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B7E20u;
    SET_GPR_U32(ctx, 31, 0x2B7E28u);
    ctx->pc = 0x2B7E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E20u;
    // 0x2b7e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B7E20u, 0x2B7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E28u;
label_2b7e28:
    // 0x2b7e28: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2b7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b7e2c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2b7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b7e30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7E30u;
    {
        const bool branch_taken_0x2b7e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E30u;
        // 0x2b7e34: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e30) {
            ctx->pc = 0x2B7E50u;
            goto label_2b7e50;
        }
    }
    ctx->pc = 0x2B7E38u;
label_2b7e38:
    // 0x2b7e38: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7E38u;
    {
        const bool branch_taken_0x2b7e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E38u;
        // 0x2b7e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e38) {
            ctx->pc = 0x2B7E50u;
            goto label_2b7e50;
        }
    }
    ctx->pc = 0x2B7E40u;
    // 0x2b7e40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b7e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e48: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B7E48u;
    SET_GPR_U32(ctx, 31, 0x2B7E50u);
    ctx->pc = 0x2B7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E48u;
    // 0x2b7e4c: 0xa040a930  sb          $zero, -0x56D0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945072), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B7E48u, 0x2B7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E50u;
label_2b7e50:
    // 0x2b7e50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7e54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b7e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7e58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E5Cu;
        // 0x2b7e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7E64u;
    // 0x2b7e64: 0x0  nop
    ctx->pc = 0x2b7e64u;
    // NOP
    ctx->pc = 0x2b7e68u;
}
