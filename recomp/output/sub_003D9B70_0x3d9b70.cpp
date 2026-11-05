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

// Function: sub_003D9B70
// Address: 0x3d9b70 - 0x3d9be0
void sub_003D9B70_0x3d9b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9B70_0x3d9b70");
#endif

    switch (ctx->pc) {
        case 0x3d9bacu: goto label_3d9bac;
        default: break;
    }

    ctx->pc = 0x3d9b70u;

    // 0x3d9b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d9b74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d9b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d9b78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3d9b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3d9b7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d9b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d9b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d9b84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3d9b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3d9b88: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x3d9b88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3d9b8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3D9B8Cu;
    {
        const bool branch_taken_0x3d9b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B8Cu;
        // 0x3d9b90: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b8c) {
            ctx->pc = 0x3D9BC4u;
            goto label_3d9bc4;
        }
    }
    ctx->pc = 0x3D9B94u;
    // 0x3d9b94: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x3d9b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3d9b98: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3d9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3d9b9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d9ba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d9ba4: 0xc0f66d2  jal         func_3D9B48
    ctx->pc = 0x3D9BA4u;
    SET_GPR_U32(ctx, 31, 0x3D9BACu);
    ctx->pc = 0x3D9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9BA4u;
    // 0x3d9ba8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9B48u, 0x3D9BA4u, 0x3D9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9BACu;
label_3d9bac:
    // 0x3d9bac: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x3d9bacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3d9bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9bb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d9bb8: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x3d9bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9bbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9BBCu;
    {
        const bool branch_taken_0x3d9bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BBCu;
        // 0x3d9bc0: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bbc) {
            ctx->pc = 0x3D9BC8u;
            goto label_3d9bc8;
        }
    }
    ctx->pc = 0x3D9BC4u;
label_3d9bc4:
    // 0x3d9bc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9bc8:
    // 0x3d9bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d9bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9bcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d9bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d9bd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3d9bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9bd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3d9bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d9bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BD8u;
        // 0x3d9bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9BE0u;
}
