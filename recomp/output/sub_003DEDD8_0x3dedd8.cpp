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

// Function: sub_003DEDD8
// Address: 0x3dedd8 - 0x3dee80
void sub_003DEDD8_0x3dedd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEDD8_0x3dedd8");
#endif

    switch (ctx->pc) {
        case 0x3dee08u: goto label_3dee08;
        case 0x3dee14u: goto label_3dee14;
        case 0x3dee20u: goto label_3dee20;
        case 0x3dee2cu: goto label_3dee2c;
        case 0x3dee40u: goto label_3dee40;
        default: break;
    }

    ctx->pc = 0x3dedd8u;

    // 0x3dedd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dedd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3deddc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3deddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dede0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dede4: 0x24421830  addiu       $v0, $v0, 0x1830
    ctx->pc = 0x3dede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
    // 0x3dede8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dede8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dedec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dedecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dedf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dedf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dedf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dedf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dedf8: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3dedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x3dedfc: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x3dedfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x3dee00: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEE00u;
    SET_GPR_U32(ctx, 31, 0x3DEE08u);
    ctx->pc = 0x3DEE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE00u;
    // 0x3dee04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEE00u, 0x3DEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE08u;
label_3dee08:
    // 0x3dee08: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x3dee08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3dee0c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEE0Cu;
    SET_GPR_U32(ctx, 31, 0x3DEE14u);
    ctx->pc = 0x3DEE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE0Cu;
    // 0x3dee10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEE0Cu, 0x3DEE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE14u;
label_3dee14:
    // 0x3dee14: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3dee14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3dee18: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEE18u;
    SET_GPR_U32(ctx, 31, 0x3DEE20u);
    ctx->pc = 0x3DEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE18u;
    // 0x3dee1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEE18u, 0x3DEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE20u;
label_3dee20:
    // 0x3dee20: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3dee20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3dee24: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEE24u;
    SET_GPR_U32(ctx, 31, 0x3DEE2Cu);
    ctx->pc = 0x3DEE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE24u;
    // 0x3dee28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEE24u, 0x3DEE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE2Cu;
label_3dee2c:
    // 0x3dee2c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3dee2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3dee30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DEE30u;
    {
        const bool branch_taken_0x3dee30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE30u;
        // 0x3dee34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dee30) {
            ctx->pc = 0x3DEE44u;
            goto label_3dee44;
        }
    }
    ctx->pc = 0x3DEE38u;
    // 0x3dee38: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DEE38u;
    SET_GPR_U32(ctx, 31, 0x3DEE40u);
    ctx->pc = 0x3DEE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE38u;
    // 0x3dee3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DEE38u, 0x3DEE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE40u;
label_3dee40:
    // 0x3dee40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dee40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dee44:
    // 0x3dee44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dee44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dee48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dee48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dee4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DEE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE4Cu;
        // 0x3dee50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DEE54u;
    // 0x3dee54: 0x0  nop
    ctx->pc = 0x3dee54u;
    // NOP
    // 0x3dee58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dee58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee5c: 0x0  nop
    ctx->pc = 0x3dee5cu;
    // NOP
    // 0x3dee60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dee60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee64: 0x0  nop
    ctx->pc = 0x3dee64u;
    // NOP
    // 0x3dee68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dee68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee6c: 0x0  nop
    ctx->pc = 0x3dee6cu;
    // NOP
    // 0x3dee70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dee70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee74: 0x0  nop
    ctx->pc = 0x3dee74u;
    // NOP
    // 0x3dee78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dee78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee7c: 0x0  nop
    ctx->pc = 0x3dee7cu;
    // NOP
    ctx->pc = 0x3dee80u;
}
