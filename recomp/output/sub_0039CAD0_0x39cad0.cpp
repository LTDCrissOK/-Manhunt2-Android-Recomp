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

// Function: sub_0039CAD0
// Address: 0x39cad0 - 0x39cbb0
void sub_0039CAD0_0x39cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CAD0_0x39cad0");
#endif

    switch (ctx->pc) {
        case 0x39cb00u: goto label_39cb00;
        case 0x39cb20u: goto label_39cb20;
        case 0x39cb28u: goto label_39cb28;
        case 0x39cb3cu: goto label_39cb3c;
        case 0x39cb54u: goto label_39cb54;
        case 0x39cb60u: goto label_39cb60;
        default: break;
    }

    ctx->pc = 0x39cad0u;

    // 0x39cad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39cad4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x39cad8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x39cadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39cae0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39cae4: 0xac440c18  sw          $a0, 0xC18($v0)
    ctx->pc = 0x39cae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x400C18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400C18u, _value); } while (0);
    // 0x39cae8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39caec: 0x24710c28  addiu       $s1, $v1, 0xC28
    ctx->pc = 0x39caecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3112));
    // 0x39caf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39caf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39caf4: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x39caf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x39caf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39cafc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x39cafcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39cb00:
    // 0x39cb00: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x39cb00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x39cb04: 0x54530017  bnel        $v0, $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x39CB04u;
    {
        const bool branch_taken_0x39cb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x39cb04) {
            ctx->pc = 0x39CB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CB04u;
            // 0x39cb08: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CB64u;
            goto label_39cb64;
        }
    }
    ctx->pc = 0x39CB0Cu;
    // 0x39cb0c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x39cb0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x39cb10: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x39CB10u;
    {
        const bool branch_taken_0x39cb10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB10u;
        // 0x39cb14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cb10) {
            ctx->pc = 0x39CB4Cu;
            goto label_39cb4c;
        }
    }
    ctx->pc = 0x39CB18u;
    // 0x39cb18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39cb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb1c: 0x0  nop
    ctx->pc = 0x39cb1cu;
    // NOP
label_39cb20:
    // 0x39cb20: 0xc0e7018  jal         func_39C060
    ctx->pc = 0x39CB20u;
    SET_GPR_U32(ctx, 31, 0x39CB28u);
    ctx->pc = 0x39CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB20u;
    // 0x39cb24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C060u, 0x39CB20u, 0x39CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB28u;
label_39cb28:
    // 0x39cb28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39cb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39cb30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x39cb34: 0xc0e6fd2  jal         func_39BF48
    ctx->pc = 0x39CB34u;
    SET_GPR_U32(ctx, 31, 0x39CB3Cu);
    ctx->pc = 0x39CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB34u;
    // 0x39cb38: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BF48u, 0x39CB34u, 0x39CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB3Cu;
label_39cb3c:
    // 0x39cb3c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x39cb3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x39cb40: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x39cb40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39cb44: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x39CB44u;
    {
        const bool branch_taken_0x39cb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB44u;
        // 0x39cb48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cb44) {
            ctx->pc = 0x39CB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39cb20;
        }
    }
    ctx->pc = 0x39CB4Cu;
label_39cb4c:
    // 0x39cb4c: 0xc0e704c  jal         func_39C130
    ctx->pc = 0x39CB4Cu;
    SET_GPR_U32(ctx, 31, 0x39CB54u);
    ctx->pc = 0x39CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB4Cu;
    // 0x39cb50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C130u, 0x39CB4Cu, 0x39CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB54u;
label_39cb54:
    // 0x39cb54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb58: 0xc0e702a  jal         func_39C0A8
    ctx->pc = 0x39CB58u;
    SET_GPR_U32(ctx, 31, 0x39CB60u);
    ctx->pc = 0x39CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB58u;
    // 0x39cb5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C0A8u, 0x39CB58u, 0x39CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB60u;
label_39cb60:
    // 0x39cb60: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x39cb60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_39cb64:
    // 0x39cb64: 0x641ffe6  bgez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x39CB64u;
    {
        const bool branch_taken_0x39cb64 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x39CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB64u;
        // 0x39cb68: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cb64) {
            ctx->pc = 0x39CB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39cb00;
        }
    }
    ctx->pc = 0x39CB6Cu;
    // 0x39cb6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39cb6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cb70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39cb70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39cb74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39cb74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cb78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39cb78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39cb7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39cb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39cb80: 0x3e00008  jr          $ra
    ctx->pc = 0x39CB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB80u;
        // 0x39cb84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CB88u;
    // 0x39cb88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39cb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39cb8c: 0x0  nop
    ctx->pc = 0x39cb8cu;
    // NOP
    // 0x39cb90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39cb94: 0x0  nop
    ctx->pc = 0x39cb94u;
    // NOP
    // 0x39cb98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39cb9c: 0x0  nop
    ctx->pc = 0x39cb9cu;
    // NOP
    // 0x39cba0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39cba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39cba4: 0x0  nop
    ctx->pc = 0x39cba4u;
    // NOP
    // 0x39cba8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39cba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39cbac: 0x0  nop
    ctx->pc = 0x39cbacu;
    // NOP
    ctx->pc = 0x39cbb0u;
}
