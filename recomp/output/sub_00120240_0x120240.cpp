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

// Function: sub_00120240
// Address: 0x120240 - 0x1202d8
void sub_00120240_0x120240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120240_0x120240");
#endif

    switch (ctx->pc) {
        case 0x120264u: goto label_120264;
        case 0x12026cu: goto label_12026c;
        case 0x120278u: goto label_120278;
        case 0x12029cu: goto label_12029c;
        case 0x1202bcu: goto label_1202bc;
        default: break;
    }

    ctx->pc = 0x120240u;

    // 0x120240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120244: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x120244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x120248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12024c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x120250: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x120250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x120254: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120258: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x120258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12025c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x12025Cu;
    SET_GPR_U32(ctx, 31, 0x120264u);
    ctx->pc = 0x120260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12025Cu;
    // 0x120260: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x12025Cu, 0x120264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120264u;
label_120264:
    // 0x120264: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x120264u;
    SET_GPR_U32(ctx, 31, 0x12026Cu);
    ctx->pc = 0x120268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120264u;
    // 0x120268: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x120264u, 0x12026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12026Cu;
label_12026c:
    // 0x12026c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12026cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120270: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x120270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x120274: 0x0  nop
    ctx->pc = 0x120274u;
    // NOP
label_120278:
    // 0x120278: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x120278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12027c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x12027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x120280: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120280u;
    {
        const bool branch_taken_0x120280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120280u;
        // 0x120284: 0x242102b  sltu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120280) {
            ctx->pc = 0x12029Cu;
            goto label_12029c;
        }
    }
    ctx->pc = 0x120288u;
    // 0x120288: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120288u;
    {
        const bool branch_taken_0x120288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120288u;
        // 0x12028c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120288) {
            ctx->pc = 0x1202A0u;
            goto label_1202a0;
        }
    }
    ctx->pc = 0x120290u;
    // 0x120290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120294: 0xc048132  jal         func_1204C8
    ctx->pc = 0x120294u;
    SET_GPR_U32(ctx, 31, 0x12029Cu);
    ctx->pc = 0x120298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120294u;
    // 0x120298: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1204C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1204C8u, 0x120294u, 0x12029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12029Cu;
label_12029c:
    // 0x12029c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x12029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1202a0:
    // 0x1202a0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1202a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1202a4: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x1202a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1202a8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1202A8u;
    {
        const bool branch_taken_0x1202a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1202ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202A8u;
        // 0x1202ac: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1202a8) {
            ctx->pc = 0x120278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120278;
        }
    }
    ctx->pc = 0x1202B0u;
    // 0x1202b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1202b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1202b4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1202B4u;
    SET_GPR_U32(ctx, 31, 0x1202BCu);
    ctx->pc = 0x1202B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1202B4u;
    // 0x1202b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1202B4u, 0x1202BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1202BCu;
label_1202bc:
    // 0x1202bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1202bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1202c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1202c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1202c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1202c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1202c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1202c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1202cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1202CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1202D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202CCu;
        // 0x1202d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1202CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1202D4u;
    // 0x1202d4: 0x0  nop
    ctx->pc = 0x1202d4u;
    // NOP
    ctx->pc = 0x1202d8u;
}
