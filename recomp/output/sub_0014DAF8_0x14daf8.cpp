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

// Function: sub_0014DAF8
// Address: 0x14daf8 - 0x14db98
void sub_0014DAF8_0x14daf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DAF8_0x14daf8");
#endif

    switch (ctx->pc) {
        case 0x14db30u: goto label_14db30;
        case 0x14db3cu: goto label_14db3c;
        case 0x14db4cu: goto label_14db4c;
        case 0x14db58u: goto label_14db58;
        case 0x14db64u: goto label_14db64;
        case 0x14db78u: goto label_14db78;
        default: break;
    }

    ctx->pc = 0x14daf8u;

    // 0x14daf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14daf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14dafc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14dafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14db00: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14db00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14db04: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x14db04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14db08: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14db0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14db0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db10: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x14db10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x14db14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14db18: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x14db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14db1c: 0x8c5004e4  lw          $s0, 0x4E4($v0)
    ctx->pc = 0x14db1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1252)));
    // 0x14db20: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14DB20u;
    {
        const bool branch_taken_0x14db20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB20u;
        // 0x14db24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db20) {
            ctx->pc = 0x14DB7Cu;
            goto label_14db7c;
        }
    }
    ctx->pc = 0x14DB28u;
    // 0x14db28: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14DB28u;
    SET_GPR_U32(ctx, 31, 0x14DB30u);
    ctx->pc = 0x14DB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB28u;
    // 0x14db2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14DB28u, 0x14DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB30u;
label_14db30:
    // 0x14db30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14db30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db34: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14DB34u;
    SET_GPR_U32(ctx, 31, 0x14DB3Cu);
    ctx->pc = 0x14DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB34u;
    // 0x14db38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14DB34u, 0x14DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB3Cu;
label_14db3c:
    // 0x14db3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14DB3Cu;
    {
        const bool branch_taken_0x14db3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB3Cu;
        // 0x14db40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db3c) {
            ctx->pc = 0x14DB6Cu;
            goto label_14db6c;
        }
    }
    ctx->pc = 0x14DB44u;
    // 0x14db44: 0xc0536b8  jal         func_14DAE0
    ctx->pc = 0x14DB44u;
    SET_GPR_U32(ctx, 31, 0x14DB4Cu);
    ctx->pc = 0x14DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB44u;
    // 0x14db48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAE0u, 0x14DB44u, 0x14DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB4Cu;
label_14db4c:
    // 0x14db4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14db4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db50: 0xc053698  jal         func_14DA60
    ctx->pc = 0x14DB50u;
    SET_GPR_U32(ctx, 31, 0x14DB58u);
    ctx->pc = 0x14DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB50u;
    // 0x14db54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA60u, 0x14DB50u, 0x14DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB58u;
label_14db58:
    // 0x14db58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14db58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db5c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14DB5Cu;
    SET_GPR_U32(ctx, 31, 0x14DB64u);
    ctx->pc = 0x14DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB5Cu;
    // 0x14db60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14DB5Cu, 0x14DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB64u;
label_14db64:
    // 0x14db64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DB64u;
    {
        const bool branch_taken_0x14db64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB64u;
        // 0x14db68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db64) {
            ctx->pc = 0x14DB7Cu;
            goto label_14db7c;
        }
    }
    ctx->pc = 0x14DB6Cu;
label_14db6c:
    // 0x14db6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14db6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db70: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14DB70u;
    SET_GPR_U32(ctx, 31, 0x14DB78u);
    ctx->pc = 0x14DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB70u;
    // 0x14db74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14DB70u, 0x14DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB78u;
label_14db78:
    // 0x14db78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14db78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14db7c:
    // 0x14db7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14db7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14db80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14db80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14db84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14db84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14db88: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14db88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14db8c: 0x3e00008  jr          $ra
    ctx->pc = 0x14DB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB8Cu;
        // 0x14db90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DB94u;
    // 0x14db94: 0x0  nop
    ctx->pc = 0x14db94u;
    // NOP
    ctx->pc = 0x14db98u;
}
