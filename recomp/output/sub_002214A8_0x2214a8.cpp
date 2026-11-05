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

// Function: sub_002214A8
// Address: 0x2214a8 - 0x221520
void sub_002214A8_0x2214a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002214A8_0x2214a8");
#endif

    switch (ctx->pc) {
        case 0x2214bcu: goto label_2214bc;
        case 0x2214e0u: goto label_2214e0;
        case 0x221500u: goto label_221500;
        default: break;
    }

    ctx->pc = 0x2214a8u;

    // 0x2214a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2214a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2214ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2214acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2214b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2214b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2214b4: 0xc0889b2  jal         func_2226C8
    ctx->pc = 0x2214B4u;
    SET_GPR_U32(ctx, 31, 0x2214BCu);
    ctx->pc = 0x2214B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214B4u;
    // 0x2214b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2226C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226C8u, 0x2214B4u, 0x2214BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214BCu;
label_2214bc:
    // 0x2214bc: 0x8e03058c  lw          $v1, 0x58C($s0)
    ctx->pc = 0x2214bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1420)));
    // 0x2214c0: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2214C0u;
    {
        const bool branch_taken_0x2214c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2214c0) {
            ctx->pc = 0x2214C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2214C0u;
            // 0x2214c4: 0xae0006a8  sw          $zero, 0x6A8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221504u;
            goto label_221504;
        }
    }
    ctx->pc = 0x2214C8u;
    // 0x2214c8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x2214c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x2214cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2214ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2214d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2214d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2214d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2214d8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2214D8u;
    {
        const bool branch_taken_0x2214d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2214DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214D8u;
        // 0x2214dc: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214d8) {
            ctx->pc = 0x2214F8u;
            goto label_2214f8;
        }
    }
    ctx->pc = 0x2214E0u;
label_2214e0:
    // 0x2214e0: 0x0  nop
    ctx->pc = 0x2214e0u;
    // NOP
    // 0x2214e4: 0x0  nop
    ctx->pc = 0x2214e4u;
    // NOP
    // 0x2214e8: 0x0  nop
    ctx->pc = 0x2214e8u;
    // NOP
    // 0x2214ec: 0x0  nop
    ctx->pc = 0x2214ecu;
    // NOP
    // 0x2214f0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2214F0u;
    {
        const bool branch_taken_0x2214f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2214F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214F0u;
        // 0x2214f4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214f0) {
            ctx->pc = 0x2214E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2214e0;
        }
    }
    ctx->pc = 0x2214F8u;
label_2214f8:
    // 0x2214f8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2214F8u;
    SET_GPR_U32(ctx, 31, 0x221500u);
    ctx->pc = 0x2214FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214F8u;
    // 0x2214fc: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2214F8u, 0x221500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221500u;
label_221500:
    // 0x221500: 0xae0006a8  sw          $zero, 0x6A8($s0)
    ctx->pc = 0x221500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 0));
label_221504:
    // 0x221504: 0xae00058c  sw          $zero, 0x58C($s0)
    ctx->pc = 0x221504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 0));
    // 0x221508: 0xae0006ac  sw          $zero, 0x6AC($s0)
    ctx->pc = 0x221508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1708), GPR_U32(ctx, 0));
    // 0x22150c: 0xae0006a4  sw          $zero, 0x6A4($s0)
    ctx->pc = 0x22150cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1700), GPR_U32(ctx, 0));
    // 0x221510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221514: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x221514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221518: 0x3e00008  jr          $ra
    ctx->pc = 0x221518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221518u;
        // 0x22151c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221520u;
}
