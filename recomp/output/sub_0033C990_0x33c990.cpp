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

// Function: sub_0033C990
// Address: 0x33c990 - 0x33ca10
void sub_0033C990_0x33c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C990_0x33c990");
#endif

    switch (ctx->pc) {
        case 0x33c9c8u: goto label_33c9c8;
        case 0x33c9e8u: goto label_33c9e8;
        default: break;
    }

    ctx->pc = 0x33c990u;

    // 0x33c990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33c994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33c998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33c998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33c99c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c9a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c9a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33c9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c9a8: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C9A8u;
    {
        const bool branch_taken_0x33c9a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9A8u;
        // 0x33c9ac: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9a8) {
            ctx->pc = 0x33C9BCu;
            goto label_33c9bc;
        }
    }
    ctx->pc = 0x33C9B0u;
    // 0x33c9b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x33c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33c9b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33C9B4u;
    {
        const bool branch_taken_0x33c9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9B4u;
        // 0x33c9b8: 0x8c62032c  lw          $v0, 0x32C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9b4) {
            ctx->pc = 0x33C9C0u;
            goto label_33c9c0;
        }
    }
    ctx->pc = 0x33C9BCu;
label_33c9bc:
    // 0x33c9bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x33c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33c9c0:
    // 0x33c9c0: 0xc0c2eba  jal         func_30BAE8
    ctx->pc = 0x33C9C0u;
    SET_GPR_U32(ctx, 31, 0x33C9C8u);
    ctx->pc = 0x33C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C9C0u;
    // 0x33c9c4: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BAE8u, 0x33C9C0u, 0x33C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C9C8u;
label_33c9c8:
    // 0x33c9c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33c9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c9cc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33C9CCu;
    {
        const bool branch_taken_0x33c9cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9CCu;
        // 0x33c9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9cc) {
            ctx->pc = 0x33C9F4u;
            goto label_33c9f4;
        }
    }
    ctx->pc = 0x33C9D4u;
    // 0x33c9d4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x33c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33c9d8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x33c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x33c9dc: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x33c9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x33c9e0: 0xc0c24de  jal         func_309378
    ctx->pc = 0x33C9E0u;
    SET_GPR_U32(ctx, 31, 0x33C9E8u);
    ctx->pc = 0x33C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C9E0u;
    // 0x33c9e4: 0x452824  and         $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x33C9E0u, 0x33C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C9E8u;
label_33c9e8:
    // 0x33c9e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x33c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33c9ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x33c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33c9f0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x33c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_33c9f4:
    // 0x33c9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c9fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c9fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ca00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ca00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ca04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33ca04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ca08: 0x3e00008  jr          $ra
    ctx->pc = 0x33CA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA08u;
        // 0x33ca0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CA10u;
}
