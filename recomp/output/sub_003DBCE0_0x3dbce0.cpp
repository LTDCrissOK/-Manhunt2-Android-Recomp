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

// Function: sub_003DBCE0
// Address: 0x3dbce0 - 0x3dbd70
void sub_003DBCE0_0x3dbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBCE0_0x3dbce0");
#endif

    switch (ctx->pc) {
        case 0x3dbd0cu: goto label_3dbd0c;
        case 0x3dbd2cu: goto label_3dbd2c;
        default: break;
    }

    ctx->pc = 0x3dbce0u;

    // 0x3dbce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dbce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dbce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dbce8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dbce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dbcec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dbcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbcf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dbcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dbcf4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3dbcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3dbcf8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3dbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dbcfc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DBCFCu;
    {
        const bool branch_taken_0x3dbcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBCFCu;
        // 0x3dbd00: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbcfc) {
            ctx->pc = 0x3DBD20u;
            goto label_3dbd20;
        }
    }
    ctx->pc = 0x3DBD04u;
    // 0x3dbd04: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DBD04u;
    SET_GPR_U32(ctx, 31, 0x3DBD0Cu);
    ctx->pc = 0x3DBD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBD04u;
    // 0x3dbd08: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DBD04u, 0x3DBD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBD0Cu;
label_3dbd0c:
    // 0x3dbd0c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3dbd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3dbd10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3dbd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3dbd14: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3dbd14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3dbd18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DBD18u;
    {
        const bool branch_taken_0x3dbd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD18u;
        // 0x3dbd1c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbd18) {
            ctx->pc = 0x3DBD3Cu;
            goto label_3dbd3c;
        }
    }
    ctx->pc = 0x3DBD20u;
label_3dbd20:
    // 0x3dbd20: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3dbd20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dbd24: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DBD24u;
    SET_GPR_U32(ctx, 31, 0x3DBD2Cu);
    ctx->pc = 0x3DBD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBD24u;
    // 0x3dbd28: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DBD24u, 0x3DBD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBD2Cu;
label_3dbd2c:
    // 0x3dbd2c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3dbd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3dbd30: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3dbd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3dbd34: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3dbd34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3dbd38: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dbd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3dbd3c:
    // 0x3dbd3c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dbd40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dbd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbd44: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3dbd44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3dbd48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dbd48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dbd4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dbd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dbd50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dbd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dbd54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dbd58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3dbd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dbd5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dbd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3dbd60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dbd60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dbd64: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD64u;
        // 0x3dbd68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBD6Cu;
    // 0x3dbd6c: 0x0  nop
    ctx->pc = 0x3dbd6cu;
    // NOP
    ctx->pc = 0x3dbd70u;
}
