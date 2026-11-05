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

// Function: sub_00394E20
// Address: 0x394e20 - 0x394ec8
void sub_00394E20_0x394e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394E20_0x394e20");
#endif

    switch (ctx->pc) {
        case 0x394e54u: goto label_394e54;
        case 0x394e5cu: goto label_394e5c;
        case 0x394e78u: goto label_394e78;
        case 0x394e8cu: goto label_394e8c;
        case 0x394ea4u: goto label_394ea4;
        default: break;
    }

    ctx->pc = 0x394e20u;

    // 0x394e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x394e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x394e24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x394e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x394e28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x394e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x394e2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x394e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394e30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x394e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x394e34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x394e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394e3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x394e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394e40: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x394e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x394e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x394e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394e48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x394e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x394e4c: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x394E4Cu;
    SET_GPR_U32(ctx, 31, 0x394E54u);
    ctx->pc = 0x394E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394E4Cu;
    // 0x394e50: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x394E4Cu, 0x394E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E54u;
label_394e54:
    // 0x394e54: 0xc0e525a  jal         func_394968
    ctx->pc = 0x394E54u;
    SET_GPR_U32(ctx, 31, 0x394E5Cu);
    ctx->pc = 0x394968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394968u, 0x394E54u, 0x394E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E5Cu;
label_394e5c:
    // 0x394e5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x394e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x394e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394e64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x394e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394e68: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x394E68u;
    {
        const bool branch_taken_0x394e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x394E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E68u;
        // 0x394e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e68) {
            ctx->pc = 0x394E8Cu;
            goto label_394e8c;
        }
    }
    ctx->pc = 0x394E70u;
    // 0x394e70: 0xc0e5348  jal         func_394D20
    ctx->pc = 0x394E70u;
    SET_GPR_U32(ctx, 31, 0x394E78u);
    ctx->pc = 0x394D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394D20u, 0x394E70u, 0x394E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E78u;
label_394e78:
    // 0x394e78: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394E78u;
    {
        const bool branch_taken_0x394e78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x394E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E78u;
        // 0x394e7c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e78) {
            ctx->pc = 0x394E90u;
            goto label_394e90;
        }
    }
    ctx->pc = 0x394E80u;
    // 0x394e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394e84: 0xc0e53da  jal         func_394F68
    ctx->pc = 0x394E84u;
    SET_GPR_U32(ctx, 31, 0x394E8Cu);
    ctx->pc = 0x394E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394E84u;
    // 0x394e88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F68u, 0x394E84u, 0x394E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E8Cu;
label_394e8c:
    // 0x394e8c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x394e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_394e90:
    // 0x394e90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x394e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394e94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x394e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x394e98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x394e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394e9c: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x394E9Cu;
    SET_GPR_U32(ctx, 31, 0x394EA4u);
    ctx->pc = 0x394EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394E9Cu;
    // 0x394ea0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x394E9Cu, 0x394EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394EA4u;
label_394ea4:
    // 0x394ea4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x394ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394ea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x394ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x394eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394eb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x394eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394eb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x394eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x394eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x394EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EB8u;
        // 0x394ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394EC0u;
    // 0x394ec0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x394ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x394ec4: 0x0  nop
    ctx->pc = 0x394ec4u;
    // NOP
    ctx->pc = 0x394ec8u;
}
