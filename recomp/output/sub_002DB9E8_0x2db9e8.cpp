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

// Function: sub_002DB9E8
// Address: 0x2db9e8 - 0x2dba90
void sub_002DB9E8_0x2db9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB9E8_0x2db9e8");
#endif

    switch (ctx->pc) {
        case 0x2dba48u: goto label_2dba48;
        case 0x2dba58u: goto label_2dba58;
        case 0x2dba70u: goto label_2dba70;
        default: break;
    }

    ctx->pc = 0x2db9e8u;

    // 0x2db9e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2db9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2db9ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db9f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db9f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2db9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2db9f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2db9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dba00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dba00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba04: 0xae036394  sw          $v1, 0x6394($s0)
    ctx->pc = 0x2dba04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25492), GPR_U32(ctx, 3));
    // 0x2dba08: 0x8e026398  lw          $v0, 0x6398($s0)
    ctx->pc = 0x2dba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25496)));
    // 0x2dba0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBA0Cu;
    {
        const bool branch_taken_0x2dba0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA0Cu;
        // 0x2dba10: 0xae0063a8  sw          $zero, 0x63A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 25512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba0c) {
            ctx->pc = 0x2DBA20u;
            goto label_2dba20;
        }
    }
    ctx->pc = 0x2DBA14u;
    // 0x2dba14: 0x8e02639c  lw          $v0, 0x639C($s0)
    ctx->pc = 0x2dba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25500)));
    // 0x2dba18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBA18u;
    {
        const bool branch_taken_0x2dba18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA18u;
        // 0x2dba1c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba18) {
            ctx->pc = 0x2DBA28u;
            goto label_2dba28;
        }
    }
    ctx->pc = 0x2DBA20u;
label_2dba20:
    // 0x2dba20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DBA20u;
    {
        const bool branch_taken_0x2dba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA20u;
        // 0x2dba24: 0xae0363ac  sw          $v1, 0x63AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 25516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba20) {
            ctx->pc = 0x2DBA2Cu;
            goto label_2dba2c;
        }
    }
    ctx->pc = 0x2DBA28u;
label_2dba28:
    // 0x2dba28: 0xae0263ac  sw          $v0, 0x63AC($s0)
    ctx->pc = 0x2dba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25516), GPR_U32(ctx, 2));
label_2dba2c:
    // 0x2dba2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dba30: 0x8e03639c  lw          $v1, 0x639C($s0)
    ctx->pc = 0x2dba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25500)));
    // 0x2dba34: 0xae0263c0  sw          $v0, 0x63C0($s0)
    ctx->pc = 0x2dba34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25536), GPR_U32(ctx, 2));
    // 0x2dba38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBA38u;
    {
        const bool branch_taken_0x2dba38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA38u;
        // 0x2dba3c: 0xae0063a0  sw          $zero, 0x63A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 25504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba38) {
            ctx->pc = 0x2DBA50u;
            goto label_2dba50;
        }
    }
    ctx->pc = 0x2DBA40u;
    // 0x2dba40: 0xc0b6c50  jal         func_2DB140
    ctx->pc = 0x2DBA40u;
    SET_GPR_U32(ctx, 31, 0x2DBA48u);
    ctx->pc = 0x2DBA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA40u;
    // 0x2dba44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB140u, 0x2DBA40u, 0x2DBA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA48u;
label_2dba48:
    // 0x2dba48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBA48u;
    {
        const bool branch_taken_0x2dba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dba48) {
            ctx->pc = 0x2DBA58u;
            goto label_2dba58;
        }
    }
    ctx->pc = 0x2DBA50u;
label_2dba50:
    // 0x2dba50: 0xc0b6bfc  jal         func_2DAFF0
    ctx->pc = 0x2DBA50u;
    SET_GPR_U32(ctx, 31, 0x2DBA58u);
    ctx->pc = 0x2DBA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA50u;
    // 0x2dba54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAFF0u, 0x2DBA50u, 0x2DBA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA58u;
label_2dba58:
    // 0x2dba58: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBA58u;
    {
        const bool branch_taken_0x2dba58 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2dba58) {
            ctx->pc = 0x2DBA68u;
            goto label_2dba68;
        }
    }
    ctx->pc = 0x2DBA60u;
    // 0x2dba60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBA60u;
    {
        const bool branch_taken_0x2dba60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA60u;
        // 0x2dba64: 0xae1163b4  sw          $s1, 0x63B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 25524), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba60) {
            ctx->pc = 0x2DBA74u;
            goto label_2dba74;
        }
    }
    ctx->pc = 0x2DBA68u;
label_2dba68:
    // 0x2dba68: 0xc0b715c  jal         func_2DC570
    ctx->pc = 0x2DBA68u;
    SET_GPR_U32(ctx, 31, 0x2DBA70u);
    ctx->pc = 0x2DBA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA68u;
    // 0x2dba6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC570u, 0x2DBA68u, 0x2DBA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA70u;
label_2dba70:
    // 0x2dba70: 0xae0263b4  sw          $v0, 0x63B4($s0)
    ctx->pc = 0x2dba70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25524), GPR_U32(ctx, 2));
label_2dba74:
    // 0x2dba74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dba74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dba78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dba7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dba7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dba80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dba80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dba84: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA84u;
        // 0x2dba88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBA8Cu;
    // 0x2dba8c: 0x0  nop
    ctx->pc = 0x2dba8cu;
    // NOP
    ctx->pc = 0x2dba90u;
}
