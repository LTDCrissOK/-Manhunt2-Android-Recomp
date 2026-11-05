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

// Function: sub_0012B958
// Address: 0x12b958 - 0x12ba10
void sub_0012B958_0x12b958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B958_0x12b958");
#endif

    switch (ctx->pc) {
        case 0x12b97cu: goto label_12b97c;
        case 0x12b9b0u: goto label_12b9b0;
        case 0x12b9c8u: goto label_12b9c8;
        default: break;
    }

    ctx->pc = 0x12b958u;

    // 0x12b958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b95c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b960: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12b960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12b964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b96c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12b970: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12b970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12b974: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B974u;
    SET_GPR_U32(ctx, 31, 0x12B97Cu);
    ctx->pc = 0x12B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B974u;
    // 0x12b978: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B974u, 0x12B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B97Cu;
label_12b97c:
    // 0x12b97c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12b97cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b980: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12b984: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B984u;
    {
        const bool branch_taken_0x12b984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B984u;
        // 0x12b988: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b984) {
            ctx->pc = 0x12B994u;
            goto label_12b994;
        }
    }
    ctx->pc = 0x12B98Cu;
    // 0x12b98c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12B98Cu;
    {
        const bool branch_taken_0x12b98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B98Cu;
        // 0x12b990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b98c) {
            ctx->pc = 0x12B9F4u;
            goto label_12b9f4;
        }
    }
    ctx->pc = 0x12B994u;
label_12b994:
    // 0x12b994: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b998: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12b99c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12b9a0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x12b9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9a4: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x12b9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x12b9a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12b9ac: 0x0  nop
    ctx->pc = 0x12b9acu;
    // NOP
label_12b9b0:
    // 0x12b9b0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x12b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12b9b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b9b8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B9B8u;
    {
        const bool branch_taken_0x12b9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9B8u;
        // 0x12b9bc: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9b8) {
            ctx->pc = 0x12B9E0u;
            goto label_12b9e0;
        }
    }
    ctx->pc = 0x12B9C0u;
    // 0x12b9c0: 0xc05f49e  jal         func_17D278
    ctx->pc = 0x12B9C0u;
    SET_GPR_U32(ctx, 31, 0x12B9C8u);
    ctx->pc = 0x17D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D278u, 0x12B9C0u, 0x12B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9C8u;
label_12b9c8:
    // 0x12b9c8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x12b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x12b9cc: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x12b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12b9d0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x12b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x12b9d4: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x12b9d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12b9d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12b9dc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x12b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12b9e0:
    // 0x12b9e0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12b9e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b9e4: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x12b9e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12b9e8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x12B9E8u;
    {
        const bool branch_taken_0x12b9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9E8u;
        // 0x12b9ec: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9e8) {
            ctx->pc = 0x12B9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b9b0;
        }
    }
    ctx->pc = 0x12B9F0u;
    // 0x12b9f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12b9f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b9f4:
    // 0x12b9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b9f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b9fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12b9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ba00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12ba00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12ba04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ba08: 0x3e00008  jr          $ra
    ctx->pc = 0x12BA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA08u;
        // 0x12ba0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BA10u;
}
