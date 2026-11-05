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

// Function: sub_00143288
// Address: 0x143288 - 0x1432e0
void sub_00143288_0x143288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143288_0x143288");
#endif

    switch (ctx->pc) {
        case 0x1432a4u: goto label_1432a4;
        case 0x1432c0u: goto label_1432c0;
        case 0x1432d0u: goto label_1432d0;
        default: break;
    }

    ctx->pc = 0x143288u;

    // 0x143288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14328c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14328cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x143290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143294: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x143298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14329c: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x14329Cu;
    SET_GPR_U32(ctx, 31, 0x1432A4u);
    ctx->pc = 0x1432A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14329Cu;
    // 0x1432a0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x14329Cu, 0x1432A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432A4u;
label_1432a4:
    // 0x1432a4: 0x92020b11  lbu         $v0, 0xB11($s0)
    ctx->pc = 0x1432a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2833)));
    // 0x1432a8: 0x92030b10  lbu         $v1, 0xB10($s0)
    ctx->pc = 0x1432a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2832)));
    // 0x1432ac: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1432acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1432b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1432B0u;
    {
        const bool branch_taken_0x1432b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1432b0) {
            ctx->pc = 0x1432C8u;
            goto label_1432c8;
        }
    }
    ctx->pc = 0x1432B8u;
    // 0x1432b8: 0xc050d68  jal         func_1435A0
    ctx->pc = 0x1432B8u;
    SET_GPR_U32(ctx, 31, 0x1432C0u);
    ctx->pc = 0x1432BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432B8u;
    // 0x1432bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1435A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1435A0u, 0x1432B8u, 0x1432C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432C0u;
label_1432c0:
    // 0x1432c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1432C0u;
    {
        const bool branch_taken_0x1432c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432C0u;
        // 0x1432c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432c0) {
            ctx->pc = 0x1432D4u;
            goto label_1432d4;
        }
    }
    ctx->pc = 0x1432C8u;
label_1432c8:
    // 0x1432c8: 0xc050d26  jal         func_143498
    ctx->pc = 0x1432C8u;
    SET_GPR_U32(ctx, 31, 0x1432D0u);
    ctx->pc = 0x1432CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432C8u;
    // 0x1432cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143498u, 0x1432C8u, 0x1432D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432D0u;
label_1432d0:
    // 0x1432d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1432d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1432d4:
    // 0x1432d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1432d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1432d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1432D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1432DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432D8u;
        // 0x1432dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1432D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1432E0u;
}
