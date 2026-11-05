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

// Function: sub_00165BD0
// Address: 0x165bd0 - 0x165c40
void sub_00165BD0_0x165bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165BD0_0x165bd0");
#endif

    switch (ctx->pc) {
        case 0x165becu: goto label_165bec;
        case 0x165c08u: goto label_165c08;
        case 0x165c1cu: goto label_165c1c;
        case 0x165c2cu: goto label_165c2c;
        default: break;
    }

    ctx->pc = 0x165bd0u;

    // 0x165bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165bd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165be0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165be4: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x165BE4u;
    SET_GPR_U32(ctx, 31, 0x165BECu);
    ctx->pc = 0x165BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BE4u;
    // 0x165be8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x165BE4u, 0x165BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BECu;
label_165bec:
    // 0x165bec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x165becu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bf0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x165BF0u;
    {
        const bool branch_taken_0x165bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BF0u;
        // 0x165bf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bf0) {
            ctx->pc = 0x165C10u;
            goto label_165c10;
        }
    }
    ctx->pc = 0x165BF8u;
    // 0x165bf8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x165BF8u;
    {
        const bool branch_taken_0x165bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x165BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BF8u;
        // 0x165bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bf8) {
            ctx->pc = 0x165C14u;
            goto label_165c14;
        }
    }
    ctx->pc = 0x165C00u;
    // 0x165c00: 0xc059b1a  jal         func_166C68
    ctx->pc = 0x165C00u;
    SET_GPR_U32(ctx, 31, 0x165C08u);
    ctx->pc = 0x165C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C00u;
    // 0x165c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C68u, 0x165C00u, 0x165C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C08u;
label_165c08:
    // 0x165c08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x165C08u;
    {
        const bool branch_taken_0x165c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165c08) {
            ctx->pc = 0x165C24u;
            goto label_165c24;
        }
    }
    ctx->pc = 0x165C10u;
label_165c10:
    // 0x165c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165c14:
    // 0x165c14: 0xc059710  jal         func_165C40
    ctx->pc = 0x165C14u;
    SET_GPR_U32(ctx, 31, 0x165C1Cu);
    ctx->pc = 0x165C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C14u;
    // 0x165c18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C40u, 0x165C14u, 0x165C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C1Cu;
label_165c1c:
    // 0x165c1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165C1Cu;
    {
        const bool branch_taken_0x165c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C1Cu;
        // 0x165c20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c1c) {
            ctx->pc = 0x165C30u;
            goto label_165c30;
        }
    }
    ctx->pc = 0x165C24u;
label_165c24:
    // 0x165c24: 0xc05973e  jal         func_165CF8
    ctx->pc = 0x165C24u;
    SET_GPR_U32(ctx, 31, 0x165C2Cu);
    ctx->pc = 0x165C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C24u;
    // 0x165c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165CF8u, 0x165C24u, 0x165C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C2Cu;
label_165c2c:
    // 0x165c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165c30:
    // 0x165c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c38: 0x3e00008  jr          $ra
    ctx->pc = 0x165C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C38u;
        // 0x165c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165C40u;
}
