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

// Function: sub_0010B548
// Address: 0x10b548 - 0x10b5c0
void sub_0010B548_0x10b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B548_0x10b548");
#endif

    switch (ctx->pc) {
        case 0x10b56cu: goto label_10b56c;
        case 0x10b598u: goto label_10b598;
        default: break;
    }

    ctx->pc = 0x10b548u;

    // 0x10b548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b54c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b55c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10b55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b560: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10b560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10b564: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B564u;
    SET_GPR_U32(ctx, 31, 0x10B56Cu);
    ctx->pc = 0x10B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B564u;
    // 0x10b568: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B564u, 0x10B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B56Cu;
label_10b56c:
    // 0x10b56c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b56cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b570: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b574: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B574u;
    {
        const bool branch_taken_0x10b574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B574u;
        // 0x10b578: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b574) {
            ctx->pc = 0x10B5A0u;
            goto label_10b5a0;
        }
    }
    ctx->pc = 0x10B57Cu;
    // 0x10b57c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b580: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b584: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10b584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b588: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B588u;
    {
        const bool branch_taken_0x10b588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B588u;
        // 0x10b58c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b588) {
            ctx->pc = 0x10B5A0u;
            goto label_10b5a0;
        }
    }
    ctx->pc = 0x10B590u;
    // 0x10b590: 0xc043fee  jal         func_10FFB8
    ctx->pc = 0x10B590u;
    SET_GPR_U32(ctx, 31, 0x10B598u);
    ctx->pc = 0x10B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B590u;
    // 0x10b594: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFB8u, 0x10B590u, 0x10B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B598u;
label_10b598:
    // 0x10b598: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B598u;
    {
        const bool branch_taken_0x10b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B598u;
        // 0x10b59c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b598) {
            ctx->pc = 0x10B5A4u;
            goto label_10b5a4;
        }
    }
    ctx->pc = 0x10B5A0u;
label_10b5a0:
    // 0x10b5a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b5a4:
    // 0x10b5a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b5a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b5a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b5ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b5acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b5b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10b5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5B4u;
        // 0x10b5b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B5BCu;
    // 0x10b5bc: 0x0  nop
    ctx->pc = 0x10b5bcu;
    // NOP
    ctx->pc = 0x10b5c0u;
}
