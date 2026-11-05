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

// Function: sub_002DA9C8
// Address: 0x2da9c8 - 0x2daa40
void sub_002DA9C8_0x2da9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA9C8_0x2da9c8");
#endif

    switch (ctx->pc) {
        case 0x2da9e0u: goto label_2da9e0;
        case 0x2daa08u: goto label_2daa08;
        case 0x2daa1cu: goto label_2daa1c;
        default: break;
    }

    ctx->pc = 0x2da9c8u;

    // 0x2da9c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2da9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2da9cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2da9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2da9d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2da9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2da9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2da9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2da9d8: 0xc07f434  jal         func_1FD0D0
    ctx->pc = 0x2DA9D8u;
    SET_GPR_U32(ctx, 31, 0x2DA9E0u);
    ctx->pc = 0x2DA9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA9D8u;
    // 0x2da9dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD0D0u, 0x2DA9D8u, 0x2DA9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9E0u;
label_2da9e0:
    // 0x2da9e0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DA9E0u;
    {
        const bool branch_taken_0x2da9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9E0u;
        // 0x2da9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da9e0) {
            ctx->pc = 0x2DAA28u;
            goto label_2daa28;
        }
    }
    ctx->pc = 0x2DA9E8u;
    // 0x2da9e8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2da9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2da9ec: 0x2470b0e0  addiu       $s0, $v1, -0x4F20
    ctx->pc = 0x2da9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947040));
    // 0x2da9f0: 0x8e020408  lw          $v0, 0x408($s0)
    ctx->pc = 0x2da9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x57B4E8u));
    // 0x2da9f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2da9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2da9f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DA9F8u;
    {
        const bool branch_taken_0x2da9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9F8u;
        // 0x2da9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da9f8) {
            ctx->pc = 0x2DAA24u;
            goto label_2daa24;
        }
    }
    ctx->pc = 0x2DAA00u;
    // 0x2daa00: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2DAA00u;
    SET_GPR_U32(ctx, 31, 0x2DAA08u);
    ctx->pc = 0x2DAA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAA00u;
    // 0x2daa04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2DAA00u, 0x2DAA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAA08u;
label_2daa08:
    // 0x2daa08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2daa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daa0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2daa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daa10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2daa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2daa14: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x2DAA14u;
    SET_GPR_U32(ctx, 31, 0x2DAA1Cu);
    ctx->pc = 0x2DAA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAA14u;
    // 0x2daa18: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x2DAA14u, 0x2DAA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAA1Cu;
label_2daa1c:
    // 0x2daa1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAA1Cu;
    {
        const bool branch_taken_0x2daa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA1Cu;
        // 0x2daa20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa1c) {
            ctx->pc = 0x2DAA2Cu;
            goto label_2daa2c;
        }
    }
    ctx->pc = 0x2DAA24u;
label_2daa24:
    // 0x2daa24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2daa24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2daa28:
    // 0x2daa28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2daa28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2daa2c:
    // 0x2daa2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2daa2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2daa30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2daa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daa34: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA34u;
        // 0x2daa38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAA3Cu;
    // 0x2daa3c: 0x0  nop
    ctx->pc = 0x2daa3cu;
    // NOP
    ctx->pc = 0x2daa40u;
}
